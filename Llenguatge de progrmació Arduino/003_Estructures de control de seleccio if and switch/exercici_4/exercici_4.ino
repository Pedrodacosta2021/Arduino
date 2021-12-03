/********************************************************
*                                                       *
*                    TÍTOL:                             *
*  003 Estructures de Control de Selecció if & switch   *
*                                                       *
* PEDRO DA COSTA                    DATA:01/12/2021     *
*********************************************************/
//******* INCLUDE ***********


//******* VARIABLES *********
int tempAigua = 103;

//******* SETUP ***********

void setup() 
{
  Serial.begin(9600);
   if (tempAigua < 90)
  {
    Serial.print("Aigua encara no bull.");
  }
  else if(tempAigua >= 90 & tempAigua < 100)
  {
    Serial.print ("Aigua apunt de bullir");
  }
  else if(tempAigua == 100)
  {
    Serial.print ("Aigua a 100ºC");
  }
  else
  {
    Serial.print("Aigua bullint");
  }
}

//******** LOOP ***********

void loop() {
  // put your main code here, to run repeatedly:

}

//******* FUNCIONS **********
