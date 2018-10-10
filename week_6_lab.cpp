#include <iostream>
using namespace std;
int main() {
    int x;
     cout << "Enter a grade!";
     cin >> x ; 
     if (x >= 86) {
         cout << "Grade=A";
     }
else if (x >= 72) {
         cout << "Grade=B";
     }
     else if (x >= 60) {
         cout << "Grade=C";
     }
else if (x >= 50) {
         cout << "Grade=D";
     }
else if (x <= 50) {
         cout << "Grade=F";
     }     
return 0;
}
     