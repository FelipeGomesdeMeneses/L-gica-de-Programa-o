//C++ code
//Variáveis
int idade = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Digite sua idade ");
  while( ! Serial.available());
  idade = Serial.parseInt(); 
  
  if (idade>= 18) { // se retornar verdadeiro - losango sim
    Serial.println("Maior de idade");
  } else {//falso - losango não
    Serial.println("Menor de idade");
  }
  
  delay(2000);
}