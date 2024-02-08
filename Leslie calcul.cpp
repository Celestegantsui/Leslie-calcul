// Leslie calcul.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include"Caculator.h" 

using namespace std;

int main()    
{ 
    double x = 0.0;
    double y = 0.0; 
    double result = 0.0;
    char oper = '+';

    cout << "Calculatrice console Application" << endl << endl;
    cout << "Please enter the operation to perform .Format: a+b |a-b|a*b|a/b" << endl; 
       
  
    Caculator c; 
    while (true)
    {
        cin >> x >> oper >> y;
        if (oper == '/' && y == 0)
        {
            cout << "Attempted to divide by zero!" << endl;
            continue; 
        }
        else
        {
            result = c.Calculate(x, oper, y);
        }
        cout << "Result " << "of" << x << oper << y << "is" << result << endl;
    }

    return 0;

}
    