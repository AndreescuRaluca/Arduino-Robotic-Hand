  #include <Servo.h>

  const int trigPin = 10;   
  const int echoPin = 9;  
  const int servoPin = 6;  
  int theta;
  const int pi=3.14159265359;
  const int r=8; 
  const int pragDistanta = 35; 

  Servo manaRobotica; 
  long durata;    
  int distanta;  

  void setup() {
  
    pinMode(trigPin, OUTPUT); 
    pinMode(echoPin, INPUT); 

  
    manaRobotica.attach(servoPin); 

    manaRobotica.write(0); 
    delay(3750);
    
    Serial.begin(9600);
    Serial.println("Sistem Mana Robotica gata de actiune!");
  }

  void loop() {
    
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    
    
    durata = pulseIn(echoPin, HIGH);
    distanta = durata * 0.034 / 2; 

    Serial.print("Distanta: ");
    Serial.print(distanta);
    Serial.println(" cm");
    
    if (distanta > 0 && distanta <= pragDistanta) {
      Serial.println("--- Mana detectata! Execut Bate Palma! ---");

      theta=(distanta*360)/(2*pi*r);
      Serial.println(theta);
      manaRobotica.write(theta);
      
      delay(2500); 
  
      manaRobotica.write(0); 
      delay(1500); 
    } else {
      
      manaRobotica.write(0);
      delay(2000); 
    }
  }
