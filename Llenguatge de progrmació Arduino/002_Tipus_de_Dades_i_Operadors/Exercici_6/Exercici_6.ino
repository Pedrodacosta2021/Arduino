/********************************************************
*                                                       *
*                    TÍTOL:                             *
*                 Exercici 6                            *
*                                                       *
* PEDRO DA COSTA                    DATA:29/11/2021     *
*********************************************************/
//******* INCLUDE ***********


//******* VARIABLES *********
int drive_gb = 5;
int drive_mb = 0;
//******* SETUP ***********

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);     // set up Serial library at 9600 bps
Serial.print("Your HD is ");
Serial.print(drive_gb);
Serial.println(" GB large.");

drive_mb = 1024 * drive_gb;

Serial.print("It can store ");
Serial.print(drive_mb);
Serial.println(" Megabytes!");

}

//******** LOOP ***********

void loop() {
  // put your main code here, to run repeatedly:

}

//******* FUNCIONS **********
