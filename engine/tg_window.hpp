#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <string>

namespace tg
{
    class tgWindow
    {
    private:
        GLFWwindow *window;

        const int width;
        const int height;

        std::string windowName;

        void initWindow();
    public:
        tgWindow(int w, int h, std::string name);
        ~tgWindow();

        tgWindow(const tgWindow &) = delete;
        tgWindow &operator=(const tgWindow &) = delete;

        bool shouldClose() { return glfwWindowShouldClose(window); }
    };
}