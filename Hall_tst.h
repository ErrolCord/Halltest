/*
  Hall_tst.h - Libreria para pruebas con el sensor Hall.
  Creado por Andr�s M, Errol Cordero, November 11, 2022.
  Released into the public domain.
*/
#ifndef Hall_tst   //Evita errores de compilaci�n en caso de que se llame dos veces la biblioteca
#define Hall_tst

#include "Arduino.h"

class Hall_h
{
  public:
   Hall_tst(int pinHall);
    void test1_nodist();
    void test2_nofield();
    void test3_optimaldist();
    void test4();  
  private:
    const int _pinHall = A0;
    float rawValue = 0;
	float vOut = 0;
	float vsource = 0;
	float magField = 0;
	float magField1 = 0;
	const int negField = -1;
	const float ardures = 1023.0;
	const float a = 2.5958;
	const float b = 0.0014;
	const float c = 4.2322;
	const float d = 0.0017;
	const int msec = 500;
	const int vmax = 4.25;
	const int vmin = 0.9;
	const int vmid = 2.55;
	const int baudrate = 9600;

};

#endif
