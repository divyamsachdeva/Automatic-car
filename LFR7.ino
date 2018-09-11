int ir1 = 2;
int ir2 = 3;
int ir3 = 4;
int ir4 = 5;
int ir5 = 6;
int ir6 = 11;
int ir7 = 12;

int lm1 = 10;
int lm2 = 8;
int rm1 = 9;
int rm2 = 7;
int s = 155;

void setup() {
  // put your setup code here, to run once:
  pinMode(ir1, INPUT);
  pinMode(ir2, INPUT);
  pinMode(ir3, INPUT);
  pinMode(ir4, INPUT);
  pinMode(ir5, INPUT);
  pinMode(ir6, INPUT);
  pinMode(ir7, INPUT);

  pinMode(lm1, OUTPUT);
  pinMode(lm2, OUTPUT);
  pinMode(rm1, OUTPUT);
  pinMode(rm2, OUTPUT);

}

void loop()
{
  // put your main code here, to run repeatedly:
  if (!digitalRead(ir3))
  {
    analogWrite(lm1, s);
    analogWrite(lm2, 0);
    analogWrite(rm1, s);
    analogWrite(rm2, 0);

  }
  else
  {
    if (!digitalRead(ir2) || !digitalRead(ir1))
    {
      analogWrite(lm1, 0);
      analogWrite(lm2, 0);
      analogWrite(rm1, s);
      analogWrite(rm2, 0);
    }
    if (!digitalRead(ir4) || !digitalRead(ir5))
    {
      analogWrite(lm1, s);
      analogWrite(lm2, 0);
      analogWrite(rm1, 0);
      analogWrite(rm2, 0);
    }
    else
    {
      if (!digitalRead(ir6))
      {
        analogWrite(lm1, 0);
        analogWrite(lm2, 0);
        analogWrite(rm1, s);
        analogWrite(rm2, 0);
      }
      else if (!digitalRead(ir7))
      {
        analogWrite(lm1, s);
        analogWrite(lm2, 0);
        analogWrite(rm1, 0);
        analogWrite(rm2, 0);
      }
    }
  }
}
