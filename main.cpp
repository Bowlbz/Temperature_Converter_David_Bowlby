

/*
	Input Validation with Ref Functions 
	A cleaner way to do input validation
	Validating input, an essential process.
	Source: http://stackoverflow.com/questions/514420/how-to-validate-numeric-input-c
	Keeping Dr. McMillan from breaking my code, defend against "dark side of the force",
	and/or legitimate user error. 
	//Try and Catch blocks are used in error checking
	Teacher: Dr. Tyson McMillan 
*/
#include <cstdlib>  // Provides EXIT_SUCCESS
#include <iostream>  // Provides cout, cerr, endl
#include "Input_Validation_Extended.h" // Provides getValidatedInput<T>(), a header File with a Template Class
                              // Extended 2-11-2016 by Dr. McMillan to add validation methods by datatype
#include<string> //for string manipulation
#include<sstream> //for string manipulation and comparison
#include<iomanip>
using namespace std;

double C = 0.0, F = 0.0, temp = 0.0;
char input = '\0';
char Exit = '\0';
void welcomeMessage();//Function Prototype


int main()
{
   int counter = 0; 
    
  welcomeMessage();

  do
  {  
   
    
      cout << "\nWhat convertion would you like to ";
      cout << "to do? " << endl;
      cout << "\n*Enter F for Celsius to Fahrenheit"<<endl;
      cout << "*Enter C for Fahrenheit to Celsius. "<<endl;
      cout << "*Enter 3 to Exit.\n " << endl;
      
        
        input = validateChar(input);
    
        cout << fixed << setprecision(4);

        if(input == 'f' || input == 'F')
        {
          cout << "What temperature would you like to convert from C -> F ? " << endl;
          cin >> C;
          cout << (9.0/5.0) * C + 32 << " F is your tempreture. " << endl;
        }
        else if(input == 'c' || input == 'C')
        {
          cout << "What temperature would you like to convert from F -> C ? " << endl;
          cin >> F;
          cout << (F -32) / 1.8 << " C is your tempreture. " << endl;
        }
        else if(input == 3)
        {
          cout << "\x1b[93;1mHave a Nice Day!!\x1b[0m " << endl;
          return 0;
        }
        else
        {
          cout << "\x1b[91;4mError: The user did not provide a proper F or C decision\x1b[0m " << endl;
        }
      

    cout << "\x1b[93;4mWould you like to Convert again ?\x1b[0m"<< endl;
    cout << "Y/N ? " << endl;
    Exit = validateChar(Exit);

    counter++;
  
  }while(Exit == 'y' || Exit == 'Y');

  cout << "\x1b[93;1mHave a Nice Day!!\x1b[0m\n " << endl;
  cout << "\x1b[32;4mProgram ran:\x1b[0m " << counter << endl;
  
  return 0;
}

//Function Definitions:
void welcomeMessage()
{
  cout << "\n\x1b[95;4mThis program will convert Temps ";
  cout << "from Fahrenheit to Celsius and vice ";
  cout << "versa.\x1b[0m " << endl;
}

