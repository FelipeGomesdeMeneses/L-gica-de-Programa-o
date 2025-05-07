// C++ code
//
int num;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Digite um numero inteiro");
  while( ! Serial.available());
  num = Serial.parseInt();
  
  if (num > 0){
  Serial.println("O numero digitado eh postivo");
  }
  else {
  Serial.println("O numero digitado eh negativo");
  }
  delay(5000);
}