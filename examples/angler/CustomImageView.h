#ifndef CUSTOM_IMAGE_VIEW_H
#define CUSTOM_IMAGE_VIEW_H

#include <dali-toolkit/dali-toolkit.h>

using namespace Dali;
using namespace Dali::Toolkit;


class CustomImageView : public ConnectionTracker
{
public:
  CustomImageView(Application& application)
  : mApplication(application)
  {
    // Connect to the Application's Init signal
    mApplication.InitSignal().Connect(this, &CustomImageView::Create);
  }

  ~CustomImageView()
  {
    // Nothing to do here;
  }

  // The Init signal is received once (only) during the Application lifetime
  void Create(Application& application);
  void CreateScene();

private:
  Application&    mApplication;
  Property::Index mDeltaPropertyIdx;
  Texture         mOutputTexture;
  Window          mWindow;
};

#endif