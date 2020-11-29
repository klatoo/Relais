// Relais.h
// 
// last edit 28.Dec.2016 /klatoo  - created

#ifndef RELAIS_H
#define RELAIS_H

#include <Arduino.h>


class Relais
{
private:
	int _port;
	bool _fState;

public:
	Relais() { _port = -1; };

	void setup(int port);
	void On();
	void Off();
};

#endif

