// C++ code
//Variáveis
float medcm = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Digite uma medida em centimetros para saber ela em polegadas!");
  while( ! Serial.available() );
  medcm = Serial.parseInt();
  
  float medpol = medcm / 2.54;
  
  Serial.println("Medida em polegadas: " + String(medpol));
  
  delay(4000);
}