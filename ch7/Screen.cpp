#include <iostream>
#include "Screen.h"

using std::string;
using std::cin;using std::cout;

int main(){
    Screen myScreen(5,5,'X');
    myScreen.move(4,0).set('#').display(cout);
    cout << "\n";
    myScreen.display(cout);
    cout << "\n";
   
   
    system("pause");
    return 0;
}
