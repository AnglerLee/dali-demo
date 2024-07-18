#ifndef IMAGE_POST_RENDER_TASK_H
#define IMAGE_POST_RENDER_TASK_H

#include <dali-toolkit/dali-toolkit.h>

using namespace Dali;
using namespace Dali::Toolkit;


class ImagePostRenderTask : public ConnectionTracker
{
public:
  ImagePostRenderTask(Application& application)
  : mApplication(application)
  {
    // Connect to the Application's Init signal
    mApplication.InitSignal().Connect(this, &ImagePostRenderTask::Create);
  }

  ~ImagePostRenderTask()
  {
    // Nothing to do here;
  }

  // The Init signal is received once (only) during the Application lifetime
  void Create(Application& application);
  void CreateRenderTask();
  void CreateScene();

private:
  Application&    mApplication;
  Property::Index mDeltaPropertyIdx;
  Texture         mOutputTexture;
  Window          mWindow;
};

#endif