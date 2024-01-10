#include "tg_window.hpp"

namespace tg
{
    tgWindow::tgWindow(int w, int h, std::string name) : width{w}, height{h}, windowName{name}
    {
        initWindow();
    }

    tgWindow::~tgWindow()
    {
        glfwDestroyWindow(window);
        glfwTerminate();
    }

    void tgWindow::initWindow()
    {
        glfwInit();
        glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
        glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

        window = glfwCreateWindow(width, height, windowName.c_str(), nullptr, nullptr);
    }
}