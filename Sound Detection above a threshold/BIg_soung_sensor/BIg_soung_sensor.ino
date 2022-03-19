int Analog_Pin = A0; 
int Digital_Pin = 3; 
  
void setup ()
{
  pinMode(Analog_Pin, INPUT);
  pinMode(Digital_Pin, INPUT);
       
  Serial.begin (9600); 
}
  
void loop ()
{
  float Analog;
  int Digital;
    
 
  Analog = analogRead (Analog_Pin);
  Digital = digitalRead (Digital_Pin);
    
 
  Serial.print("Analog voltage :"); 
  Serial.print(Analog );  
  Serial.print("V, ");
  Serial.print("Limit :");
  
  Serial.println(Digital);
  Serial.println("----------------------------------------------------------------");
  delay (300);
}
