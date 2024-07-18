#include <dali-toolkit/devel-api/image-loader/texture-manager.h>
#include <dali-toolkit/devel-api/visuals/image-visual-properties-devel.h>

#include "CustomImageView.h"
#include "generated/image-view-url-frag.h"
//#include "shared/utility.h"

namespace
{
const char* const IMAGE_PATH(DEMO_IMAGE_DIR "angler/emotion_720.png");
const char* const ALPHA_IMAGE_PATH(DEMO_IMAGE_DIR "angler/emotion_alpha_1.png");
float imageSize = 512.f;
} // namespace


// The Init signal is received once (only) during the Application lifetime
void CustomImageView::Create(Application& application)
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

  CreateScene();
}
void CustomImageView::CreateScene()
{
  
  Property::Map propertyMap;
  propertyMap.Insert(Visual::Property::TYPE, Visual::IMAGE);
  propertyMap.Insert(ImageVisual::Property::URL, IMAGE_PATH);
  propertyMap.Insert(Dali::Toolkit::ImageVisual::Property::ALPHA_MASK_URL, ALPHA_IMAGE_PATH);
  propertyMap.Insert(Dali::Toolkit::ImageVisual::Property::ALPHA_MASK_DELTA, 3.0f);
  propertyMap.Insert(Dali::Toolkit::ImageVisual::Property::CROP_TO_MASK, true);
  propertyMap.Insert(Dali::Toolkit::DevelImageVisual::Property::MASKING_TYPE, Dali::Toolkit::DevelImageVisual::MaskingType::MASKING_ON_RENDERING);
  
  
  Toolkit::ImageView imageView = Toolkit::ImageView::New();
  imageView.SetProperty(Toolkit::ImageView::Property::IMAGE, propertyMap);
  imageView.SetProperty(Actor::Property::SIZE, Vector2(imageSize, imageSize));
  imageView.SetProperty(Actor::Property::PARENT_ORIGIN, ParentOrigin::CENTER);
    
  mWindow.Add(imageView);
}



