#include "classPerro.h"

//why the fuck donde you spread it in the right manner between header and cpp?
// shame on u bro this is uploaded directly on the forked one

void Perro::PerroPet(int pets) {
  pet =pets; // just because 
  cout<<" \n you pet your perro " << this-> pet <<" times";
}

int main() {
  string colourBlack= "Black", nameGerard="Gerard";
  int ageFive =5;
  Perro perrito ("cocho", "brown", 10);
    perrito.PerroDisplay();
    perrito.PerroPet(3);
  Perro perrito2 ( nameGerard, colourBlack, ageFive);
   perrito2.PerroDisplay();
   perrito2.PerroPet(6);

  return 0;
}
