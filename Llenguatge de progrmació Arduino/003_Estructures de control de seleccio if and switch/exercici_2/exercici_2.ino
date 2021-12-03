/********************************************************
*                                                       *
*                    TÍTOL:                             *
*  003 Estructures de Control de Selecció if & switch   *
*                                                       *
* PEDRO DA COSTA                    DATA:03/12/2021     *
*********************************************************/
//******* INCLUDE ***********


//******* VARIABLES *********
int tempAigua = "a";
//******* SETUP *************

void setup() 
{
   Serial.begin(9600);
   if (tempAigua < 100)
  {
    Serial.print("Aigua encara no bull.");
  }
  else
  {
    Serial.print("Aigua bullint.");
  }
}
void loop() {

}

//******* FUNCIONS **********
