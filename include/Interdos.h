#pragma once
#include <iostream>
enum class InterError {
	NotInitialized = -1,
	Success = 0,
	WSAInitFail
};
class Interdos {
Interdos() = delete;

public: static bool Init();
public: static InterError getInitError();
public: static bool isInitialited();
//private: static bool inited;
//	   // НАХУЙ ТАМ STATIC???
//private: static InterError lastError;
};

