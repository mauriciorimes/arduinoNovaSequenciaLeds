int led[] = {3, 5 , 6, 9, 10};

void setup() {
  for (int i = 0; i < 5; i++) {
    pinMode(led[i], OUTPUT);
  }  
}

void loop() {
  for (int i = 0; i < 5 ; i++) {
    liga(i);
  }
  for (int i = 4 ; i >= 0; i--) {
    desliga(i);
  }
}

void liga(int qual_led) {
  for (int i = 0; i < 256; i++) {
    analogWrite(led[qual_led], i);
    delay(10);
  }
}

void desliga(int qual_led) {
  for (int i = 255 ; i >=0 ; i--) {
    analogWrite(led[qual_led], i);
    delay(10);
  }
  delay(1700);
}
