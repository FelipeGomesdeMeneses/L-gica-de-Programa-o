// C++ code
//
int led1 = 8;
int led2 = 9;
int led3 = 10;
int contador = 1;

void setup()
{
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop()
{
  do{
    
    Serial.println("Digite qual led voce deseja acender ou desligar");
    Serial.println("1) Ligar Led Verde  ");
    Serial.println("2) Desligar Led Verde"); 
    Serial.println("3) Ligar Led Amarelo");
    Serial.println("4) Desligar Led Amarelo");
    Serial.println("5) Ligar Led Vermelho");
    Serial.println("6) Desligar Led Vermelho");
    Serial.println("7) Ligar Todos os Leds");
    Serial.println("8) Desligar Todos os Leds");
    Serial.println("0) Sair");
    Serial.println();
    while(!Serial.available());
    int ledDesejado = Serial.parseInt();
    
    switch (ledDesejado) {
      case 1: digitalWrite(led1, HIGH); 
      break;
      case 2: digitalWrite(led1, LOW); 
      break;
      case 3: digitalWrite(led2, HIGH); 
      break;
      case 4: digitalWrite(led2, LOW); 
      break;
      case 5: digitalWrite(led3, HIGH); 
      break;
      case 6: digitalWrite(led3, LOW); 
      break;
      case 7:
        digitalWrite(led1 , HIGH);
        digitalWrite(led2 , HIGH);
        digitalWrite(led3 , HIGH);
        break;
      case 8:
        digitalWrite(led1 , LOW);
        digitalWrite(led2 , LOW);
        digitalWrite(led3 , LOW);
        break;
      case 0:
        contador = 0;
        break;
    }

    delay(1000);
    
  } while(contador != 0);
}