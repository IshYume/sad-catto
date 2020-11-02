int M_RP = 5;
int M_RN = 4;
int M_LP =2;
int M_LN = 3;
int M_RE = 10;
int M_LE = 11;


int L_S = A2;
int C_S = A1;
int R_S = A0;


void setup() 
{
  // put your setup code here, to run once:
pinMode(M_RP,OUTPUT);
pinMode(M_RN,OUTPUT);
pinMode(M_LP,OUTPUT);
pinMode(M_LN,OUTPUT);
pinMode(M_RE,OUTPUT);
pinMode(M_LE,OUTPUT);

pinMode(L_S,INPUT);
pinMode(C_S,INPUT);
pinMode(R_S,INPUT);

analogWrite(M_RE, 150);
analogWrite(M_LE, 150);
delay(200);

}

void loop() 
{
  // put your main code here, to run repeatedly:
if ((digitalRead(L_S) == 0)&&(digitalRead(C_S) == 1)&&(digitalRead(R_S) == 0)){Forward();}
if ((digitalRead(L_S) == 1)&&(digitalRead(C_S) == 1)&&(digitalRead(R_S) == 1)){Forward();}

if ((digitalRead(L_S) == 1)&&(digitalRead(C_S) == 1)&&(digitalRead(R_S) == 0)){turnLeft();}
if ((digitalRead(L_S) == 1)&&(digitalRead(C_S) ==0)&&(digitalRead(R_S) == 0)) {turnLeft();}

if ((digitalRead(L_S) == 0)&&(digitalRead(C_S) == 1)&&(digitalRead(R_S) == 1)){turnRight();}
if ((digitalRead(L_S) == 0)&&(digitalRead(C_S) == 0)&&(digitalRead(R_S) == 1)){turnRight();}

if ((digitalRead(L_S) == 0)&&(digitalRead(C_S) == 0)&&(digitalRead(R_S) == 0)){Stop();}

}

void Forward(){
digitalWrite(M_RP, LOW);
digitalWrite(M_RN, HIGH);
digitalWrite(M_LP, LOW);
digitalWrite(M_LN, HIGH);  
}


void turnRight(){
digitalWrite(M_RP, LOW);
digitalWrite(M_RN, LOW);
digitalWrite(M_LP, LOW);
digitalWrite(M_LN, HIGH); 
}

void turnLeft(){
digitalWrite(M_RP, LOW);
digitalWrite(M_RN, HIGH);
digitalWrite(M_LP, LOW);
digitalWrite(M_LN, LOW);
}

void Stop(){
digitalWrite(M_RP, LOW);
digitalWrite(M_RN, LOW);
digitalWrite(M_LP, LOW);
digitalWrite(M_LN, LOW);
}
