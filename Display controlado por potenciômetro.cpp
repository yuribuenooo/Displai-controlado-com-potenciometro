//DISPLAY CONTROLADO POR POTENCIÔMETRO

const int G = 2;
const int F = 3;
const int A = 4;
const int B = 5;
const int C = 6;
const int D = 7;
const int E = 8;
const int POT = A5;

void num0(){
  digitalWrite(G, HIGH);
  digitalWrite(F, LOW);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
}
void num1(){
  digitalWrite(G, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
}
void num2(){
 digitalWrite(G, LOW);
  digitalWrite(F, HIGH);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
}
 void num3(){
  digitalWrite(G, LOW);
  digitalWrite(F, HIGH);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, HIGH);
}
 void num4(){
  digitalWrite(G, LOW);
  digitalWrite(F, LOW);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
}
 void num5(){
  digitalWrite(G, LOW);
  digitalWrite(F, LOW);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, HIGH);
}
 void num6(){
  digitalWrite(G, LOW);
  digitalWrite(F, LOW);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
}
 void num7(){
  digitalWrite(G, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
}
 void num8(){
  digitalWrite(G, LOW);
  digitalWrite(F, LOW);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
}
 void num9(){
  digitalWrite(G, LOW);
  digitalWrite(F, LOW);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
}

void numA(){
  digitalWrite(G, LOW);
  digitalWrite(F, LOW);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  digitalWrite(E, LOW);
}
void numB(){
  digitalWrite(G, LOW);
  digitalWrite(F, LOW);
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
}

void numC(){
  digitalWrite(G, HIGH);
  digitalWrite(F, LOW);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
}

void numD(){
  digitalWrite(G, LOW);
  digitalWrite(F, HIGH);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
}

void numE(){
  digitalWrite(G, LOW);
  digitalWrite(F, LOW);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
}

void numF(){
  digitalWrite(G, LOW);
  digitalWrite(F, LOW);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, LOW);
}


void setup()
{
  pinMode(G, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(POT,INPUT);
  Serial.begin(9600);
}
void loop()
{
 
  int valor = analogRead(POT);
  int digito = map(valor,0,1023,0,15);
  Serial.println(digito);
  
if (digito == 0 )  num0(); 
if (digito == 1 )  num1(); 
if (digito == 2 )  num2(); 
if (digito == 3 )  num3(); 
if (digito == 4 )  num4(); 
if (digito == 5 )  num5(); 
if (digito == 6 )  num6(); 
if (digito == 7 )  num7(); 
if (digito == 8 )  num8();
if (digito == 9 )  num9();
if (digito == 10)  numA();
if (digito == 11)  numB();
if (digito == 12)  numC(); 
if (digito == 13)  numD(); 
if (digito == 14)  numE(); 
if (digito == 15)  numF(); 
  delay(2);
  
}