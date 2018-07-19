int Red1 = 2;
int Yellow1 = 3;
int Green1 = 4;

int Red2 = 5;
int Yellow2 = 6;
int Green2 = 7;

int Road_light = 8;
const int MAX = 90;
const int inputPin = A1;

void setup() {

  Serial.begin(9600);
  pinMode (Red1, OUTPUT);
  pinMode (Yellow1, OUTPUT);
  pinMode (Green1, OUTPUT);

  pinMode (Red2, OUTPUT);
  pinMode (Yellow2, OUTPUT);
  pinMode (Green2, OUTPUT);
  pinMode (Road_light, OUTPUT);  
}

void loop() {
 
  int reading = analogRead(inputPin);

  Serial.println(reading);
  if (reading > MAX ) {

    digitalWrite(Road_light, LOW);

  }
  else {
    digitalWrite(Road_light, HIGH);
  }
  
  digitalWrite(Red1, HIGH);
  digitalWrite(Green2, HIGH);
  delay(10000);
  digitalWrite(Red1, LOW);
  digitalWrite(Green2, LOW);

  digitalWrite(Green1, HIGH);
  digitalWrite(Yellow2, HIGH);
  delay(1000);
  digitalWrite(Yellow2, LOW);
  digitalWrite(Red2, HIGH);

  delay(10000);
  digitalWrite(Green1, LOW);
  digitalWrite(Yellow1, HIGH);

  delay(1000);
  digitalWrite(Yellow1, LOW);
  digitalWrite(Red2, LOW);
  
}