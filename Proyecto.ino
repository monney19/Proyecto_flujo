
int PinSensor = 36 ;
float caudal = 0;

void setup() 
{  
  Serial.begin(9600); 
  pinMode(PinSensor, INPUT); 
} 

void loop ()    
{
  //Leemos adc
  caudal = analogRead(PinSensor);
   //Enviamos por el puerto serial
  Serial.print("Caudal: "); 
  Serial.print(0.0073*caudal); 
  Serial.println(" l/min"); 
  delay(250);
  
}
