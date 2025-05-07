// C++ code
//
String nome = "";
String cargo = "";
float salario = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Digite o nome do funcionario ");
  while ( ! Serial.available () );
  nome = Serial.readString();
  
  Serial.println("Digite o cargo do funcionario");
  while ( ! Serial.available() );
  cargo = Serial.readString();
  
  Serial.println("Digite o salario do funcionario");
  while( ! Serial.available() );
  salario = Serial.parseFloat();
  
  if(salario < 1000){
   float salarionovo = (salario * 0.1) + salario ;
    
    
    Serial.println("Nome do funcionario : " + nome);
    Serial.println("Cargo do funcionario : " + cargo);
    Serial.println("Salario do funcionario : " + String(salarionovo) + "R$");
  }
  else { 
   Serial.println("Nome do funcionario : " + nome);
   Serial.println("Cargo do funcionario :" + cargo);
   Serial.println("Salario do funcionario : " + String(salario) + " R$");
  }
    delay(5000);
}