#include "InterSock.h"

InterSock::InterSock(std::string address): path(address) {}
InterSock::InterSock(InterPath address): path(address.toString()) {}

InterFlags& InterSock::getInterFlags() {
	return flags;
}
void InterSock::setInterFlags(InterFlags flags) {
	this->flags = flags;
}