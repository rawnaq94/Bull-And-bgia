#pragma once
#include <string>
using std::string;

namespace bullpgia
{
    class Guesser
    {
         protected:
           string str;
           uint len;
         
         public:
        virtual string guess() = 0;
        virtual void startAgain(uint len){};
        virtual void learn(string str){};
    };
}
