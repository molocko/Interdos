#include <winsock2.h>
#include "Interdos.h"

static bool inited = false;
	// НАХУЙ ТАМ STATIC???
static InterError lastError = InterError::NotInitialized;

bool Interdos::Init() {
	// 1 - Success, 0 - Fail
	WSAData wsad;
	if (WSAStartup(MAKEWORD(0, 2), &wsad) != 0) {
		lastError = InterError::WSAInitFail;
		inited = false;
		return 0;
	}

	lastError = InterError::Success;
	inited = true;
	return 1;

	
	
}

InterError Interdos::getInitError() {
	return lastError;
}

bool Interdos::isInitialited() {
	return inited;
}