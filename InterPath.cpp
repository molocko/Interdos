#include <iostream>
#include "InterPath.h"

//InterPath::InterPath(const char* address) : path(address) { std::cout << 1; }
InterPath::InterPath(std::string address): path(address) { std::cout << 2; }

std::string InterPath::toString() {
	return path;
}