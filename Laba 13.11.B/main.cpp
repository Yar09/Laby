#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <cmath>

using namespace std;

int main()
{
    string sctName = "plotscript.gps";
    string fName = "Dani.txt";
    string gpCommand;
    fstream fOut;

    fOut.open(sctName.c_str(), ios::out);
    fOut << "plot \""<<fName<<"\" using 1:2 w l,\"\" using 3:4 w l \n";
        fOut.close();

    double x1,y1,x2,y2;
    x2 = -10;
    y1 = -10;
    fOut.open(fName.c_str(), ios::out);
    while(x2 < 10)
    {
        y2 = 3 - cos(x2);
        /*y1 = acos(0.5-x1) + 1;*/
        x1 = 0.5 - cos(y1 -1);
        fOut << x2<<"\t"<<y2<<"\t"<<x1<<"\t"<<y1<<"\n";
        x2 += 0.05;
        y1 += 0.05;
    }
    fOut.close();

    gpCommand = "D:/SOFT/gnuplot/bin/gnuplot.exe -persist " + sctName;
    system(gpCommand.c_str());
    return 0;
}
