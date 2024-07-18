#include <dali-toolkit/dali-toolkit.h>
#include "ImagePostRenderTask.h"
#include "ImageCustomRenderView.h"
#include "CustomImageView.h"

int main( int argc, char **argv )
{
  Application application = Application::New( &argc, &argv );
  CustomImageView myApp( application );
  //ImagePostRenderTask myApp( application );
  //ImageCustomRenderView myApp( application );
  application.MainLoop();
  return 0;
}