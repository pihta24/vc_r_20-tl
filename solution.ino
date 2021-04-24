//Объявление макросов для пинов управления светофорами
#define TRAFFIC_LIGHT_1_RED 3
#define TRAFFIC_LIGHT_1_YELLOW 4
#define TRAFFIC_LIGHT_1_GREEN 5
#define TRAFFIC_LIGHT_2_RED 9
#define TRAFFIC_LIGHT_2_YELLOW 8
#define TRAFFIC_LIGHT_2_GREEN 7
#define TRAFFIC_LIGHT_3_RED 11
#define TRAFFIC_LIGHT_3_YELLOW 10
#define TRAFFIC_LIGHT_3_GREEN 13


void setup()
{
  //Установка режима работы пинов контроллера на выход
  pinMode(TRAFFIC_LIGHT_1_RED, OUTPUT);
  pinMode(TRAFFIC_LIGHT_1_YELLOW, OUTPUT);
  pinMode(TRAFFIC_LIGHT_1_GREEN, OUTPUT);
  pinMode(TRAFFIC_LIGHT_2_RED, OUTPUT);
  pinMode(TRAFFIC_LIGHT_2_YELLOW, OUTPUT);
  pinMode(TRAFFIC_LIGHT_2_GREEN, OUTPUT);
  pinMode(TRAFFIC_LIGHT_3_RED, OUTPUT);
  pinMode(TRAFFIC_LIGHT_3_YELLOW, OUTPUT);
  pinMode(TRAFFIC_LIGHT_3_GREEN, OUTPUT);
}

void loop()
{
  //Первый шаг
  digitalWrite(TRAFFIC_LIGHT_1_RED, HIGH);
  digitalWrite(TRAFFIC_LIGHT_2_RED, HIGH);
  digitalWrite(TRAFFIC_LIGHT_3_GREEN, HIGH);
  delay(3000);
  //Выключение первого шага
  digitalWrite(TRAFFIC_LIGHT_1_RED, LOW);
  digitalWrite(TRAFFIC_LIGHT_2_RED, LOW);
  digitalWrite(TRAFFIC_LIGHT_3_GREEN, LOW);
  
  //Второй шаг
  digitalWrite(TRAFFIC_LIGHT_1_YELLOW, HIGH);
  digitalWrite(TRAFFIC_LIGHT_2_YELLOW, HIGH);
  digitalWrite(TRAFFIC_LIGHT_3_YELLOW, HIGH);
  delay(3000);
  //Выключение второго шага
  digitalWrite(TRAFFIC_LIGHT_1_YELLOW, LOW);
  digitalWrite(TRAFFIC_LIGHT_2_YELLOW, LOW);
  digitalWrite(TRAFFIC_LIGHT_3_YELLOW, LOW);
  
  //Третий шаг
  digitalWrite(TRAFFIC_LIGHT_1_GREEN, HIGH);
  digitalWrite(TRAFFIC_LIGHT_2_GREEN, HIGH);
  digitalWrite(TRAFFIC_LIGHT_3_RED, HIGH);
  delay(3000);
  //Выключение третьего шага
  digitalWrite(TRAFFIC_LIGHT_1_GREEN, LOW);
  digitalWrite(TRAFFIC_LIGHT_2_GREEN, LOW);
  digitalWrite(TRAFFIC_LIGHT_3_RED, LOW);
}
