#ifndef TOOLBOX_H_INCLUDED
#define TOOLBOX_H_INCLUDED

class calculator
{
protected:
    double num1,num2;
    double num3,num4; /**for initial time and final time**/
    double result;
public:
    calculator();
    calculator(double a,double b); /** Parameterized **/
    /**Arithmetic**/
    void set_num1(double a);
    double get_num1();
    void set_num2(double b);
    double get_num2();
    void set_num3(double c);
    double get_num3();
    void set_num4(double d);
    double get_num4();
    double sum();
    double difference();
    double multi();
    double divide();
    /**Statistics**/
    double mode(double *array,int size);

    /**Scientific**/
    double cosine();
    double sine();
    double tangent();
    double cosine_h();
    double sine_h();
    double tangent_h();
    double square_root();
    double power();
    void matrix_addition();
    void matrix_subtraction();
    /**Physics**/
    double force();
    double weight();
    double density();
    double moment_of_force();
    double power_physics();
    double work_done();
    double pressure();
    double acceleration();
    double avg_speed();
    double velocity();
    double avg_velocity();
    double wave_velocity();
    double wave_frequency();
    double gravitational_potential_energy();
    /**Unit Converter**/
    double km_into_miles();
    double miles_into_km();
    double inch_into_cm();
    double cm_into_inch();
    double foot_into_m();
    double m_into_foot();
    double pound_into_grams();
    double ounce_into_grams();
    double gallon_into_liter();
    double fahrenheit_into_celsius();
    double celsius_into_fahrenheit();

};

#endif // TOOLBOX_H_INCLUDED
