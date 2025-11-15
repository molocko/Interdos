#include <winsock2.h>
#include <ws2tcpip.h>
#include <fstream>
#include "fmt/core.h"
#include "Interdos.h"
#include "InterPath.h"
#include "InterSock.h"
using fmt::print;
int main() {
	InterPath ip = InterPath("sosal");
	InterSock is = InterSock(ip);
	is.getInterFlags().protocol;
	InterFlags f;

	/*SOCKET client = INVALID_SOCKET;
	WSAData wsad;
	if (WSAStartup(MAKEWORD(2, 2), &wsad) != 0) {
		print("WSAStartup Failed!");
	}
	struct addrinfo aif;
	ZeroMemory(&aif,sizeof(aif));
	aif.ai_family = AF_INET;
	aif.ai_socktype = SOCK_STREAM;
	aif.ai_protocol = IPPROTO_TCP;
	aif.ai_flags = AI_PASSIVE;

	struct addrinfo* aif2 = nullptr;
	SOCKET s = INVALID_SOCKET;
	if (getaddrinfo(NULL, "1488", &aif, &aif2) != 0) {
		print("{}",getaddrinfo(NULL, "1488", &aif, &aif2));
	}

	s = socket(AF_INET, SOCK_STREAM,IPPROTO_TCP);
	bind(s, aif2->ai_addr, (int)aif2->ai_addrlen);
	
	listen(s, 10);

	client = accept(s,nullptr,nullptr);
	char buf[128]{};
	for (int i{}; i < sizeof(buf); i++) {
		char temp;
		recv(client, &temp, 1, 0);
		if (temp == '\n') { break; }
		else if (temp < 32 or temp > 126) continue;
		buf[i] = temp;
		print("{:d} ",temp);
	}
	std::ofstream of{"qwe.txt"};
	of << buf;
	of.flush();
	of.close();


	WSACleanup();*/
}
