#pragma once
#include <iostream>
using std::string;

namespace bullpgia
{
    class Guesser
    {
         protected:
         uint length;
         
         public:
         virtual void startNewGame(uint Length){}
         virtual string guess()=0;
         virtual void learn(int reply){}
    };
}; 
