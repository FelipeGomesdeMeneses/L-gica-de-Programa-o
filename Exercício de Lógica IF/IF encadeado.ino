  /*
  Estruturas condicionais encadeadas (3 ou mais resposta)

  */

  /* infantil - 5 até 8 anos
     cadete   - 8 até 12 anos
     juvenil  - 12 até 15 anos
     junior   - 15 até 18 anos
     adulto   - acima de 18
     */
  int idade;

  void setup()
  {
    Serial.begin(9600);

    Serial.println("Academia do Davi");
    Serial.println();

    Serial.println("Digite a idade do seu sobrinho");
    while( ! Serial.available());
    idade = Serial.parseInt();

    if (idade >= 5 && idade <= 8){//idade entre 5 e 8
     Serial.println("Cadastrado na categoria infantil");
    } 
    else if (idade>=8 && idade <= 12) {// de 8 até 11
     Serial.println("Cadastrado na categoria cadete");
    }
    else if (idade>=12 && idade <= 15){//de 12 até 14
     Serial.println("Cadastrado na categorial juvenil");
    } 
    else if (idade>=15 && idade<=18){//de 15 até 17
     Serial.println("Cadastrado na categoria junior");
    }
    else if ( idade >= 18) {// de 18 pra cima
     Serial.println("Cadastrado na categoria adulto");
    }
    else {//idades abaixo de 5 anos, ou seja, de 4 pra baixo
     Serial.println("Nao pode participar de esportes na academia do Davi"); 
    }
  }

  void loop()
  {
  delay(5000); 
  }