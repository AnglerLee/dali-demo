#include "ImageCustomRenderView.h"

#include "generated/radial-mask-frag.h"
#include "generated/radial-mask-vert.h"
#include "shared/utility.h"

namespace
{
const char* const IMAGE_PATH(DEMO_IMAGE_DIR "angler/emotion_720.png");
const char* const ALPHA_IMAGE_PATH(DEMO_IMAGE_DIR "angler/emotion_alpha_1.png");
} // namespace

// The Init signal is received once (only) during the Application lifetime
void ImageCustomRenderView::Create(Application& application)
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
  windowViewControl.SetBackgroundColor(Color::BLUE);
  mWindow.Add(windowViewControl);

  CreateScene();
}

void ImageCustomRenderView::CreateScene()
{
  Shader   shader   = Shader::New(SHADER_RADIAL_MASK_VERT, SHADER_RADIAL_MASK_FRAG);
  Geometry geometry = DemoHelper::CreateTexturedQuad();

  Renderer renderer = Renderer::New(geometry, shader);

  Texture    baseTexture  = DemoHelper::LoadTexture(IMAGE_PATH);
  Texture    alphaTexture = DemoHelper::LoadTexture(ALPHA_IMAGE_PATH);
  TextureSet textureSet   = TextureSet::New();
  textureSet.SetTexture(0u, baseTexture);
  textureSet.SetTexture(1u, alphaTexture);
  renderer.SetTextures(textureSet);

  Actor actor = Actor::New();
  actor.SetProperty(Actor::Property::PARENT_ORIGIN, ParentOrigin::CENTER);
  actor.SetProperty(Actor::Property::POSITION, Vector3(0.0f, 0.0f, 0.0f));
  actor.SetProperty(Actor::Property::SIZE, Vector3(360.0f, 360.0f, 0.0f));
  actor.AddRenderer(renderer);

  actor.TouchedSignal().Connect(this, &ImageCustomRenderView::OnTouch);

  nowSloatIndex                  = 0;
  nowSlotDelta                   = 0.0f;
  const char* DELTA_UNIFORM_NAME = "uDelta";
  mDeltaPropertyIdx              = actor.RegisterProperty(DELTA_UNIFORM_NAME, nowSlotDelta);

  mWindow.Add(actor);
}

void ImageCustomRenderView::goToSlotAnimation(Actor actor, int maxSlots, int destSlotIndex)
{
  // animate the shader uniform
  mAnimation = Animation::New(1.0f);

  float calcDelta        = (Math::PI * 2.f) * ((float)destSlotIndex / (float)maxSlots);
  float destinationDelta = nowSlotDelta + calcDelta;

  KeyFrames k0 = KeyFrames::New();
  k0.Add(0.0f, nowSlotDelta);
  k0.Add(0.1f, nowSlotDelta);
  k0.Add(1.0f, destinationDelta);
  mAnimation.AnimateBetween(Property(actor, mDeltaPropertyIdx), k0, AlphaFunction::EASE_IN_OUT_SINE);

  nowSlotDelta = (Math::PI * 2.f) < destinationDelta ? (Math::PI * 2.f)-destinationDelta : destinationDelta;

  mAnimation.SetLooping(false);
  mAnimation.Play();
}

bool ImageCustomRenderView::OnTouch(Actor actor, const TouchEvent& touch)
{
  // quit the application
  if(touch.GetPointCount() > 0)
  {
    if(touch.GetState(0) == PointState::DOWN)
    {
      goToSlotAnimation(actor, 8, 5);
    }
  }
  return true;
}
