#include "DummyGuessers.hpp"
#include <stdlib.h>

std::string RandomGuesser::guess() {
	std::string r="";
	for (uint i=0; i<this->length; ++i) {
		char c = '0' + (rand()%10);
		r += c;
	}
	return r;
}
void ConstantGuesser::learn(string str)
{

}
void ConstantGuesser::startAgain(uint len)
{

}
void RandomGuesser::learn(string str)
{

}
void RandomGuesser::startAgain(uint len) 
{

}
