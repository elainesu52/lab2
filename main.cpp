#include <iostream>
#include "Class BMI.h"
#include <fstream>
#include <string>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
    BMI bmi;
    int a, b;

    ifstream indata( "file.in.txt", ios::in );
    if ( !indata ){
        cerr << "File could not be opened." <<endl;
        exit(1);
    }

    ofstream outBMI( "file.out.txt", ios::out );

    if( !outBMI ){
        cerr << "File could not be created";
        exit(1);
    }

    while ( indata >> a >> b ){
        bmi.setHeight( a );
        bmi.setMass( b );
        if ( bmi.getBMI() == 0 )
            break;
        outBMI << fixed << setprecision(2) << bmi.getBMI() << "  " << bmi.getCategory() << endl;
    }

    return 0;
}
