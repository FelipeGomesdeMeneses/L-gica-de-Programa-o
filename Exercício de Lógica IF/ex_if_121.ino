// C++ code
//
int num;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Digite um numero");
  while( ! Serial.available());
  num = Serial.parseInt();
  
  if(num  %2 == 0){
  Serial.println("O numero digitado eh par");
  }
  else {
  Serial.println("O numero digitado eh impar");
  }
}