#include <iostream>
#include <cstdlib>
#include <stdexcept>

#include "engine/first_app.hpp"

int main()
{
    tg::firstApp app{};

    try{
        app.run();
    } catch (const std::exception &e){
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    std::cout << "pizdec" << std::endl;
    return EXIT_SUCCESS;
}