/*
  Hall_tst.cpp - Libreria para pruebas con el sensor Hall.
  Creado por Andr�s M, Errol Cordero, November 11, 2022.
  Released into the public domain.
*/

#include "Arduino.h"
#include "Hall_tst.h"


Hall_tst::Hall_tst(int pinHall)
{
  pinMode(pinHall, INPUT);
  _pinHall = pinHall;
}

void Hall_tst::test1_nodist(){
  if (vsource == 5.0){
  magField = ((vOut-a)/b);
    if (vOut >= vmax){
      Serial.println("El imán está totalmente pegado en polo positivo");
    }
    if(vOut <= vmin){
      Serial.println("El imán está totalmente pegado en polo negativo");
    }
  }
}


void Hall_tst::test2_nofield(){
  if (vsource == 5.0){
    magField = ((vOut-a)/b);
    if (vOut == vmid){
      Serial.println("No se detecta campo magnético");
    }
  }
}


void Hall_tst::test3_optimaldist(){
  if (vsource == 5.0){
  	magField = ((vOut-a)/b);
    if ((vOut >= vmid) && (vOut <= vmax)){
      Serial.println("Se detetecta campo magnético positivo óptimo");
    }
    if ((vOut >= vmin) && (vOut <= vmid)){
      Serial.println("Se detetecta campo magnético negativo óptimo");
    }

  }
}

void Hall_tst::test4_vsource6v(){
  Serial.println("Precaución, Vcc= 6V, riesgo existente de daño de la placa");
  Serial.print("Lectura analógica: ");
  Serial.println(rawValue);
  Serial.print("Voltage:"); 
  Serial.println(vOut);
  Serial.print("Campo mag: ");
  Serial.println(magField1); 
  Serial.println("---------------------------------------");
}





