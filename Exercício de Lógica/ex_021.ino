//C++ code 
//Variáveis
long adn = 0;  //adn Ano De Nascimento
int anoatual = 0;

void setup ()
{
  Serial.begin(9600);
}

void loop()
{
  
  Serial.println("Digite seu ano de nascimento");
  while( ! Serial.available() );
  adn = Serial.parseInt();
  
  Serial.println("Digite o ano atual");
  while( ! Serial.available() );
  anoatual = Serial.parseInt();
  
  long idadeano = anoatual - adn;
  long idadesemana = idadeano * 52;
    
    Serial.println("Sua idade: " + String (idadeano));
    Serial.println("Sua idade em semanas: " + String (idadesemana));
    
  delay(4000);
  
}