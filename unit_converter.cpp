#include <iostream>
#include "toolbox.h"

using namespace std;

double calculator::km_into_miles()
{
    return num1*0.621371;
}
double calculator::miles_into_km()
{
    return num1*1.60934;
}
double calculator::inch_into_cm()
{
    return num1*2.54;
}
double calculator::cm_into_inch()
{
    return num1*0.393701;
}
double calculator::foot_into_m()
{
    return num1*0.3048;
}
double calculator::m_into_foot()
{
    return num1*3.28084;
}
double calculator::pound_into_grams()
{
    return num1*453.592;
}
double calculator::ounce_into_grams()
{
    return num1*28.3495;
}
double calculator::gallon_into_liter()
{
    return num1*3.78541;
}
double calculator::fahrenheit_into_celsius()
{
    return (((num1-32)*5)/9);
}
double calculator::celsius_into_fahrenheit()
{
    return (((num1*9)/5)+32);
}
