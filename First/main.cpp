#include <iostream>
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
     int n;
     cout << "N : ";
     cin >> n;
     int a[n];
     int i;

     srand(time(0));

     for (i = 0; i < n; i++)
        a[i] = 1 + rand() % 20;
     for (i = 0; i < n; i++)
        cout<<a[i]<<" ";
     int b,counter;
     counter=0;
     cout << "Enter B : ";
     cin >> b;
     cout<<endl;
     for(int j = 0;j < n;j++){
        if(b>a[j]) counter++;
     }
     cout << "Answer => " << counter;
    return 0;
}
