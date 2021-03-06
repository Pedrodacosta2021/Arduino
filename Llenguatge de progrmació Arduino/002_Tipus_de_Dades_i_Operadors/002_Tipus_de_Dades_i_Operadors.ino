/********************************************************
*                                                       *
*                   Math is fun                         *
*                                                       *
*                                                       *
* PEDRO DA COSTA                    DATA:26/11/202      *
********************/
//******* INCLUDE ***********


//******* VARIABLES *********
int a = 5, b = 10, c = 20;

//******* SETUP ***********

void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  Serial.println("Here is some math: ");

  Serial.print("a = ");
  Serial.println(a);
  Serial.print("b = ");
  Serial.println(b);
  Serial.print("c = ");
  Serial.println(c);

  Serial.print("a + b = ");       // add
  Serial.println(a + b);

  Serial.print("a * c = ");       // multiply
  Serial.println(a * c);
  
  Serial.print("c / b = ");       // divide
  Serial.println(c / b);

  Serial.print("c % b = ");       // module
  Serial.println(c % b);
  
  Serial.print("b - c = ");       // subtract
  Serial.println(b - c);

}

//******** LOOP ***********

void loop() {
  // put your main code here, to run repeatedly:

}

//******* FUNCIONS **********
