// Relais.cpp
// 
// last edit 28.Dec.2016 /klatoo  - created

#include "Relais.h"

void Relais::setup(int port)
{
  _port = port;
  pinMode(_port,OUTPUT);
  Off();
}

void Relais::On()
{
  digitalWrite(_port,LOW);
  _fState = true;
}

void Relais::Off()
{
  digitalWrite(_port,HIGH);
  _fState = false;
}

