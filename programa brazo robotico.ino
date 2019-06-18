#include <Servo.h>
#define motorMano 9 //Declaro el pin de la mano
#define motorDerecha 10//Declaro el pin del lado Derecho
#define motorIzquierda 11//Declaro el pin del lado Izquierdo
#define motorBase 12//Declaro el pin de la Base
Servo Mano; //Declaro el servomotor de la Mano
Servo Izquierda;//Declaro el servomotor lado Izquierdo
Servo Derecha;//Declaro el servomotor lado Derecho
Servo Base;//Declaro el servomotor de la Base
void setup() {
  // put your setup code here, to run once:
Mano.attach(motorMano); //Inicializamos la Mano
Mano.write(0);
delay(1000);

Izquierda.attach(motorIzquierda);//Inicializamos la lado Izquierdo
Izquierda.write(160);
delay(1000);

Derecha.attach(motorDerecha);//Inicializamos la lado Derecho
Derecha.write(90);
delay(1000);

Base.attach(motorBase);//Inicializamos la Base
Base.write(90);
delay(1000);

Mano.attach(motorMano); //Inicializamos la Mano
Mano.write(90);
delay(1000);

Base.attach(motorBase);//Inicializamos la Base
Base.write(0);
delay(1000);

Izquierda.attach(motorIzquierda);//Inicializamos la lado Izquierdo
Izquierda.write(60);
delay(1000);

Derecha.attach(motorDerecha);//Inicializamos la lado Derecho
Derecha.write(30);
delay(1000);

Base.attach(motorBase);//Inicializamos la Base
Base.write(180);
delay(1000);

}

void loop() {
  // put your main code here, to run repeatedly:

}
