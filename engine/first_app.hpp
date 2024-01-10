#pragma once

#include "tg_window.hpp"

namespace tg
{
    class firstApp
    {
    public:
        static constexpr int WIDTH = 800;
        static constexpr int HEIGHT = 600;
        static constexpr std::string NAME = "Dima_Pidoras!";

        void run();

    private:
        tgWindow tgWindow{WIDTH, HEIGHT, NAME};
    };
}