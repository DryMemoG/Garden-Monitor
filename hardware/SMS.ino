//Soil Mosture Sensor
const int sensorPin = A0;
 
void setup() {
   Serial.begin(9600);
}
 
void loop() 
{
   int humedad = analogRead(sensorPin);
   float nhumedad = (((humedad -1023)*-1)/7);
   Serial.print("La Humedad es de: ");
   Serial.println(nhumedad);
   
   delay(500);
}