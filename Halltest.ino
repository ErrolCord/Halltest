#include "Hall_tst.h"
float rawValue = 0;
float vOut = 0;
float vsource = 0;
float magField = 0;
const float ardures = 1023.0;

void setup()
{
Serial.begin(9600);
}

void loop()
{
  rawValue = 500;
  vsource = 5.0;
  vOut = rawValue * (vsource/ardures);
  Hall_tst.test1_nodist();
  Hall_tst.test2_nofield();
  Hall_tst.test3_optimaldist();
  Hall_tst.test4_vsource6v();
  Serial.print("Lectura analógica: ");
  Serial.println(rawValue);
  Serial.print("Voltage:"); 
  Serial.println(vOut);
  Serial.print("Campo magnético: ");
  Serial.println(magField); 
  Serial.println("---------------------------------------");
  delay(1000);
  Serial.print ("Probando para github");
}
