//Soil Mosture Sensor
const int sensorPin = A0;
void setup() {
   Serial.begin(9600);
}
void loop() 
{
   int humedad = analogRead(sensorPin);
   Serial.print("La Humedad es de: "); 
   Serial.println(humedad); //Solo imprime un valor entre 350 a 1023 Donde 1023 es totalmente seco y 350 es sumergido en agua pura
   delay(500);
}