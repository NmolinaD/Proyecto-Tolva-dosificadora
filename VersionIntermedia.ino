#include <Servo.h>
  Servo Serv;

  int pinIR=3;
  int pinServo=4;
  int val=0;
  int verde=6;
  int rojo=5;


  void setup(){
    Serv.attach(pinServo);
    pinMode(verde,OUTPUT);
    pinMode(rojo,OUTPUT);
  }

  void loop(){
    val=digitalRead(pinIR);
  
    if (val ==0){
      delay(3000);
      Serv.write(0);
      delay(1000);
      Serv.write(180);
      digitalWrite(verde,HIGH);
      digitalWrite(rojo,LOW);
      do{

      }while(1);
    }
  }