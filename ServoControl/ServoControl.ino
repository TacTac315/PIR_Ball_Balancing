/**
*@brief This program permits to receive a [3x1] array from Simulink and write the values to 3 servos
*@see https://github.com/leomariga/Simulink-Arduino-Serial
**/
#include <Servo.h>
#define SIMULINK_DELAY 200 // Same delay as the Zero order hold in Simulink
Servo servo1;  // Define servo objects
Servo servo2;
Servo servo3;
// Create a union to easily convert float to byte
typedef union {
  int number;
  uint8_t bytes[4];
} INTUNION_t;

// Create the variable you want to send
INTUNION_t S1;
INTUNION_t S2;
INTUNION_t S3;

void setup() {
  // initialize serial, use the same boudrate in the Simulink Config block
  Serial.begin(115200);
  servo1.attach(3);  // Attach servo objects to pins
  servo2.attach(4);
  servo3.attach(5);
}
void loop() {
  S1.number = getInt();
  S2.number = getInt();
  S3.number = getInt();
  servo1.write(S1.number);
  servo2.write(S2.number);
  servo3.write(S3.number);
  delay(SIMULINK_DELAY);
}


int getInt(){
  int cont = 0;
  INTUNION_t i;
  while (cont < 4 ){
    i.bytes[cont] = Serial.read() ;
    cont = cont +1;
  }
  return i.number;
}