// C++ code
//Variáveis
String nome = "";
String cargo = "";
float salario = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  
   Serial.println("Digite seu nome");
  while( ! Serial.available() );
  nome = Serial.readString();
  
   Serial.println("Digite seu cargo");
  while( ! Serial.available() );
  cargo = Serial.readString();
  
  Serial.println("Digite seu salario");
  while( ! Serial.available() );
  salario = Serial.parseInt();
  
  float salarioacrescido = salario + 0.1*salario;
  
  Serial.println("Nome Informado: " + nome);
  Serial.println("Cargo Informado: " + cargo);
  Serial.println("Salario acrescido: " + String(salarioacrescido));
  
  delay(4000);

}