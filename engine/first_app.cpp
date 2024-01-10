#include "first_app.hpp"

namespace tg
{
    void firstApp::run(){
        while(!tgWindow.shouldClose()){
            glfwPollEvents();
        }
    }
}