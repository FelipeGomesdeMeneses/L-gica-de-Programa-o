// C++ code
//Variáveis
String nome = "";
float peso = 0;
float alt = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Digite seu nome");
  while( ! Serial.available() );
  nome = Serial.readString();
  
  Serial.println("Digite seu peso em kg");
  while( ! Serial.available() );
  peso = Serial.parseInt();
  
  Serial.println("Digite sua altura em m");
  while( ! Serial.available() );
  alt = Serial.parseFloat();
  
  float alt2 = alt * alt;
  float imc = peso / alt2;
  
  Serial.println("Nome Informado: " + nome);
  Serial.println("IMC: " + String(imc));
  
  delay(4000);
  
}