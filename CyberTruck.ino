const int LMotor_pin1 = 9; // Pin 9 is named as Left Motor Pin 1
const int LMotor_pin2 = 10; // Pin 10 is named as Left Motor Pin 2
const int RMotor_pin1 = 11; // Pin 11 is named as Right Motor Pin 1
const int RMotor_pin2 = 12; // Pin 12 is named as Right Motor Pin 2
const int RED1 = 1; // Pin 1 is named as Red Light 1
const int RED2 = 2; //Pin 2 is named as Red Light 2
const int GRN1 = 3; //Pin 3 is named as Green Light 3
const int GRN2 = 4; // Pin 4 is named as Green Light 4

void setup()
{
  pinMode(LMotor_pin1, OUTPUT); 
  pinMode(LMotor_pin2, OUTPUT);
  pinMode(RMotor_pin1, OUTPUT);
  pinMode(RMotor_pin2, OUTPUT);
  pinMode(RED1,OUTPUT);
  pinMode(RED2,OUTPUT);
  pinMode(GRN1,OUTPUT);
  pinMode(GRN2,OUTPUT);

}

void loop()
{
    digitalWrite(RED1, HIGH);
    digitalWrite(RED2, HIGH);
    digitalWrite(GRN1, HIGH);
    digitalWrite(GRN2, HIGH);
    digitalWrite(LMotor_pin1, HIGH);  
    digitalWrite(LMotor_pin2, HIGH);
 
    delay(1000);

    digitalWrite(RED1, LOW);
    digitalWrite(RED2, LOW);
    digitalWrite(GRN1, LOW);
    digitalWrite(GRN2, LOW);

    delay(1000);
    
    digitalWrite(RED1, HIGH);
    digitalWrite(GRN1, HIGH);
    digitalWrite(RMotor_pin1, HIGH); 
    digitalWrite(RMotor_pin2, LOW); 
     
    delay(1000);
    
    digitalWrite(RED1, HIGH);
    digitalWrite(RED2, HIGH);
    digitalWrite(GRN1, HIGH);
    digitalWrite(GRN2, HIGH);
    digitalWrite(LMotor_pin1, HIGH); 
    digitalWrite(LMotor_pin2, HIGH); 
    digitalWrite(RMotor_pin1, HIGH); 
    digitalWrite(RMotor_pin2, HIGH); 
    
    delay(1000);
}
