boolean img[210][10] = {
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
,{1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
,{0, 0, 0, 0, 1, 1, 0, 0, 1, 1}
,{0, 0, 0, 0, 1, 1, 0, 0, 1, 1}
,{0, 0, 0, 0, 1, 1, 0, 0, 1, 1}
,{0, 0, 0, 0, 1, 1, 0, 0, 1, 1}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
,{1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
,{0, 0, 0, 0, 1, 1, 0, 0, 1, 1}
,{0, 0, 0, 0, 1, 1, 0, 0, 1, 1}
,{0, 0, 0, 0, 1, 1, 0, 0, 1, 1}
,{0, 0, 1, 1, 1, 1, 0, 0, 1, 1}
,{1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
,{1, 1, 1, 0, 0, 0, 1, 1, 1, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
,{1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
,{1, 1, 0, 0, 1, 1, 0, 0, 1, 1}
,{1, 1, 0, 0, 1, 1, 0, 0, 1, 1}
,{1, 1, 0, 0, 1, 1, 0, 0, 1, 1}
,{1, 1, 0, 0, 1, 1, 0, 0, 1, 1}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
,{1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{1, 0, 0, 0, 0, 0, 0, 0, 0, 1}
,{1, 1, 0, 0, 0, 0, 0, 0, 1, 1}
,{1, 1, 1, 1, 0, 0, 1, 1, 1, 1}
,{0, 0, 1, 1, 1, 1, 1, 1, 1, 0}
,{0, 0, 0, 1, 1, 1, 1, 0, 0, 0}
,{0, 1, 1, 1, 1, 1, 1, 1, 1, 0}
,{1, 1, 1, 1, 0, 0, 1, 1, 1, 1}
,{1, 1, 0, 0, 0, 0, 0, 0, 1, 1}
,{1, 0, 0, 0, 0, 0, 0, 0, 0, 1}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 1, 1, 1, 1, 0, 0, 0}
,{0, 1, 1, 1, 1, 1, 1, 1, 1, 0}
,{1, 1, 1, 0, 0, 0, 0, 1, 1, 0}
,{1, 1, 0, 0, 0, 0, 0, 0, 1, 1}
,{1, 1, 0, 0, 0, 0, 0, 0, 1, 1}
,{1, 1, 0, 0, 0, 0, 0, 0, 1, 1}
,{1, 1, 0, 0, 0, 0, 0, 0, 1, 1}
,{0, 1, 1, 0, 0, 0, 0, 1, 1, 1}
,{0, 1, 1, 1, 1, 1, 1, 1, 1, 0}
,{0, 0, 0, 1, 1, 1, 1, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 1, 1, 1, 0, 0, 0, 0}
,{0, 1, 1, 1, 1, 1, 1, 1, 0, 0}
,{0, 1, 1, 1, 1, 1, 1, 1, 0, 0}
,{1, 1, 1, 1, 1, 1, 1, 1, 1, 0}
,{1, 1, 0, 0, 0, 0, 0, 1, 1, 0}
,{1, 1, 0, 0, 0, 0, 0, 1, 1, 0}
,{1, 1, 0, 0, 0, 0, 0, 1, 1, 0}
,{1, 1, 0, 0, 0, 0, 0, 1, 1, 0}
,{1, 1, 1, 1, 1, 1, 1, 1, 1, 0}
,{0, 1, 1, 1, 1, 1, 1, 1, 0, 0}
,{0, 1, 1, 1, 1, 1, 1, 1, 0, 0}
,{0, 0, 0, 1, 1, 1, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 1, 1, 0, 0, 0}
,{1, 1, 0, 0, 1, 1, 1, 1, 0, 0}
,{1, 1, 0, 0, 1, 1, 1, 1, 0, 0}
,{1, 1, 0, 1, 1, 1, 1, 1, 1, 0}
,{1, 1, 0, 1, 1, 0, 0, 1, 1, 0}
,{1, 1, 0, 1, 1, 0, 0, 1, 1, 0}
,{1, 1, 0, 1, 1, 0, 0, 1, 1, 0}
,{1, 1, 1, 1, 1, 0, 0, 1, 1, 0}
,{1, 1, 1, 1, 1, 0, 0, 1, 1, 0}
,{1, 1, 1, 1, 1, 0, 0, 1, 1, 0}
,{0, 0, 0, 0, 1, 0, 0, 1, 1, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 1, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}

};

#define NUMBER_OF_LEDS 10
#define REED 2
#define POT A5

// usando portas digitais e analogicas para os leds
// razao: ficam do mesmo lado do chip ATMEGA328

uint8_t LEDS[] = {9, 10, 11, 12, 13, A0, A1, A2, A3, A4};

boolean last_reed = LOW;

unsigned long time = 0;
unsigned long clock = 0;
unsigned long time2 = 0;
unsigned long clock2 = 0;
unsigned long milisec = 0;

int pos = 0;
float velo = 50000.0;

void setup(){

  // todos os leds sao output

  for (int i = 0; i < NUMBER_OF_LEDS; i++){

    pinMode(LEDS[i],OUTPUT);

  }

  // reed switch como input
  // fica HIGH quando o ima chega perto

  pinMode(REED,INPUT);

  // serial usado apenas para debug no arduino

  Serial.begin(9600);

}

void loop() {
  
  // pega valor do reed e do trimpot

  int reed_val = digitalRead(REED);
  int pot = analogRead(POT);

  // gap serve para rotacionar o desenho
  // porcentagem do trimpot * largura em pixels

  int gap = int(pot / 1023.0 * 200.0);

  // se valor do reed for diferente do anterior...

  if(reed_val != last_reed){

    // e se valor for LOW, eh porque o ima acabou de sair da zona magnetica
    // ou seja, giro completo, reiniciar desenho e calcular velocidade

    if(reed_val == LOW){

      // calcula diferenca de tempo e reseta clock

      time = micros() - clock;
      clock = micros();

      // velocidade: tempo / largura em pixels

      velo = (float)time / 200;
      pos = 0;

    }

    last_reed = reed_val;

  }

  // verificar se ja eh pra mostrar outra coluna de pixels

  if(micros() - clock2 > velo){
    
    clock2 = micros();
    
    // define posicao

    pos = (int)((float)(clock2 - clock) / velo * 1.0);
    int newpos = (gap + pos) % 200;

    if(newpos > 0 && newpos < 200){

      // envia para os leds

      for (int i = 0; i < NUMBER_OF_LEDS; i++){

        digitalWrite(LEDS[i], img[newpos + 10][i]);

      }

    }

  }

  delayMicroseconds(5);
}
