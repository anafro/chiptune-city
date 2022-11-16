#pragma once

#include <iostream>

namespace ChiptuneCity
{
    /**
     * @brief Oscillator is needed for creating sounds
     * using user-defined functions.
     * 
     * @tparam T the type of memory blocks.
     */
    template<typename T>
    class Oscillator
    {
        public:
        Oscillator()
        {
            //
        }

        void sayHello()
        {
            std::cout << "Hello, world from Oscillator!" << std::endl;
        }
        
        // no private members
    };
}