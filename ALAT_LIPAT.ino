#include <Servo.h>

Servo myservo;  
Servo myservo2;  
Servo myservo3;  
Servo myservo4;  


int angle =90;   
int angleStep =5;


#define RIGHT  2  
int pos = 0;

void setup() {
  Serial.begin(9600);         
  myservo.attach(10);//pin servo
 
  myservo.write(0); //perintah awal
  pinMode(RIGHT,INPUT_PULLUP);
}

void loop() {
     Serial.println(digitalRead(RIGHT));
  if(digitalRead(RIGHT) == LOW){
    Serial.println(digitalRead(RIGHT));

    //SERVO 1
    for(pos = 0; pos<100; pos += 5){
      myservo.write(pos);
      delay(30);
    }
    for(pos = 100; pos>0; pos -= 5){ 
      myservo.write(pos);
      delay(30);
    }
    //Setvo 2
    
    //servo 3
    
     
  }



  
}
