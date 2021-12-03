/********************************************************
*                                                       *
*                    TÍTOL:                             *
*             Calcular l'hopotenusa                     *
*                                                       *
* PEDRO DA COSTA                    DATA:29/11/2021     *
********************/
//******* INCLUDE ***********


//******* VARIABLES *********
int a = 3;
int b = 4;
int h = 0;
//******* SETUP ***********

void setup() {
Serial.begin(9600);     // set up Serial library at 9600 bps

Serial.println("Calcul de la hipotenusa: ");

Serial.print("a = ");
Serial.println(a);
Serial.print("b = ");
Serial.println(b);
Serial.print("h = ");
Serial.println(h);

Serial.print("h = sqrt(a^2+b^2) = ");
Serial.println(sqrt(pow(a,2)+pow(b,2)));

}

//******** LOOP ***********

void loop() {
  // put your main code here, to run repeatedly:

}

//******* FUNCIONS **********
