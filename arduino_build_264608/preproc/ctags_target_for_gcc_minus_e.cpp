# 1 "C:\\Users\\saini\\Desktop\\ttt\\_7segSim\\_7segSim.ino"
# 1 "C:\\Users\\saini\\Desktop\\ttt\\_7segSim\\_7segSim.ino"
int a=2;
int b=3;
int c=4;
int d=5;
int e=6;
int f=7;
int g=8;
int h=9;
int rx_byte = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(a, 0x1);
  pinMode(b, 0x1);
  pinMode(c, 0x1);
  pinMode(d, 0x1);
  pinMode(e, 0x1);
  pinMode(f, 0x1);
  pinMode(g, 0x1);
  pinMode(h, 0x1);
  digitalWrite(h, 0); // start with the "dot" off
}

void loop()
{
  if (Serial.available() > 0)
  {
     rx_byte = Serial.read();
    switch (rx_byte) {
    case '0':
        zero();
        break;
    case '1':
        one();
        break;
    case '2':
        two();
        break;
    case '3':
        three();
        break;
    case '4':
        four();
        break;
    case '5':
        five();
        break;
    case '6':
        six();
        break;
    case '7':
        seven();
        break;
    case '8':
        eight();
        break;
    case '9':
        nine();
        break;
    }

}}

    // write '9'

    void eight() {
        digitalWrite(a, 1);
        digitalWrite(b, 1);
        digitalWrite(c, 1);
        digitalWrite(d, 1);
        digitalWrite(e, 1);
        digitalWrite(f, 1);
        digitalWrite(g, 1);


    }
    void seven() {
    digitalWrite(a, 1);
    digitalWrite(b, 1);
    digitalWrite(c, 1);
    digitalWrite(d, 0);
    digitalWrite(e, 0);
    digitalWrite(f, 0);
    digitalWrite(g, 0);

}
    void six() {
        digitalWrite(a, 1);
        digitalWrite(b, 0);
        digitalWrite(c, 1);
        digitalWrite(d, 1);
        digitalWrite(e, 1);
        digitalWrite(f, 1);
        digitalWrite(g, 1);
    }
    void five() {
        digitalWrite(a, 1);
        digitalWrite(b, 0);
        digitalWrite(c, 1);
        digitalWrite(d, 1);
        digitalWrite(e, 0);
        digitalWrite(f, 1);
        digitalWrite(g, 1);

    }
    void four()
    {
    digitalWrite(a, 0);
    digitalWrite(b, 1);
    digitalWrite(c, 1);
    digitalWrite(d, 0);
    digitalWrite(e, 0);
    digitalWrite(f, 1);
    digitalWrite(g, 1);
    }
    void three()
    {
    digitalWrite(a, 1);
    digitalWrite(b, 1);
    digitalWrite(c, 1);
    digitalWrite(d, 1);
    digitalWrite(e, 0);
    digitalWrite(f, 0);
    digitalWrite(g, 1);

}
    void two()
    {
    digitalWrite(a, 1);
    digitalWrite(b, 1);
    digitalWrite(c, 0);
    digitalWrite(d, 1);
    digitalWrite(e, 1);
    digitalWrite(f, 0);
    digitalWrite(g, 1);
}
    void one()
    {
        digitalWrite(a, 0);
        digitalWrite(b, 1);
        digitalWrite(c, 1);
        digitalWrite(d, 0);
        digitalWrite(e, 0);
        digitalWrite(f, 0);
        digitalWrite(g, 0);

}
 void zero()
 {
     digitalWrite(a, 1);
     digitalWrite(b, 1);
     digitalWrite(c, 1);
     digitalWrite(d, 1);
     digitalWrite(e, 1);
     digitalWrite(f, 1);
     digitalWrite(g, 0);

}
void nine()
{
    digitalWrite(a, 1);
    digitalWrite(b, 1);
    digitalWrite(c, 1);
    digitalWrite(d, 0);
    digitalWrite(e, 0);
    digitalWrite(f, 1);
    digitalWrite(g, 1);

}
