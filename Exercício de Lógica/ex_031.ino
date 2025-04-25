// C++ code
//Variáveis
int num = 0;

void setup()
{
 Serial.begin(9600);
}

void loop()
{
 Serial.println("Escolha um numero para saber o dobro dele");
  while(! Serial.available() );
  num = Serial.parseInt();
  
  int numx2 = num * 2;
  
  Serial.println("Dobro do numero escolhido: " + String(numx2));
  
}




