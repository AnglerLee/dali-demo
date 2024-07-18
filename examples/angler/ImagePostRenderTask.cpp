#include <dali-toolkit/devel-api/image-loader/texture-manager.h>
#include <dali-toolkit/devel-api/visuals/image-visual-properties-devel.h>

#include "ImagePostRenderTask.h"
#include "generated/image-view-url-frag.h"
//#include "shared/utility.h"

namespace
{
const char* const IMAGE_PATH(DEMO_IMAGE_DIR "angler/emotion_720.png");
const char* const ALPHA_IMAGE_PATH(DEMO_IMAGE_DIR "angler/emotion_alpha_1.png");
float imageSize = 512.f;
} // namespace


// The Init signal is received once (only) during the Application lifetime
void ImagePostRenderTask::Create(Application& application)
{
  // Get a handle to the window
  mWindow = application.GetWindow();
  mWindow.SetPosition(Dali::Window::WindowPosition(50, 50));
  mWindow.SetSize(Dali::Window::WindowSize(1280, 720));

  // Create a default view
  Dali::Toolkit::Control windowViewControl = Toolkit::Control::New();
  windowViewControl.SetProperty(Dali::Actor::Property::ANCHOR_POINT, Dali::AnchorPoint::CENTER);
  windowViewControl.SetProperty(Dali::Actor::Property::PARENT_ORIGIN, Dali::ParentOrigin::CENTER);
  windowViewControl.SetResizePolicy(Dali::ResizePolicy::FILL_TO_PARENT, Dali::Dimension::ALL_DIMENSIONS);
  windowViewControl.SetBackgroundColor(Color::RED);
  mWindow.Add(windowViewControl);

  CreateRenderTask();
  CreateScene();
}
void ImagePostRenderTask::CreateRenderTask()
{
  auto rootActor = mApplication.GetWindow().GetRootLayer();

  auto cameraActor = CameraActor::New(Vector2(imageSize, imageSize));
  cameraActor.SetProperty(Actor::Property::PARENT_ORIGIN, ParentOrigin::CENTER);
  cameraActor.SetInvertYAxis(true);
  rootActor.Add(cameraActor);

  Property::Map customShader;
  customShader[Toolkit::Visual::Shader::Property::FRAGMENT_SHADER] = Dali::Shader::GetFragmentShaderPrefix() + SHADER_IMAGE_VIEW_URL_FRAG.data();

  Property::Map propertyMap;
  propertyMap.Insert(Toolkit::Visual::Property::SHADER, customShader);
  propertyMap.Insert(Visual::Property::TYPE, Visual::IMAGE);
  propertyMap.Insert(ImageVisual::Property::URL, IMAGE_PATH);
  propertyMap.Insert(Dali::Toolkit::ImageVisual::Property::ALPHA_MASK_URL, ALPHA_IMAGE_PATH);
  propertyMap.Insert(Dali::Toolkit::ImageVisual::Property::ALPHA_MASK_DELTA, 1.0f);
  //propertyMap.Insert(Dali::Toolkit::ImageVisual::Property::CROP_TO_MASK, false);
  propertyMap.Insert(Dali::Toolkit::DevelImageVisual::Property::MASKING_TYPE, Dali::Toolkit::DevelImageVisual::MaskingType::MASKING_ON_RENDERING);
  
  
  Toolkit::ImageView imageView = Toolkit::ImageView::New();
  imageView.SetProperty(Toolkit::ImageView::Property::IMAGE, propertyMap);
  imageView.SetProperty(Actor::Property::SIZE, Vector2(imageSize, imageSize));
  imageView.SetProperty(Actor::Property::PARENT_ORIGIN, ParentOrigin::CENTER);
  
  const char* DELTA_UNIFORM_NAME = "uDelta";
  mDeltaPropertyIdx              = imageView.RegisterProperty(DELTA_UNIFORM_NAME, 0.f);

  rootActor.Add(imageView);

  RenderTaskList taskList = mApplication.GetWindow().GetRenderTaskList();

  // perform a horizontal blur targeting the internal buffer
  auto renderTask = taskList.CreateTask();
  renderTask.SetRefreshRate(RenderTask::REFRESH_ALWAYS);
  renderTask.SetSourceActor(imageView);
  renderTask.SetExclusive(true);
  renderTask.SetInputEnabled(false);
  renderTask.SetClearColor(Vector4(1., 0., 0., 1.));
  renderTask.SetClearEnabled(true);
  renderTask.SetCameraActor(cameraActor);

  mOutputTexture   = Texture::New(TextureType::TEXTURE_2D,
                                Pixel::RGB888,
                                unsigned(imageSize),
                                unsigned(imageSize));
  auto framebuffer = FrameBuffer::New(imageSize, imageSize, FrameBuffer::Attachment::NONE);
  framebuffer.AttachColorTexture(mOutputTexture);

  renderTask.SetFrameBuffer(framebuffer);

  {
    // animate the shader uniform
    Animation mAnimation = Animation::New(10.f);

    imageView.SetProperty(mDeltaPropertyIdx, 0.f);
    mAnimation.AnimateTo(Property(imageView, mDeltaPropertyIdx), Math::PI * 2.f);
    mAnimation.SetLooping(true);
    mAnimation.Play();
  }
}

void ImagePostRenderTask::CreateScene()
{
  auto url = Dali::Toolkit::TextureManager::AddTexture(mOutputTexture);
 
  Toolkit::ImageView mImageView = Toolkit::ImageView::New(url);
  
  mImageView.SetProperty(Actor::Property::PARENT_ORIGIN, ParentOrigin::CENTER);
  mImageView.SetProperty(Actor::Property::ANCHOR_POINT, AnchorPoint::CENTER);
  mWindow.Add(mImageView);
}


