#pragma once
#include <iostream>
#include "InterPath.h"
enum class InterSockType {
	CLIENT,
	SERVER
};
enum class InterProtocol {
	TCP,
	UDP
};
// 2 СПОСОБА РЕАЛИЗАЦИИ
//is.getInterFlags();
//InterFlags f;
struct InterFlags {
	InterSockType type;
	InterProtocol protocol;
};
// ДОБАВИТЬ ЛОКАЛХОСТ
class InterSock {

	InterSock() = delete;
	public: InterSock(std::string address);
	public: InterSock(InterPath address);

		  // type - обнуление значений, нужно для переиспользования одной переменной
		  // convert - конвертация типа с сохранением всех возможных данных
	public: InterSock swapType(InterSock sock);
	public: InterSock swapConvert(InterSock sock);
	
	//public: InterFlags flags() {}
	//public: void flags(struct InterFlags) { std::cout << "PIZDA"; }*/





public: InterFlags& getInterFlags();

public: void setInterFlags(InterFlags flags);


		  // МБ СТОИТ InterPath ЮЗАТЬ ТУТ
	private: const std::string path;
		   // ПЕРЕСМОТРЕТЬ ЧЕ ВООБЩЕ ВО ФЛАГАХ НАДО
	private: InterFlags flags;
};