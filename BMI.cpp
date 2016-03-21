#include "BMI.h"
#include <string>

using namespace std;

void BMI::setHeight( double x ){
    height = x;
}

void BMI::setMass( double y ){
    mass = y;
}

double BMI::getBMI(){
    if ( height!=0 ){
        BMI=mass/(height/(double)100)/(height/(double)100);
        return BMI;
    }
    else
        return BMI=0;
}

string BMI::getCategory( ){
        if ( BMI!=0 )
        if ( BMI<15 )
            category = "Very severely underweight";
        else if ( 15<=BMI && BMI<16 )
            category = "Severely underweight";
        else if ( 16<=BMI && BMI<18.5 )
            category = "Underweight";
        else if ( 18.5<=BMI && BMI<25 )
            category = "Normal";
        else if ( 25<=BMI && BMI<30 )
            category = "Overweight";
        else if ( 30<=BMI && BMI<35 )
            category = "Obese Class I (Moderately obese)";
        else if ( 35<=BMI && BMI<40 )
            category = "Obese Class II (Severely obese)";
        else
            category = "Obese Class III (Very severely obese)";

    return category;
}
