#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x,y,h,a,b;
     int m;
     cout << "Enter borders : " << endl;
     cin >> a;
     cin >> b;

     cout << "Enter step : " ;
     cin >> h;

     cout << "Enter m : " ;
     cin >> m;

     cout << "x" << "\t" << "y" << endl;
     double c;
     string choise;
     int counter = 0;
     c = a;
     while (c <= b){
        cout << c << "\t" << sin(c) << endl;
        c=c+h;
        counter++;
        if (sin(c) == 0) break;
        if(counter==m){
            counter = 0;
            cout << "Continue ?(yes/no) : " ;
            cin >> choise;
            if(choise == "yes") continue;
            else break;
        }
     }
    return 0;
}
