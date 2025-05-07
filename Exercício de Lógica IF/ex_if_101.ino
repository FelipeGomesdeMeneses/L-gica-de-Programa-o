// C++ code
//
float preco, percentual;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Digite o valor do produto");
  while( ! Serial.available () );
  preco = Serial.parseFloat();
  
  Serial.println("Digite o percentual ");
  while( ! Serial.available () );
  percentual = Serial.parseFloat();
  
  float precodevenda = preco + (preco / 100 * percentual);
  Serial.println("Valor de venda do produto: " + String (precodevenda));
  
  if (percentual<0.5){
    Serial.println("O produto sera vendido com uma margem muito pequena de lucro");
  }
  else {
  
  }
  delay(5000);
}