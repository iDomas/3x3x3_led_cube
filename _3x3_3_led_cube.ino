int led[] = {2, 3, 4, 5, 6, 7, 8, 9, 10};
int transistor[] = {11, 12, 13};


void setup() {
  Serial.begin(9600);

  pinMode(led[0], OUTPUT);
  pinMode(led[1], OUTPUT);
  pinMode(led[2], OUTPUT);
  pinMode(led[3], OUTPUT);
  pinMode(led[4], OUTPUT);
  pinMode(led[5], OUTPUT);
  pinMode(led[6], OUTPUT);
  pinMode(led[7], OUTPUT);
  pinMode(led[8], OUTPUT);

  pinMode(transistor[0], OUTPUT);
  pinMode(transistor[1], OUTPUT);
  pinMode(transistor[2], OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

 
  fromDownToTop(); 
  fromDownToTop();
  fromDownToTop();
  fromDownToTop();
  fromDownToTop();
  fromLeftToRight();
  fromLeftToRight();
  fromLeftToRight();
  fromLeftToRight();
  fromLeftToRight();
  fromCornerToCorner();
  fromCornerToCorner();
  fromCornerToCorner();
  fromCornerToCorner();
  fromCornerToCorner();
  circle();
  circle();
  circle();
  circle();
  circle();
  cube();
  cube();
  cube();
  cube();
  cube();
  plus();
  plus();
  plus();
  plus();
  plus();

//    digitalWrite(transistor[0], HIGH); 
//    digitalWrite(transistor[1], HIGH); 
//    digitalWrite(transistor[2], HIGH); 
//    digitalWrite(led[0], HIGH);
  
}



void fromDownToTop() {
  for (int i = 0; i < 4; i++) {
    digitalWrite(transistor[i], HIGH); 
      digitalWrite(led[0], HIGH);
      digitalWrite(led[1], HIGH);
      digitalWrite(led[2], HIGH);
      digitalWrite(led[3], HIGH);
      digitalWrite(led[4], HIGH);
      digitalWrite(led[5], HIGH);
      digitalWrite(led[6], HIGH);
      digitalWrite(led[7], HIGH);
      digitalWrite(led[8], HIGH);
      delay(200);
      digitalWrite(transistor[i], LOW);
  }
}

void fromLeftToRight() {
  
    digitalWrite(transistor[0], HIGH); 
    digitalWrite(transistor[1], HIGH); 
    digitalWrite(transistor[2], HIGH); 
      digitalWrite(led[0], LOW);
      digitalWrite(led[1], LOW);
      digitalWrite(led[2], LOW);
      digitalWrite(led[3], LOW);
      digitalWrite(led[4], LOW);
      digitalWrite(led[5], LOW);
      digitalWrite(led[6], HIGH);
      digitalWrite(led[7], HIGH);
      digitalWrite(led[8], HIGH);
      delay(200);
      digitalWrite(led[0], LOW);
      digitalWrite(led[1], LOW);
      digitalWrite(led[2], LOW);
      digitalWrite(led[3], HIGH);
      digitalWrite(led[4], HIGH);
      digitalWrite(led[5], HIGH);
      digitalWrite(led[6], LOW);
      digitalWrite(led[7], LOW);
      digitalWrite(led[8], LOW);
      delay(200);
      digitalWrite(led[0], HIGH);
      digitalWrite(led[1], HIGH);
      digitalWrite(led[2], HIGH);
      digitalWrite(led[3], LOW);
      digitalWrite(led[4], LOW);
      digitalWrite(led[5], LOW);
      digitalWrite(led[6], LOW);
      digitalWrite(led[7], LOW);
      digitalWrite(led[8], LOW);
      delay(200);
}

void fromCornerToCorner() {
    digitalWrite(transistor[0], LOW); 
    digitalWrite(transistor[1], LOW); 
    digitalWrite(transistor[2], HIGH); 
    digitalWrite(led[0], HIGH);
    digitalWrite(led[1], LOW);
    digitalWrite(led[2], LOW);
    digitalWrite(led[3], LOW);
    digitalWrite(led[4], LOW);
    digitalWrite(led[5], LOW);
    digitalWrite(led[6], LOW);
    digitalWrite(led[7], LOW);
    digitalWrite(led[8], LOW);
    delay(200);
    digitalWrite(transistor[0], LOW); 
    digitalWrite(transistor[1], HIGH); 
    digitalWrite(transistor[2], HIGH); 
    digitalWrite(led[0], HIGH);
    digitalWrite(led[1], HIGH);
    digitalWrite(led[2], LOW);
    digitalWrite(led[3], HIGH);
    digitalWrite(led[4], HIGH);
    digitalWrite(led[5], LOW);
    digitalWrite(led[6], LOW);
    digitalWrite(led[7], LOW);
    digitalWrite(led[8], LOW);
    delay(200);
    digitalWrite(transistor[0], HIGH); 
    digitalWrite(transistor[1], HIGH); 
    digitalWrite(transistor[2], HIGH); 
    digitalWrite(led[0], HIGH);
    digitalWrite(led[1], HIGH);
    digitalWrite(led[2], HIGH);
    digitalWrite(led[3], HIGH);
    digitalWrite(led[4], HIGH);
    digitalWrite(led[5], HIGH);
    digitalWrite(led[6], HIGH);
    digitalWrite(led[7], HIGH);
    digitalWrite(led[8], HIGH);
    delay(200);
}

void circle() {
    digitalWrite(transistor[0], HIGH); 
    digitalWrite(transistor[1], HIGH); 
    digitalWrite(transistor[2], HIGH); 
    digitalWrite(led[0], HIGH);
    digitalWrite(led[1], LOW);
    digitalWrite(led[2], LOW);
    digitalWrite(led[3], LOW);
    digitalWrite(led[4], LOW);
    digitalWrite(led[5], LOW);
    digitalWrite(led[6], LOW);
    digitalWrite(led[7], LOW);
    digitalWrite(led[8], LOW);
    delay(200);
    digitalWrite(led[0], LOW);
    digitalWrite(led[1], HIGH);
    digitalWrite(led[2], LOW);
    digitalWrite(led[3], LOW);
    digitalWrite(led[4], LOW);
    digitalWrite(led[5], LOW);
    digitalWrite(led[6], LOW);
    digitalWrite(led[7], LOW);
    digitalWrite(led[8], LOW);
    delay(200);
    digitalWrite(led[0], LOW);
    digitalWrite(led[1], LOW);
    digitalWrite(led[2], HIGH);
    digitalWrite(led[3], LOW);
    digitalWrite(led[4], LOW);
    digitalWrite(led[5], LOW);
    digitalWrite(led[6], LOW);
    digitalWrite(led[7], LOW);
    digitalWrite(led[8], LOW);
    delay(200);
    digitalWrite(led[0], LOW);
    digitalWrite(led[1], LOW);
    digitalWrite(led[2], LOW);
    digitalWrite(led[3], LOW);
    digitalWrite(led[4], LOW);
    digitalWrite(led[5], HIGH);
    digitalWrite(led[6], LOW);
    digitalWrite(led[7], LOW);
    digitalWrite(led[8], LOW);
    delay(200);
    digitalWrite(led[0], LOW);
    digitalWrite(led[1], LOW);
    digitalWrite(led[2], LOW);
    digitalWrite(led[3], LOW);
    digitalWrite(led[4], LOW);
    digitalWrite(led[5], LOW);
    digitalWrite(led[6], LOW);
    digitalWrite(led[7], LOW);
    digitalWrite(led[8], HIGH);
    delay(200);
    digitalWrite(led[0], LOW);
    digitalWrite(led[1], LOW);
    digitalWrite(led[2], LOW);
    digitalWrite(led[3], LOW);
    digitalWrite(led[4], LOW);
    digitalWrite(led[5], LOW);
    digitalWrite(led[6], LOW);
    digitalWrite(led[7], HIGH);
    digitalWrite(led[8], LOW);
    delay(200);
    digitalWrite(led[0], LOW);
    digitalWrite(led[1], LOW);
    digitalWrite(led[2], LOW);
    digitalWrite(led[3], LOW);
    digitalWrite(led[4], LOW);
    digitalWrite(led[5], LOW);
    digitalWrite(led[6], HIGH);
    digitalWrite(led[7], LOW);
    digitalWrite(led[8], LOW);
    delay(200);
    digitalWrite(led[0], LOW);
    digitalWrite(led[1], LOW);
    digitalWrite(led[2], LOW);
    digitalWrite(led[3], HIGH);
    digitalWrite(led[4], LOW);
    digitalWrite(led[5], LOW);
    digitalWrite(led[6], LOW);
    digitalWrite(led[7], LOW);
    digitalWrite(led[8], LOW);
    delay(200);
}

void cube() {
    digitalWrite(transistor[0], HIGH); 
    digitalWrite(transistor[1], HIGH); 
    digitalWrite(transistor[2], HIGH); 
    digitalWrite(led[0], HIGH);
    digitalWrite(led[1], HIGH);
    digitalWrite(led[2], HIGH);
    digitalWrite(led[3], HIGH);
    digitalWrite(led[4], LOW);
    digitalWrite(led[5], HIGH);
    digitalWrite(led[6], HIGH);
    digitalWrite(led[7], HIGH);
    digitalWrite(led[8], HIGH);
    delay(200);
    digitalWrite(transistor[0], LOW); 
    digitalWrite(transistor[1], LOW); 
    digitalWrite(transistor[2], LOW);
    delay(200);
    digitalWrite(transistor[0], HIGH); 
    digitalWrite(transistor[1], LOW); 
    digitalWrite(transistor[2], LOW); 
    digitalWrite(led[0], LOW);
    digitalWrite(led[1], LOW);
    digitalWrite(led[2], LOW);
    digitalWrite(led[3], LOW);
    digitalWrite(led[4], HIGH);
    digitalWrite(led[5], LOW);
    digitalWrite(led[6], LOW);
    digitalWrite(led[7], LOW);
    digitalWrite(led[8], LOW);
    delay(200);
    digitalWrite(transistor[0], HIGH); 
    digitalWrite(transistor[1], HIGH); 
    digitalWrite(transistor[2], LOW); 
    digitalWrite(led[0], LOW);
    digitalWrite(led[1], LOW);
    digitalWrite(led[2], LOW);
    digitalWrite(led[3], LOW);
    digitalWrite(led[4], HIGH);
    digitalWrite(led[5], LOW);
    digitalWrite(led[6], LOW);
    digitalWrite(led[7], LOW);
    digitalWrite(led[8], LOW);
    delay(200);
    digitalWrite(transistor[0], HIGH); 
    digitalWrite(transistor[1], HIGH); 
    digitalWrite(transistor[2], HIGH); 
    digitalWrite(led[0], LOW);
    digitalWrite(led[1], LOW);
    digitalWrite(led[2], LOW);
    digitalWrite(led[3], LOW);
    digitalWrite(led[4], HIGH);
    digitalWrite(led[5], LOW);
    digitalWrite(led[6], LOW);
    digitalWrite(led[7], LOW);
    digitalWrite(led[8], LOW);
    delay(200);
}

void plus() {
    digitalWrite(transistor[0], HIGH); 
    digitalWrite(transistor[1], LOW); 
    digitalWrite(transistor[2], HIGH); 
    digitalWrite(led[0], HIGH);
    digitalWrite(led[1], LOW);
    digitalWrite(led[2], HIGH);
    digitalWrite(led[3], LOW);
    digitalWrite(led[4], LOW);
    digitalWrite(led[5], LOW);
    digitalWrite(led[6], HIGH);
    digitalWrite(led[7], LOW);
    digitalWrite(led[8], HIGH);
    delay(200);
    digitalWrite(transistor[0], HIGH); 
    digitalWrite(transistor[1], HIGH); 
    digitalWrite(transistor[2], HIGH); 
    digitalWrite(led[0], LOW);
    digitalWrite(led[1], HIGH);
    digitalWrite(led[2], LOW);
    digitalWrite(led[3], HIGH);
    digitalWrite(led[4], HIGH);
    digitalWrite(led[5], HIGH);
    digitalWrite(led[6], LOW);
    digitalWrite(led[7], HIGH);
    digitalWrite(led[8], LOW);
}
 


