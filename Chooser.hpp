#pragma once
#include <string>


namespace bullpgia
{
   class Chooser
   {
      public:
      virtual ~Chooser(){};
      virtual std::string choose(size_t len) = 0;
   };
}
