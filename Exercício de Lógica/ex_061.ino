// C++ code
//Variáveis
float medpol = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Digite uma medida em polegadas para saber ela em centimetros!");
  while( ! Serial.available() );
  medpol = Serial.parseInt();
  
  float medcm = medpol * 2.54;
  
  Serial.println("Medida em centimetros: " + String(medcm));
  
  delay(4000);
}