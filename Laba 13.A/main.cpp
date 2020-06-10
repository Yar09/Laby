#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <cmath>

using namespace std;
const double T=273,m0=1.66e-27,k=1.38e-23,pi=3.14;
double f(double v)
{
    double f;
    f = (4*pi)*pow((m0/(2*pi*k*T)),1.5)*v*v*exp((-m0*v*v)/(2*k*T));
    return f;
}

int main()
{
    string sctName = "plotscript.gps";
    string fName = "Dani.txt";
    string gpCommand;
    fstream fOut;

    fOut.open(sctName.c_str(), ios::out);
    fOut << "plot \""<<fName<<"\" with lines \n";
        fOut.close();

    fOut.open(fName.c_str(), ios::out);
    for(int v=0; v<10000; v++)
        fOut<<v<<"\t"<<f(v)<<"\n";
    fOut.close();

    gpCommand = "D:/SOFT/gnuplot/bin/gnuplot.exe -persist " + sctName;
    system(gpCommand.c_str());
    return 0;
}
