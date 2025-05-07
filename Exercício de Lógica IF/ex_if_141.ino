// C++ code
//
float num, num2 ;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Digite um numero");
  while( ! Serial.available());
  num = Serial.parseFloat();
  
  Serial.println("Digite outro numero");
  while( ! Serial.available());
  num2 = Serial.parseFloat();
  
  if (num>num2){
  Serial.println("O primeiro numero digitado eh maior");
  }
  else {
  Serial.println("O segundo numero digitado eh maior");
  }
  delay(5000);
}