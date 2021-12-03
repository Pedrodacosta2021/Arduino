/********************************************************
*                                                       *
*                    TÍTOL:                             *
*  003 Estructures de Control de Selecció if & switch   *
*                                                       *
* PEDRO DA COSTA                    DATA:01/12/2021     *
*********************************************************/
//******* INCLUDE ***********


//******* VARIABLES *********
int T  =  9;
int Y  =  4;
int K  =  8;
int N  =  3;
int P  = - 3;
boolean Z  = true;
boolean W = false;
boolean A  =  false;
boolean B  =  true;
//******* SETUP ***********

void setup() {
 Serial.begin(9600); // put your setup code here, to run once:
 Serial.print(T > 10 && T < 14);
 Serial.print(Y > 4 || Y < 7);
 Serial.print(K > 8 && K < 10);
 Serial.print(N > 2 || N < 20);
 Serial.print(P > 0 && P < -3);
 Serial.print(T > 10 || Z);
 Serial.print(P > 0 && B);
 Serial.print(W && B);
 Serial.print(W && A);

}

//******** LOOP ***********

void loop() {
  // put your main code here, to run repeatedly:

}

//******* FUNCIONS **********
