#ifndef IMAGE_CUSTOM_RENDER_VIEW_H
#define IMAGE_CUSTOM_RENDER_VIEW_H

#include <dali-toolkit/dali-toolkit.h>

using namespace Dali;
using namespace Dali::Toolkit;

class ImageCustomRenderView : public ConnectionTracker
{
public:
  ImageCustomRenderView(Application& application)
  : mApplication(application)
  {
    // Connect to the Application's Init signal
    mApplication.InitSignal().Connect(this, &ImageCustomRenderView::Create);
  }

  ~ImageCustomRenderView()
  {
    // Nothing to do here;
  }

  // The Init signal is received once (only) during the Application lifetime
  void Create(Application& application);
  void CreateScene();
  bool OnTouch(Actor actor, const TouchEvent& touch);
  void goToSlotAnimation(Actor actor, int maxSlots, int destSlotIndex);

private:
  Application&    mApplication;
  Window          mWindow;
  Animation       mAnimation;
  Property::Index mDeltaPropertyIdx;

  int   nowSloatIndex;
  float nowSlotDelta;
};

#endif