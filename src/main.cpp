#include <iostream>
#include "SDLOpenGL.h"
#include <ngl/NGLInit.h>

void initialiseGL();
void renderGL();

int main(int argc, char *argv[])
{
  SDLOpenGL window("test",0,0,1024,720);
  window.makeCurrent();
  initialiseGL();
  while(true)
  {
    renderGL();
    window.swapWindow();
    SDL_Delay(10);
  }


}

void initialiseGL()
{
  ngl::NGLInit::instance();
  glClearColor(0.5,0.6,0.8,1.0);
}

void renderGL()
{
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}
