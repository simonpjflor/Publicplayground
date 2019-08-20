# include <iostream>
#include <string>
// # include <fstream> to manage writing and reading on files
using namespace std;
class Perro{
 public: Perro (string name, string colour, int age) {
    cout <<"\n \n perro's constructor";
    PerroAssignment (name, colour, age);
  }

     void PerroAssignment (string PerroName, string PerroColour, int PerroAge){
      perroName = PerroName;
      perroColour = PerroColour;
      perroAge = PerroAge;
     }
       void PerroDisplay() {
         cout << "\n perro's features: \n Name:" << perroName <<"\n Colour:" << perroColour <<"\n Age:" << perroAge;
       }
        void PerroPet(int pets);
 private:
 string perroName, perroColour;
 int perroAge, pet;
};
