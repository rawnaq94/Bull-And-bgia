#pragma once
#include "calculate.hpp"
#include <string>
#include "Guesser.hpp"
using std::string;

namespace bullpgia
{
    class SmartGuesser:public bullpgia::Guesser
    {
        public:

        void learn(string str)override;
        void startAgain(uint len)override;
        string guess() override;   
    }; 
}
