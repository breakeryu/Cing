#include "Attiny85_IO.h"
Attiny attiny;
void setup() {


}
void loop() 
  {
  if (attiny.Temp()>30)
     {
        attiny.motor("AB", 1, "digital");
     }
  else 
    {
      attiny.motor("AB", 0, "digital");
    }
  }



