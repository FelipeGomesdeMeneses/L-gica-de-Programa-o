// C++ code
//
float salario;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Digite seu salario");
  while( ! Serial.available());
  salario = Serial.parseFloat();
  
  if (salario<500){
  float salarionovo = (salario * 0.3) + salario;
    
    Serial.println("Seu salario apos o reajuste : " + String (salarionovo) + " R$");
  }
  else {
   Serial.println("Seu salario nao sofreu reajuste");
  }
  
  delay(5000);
}