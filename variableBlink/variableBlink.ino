
int period = 300;
int changeSize = 100;
int directn = 1;

void setup() {
  
  
  pinMode(13, OUTPUT);
}


void loop() {
  digitalWrite(13, HIGH);   
  delay(period);         
  digitalWrite(13, LOW);    
  delay(period);         
  
  period = period - (changeSize * directn); //alter the period of the flash by adding changeSize (or subtracting when directn is -ve) 
 
  if (period < 60 || period> 300) {
    directn = -directn; // flip direction at large and small values
    }
  changeSize = (period/15); //make alterations to period dependent on period of flash - alter the period less at higher flash rates
  
}
