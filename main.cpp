#include <iostream>
#include "toolbox.h"
#include <stdlib.h>
#include <time.h>  /**Loading Screen**/
#include <windows.h>
#include <fstream> /**file handling**/
#include "linklist.h" /**for linklist**/
#include "stack.h"
#include "queue.h"
#include "array.h"
#include "DLL_link.h"
#include "DLL_node.h"
#include "treenode.h"
#include "Tree.h"

using namespace std;

int main()
{
    data_structures_menu:
        system("color 20");
    for(int j=0;j<3;j++)
        {
           system("cls");
           cout<<"\n\n\n\n\n\n\n\n";
           cout<<"\t\t\t";
           cout<<char(254);
           for(int i=0;i<43;i++)
           {

               cout<<"-";
           }
           cout<<char(254);
           cout<<endl;
           cout<<"   \t\t";
           cout<<"   \t\t         ToolBox-V1.0"<<endl;
           cout<<"\t\t\t";
           cout<<char(254);
           for(int i=0;i<43;i++)
           {

               cout<<"-";
           }
           cout<<char(254);
           cout<<endl;
           cout<<"   \t\t\t\t\t  Loading";
           for(int i=0;i<3;i++)
           {
               cout<<".";
               Sleep(100);
           }
        }
        system("cls");
    system("color 4e");
    cout<<"________________________________________________________________________________________________"<<endl;
    cout<<"\t\t\t\t     ToolBox V1.0     "<<endl;
    cout<<"________________________________________________________________________________________________"<<endl;
    cout<<"\t\t\t\t1: Linklist ToolBox"<<endl;
    cout<<"\t\t\t\t2: Stack ToolBox"<<endl;
    cout<<"\t\t\t\t3: Queue ToolBox"<<endl;
    cout<<"\t\t\t\t4: Array ToolBox"<<endl;
    cout<<"\t\t\t\t5: Double Linklist ToolBox"<<endl;
    cout<<"\t\t\t\t6: Tree ToolBox"<<endl;
    cout<<"\t\t\t\t______________________"<<endl;
    int select;
    cout<<"\t\t\t\tEnter Your Command: ";
    cin>>select;
    cout<<"________________________________________________________________________________________________"<<endl;
    switch(select)
    {
    case 1:
        {
            fstream file;
    system("cls");
    system("color 4e");
    ///Displaying date and time
    time_t timev;
    time(&timev);
    cout<<"\n"<<"\t\t\t    Time: "<<ctime(&timev);
    ///Displaying time end///
    LL caller_LL;
    while(1!=0)
{
    calculator caller;
    cout<<endl<<"\t\t\t ___________________________________"<<endl;
    cout<<"\t\t\t|____________Toolbox V1.0___________|"<<endl;
    cout<<"\t\t\t|___________________________________|"<<endl;
    cout<<"\t\t\t|1: Arithmetic Calculator           |"<<endl;
    cout<<"\t\t\t|2: Statistics Calculator           |"<<endl;
    cout<<"\t\t\t|3: Scientific Calculator           |"<<endl;
    cout<<"\t\t\t|4: Physics Calculator              |"<<endl;
    cout<<"\t\t\t|5: Unit Converter                  |"<<endl;
    cout<<"\t\t\t|___________________________________|"<<endl;
    cout<<"\t\t\t|6: View History                    |"<<endl;
    cout<<"\t\t\t|7: Delete History                  |"<<endl;
    cout<<"\t\t\t|8: Display List                    |"<<endl;
    cout<<"\t\t\t|9: Delete at Head                  |"<<endl;
    cout<<"\t\t\t|10: Delete at Tail                 |"<<endl;
    cout<<"\t\t\t|11: Delete at After                |"<<endl;
    cout<<"\t\t\t|12: Goto Data Structures Menu      |"<<endl;
    cout<<"\t\t\t|13: Exit                           |"<<endl;
    cout<<"\t\t\t|___________________________________|"<<endl;
    cout<<"\t\t\t       Enter Your Command: ";
    int option;
    cin>>option;
    cout<<"\t\t\t|___________________________________|"<<endl;
    switch(option)
    {
    case 1:
        {
            file.open("D:/History.txt",std::fstream::out|std::fstream::app);
            int nested_option;
            cout<<"1: Addition"<<endl;
            cout<<"2: Difference"<<endl;
            cout<<"3: Product"<<endl;
            cout<<"4: Division"<<endl;
            cout<<"Enter Your Command: ";
            cin>>nested_option;
            switch(nested_option)
            {
                case 1:
                    {
                        double a,b;
                        cout<<"Enter 1st No.: ";
                        cin>>a;
                        file<<a;
                        caller.set_num1(a);
                        cout<<"Enter 2nd No.: ";
                        cin>>b;
                        file<<"+";
                        file<<b;
                        file<<"=";
                        caller.set_num2(b);
                        cout<<"Result: "<<caller.sum();
                        file<<caller.sum()<<endl;
                        caller_LL.insert_at_tail(caller.sum());
                        break;
                    }
                case 2:
                    {
                        double a,b;
                        cout<<"Enter 1st No.: ";
                        cin>>a;
                        file<<a;
                        caller.set_num1(a);
                        cout<<"Enter 2nd No.: ";
                        cin>>b;
                        file<<"-";
                        file<<b;
                        file<<"=";
                        caller.set_num2(b);
                        cout<<"Result: "<<caller.difference();
                        file<<caller.difference()<<endl;
                        caller_LL.insert_at_tail(caller.difference());
                        break;
                    }
                case 3:
                    {
                        double a,b;
                        cout<<"Enter 1st No.: ";
                        cin>>a;
                        file<<a;
                        caller.set_num1(a);
                        cout<<"Enter 2nd No.: ";
                        cin>>b;
                        file<<"*";
                        file<<b;
                        file<<"=";
                        caller.set_num2(b);
                        cout<<"Result: "<<caller.multi();
                        file<<caller.multi()<<endl;
                        caller_LL.insert_at_tail(caller.multi());
                        break;
                    }
                case 4:
                    {
                        double a,b;
                        cout<<"Enter 1st No.: ";
                        cin>>a;
                        file<<a;
                        caller.set_num1(a);
                        cout<<"Enter 2nd No.: ";
                        cin>>b;
                        file<<"/";
                        file<<b;
                        file<<"=";
                        caller.set_num2(b);
                        cout<<"Result: "<<caller.divide();
                        file<<caller.divide()<<endl;
                        caller_LL.insert_at_tail(caller.divide());
                        break;
                    }
                    default:
                    {
                        cout<<"Error! Enter a valid command!"<<endl;
                        break;
                    }
                    break;
            }
            break;

        }
    case 2:
        {
            file.open("D:/History.txt",std::fstream::out|std::fstream::app);
            int nested_option;
            cout<<"1: Mean"<<endl;
            cout<<"2: Median (Ungrouped)"<<endl;
            cout<<"3: Mode"<<endl;
            cout<<"Enter Your Command: ";
            cin>>nested_option;
            switch(nested_option)
            {
            case 1:
                {
                    int total;
                    double *val;
                    int count=0;
                    cout<<"Enter total no. of X: ";
                    cin>>total;
                    val= new double [total];
                    for(int i=0;i<total;i++)
                    {
                        cin>>val[i];
                        count++;
                    }
                    double sum=0;
                    for(int i=0;i<total;i++)
                    {
                        sum=sum+val[i];
                    }
                    cout<<"Mean = "<<sum/total;
                    break;
                }
            case 2:
                {
                    int total;
                    double *val;
                    int count=0;
                    val= new double [total];
                    cout<<"Enter total no. of X: ";
                    cin>>total;
                    for(int i=0;i<total;i++)
                    {
                        cin>>val[i];
                        count++;
                    }
                    if(count%2==1)
                    {
                        int centre;
                        centre=total/2;
                        cout<<"Median = "<<val[centre];
                    }
                    else if(count%2==0)
                    {
                        int centre;
                        centre=total/2;
                        cout<<"Median = "<<(val[centre-1]+val[centre])/2;
                    }
                    break;
                }
            case 3:
                {
                    int total;
                    double *val;

                    val= new double [total];
                    cout<<"Enter size of X: ";
                    cin>>total;
                    cout<<"Enter values (sorted): ";
                    for(int i=0;i<total;i++)
                    {
                        cin>>val[i];

                    }
                    cout<<"Mode: ";
                    cout<<caller.mode(val,total);
                    break;
                }
                default:
                    {
                        cout<<"Error! Enter a valid command!"<<endl;
                        break;
                    }

                break;
                }
              file.close();
                break;
            }


    case 3:
        {
            file.open("D:/History.txt",std::fstream::out|std::fstream::app);
            int nested_option;
            cout<<"1: Sin"<<endl;
            cout<<"2: Cosine"<<endl;
            cout<<"3: Tangent"<<endl;
            cout<<"4: Sin Hyperbolic"<<endl;
            cout<<"5: Cosine Hyperbolic"<<endl;
            cout<<"6: Tangent Hyperbolic"<<endl;
            cout<<"7: Square Root"<<endl;
            cout<<"8: Power"<<endl;
            cout<<"9: Matrix Addition"<<endl;
            cout<<"10: Matrix Subtraction"<<endl;
            cout<<"Enter Your Command: ";
            cin>>nested_option;
            switch(nested_option)
            {
                case 1:
                    {
                        double a;
                        cout<<"Enter No.: ";
                        cin>>a;
                        file<<"Sin("<<a<<")=";
                        caller.set_num1(a);
                        cout<<caller.sine();
                        file<<caller.sine()<<endl;
                        caller_LL.insert_at_tail(caller.sine());
                        break;
                    }
                case 2:
                    {
                        double a;
                        cout<<"Enter No.: ";
                        cin>>a;
                        file<<"Cos("<<a<<")=";
                        caller.set_num1(a);
                        cout<<caller.cosine();
                        file<<caller.cosine()<<endl;
                        caller_LL.insert_at_tail(caller.cosine());
                        break;
                    }
                case 3:
                {
                        double a;
                        cout<<"Enter No.: ";
                        cin>>a;
                        file<<"Tan("<<a<<")=";
                        caller.set_num1(a);
                        cout<<caller.tangent();
                        file<<caller.tangent()<<endl;
                        caller_LL.insert_at_tail(caller.tangent());
                        break;
                }
                case 4:
                {
                        double a;
                        cout<<"Enter No.: ";
                        cin>>a;
                        file<<"Sinh("<<a<<")=";
                        caller.set_num1(a);
                        cout<<caller.sine_h();
                        file<<caller.sine_h()<<endl;
                        caller_LL.insert_at_tail(caller.sine_h());
                        break;
                }
                case 5:
                {
                        double a;
                        cout<<"Enter No.: ";
                        cin>>a;
                        file<<"Cosh("<<a<<")=";
                        caller.set_num1(a);
                        cout<<caller.cosine_h();
                        file<<caller.cosine_h()<<endl;
                        caller_LL.insert_at_tail(caller.cosine_h());
                        break;
                }
                case 6:
                {
                        double a;
                        cout<<"Enter No.: ";
                        cin>>a;
                        file<<"Tanh("<<a<<")=";
                        caller.set_num1(a);
                        cout<<caller.tangent_h();
                        file<<caller.tangent_h()<<endl;
                        caller_LL.insert_at_tail(caller.tangent_h());
                        break;
                }
                case 7:
                {
                        double a;
                        cout<<"Enter No.: ";
                        cin>>a;
                        file<<"Sqrt("<<a<<")=";
                        caller.set_num1(a);
                        cout<<caller.square_root();
                        file<<caller.square_root()<<endl;
                        caller_LL.insert_at_tail(caller.square_root());
                        break;
                }
                case 8:
                {
                        double a;
                        double exp;
                        cout<<"Enter No.: ";
                        cin>>a;
                        caller.set_num1(a);
                        cout<<"Enter Exponent: ";
                        cin>>exp;
                        file<<a<<"^"<<exp<<"=";
                        caller.set_num2(exp);
                        cout<<caller.power();
                        file<<caller.power()<<endl;
                        caller_LL.insert_at_tail(caller.power());
                        break;
                }
                case 9:
                {
                        caller.matrix_addition();
                        break;
                }
                case 10:
                {
                        caller.matrix_subtraction();
                        break;
                }
                default:
                {
                        cout<<"Error! Enter a valid command!"<<endl;
                        break;
                }
                file.close();
                break;
            }

            break;
        }
    case 4:
        {
            file.open("D:/History.txt",std::fstream::out|std::fstream::app);
            int nested_option;
            cout<<"1: Force"<<endl;
            cout<<"2: Weight"<<endl;
            cout<<"3: Density"<<endl;
            cout<<"4: Moment of Force"<<endl;
            cout<<"5: Power"<<endl;
            cout<<"6: Work Done"<<endl;
            cout<<"7: Pressure"<<endl;
            cout<<"8: Acceleration"<<endl;
            cout<<"9: Average Speed"<<endl;
            cout<<"10: Velocity"<<endl;
            cout<<"11: Average Velocity"<<endl;
            cout<<"12: Wave Velocity"<<endl;
            cout<<"13: Wave Frequency"<<endl;
            cout<<"14: Gravitational Potential Energy"<<endl;
            cout<<"Enter Your Command: ";
            cin>>nested_option;
            switch(nested_option)
            {
                case 1:
                    {
                        double a,b;
                        file<<"mass*acceleration=";
                        cout<<"Enter Mass: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*";
                        cout<<"Enter Acceleration: ";
                        cin>>b;
                        caller.set_num2(b);
                        file<<b<<"=";
                        cout<<"Force: ";
                        cout<<caller.force();
                        file<<caller.force()<<endl;
                        caller_LL.insert_at_tail(caller.force());
                        break;
                    }
                case 2:
                    {
                        double a;
                        file<<"Mass*Gravity=";
                        cout<<"Enter Mass: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*"<<"9.81"<<"=";
                        cout<<"Weight: ";
                        cout<<caller.weight();
                        file<<caller.weight()<<endl;
                        caller_LL.insert_at_tail(caller.weight());
                        break;
                    }
                case 3:
                    {
                        double a,b;
                        file<<"mass/volume=";
                        cout<<"Enter Mass: ";
                        cin>>a;
                        file<<a<<"/";
                        caller.set_num1(a);
                        cout<<"Enter Volume: ";
                        cin>>b;
                        file<<b<<"=";
                        caller.set_num2(b);
                        cout<<"Density: ";
                        cout<<caller.density();
                        file<<caller.density()<<endl;
                        caller_LL.insert_at_tail(caller.density());
                        break;
                    }
                case 4:
                    {
                        double a,b;
                        file<<"moment of force=force*distance=";
                        cout<<"Enter Force: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*";
                        cout<<"Enter Distance: ";
                        cin>>b;
                        caller.set_num2(b);
                        file<<b<<"=";
                        cout<<"Moment of Force: ";
                        cout<<caller.moment_of_force();
                        file<<caller.moment_of_force()<<endl;
                        caller_LL.insert_at_tail(caller.moment_of_force());
                        break;
                    }
                case 5:
                    {
                        double a,b;
                        file<<"Power=Work Done/Time=";
                        cout<<"Enter Work Done: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"/";
                        cout<<"Enter Time: ";
                        cin>>b;
                        caller.set_num2(b);
                        file<<b<<"=";
                        cout<<"Power: ";
                        cout<<caller.power_physics();
                        file<<caller.power_physics()<<endl;
                        caller_LL.insert_at_tail(caller.power_physics());
                        break;
                    }
                case 6:
                    {
                        double a,b;
                        file<<"Work Done=Force*Distance=";
                        cout<<"Enter Force: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*";
                        cout<<"Enter Distance: ";
                        cin>>b;
                        caller.set_num2(b);
                        file<<b<<"=";
                        cout<<"Work Done: ";
                        cout<<caller.work_done();
                        file<<caller.work_done()<<endl;
                        caller_LL.insert_at_tail(caller.work_done());
                        break;
                    }
                case 7:
                    {
                        double a,b;
                        file<<"Pressure=Force/Area=";
                        cout<<"Enter Force: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"/";
                        cout<<"Enter Area: ";
                        cin>>b;
                        caller.set_num2(b);
                        file<<b<<"=";
                        cout<<"Pressure: ";
                        cout<<caller.pressure();
                        file<<caller.pressure()<<endl;
                        caller_LL.insert_at_tail(caller.pressure());
                        break;
                    }
                case 8:
                    {
                        double a,b;
                        file<<"Acceleration=Velocity/Time=";
                        cout<<"Enter Velocity: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"/";
                        cout<<"Enter Time: ";
                        cin>>b;
                        caller.set_num2(b);
                        file<<b<<"=";
                        cout<<"Acceleration: ";
                        cout<<caller.acceleration();
                        file<<caller.acceleration()<<endl;
                        caller_LL.insert_at_tail(caller.acceleration());
                        break;
                    }
                case 9:
                    {
                        double a,b,c,d;
                        file<<"Average Speed=D2-D1/T2-T1=";
                        cout<<"Enter Initial Distance: ";
                        cin>>a;
                        caller.set_num1(a);
                        cout<<"Enter Final Distance: ";
                        cin>>b;
                        caller.set_num2(b);
                        file<<b<<"-"<<a<<"/";
                        cout<<"Enter Initial Time: ";
                        cin>>c;
                        caller.set_num3(c);
                        cout<<"Enter Final Time: ";
                        cin>>d;
                        caller.set_num4(d);
                        file<<d<<"-"<<c<<"=";
                        cout<<"Average Speed: ";
                        cout<<caller.avg_speed();
                        file<<caller.avg_speed()<<endl;
                        caller_LL.insert_at_tail(caller.avg_speed());
                        break;
                    }
                case 10:
                    {
                        double a,b;
                        file<<"Velocity=Displacement/Time=";
                        cout<<"Enter Displacement: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"/";
                        cout<<"Enter Time: ";
                        cin>>b;
                        caller.set_num2(b);
                        file<<b<<"=";
                        cout<<"Velocity: ";
                        cout<<caller.velocity();
                        file<<caller.velocity()<<endl;
                        caller_LL.insert_at_tail(caller.velocity());
                        break;
                    }
                case 11:
                    {
                        double a,b,c,d;
                        file<<"Average Velocity=D2-D1/T2-T1=";
                        cout<<"Enter Initial Displacement: ";
                        cin>>a;
                        caller.set_num1(a);
                        cout<<"Enter Final Displacement: ";
                        cin>>b;
                        caller.set_num2(b);
                        file<<b<<"-"<<a<<"/";
                        cout<<"Enter Initial Time: ";
                        cin>>c;
                        caller.set_num3(c);
                        cout<<"Enter Final Time: ";
                        cin>>d;
                        caller.set_num4(d);
                        file<<d<<"-"<<c<<"=";
                        cout<<"Average Velocity: ";
                        cout<<caller.avg_velocity();
                        file<<caller.avg_velocity()<<endl;
                        caller_LL.insert_at_tail(caller.avg_velocity());
                        break;
                    }
                case 12:
                    {
                        double a,b;
                        file<<"Wave Velocity=Frequency*Wavelength=";
                        cout<<"Enter Frequency: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*";
                        cout<<"Enter Wavelength: ";
                        cin>>b;
                        caller.set_num2(b);
                        file<<b<<"=";
                        cout<<"Wave Velocity: ";
                        cout<<caller.wave_velocity();
                        file<<caller.wave_velocity()<<endl;
                        caller_LL.insert_at_tail(caller.wave_velocity());
                        break;
                    }
                case 13:
                    {
                        double a;
                        file<<"Wave Frequency=1/Time Period=";
                        cout<<"Enter Time Period: ";
                        cin>>a;
                        file<<"1/"<<a<<"=";
                        caller.set_num1(a);
                        cout<<"Wave Frequency: ";
                        cout<<caller.wave_frequency();
                        file<<caller.wave_frequency()<<endl;
                        caller_LL.insert_at_tail(caller.wave_frequency());
                        break;
                    }
                case 14:
                    {
                        double a,b;
                        file<<"Gravitational Potential Energy=Mass*Height*Gravity=";
                        cout<<"Enter Mass: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*";
                        cout<<"Enter Height: ";
                        cin>>b;
                        caller.set_num2(b);
                        file<<b<<"*9.81"<<"=";
                        cout<<"Gravitational Potential Energy: ";
                        cout<<caller.gravitational_potential_energy();
                        file<<caller.gravitational_potential_energy()<<endl;
                        caller_LL.insert_at_tail(caller.gravitational_potential_energy());
                        break;
                    }
                default:
                    {
                        cout<<"Error! Enter a valid command!"<<endl;
                        break;
                    }

                file.close();
                break;
        }
        break;
        }
    case 5:
        {
            file.open("D:/History.txt",std::fstream::out|std::fstream::app);
            int nested_option;
            cout<<"1: KM into Miles"<<endl;
            cout<<"2: Miles into KM"<<endl;
            cout<<"3: Inch Into cm"<<endl;
            cout<<"4: cm into Inch"<<endl;
            cout<<"5: Foot into Meters"<<endl;
            cout<<"6: Meters into Foot"<<endl;
            cout<<"7: Pound into Grams"<<endl;
            cout<<"8: Ounce into Grams"<<endl;
            cout<<"9: Gallons into Liters"<<endl;
            cout<<"10: Fahrenheit into Celsius"<<endl;
            cout<<"11: Celsius into Fahrenheit"<<endl;
            cout<<"Enter Your Command: ";
            cin>>nested_option;
            switch(nested_option)
            {
                case 1:
                    {
                        double a;
                        file<<"Miles=KM*0.621371=";
                        cout<<"Enter KM: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*"<<"0.621371=";
                        cout<<"Miles="<<caller.km_into_miles();
                        file<<caller.km_into_miles()<<endl;
                        caller_LL.insert_at_tail(caller.km_into_miles());
                        break;
                    }
                case 2:
                    {
                        double a;
                        file<<"KM=Miles*1.60934=";
                        cout<<"Enter Miles: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*"<<"1.60934=";
                        cout<<"KM="<<caller.miles_into_km();
                        file<<caller.miles_into_km()<<endl;
                        caller_LL.insert_at_tail(caller.miles_into_km());
                        break;

                    }
                case 3:
                    {
                        double a;
                        file<<"CM=Inch*2.54=";
                        cout<<"Enter Inch: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*"<<"2.54=";
                        cout<<"cm="<<caller.inch_into_cm();
                        file<<caller.inch_into_cm()<<endl;
                        caller_LL.insert_at_tail(caller.inch_into_cm());
                        break;
                    }
                case 4:
                    {
                        double a;
                        file<<"Inch=cm*0.393701=";
                        cout<<"Enter cm: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*"<<"0.393701=";
                        cout<<"Inch="<<caller.cm_into_inch();
                        file<<caller.cm_into_inch()<<endl;
                        caller_LL.insert_at_tail(caller.cm_into_inch());
                        break;
                    }
                case 5:
                    {
                        double a;
                        file<<"Meters=Inch*0.3048=";
                        cout<<"Enter Foot: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*"<<"0.3048=";
                        cout<<"Meters="<<caller.foot_into_m();
                        file<<caller.foot_into_m()<<endl;
                        caller_LL.insert_at_tail(caller.foot_into_m());
                        break;
                    }
                case 6:
                    {
                        double a;
                        file<<"Foot=Meters*3.28084=";
                        cout<<"Enter Meters: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*"<<"3.28084=";
                        cout<<"Foot="<<caller.m_into_foot();
                        file<<caller.m_into_foot()<<endl;
                        caller_LL.insert_at_tail(caller.m_into_foot());
                        break;
                    }
                case 7:
                    {
                        double a;
                        file<<"Grams=Pounds*453.592=";
                        cout<<"Enter Pounds: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*"<<"453.592=";
                        cout<<"Grams="<<caller.pound_into_grams();
                        file<<caller.pound_into_grams()<<endl;
                        caller_LL.insert_at_tail(caller.pound_into_grams());
                        break;
                    }
                case 8:
                    {
                        double a;
                        file<<"Grams=Ounces*28.3495=";
                        cout<<"Enter Ounces: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*"<<"28.3495=";
                        cout<<"Grams="<<caller.ounce_into_grams();
                        file<<caller.ounce_into_grams()<<endl;
                        caller_LL.insert_at_tail(caller.ounce_into_grams());
                        break;
                    }
                case 9:
                    {
                        double a;
                        file<<"Liters=Gallons*3.78541=";
                        cout<<"Enter Gallons: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a;
                        file<<"*"<<"3.78541=";
                        cout<<"Liters="<<caller.gallon_into_liter();
                        file<<caller.gallon_into_liter()<<endl;
                        caller_LL.insert_at_tail(caller.gallon_into_liter());
                        break;
                    }
                case 10:
                    {
                        double a;
                        file<<"Celsius=Fahrenheit-32*5/9=";
                        cout<<"Enter Fahrenheit: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a;
                        file<<"-32*5/9=";
                        cout<<"Celsius="<<caller.fahrenheit_into_celsius();
                        file<<caller.fahrenheit_into_celsius()<<endl;
                        caller_LL.insert_at_tail(caller.fahrenheit_into_celsius());
                        break;
                    }
                case 11:
                    {
                        double a;
                        file<<"Fahrenheit=";
                        file<<"(Celsius*9/5)+32=";
                        cout<<"Enter Celsius: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<"(";
                        file<<a;
                        file<<"*9/5)+32=";
                        cout<<"Fahrenheit="<<caller.celsius_into_fahrenheit();
                        file<<caller.celsius_into_fahrenheit()<<endl;
                        caller_LL.insert_at_tail(caller.celsius_into_fahrenheit());
                        break;
                    }
                default:
                    {
                        cout<<"Error! Enter a valid command!"<<endl;
                        break;
                    }
                    file.close();
                    break;
            }
            break;
        }
    case 6:
        {
            file.open("D:/History.txt");
            string str;
            //file1.read("C:/Project/Casefile.txt");
            if(file.is_open())
            {
                cout<<endl;
                while(!file.eof())
                {
                    getline(file,str);
                    cout<<str<<endl;
                }
            }
            file.close();
            break;
        }
    case 7:
        {
            file.open("D:/History.txt",std::ofstream::out | std::ofstream::trunc);
            cout<<"Contents in File Deleted";
            file.close();
            break;
        }
    case 8:
        {
            caller_LL.print();
            break;
        }
    case 9:
        {
            /**delete at head**/
            caller_LL.delete_at_head();
            break;
        }
    case 10:
        {
            /**delete at tail**/
            caller_LL.delete_at_tail();
            break;
        }
    case 11:
        {
            /**delete at node number**/
            int no;
            cout<<"Enter Number to delete Node after that: ";
            cin>>no;
            caller_LL.delete_after(no);
            break;
        }
    case 12:
        {
            while(1){
            char a;
            cout<<"Goto Data Structures Menu (Y/N): ";
            cin>>a;
            if(a=='y'||a=='Y')
            {
                system("cls");
                goto data_structures_menu;
                break;
            }
            else if(a=='n'||a=='N')
            {
                goto exit;
            }
            else
            {
                cout<<"Error! Enter a valid command!"<<endl;
            }
            }//while
        }
    case 13:
        {
            cout<<"Bubye! Take care";
            file.close();
            exit(0);
        }

    default:
        {
            cout<<"Error! Enter a valid command!"<<endl;
            break;
        }
    }

} //while loop
        }

    case 2:
        {
            stack caller_s;
            system("cls");
            while(1){
    system("color 4e");
    ///Displaying date and time
    time_t timev;
    time(&timev);
    cout<<"\n"<<"\t\t\t    Time: "<<ctime(&timev);
    ///Displaying time end///
            /**for stacks**/
            fstream file;
            calculator caller;
    cout<<endl<<"\t\t\t ___________________________________"<<endl;
    cout<<"\t\t\t|____________Toolbox V1.0___________|"<<endl;
    cout<<"\t\t\t|___________________________________|"<<endl;
    cout<<"\t\t\t|1: Arithmetic Calculator           |"<<endl;
    cout<<"\t\t\t|2: Statistics Calculator           |"<<endl;
    cout<<"\t\t\t|3: Scientific Calculator           |"<<endl;
    cout<<"\t\t\t|4: Physics Calculator              |"<<endl;
    cout<<"\t\t\t|5: Unit Converter                  |"<<endl;
    cout<<"\t\t\t|___________________________________|"<<endl;
    cout<<"\t\t\t|6: View History                    |"<<endl;
    cout<<"\t\t\t|7: Delete History                  |"<<endl;
    cout<<"\t\t\t|8: Display Stack                   |"<<endl;
    cout<<"\t\t\t|9: Pop from Stack                  |"<<endl;
    cout<<"\t\t\t|10: Goto Data Structures Menu      |"<<endl;
    cout<<"\t\t\t|11: Exit                           |"<<endl;
    cout<<"\t\t\t|___________________________________|"<<endl;
    cout<<"\t\t\t       Enter Your Command: ";
    int option;
    cin>>option;
    cout<<"\t\t\t|___________________________________|"<<endl;
    switch(option)
    {
    case 1:
        {
            file.open("D:/History.txt",std::fstream::out|std::fstream::app);
            int nested_option;
            cout<<"1: Addition"<<endl;
            cout<<"2: Difference"<<endl;
            cout<<"3: Product"<<endl;
            cout<<"4: Division"<<endl;
            cout<<"Enter Your Command: ";
            cin>>nested_option;
            switch(nested_option)
            {
                case 1:
                    {
                        double a,b;
                        cout<<"Enter 1st No.: ";
                        cin>>a;
                        file<<a;
                        caller.set_num1(a);
                        cout<<"Enter 2nd No.: ";
                        cin>>b;
                        file<<"+";
                        file<<b;
                        file<<"=";
                        caller.set_num2(b);
                        cout<<"Result: "<<caller.sum();
                        file<<caller.sum()<<endl;
                        caller_s.push(caller.sum());
                        cout<<endl;
                        break;
                    }
                case 2:
                    {
                        double a,b;
                        cout<<"Enter 1st No.: ";
                        cin>>a;
                        file<<a;
                        caller.set_num1(a);
                        cout<<"Enter 2nd No.: ";
                        cin>>b;
                        file<<"-";
                        file<<b;
                        file<<"=";
                        caller.set_num2(b);
                        cout<<"Result: "<<caller.difference();
                        file<<caller.difference()<<endl;
                        caller_s.push(caller.difference());
                        break;
                    }
                case 3:
                    {
                        double a,b;
                        cout<<"Enter 1st No.: ";
                        cin>>a;
                        file<<a;
                        caller.set_num1(a);
                        cout<<"Enter 2nd No.: ";
                        cin>>b;
                        file<<"*";
                        file<<b;
                        file<<"=";
                        caller.set_num2(b);
                        cout<<"Result: "<<caller.multi();
                        file<<caller.multi()<<endl;
                        caller_s.push(caller.multi());
                        break;
                    }
                case 4:
                    {
                        double a,b;
                        cout<<"Enter 1st No.: ";
                        cin>>a;
                        file<<a;
                        caller.set_num1(a);
                        cout<<"Enter 2nd No.: ";
                        cin>>b;
                        file<<"/";
                        file<<b;
                        file<<"=";
                        caller.set_num2(b);
                        cout<<"Result: "<<caller.divide();
                        file<<caller.divide()<<endl;
                        caller_s.push(caller.divide());
                        break;
                    }
                    default:
                    {
                        cout<<"Error! Enter a valid command!"<<endl;
                        break;
                    }
                    file.close();
                    break;
            }
            break;
        }
    case 2:
        {
            file.open("D:/History.txt",std::fstream::out|std::fstream::app);
            file.close();
         break;
        }
    case 3:
        {
            file.open("D:/History.txt",std::fstream::out|std::fstream::app);
            int nested_option;
            cout<<"1: Sin"<<endl;
            cout<<"2: Cosine"<<endl;
            cout<<"3: Tangent"<<endl;
            cout<<"4: Sin Hyperbolic"<<endl;
            cout<<"5: Cosine Hyperbolic"<<endl;
            cout<<"6: Tangent Hyperbolic"<<endl;
            cout<<"7: Square Root"<<endl;
            cout<<"8: Power"<<endl;
            cout<<"9: Matrix Addition"<<endl;
            cout<<"10: Matrix Subtraction"<<endl;
            cout<<"Enter Your Command: ";
            cin>>nested_option;
            switch(nested_option)
            {
                case 1:
                    {
                        double a;
                        cout<<"Enter No.: ";
                        cin>>a;
                        file<<"Sin("<<a<<")=";
                        caller.set_num1(a);
                        cout<<caller.sine();
                        file<<caller.sine()<<endl;
                        caller_s.push(caller.sine());
                        break;
                    }
                case 2:
                    {
                        double a;
                        cout<<"Enter No.: ";
                        cin>>a;
                        file<<"Cos("<<a<<")=";
                        caller.set_num1(a);
                        cout<<caller.cosine();
                        file<<caller.cosine()<<endl;
                        caller_s.push(caller.cosine());
                        break;
                    }
                case 3:
                {
                        double a;
                        cout<<"Enter No.: ";
                        cin>>a;
                        file<<"Tan("<<a<<")=";
                        caller.set_num1(a);
                        cout<<caller.tangent();
                        file<<caller.tangent()<<endl;
                        caller_s.push(caller.tangent());
                        break;
                }
                case 4:
                {
                        double a;
                        cout<<"Enter No.: ";
                        cin>>a;
                        file<<"Sinh("<<a<<")=";
                        caller.set_num1(a);
                        cout<<caller.sine_h();
                        file<<caller.sine_h()<<endl;
                        caller_s.push(caller.sine_h());
                        break;
                }
                case 5:
                {
                        double a;
                        cout<<"Enter No.: ";
                        cin>>a;
                        file<<"Cosh("<<a<<")=";
                        caller.set_num1(a);
                        cout<<caller.cosine_h();
                        file<<caller.cosine_h()<<endl;
                        caller_s.push(caller.cosine_h());
                        break;
                }
                case 6:
                {
                        double a;
                        cout<<"Enter No.: ";
                        cin>>a;
                        file<<"Tanh("<<a<<")=";
                        caller.set_num1(a);
                        cout<<caller.tangent_h();
                        file<<caller.tangent_h()<<endl;
                        caller_s.push(caller.tangent_h());
                        break;
                }
                case 7:
                {
                        double a;
                        cout<<"Enter No.: ";
                        cin>>a;
                        file<<"Sqrt("<<a<<")=";
                        caller.set_num1(a);
                        cout<<caller.square_root();
                        file<<caller.square_root()<<endl;
                        caller_s.push(caller.square_root());
                        break;
                }
                case 8:
                {
                        double a;
                        double exp;
                        cout<<"Enter No.: ";
                        cin>>a;
                        caller.set_num1(a);
                        cout<<"Enter Exponent: ";
                        cin>>exp;
                        file<<a<<"^"<<exp<<"=";
                        caller.set_num2(exp);
                        cout<<caller.power();
                        file<<caller.power()<<endl;
                        caller_s.push(caller.power());
                        break;
                }
                case 9:
                {
                        caller.matrix_addition();
                        //caller_s.push(caller.matrix_addition());
                        break;
                }
                case 10:
                {
                        caller.matrix_subtraction();
                        //caller_s.push(caller.matrix_subtraction());
                        break;
                }
                default:
                {
                        cout<<"Error! Enter a valid command!"<<endl;
                        break;
                }
            }
            file.close();
            break;
        }
    case 4:
        {
            file.open("D:/History.txt",std::fstream::out|std::fstream::app);
            int nested_option;
            cout<<"1: Force"<<endl;
            cout<<"2: Weight"<<endl;
            cout<<"3: Density"<<endl;
            cout<<"4: Moment of Force"<<endl;
            cout<<"5: Power"<<endl;
            cout<<"6: Work Done"<<endl;
            cout<<"7: Pressure"<<endl;
            cout<<"8: Acceleration"<<endl;
            cout<<"9: Average Speed"<<endl;
            cout<<"10: Velocity"<<endl;
            cout<<"11: Average Velocity"<<endl;
            cout<<"12: Wave Velocity"<<endl;
            cout<<"13: Wave Frequency"<<endl;
            cout<<"14: Gravitational Potential Energy"<<endl;
            cout<<"Enter Your Command: ";
            cin>>nested_option;
            switch(nested_option)
            {
                case 1:
                    {
                        double a,b;
                        file<<"mass*acceleration=";
                        cout<<"Enter Mass: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*";
                        cout<<"Enter Acceleration: ";
                        cin>>b;
                        caller.set_num2(b);
                        file<<b<<"=";
                        cout<<"Force: ";
                        cout<<caller.force();
                        file<<caller.force()<<endl;
                        caller_s.push(caller.force());
                        break;
                    }
                case 2:
                    {
                        double a;
                        file<<"Mass*Gravity=";
                        cout<<"Enter Mass: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*"<<"9.81"<<"=";
                        cout<<"Weight: ";
                        cout<<caller.weight();
                        file<<caller.weight()<<endl;
                        caller_s.push(caller.weight());
                        break;
                    }
                case 3:
                    {
                        double a,b;
                        file<<"mass/volume=";
                        cout<<"Enter Mass: ";
                        cin>>a;
                        file<<a<<"/";
                        caller.set_num1(a);
                        cout<<"Enter Volume: ";
                        cin>>b;
                        file<<b<<"=";
                        caller.set_num2(b);
                        cout<<"Density: ";
                        cout<<caller.density();
                        file<<caller.density()<<endl;
                        caller_s.push(caller.density());
                        break;
                    }
                case 4:
                    {
                        double a,b;
                        file<<"moment of force=force*distance=";
                        cout<<"Enter Force: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*";
                        cout<<"Enter Distance: ";
                        cin>>b;
                        caller.set_num2(b);
                        file<<b<<"=";
                        cout<<"Moment of Force: ";
                        cout<<caller.moment_of_force();
                        file<<caller.moment_of_force()<<endl;
                        caller_s.push(caller.moment_of_force());
                        break;
                    }
                case 5:
                    {
                        double a,b;
                        file<<"Power=Work Done/Time=";
                        cout<<"Enter Work Done: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"/";
                        cout<<"Enter Time: ";
                        cin>>b;
                        caller.set_num2(b);
                        file<<b<<"=";
                        cout<<"Power: ";
                        cout<<caller.power_physics();
                        file<<caller.power_physics()<<endl;
                        caller_s.push(caller.power_physics());
                        break;
                    }
                case 6:
                    {
                        double a,b;
                        file<<"Work Done=Force*Distance=";
                        cout<<"Enter Force: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*";
                        cout<<"Enter Distance: ";
                        cin>>b;
                        caller.set_num2(b);
                        file<<b<<"=";
                        cout<<"Work Done: ";
                        cout<<caller.work_done();
                        file<<caller.work_done()<<endl;
                        caller_s.push(caller.work_done());
                        break;
                    }
                case 7:
                    {
                        double a,b;
                        file<<"Pressure=Force/Area=";
                        cout<<"Enter Force: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"/";
                        cout<<"Enter Area: ";
                        cin>>b;
                        caller.set_num2(b);
                        file<<b<<"=";
                        cout<<"Pressure: ";
                        cout<<caller.pressure();
                        file<<caller.pressure()<<endl;
                        caller_s.push(caller.pressure());
                        break;
                    }
                case 8:
                    {
                        double a,b;
                        file<<"Acceleration=Velocity/Time=";
                        cout<<"Enter Velocity: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"/";
                        cout<<"Enter Time: ";
                        cin>>b;
                        caller.set_num2(b);
                        file<<b<<"=";
                        cout<<"Acceleration: ";
                        cout<<caller.acceleration();
                        file<<caller.acceleration()<<endl;
                        caller_s.push(caller.acceleration());
                        break;
                    }
                case 9:
                    {
                        double a,b,c,d;
                        file<<"Average Speed=D2-D1/T2-T1=";
                        cout<<"Enter Initial Distance: ";
                        cin>>a;
                        caller.set_num1(a);
                        cout<<"Enter Final Distance: ";
                        cin>>b;
                        caller.set_num2(b);
                        file<<b<<"-"<<a<<"/";
                        cout<<"Enter Initial Time: ";
                        cin>>c;
                        caller.set_num3(c);
                        cout<<"Enter Final Time: ";
                        cin>>d;
                        caller.set_num4(d);
                        file<<d<<"-"<<c<<"=";
                        cout<<"Average Speed: ";
                        cout<<caller.avg_speed();
                        file<<caller.avg_speed()<<endl;
                        caller_s.push(caller.avg_speed());
                        break;
                    }
                case 10:
                    {
                        double a,b;
                        file<<"Velocity=Displacement/Time=";
                        cout<<"Enter Displacement: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"/";
                        cout<<"Enter Time: ";
                        cin>>b;
                        caller.set_num2(b);
                        file<<b<<"=";
                        cout<<"Velocity: ";
                        cout<<caller.velocity();
                        file<<caller.velocity()<<endl;
                        caller_s.push(caller.velocity());
                        break;
                    }
                case 11:
                    {
                        double a,b,c,d;
                        file<<"Average Velocity=D2-D1/T2-T1=";
                        cout<<"Enter Initial Displacement: ";
                        cin>>a;
                        caller.set_num1(a);
                        cout<<"Enter Final Displacement: ";
                        cin>>b;
                        caller.set_num2(b);
                        file<<b<<"-"<<a<<"/";
                        cout<<"Enter Initial Time: ";
                        cin>>c;
                        caller.set_num3(c);
                        cout<<"Enter Final Time: ";
                        cin>>d;
                        caller.set_num4(d);
                        file<<d<<"-"<<c<<"=";
                        cout<<"Average Velocity: ";
                        cout<<caller.avg_velocity();
                        file<<caller.avg_velocity()<<endl;
                        caller_s.push(caller.velocity());
                        break;
                    }
                case 12:
                    {
                        double a,b;
                        file<<"Wave Velocity=Frequency*Wavelength=";
                        cout<<"Enter Frequency: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*";
                        cout<<"Enter Wavelength: ";
                        cin>>b;
                        caller.set_num2(b);
                        file<<b<<"=";
                        cout<<"Wave Velocity: ";
                        cout<<caller.wave_velocity();
                        file<<caller.wave_velocity()<<endl;
                        caller_s.push(caller.wave_velocity());
                        break;
                    }
                case 13:
                    {
                        double a;
                        file<<"Wave Frequency=1/Time Period=";
                        cout<<"Enter Time Period: ";
                        cin>>a;
                        file<<"1/"<<a<<"=";
                        caller.set_num1(a);
                        cout<<"Wave Frequency: ";
                        cout<<caller.wave_frequency();
                        file<<caller.wave_frequency()<<endl;
                        caller_s.push(caller.wave_frequency());
                        break;
                    }
                case 14:
                    {
                        double a,b;
                        file<<"Gravitational Potential Energy=Mass*Height*Gravity=";
                        cout<<"Enter Mass: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*";
                        cout<<"Enter Height: ";
                        cin>>b;
                        caller.set_num2(b);
                        file<<b<<"*9.81"<<"=";
                        cout<<"Gravitational Potential Energy: ";
                        cout<<caller.gravitational_potential_energy();
                        file<<caller.gravitational_potential_energy()<<endl;
                        caller_s.push(caller.gravitational_potential_energy());
                        break;
                    }
                default:
                    {
                        cout<<"Error! Enter a valid command!"<<endl;
                        break;
                    }

                break;
        }
        file.close();
        break;
        }
    case 5:
        {
            file.open("D:/History.txt",std::fstream::out|std::fstream::app);
            int nested_option;
            cout<<"1: KM into Miles"<<endl;
            cout<<"2: Miles into KM"<<endl;
            cout<<"3: Inch Into cm"<<endl;
            cout<<"4: cm into Inch"<<endl;
            cout<<"5: Foot into Meters"<<endl;
            cout<<"6: Meters into Foot"<<endl;
            cout<<"7: Pound into Grams"<<endl;
            cout<<"8: Ounce into Grams"<<endl;
            cout<<"9: Gallons into Liters"<<endl;
            cout<<"10: Fahrenheit into Celsius"<<endl;
            cout<<"11: Celsius into Fahrenheit"<<endl;
            cout<<"Enter Your Command: ";
            cin>>nested_option;
            switch(nested_option)
            {
                case 1:
                    {
                        double a;
                        file<<"Miles=KM*0.621371=";
                        cout<<"Enter KM: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*"<<"0.621371=";
                        cout<<"Miles="<<caller.km_into_miles();
                        file<<caller.km_into_miles()<<endl;
                        caller_s.push(caller.km_into_miles());
                        break;
                    }
                case 2:
                    {
                        double a;
                        file<<"KM=Miles*1.60934=";
                        cout<<"Enter Miles: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*"<<"1.60934=";
                        cout<<"KM="<<caller.miles_into_km();
                        file<<caller.miles_into_km()<<endl;
                        caller_s.push(caller.miles_into_km());
                        break;

                    }
                case 3:
                    {
                        double a;
                        file<<"CM=Inch*2.54=";
                        cout<<"Enter Inch: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*"<<"2.54=";
                        cout<<"cm="<<caller.inch_into_cm();
                        file<<caller.inch_into_cm()<<endl;
                        caller_s.push(caller.inch_into_cm());
                        break;
                    }
                case 4:
                    {
                        double a;
                        file<<"Inch=cm*0.393701=";
                        cout<<"Enter cm: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*"<<"0.393701=";
                        cout<<"Inch="<<caller.cm_into_inch();
                        file<<caller.cm_into_inch()<<endl;
                        caller_s.push(caller.cm_into_inch());
                        break;
                    }
                case 5:
                    {
                        double a;
                        file<<"Meters=Inch*0.3048=";
                        cout<<"Enter Foot: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*"<<"0.3048=";
                        cout<<"Meters="<<caller.foot_into_m();
                        file<<caller.foot_into_m()<<endl;
                        caller_s.push(caller.foot_into_m());
                        break;
                    }
                case 6:
                    {
                        double a;
                        file<<"Foot=Meters*3.28084=";
                        cout<<"Enter Meters: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*"<<"3.28084=";
                        cout<<"Foot="<<caller.m_into_foot();
                        file<<caller.m_into_foot()<<endl;
                        caller_s.push(caller.m_into_foot());
                        break;
                    }
                case 7:
                    {
                        double a;
                        file<<"Grams=Pounds*453.592=";
                        cout<<"Enter Pounds: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*"<<"453.592=";
                        cout<<"Grams="<<caller.pound_into_grams();
                        file<<caller.pound_into_grams()<<endl;
                        caller_s.push(caller.pound_into_grams());
                        break;
                    }
                case 8:
                    {
                        double a;
                        file<<"Grams=Ounces*28.3495=";
                        cout<<"Enter Ounces: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*"<<"28.3495=";
                        cout<<"Grams="<<caller.ounce_into_grams();
                        file<<caller.ounce_into_grams()<<endl;
                        caller_s.push(caller.ounce_into_grams());
                        break;
                    }
                case 9:
                    {
                        double a;
                        file<<"Liters=Gallons*3.78541=";
                        cout<<"Enter Gallons: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a;
                        file<<"*"<<"3.78541=";
                        cout<<"Liters="<<caller.gallon_into_liter();
                        file<<caller.gallon_into_liter()<<endl;
                        caller_s.push(caller.gallon_into_liter());
                        break;
                    }
                case 10:
                    {
                        double a;
                        file<<"Celsius=Fahrenheit-32*5/9=";
                        cout<<"Enter Fahrenheit: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a;
                        file<<"-32*5/9=";
                        cout<<"Celsius="<<caller.fahrenheit_into_celsius();
                        file<<caller.fahrenheit_into_celsius()<<endl;
                        caller_s.push(caller.fahrenheit_into_celsius());
                        break;
                    }
                case 11:
                    {
                        double a;
                        file<<"Fahrenheit=";
                        file<<"(Celsius*9/5)+32=";
                        cout<<"Enter Celsius: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<"(";
                        file<<a;
                        file<<"*9/5)+32=";
                        cout<<"Fahrenheit="<<caller.celsius_into_fahrenheit();
                        file<<caller.celsius_into_fahrenheit()<<endl;
                        caller_s.push(caller.celsius_into_fahrenheit());
                        break;
                    }
                default:
                    {
                        cout<<"Error! Enter a valid command!"<<endl;
                        break;
                    }
            }
            file.close();
            break;
        }
    case 6:
        {
            file.open("D:/History.txt");
            string str;
            //file1.read("C:/Project/Casefile.txt");
            if(file.is_open())
            {
                cout<<endl;
                while(!file.eof())
                {
                    getline(file,str);
                    cout<<str<<endl;
                }
            }
            file.close();
            break;
        }
    case 7:
        {
            file.open("D:/History.txt",std::ofstream::out | std::ofstream::trunc);
            cout<<"Contents in File Deleted";
            file.close();
            break;
        }
    case 8:
        {
            caller_s.display();
            break;
        }
    case 9:
        {
            caller_s.pop();
            break;
        }
    case 10:
        {
            while(1){
            char a;
            cout<<"Goto Data Structures Menu (Y/N): ";
            cin>>a;
            if(a=='y'||a=='Y')
            {
                system("cls");
                goto data_structures_menu;
                break;
            }
            else if(a=='n'||a=='N')
            {
                goto exit;
            }
            else
            {
                cout<<"Error! Enter a valid command!"<<endl;
            }
            }//while
        }
    case 11:
        {
            cout<<"Bubye! Take care";
            file.close();
            exit(0);
        }
    default:
        {
            cout<<"Error! Enter a valid command!"<<endl;
            break;
        }
    }
            } /**while**/
        }

    case 3:
        {
            /**for queues**/

            Queue caller_q;
            system("cls");
            while(1){
    system("color 4e");
    ///Displaying date and time
    time_t timev;
    time(&timev);
    cout<<"\n"<<"\t\t\t    Time: "<<ctime(&timev);
    ///Displaying time end///
            /**for stacks**/
            fstream file;
            calculator caller;
    cout<<endl<<"\t\t\t ___________________________________"<<endl;
    cout<<"\t\t\t|____________Toolbox V1.0___________|"<<endl;
    cout<<"\t\t\t|___________________________________|"<<endl;
    cout<<"\t\t\t|1: Arithmetic Calculator           |"<<endl;
    cout<<"\t\t\t|2: Statistics Calculator           |"<<endl;
    cout<<"\t\t\t|3: Scientific Calculator           |"<<endl;
    cout<<"\t\t\t|4: Physics Calculator              |"<<endl;
    cout<<"\t\t\t|5: Unit Converter                  |"<<endl;
    cout<<"\t\t\t|___________________________________|"<<endl;
    cout<<"\t\t\t|6: View History                    |"<<endl;
    cout<<"\t\t\t|7: Delete History                  |"<<endl;
    cout<<"\t\t\t|8: Display Queue                   |"<<endl;
    cout<<"\t\t\t|9: Dequeue (Delete From Queue)     |"<<endl;
    cout<<"\t\t\t|10: Goto Data Structures Menu      |"<<endl;
    cout<<"\t\t\t|11: Exit                           |"<<endl;
    cout<<"\t\t\t|___________________________________|"<<endl;
    cout<<"\t\t\t       Enter Your Command: ";
    int option;
    cin>>option;
    cout<<"\t\t\t|___________________________________|"<<endl;
    switch(option)
    {
    case 1:
        {
            file.open("D:/History.txt",std::fstream::out|std::fstream::app);
            int nested_option;
            cout<<"1: Addition"<<endl;
            cout<<"2: Difference"<<endl;
            cout<<"3: Product"<<endl;
            cout<<"4: Division"<<endl;
            cout<<"Enter Your Command: ";
            cin>>nested_option;
            switch(nested_option)
            {
                case 1:
                    {
                        double a,b;
                        cout<<"Enter 1st No.: ";
                        cin>>a;
                        file<<a;
                        caller.set_num1(a);
                        cout<<"Enter 2nd No.: ";
                        cin>>b;
                        file<<"+";
                        file<<b;
                        file<<"=";
                        caller.set_num2(b);
                        cout<<"Result: "<<caller.sum();
                        file<<caller.sum()<<endl;
                        caller_q.n_queue(caller.sum());
                        cout<<endl;
                        break;
                    }
                case 2:
                    {
                        double a,b;
                        cout<<"Enter 1st No.: ";
                        cin>>a;
                        file<<a;
                        caller.set_num1(a);
                        cout<<"Enter 2nd No.: ";
                        cin>>b;
                        file<<"-";
                        file<<b;
                        file<<"=";
                        caller.set_num2(b);
                        cout<<"Result: "<<caller.difference();
                        file<<caller.difference()<<endl;
                        caller_q.n_queue(caller.difference());
                        break;
                    }
                case 3:
                    {
                        double a,b;
                        cout<<"Enter 1st No.: ";
                        cin>>a;
                        file<<a;
                        caller.set_num1(a);
                        cout<<"Enter 2nd No.: ";
                        cin>>b;
                        file<<"*";
                        file<<b;
                        file<<"=";
                        caller.set_num2(b);
                        cout<<"Result: "<<caller.multi();
                        file<<caller.multi()<<endl;
                        caller_q.n_queue(caller.multi());
                        break;
                    }
                case 4:
                    {
                        double a,b;
                        cout<<"Enter 1st No.: ";
                        cin>>a;
                        file<<a;
                        caller.set_num1(a);
                        cout<<"Enter 2nd No.: ";
                        cin>>b;
                        file<<"/";
                        file<<b;
                        file<<"=";
                        caller.set_num2(b);
                        cout<<"Result: "<<caller.divide();
                        file<<caller.divide()<<endl;
                        caller_q.n_queue(caller.divide());
                        break;
                    }
                    default:
                    {
                        cout<<"Error! Enter a valid command!"<<endl;
                        break;
                    }
                    file.close();
                    break;
            }
        }
    case 2:
        {
            file.open("D:/History.txt",std::fstream::out|std::fstream::app);
            file.close();
         break;
        }
    case 3:
        {
            file.open("D:/History.txt",std::fstream::out|std::fstream::app);
            int nested_option;
            cout<<"1: Sin"<<endl;
            cout<<"2: Cosine"<<endl;
            cout<<"3: Tangent"<<endl;
            cout<<"4: Sin Hyperbolic"<<endl;
            cout<<"5: Cosine Hyperbolic"<<endl;
            cout<<"6: Tangent Hyperbolic"<<endl;
            cout<<"7: Square Root"<<endl;
            cout<<"8: Power"<<endl;
            cout<<"9: Matrix Addition"<<endl;
            cout<<"10: Matrix Subtraction"<<endl;
            cout<<"Enter Your Command: ";
            cin>>nested_option;
            switch(nested_option)
            {
                case 1:
                    {
                        double a;
                        cout<<"Enter No.: ";
                        cin>>a;
                        file<<"Sin("<<a<<")=";
                        caller.set_num1(a);
                        cout<<caller.sine();
                        file<<caller.sine()<<endl;
                        caller_q.n_queue(caller.sine());
                        break;
                    }
                case 2:
                    {
                        double a;
                        cout<<"Enter No.: ";
                        cin>>a;
                        file<<"Cos("<<a<<")=";
                        caller.set_num1(a);
                        cout<<caller.cosine();
                        file<<caller.cosine()<<endl;
                        caller_q.n_queue(caller.cosine());
                        break;
                    }
                case 3:
                {
                        double a;
                        cout<<"Enter No.: ";
                        cin>>a;
                        file<<"Tan("<<a<<")=";
                        caller.set_num1(a);
                        cout<<caller.tangent();
                        file<<caller.tangent()<<endl;
                        caller_q.n_queue(caller.tangent());
                        break;
                }
                case 4:
                {
                        double a;
                        cout<<"Enter No.: ";
                        cin>>a;
                        file<<"Sinh("<<a<<")=";
                        caller.set_num1(a);
                        cout<<caller.sine_h();
                        file<<caller.sine_h()<<endl;
                        caller_q.n_queue(caller.sine_h());
                        break;
                }
                case 5:
                {
                        double a;
                        cout<<"Enter No.: ";
                        cin>>a;
                        file<<"Cosh("<<a<<")=";
                        caller.set_num1(a);
                        cout<<caller.cosine_h();
                        file<<caller.cosine_h()<<endl;
                        caller_q.n_queue(caller.cosine_h());
                        break;
                }
                case 6:
                {
                        double a;
                        cout<<"Enter No.: ";
                        cin>>a;
                        file<<"Tanh("<<a<<")=";
                        caller.set_num1(a);
                        cout<<caller.tangent_h();
                        file<<caller.tangent_h()<<endl;
                        caller_q.n_queue(caller.tangent_h());
                        break;
                }
                case 7:
                {
                        double a;
                        cout<<"Enter No.: ";
                        cin>>a;
                        file<<"Sqrt("<<a<<")=";
                        caller.set_num1(a);
                        cout<<caller.square_root();
                        file<<caller.square_root()<<endl;
                        caller_q.n_queue(caller.square_root());
                        break;
                }
                case 8:
                {
                        double a;
                        double exp;
                        cout<<"Enter No.: ";
                        cin>>a;
                        caller.set_num1(a);
                        cout<<"Enter Exponent: ";
                        cin>>exp;
                        file<<a<<"^"<<exp<<"=";
                        caller.set_num2(exp);
                        cout<<caller.power();
                        file<<caller.power()<<endl;
                        caller_q.n_queue(caller.power());
                        break;
                }
                case 9:
                {
                        caller.matrix_addition();
                        //caller_s.push(caller.matrix_addition());
                        break;
                }
                case 10:
                {
                        caller.matrix_subtraction();
                        //caller_s.push(caller.matrix_subtraction());
                        break;
                }
                default:
                {
                        cout<<"Error! Enter a valid command!"<<endl;
                        break;
                }
            }
            file.close();
            break;
        }
    case 4:
        {
            file.open("D:/History.txt",std::fstream::out|std::fstream::app);
            int nested_option;
            cout<<"1: Force"<<endl;
            cout<<"2: Weight"<<endl;
            cout<<"3: Density"<<endl;
            cout<<"4: Moment of Force"<<endl;
            cout<<"5: Power"<<endl;
            cout<<"6: Work Done"<<endl;
            cout<<"7: Pressure"<<endl;
            cout<<"8: Acceleration"<<endl;
            cout<<"9: Average Speed"<<endl;
            cout<<"10: Velocity"<<endl;
            cout<<"11: Average Velocity"<<endl;
            cout<<"12: Wave Velocity"<<endl;
            cout<<"13: Wave Frequency"<<endl;
            cout<<"14: Gravitational Potential Energy"<<endl;
            cout<<"Enter Your Command: ";
            cin>>nested_option;
            switch(nested_option)
            {
                case 1:
                    {
                        double a,b;
                        file<<"mass*acceleration=";
                        cout<<"Enter Mass: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*";
                        cout<<"Enter Acceleration: ";
                        cin>>b;
                        caller.set_num2(b);
                        file<<b<<"=";
                        cout<<"Force: ";
                        cout<<caller.force();
                        file<<caller.force()<<endl;
                        caller_q.n_queue(caller.force());
                        break;
                    }
                case 2:
                    {
                        double a;
                        file<<"Mass*Gravity=";
                        cout<<"Enter Mass: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*"<<"9.81"<<"=";
                        cout<<"Weight: ";
                        cout<<caller.weight();
                        file<<caller.weight()<<endl;
                        caller_q.n_queue(caller.weight());
                        break;
                    }
                case 3:
                    {
                        double a,b;
                        file<<"mass/volume=";
                        cout<<"Enter Mass: ";
                        cin>>a;
                        file<<a<<"/";
                        caller.set_num1(a);
                        cout<<"Enter Volume: ";
                        cin>>b;
                        file<<b<<"=";
                        caller.set_num2(b);
                        cout<<"Density: ";
                        cout<<caller.density();
                        file<<caller.density()<<endl;
                        caller_q.n_queue(caller.density());
                        break;
                    }
                case 4:
                    {
                        double a,b;
                        file<<"moment of force=force*distance=";
                        cout<<"Enter Force: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*";
                        cout<<"Enter Distance: ";
                        cin>>b;
                        caller.set_num2(b);
                        file<<b<<"=";
                        cout<<"Moment of Force: ";
                        cout<<caller.moment_of_force();
                        file<<caller.moment_of_force()<<endl;
                        caller_q.n_queue(caller.moment_of_force());
                        break;
                    }
                case 5:
                    {
                        double a,b;
                        file<<"Power=Work Done/Time=";
                        cout<<"Enter Work Done: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"/";
                        cout<<"Enter Time: ";
                        cin>>b;
                        caller.set_num2(b);
                        file<<b<<"=";
                        cout<<"Power: ";
                        cout<<caller.power_physics();
                        file<<caller.power_physics()<<endl;
                        caller_q.n_queue(caller.power_physics());
                        break;
                    }
                case 6:
                    {
                        double a,b;
                        file<<"Work Done=Force*Distance=";
                        cout<<"Enter Force: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*";
                        cout<<"Enter Distance: ";
                        cin>>b;
                        caller.set_num2(b);
                        file<<b<<"=";
                        cout<<"Work Done: ";
                        cout<<caller.work_done();
                        file<<caller.work_done()<<endl;
                        caller_q.n_queue(caller.work_done());
                        break;
                    }
                case 7:
                    {
                        double a,b;
                        file<<"Pressure=Force/Area=";
                        cout<<"Enter Force: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"/";
                        cout<<"Enter Area: ";
                        cin>>b;
                        caller.set_num2(b);
                        file<<b<<"=";
                        cout<<"Pressure: ";
                        cout<<caller.pressure();
                        file<<caller.pressure()<<endl;
                        caller_q.n_queue(caller.pressure());
                        break;
                    }
                case 8:
                    {
                        double a,b;
                        file<<"Acceleration=Velocity/Time=";
                        cout<<"Enter Velocity: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"/";
                        cout<<"Enter Time: ";
                        cin>>b;
                        caller.set_num2(b);
                        file<<b<<"=";
                        cout<<"Acceleration: ";
                        cout<<caller.acceleration();
                        file<<caller.acceleration()<<endl;
                        caller_q.n_queue(caller.acceleration());
                        break;
                    }
                case 9:
                    {
                        double a,b,c,d;
                        file<<"Average Speed=D2-D1/T2-T1=";
                        cout<<"Enter Initial Distance: ";
                        cin>>a;
                        caller.set_num1(a);
                        cout<<"Enter Final Distance: ";
                        cin>>b;
                        caller.set_num2(b);
                        file<<b<<"-"<<a<<"/";
                        cout<<"Enter Initial Time: ";
                        cin>>c;
                        caller.set_num3(c);
                        cout<<"Enter Final Time: ";
                        cin>>d;
                        caller.set_num4(d);
                        file<<d<<"-"<<c<<"=";
                        cout<<"Average Speed: ";
                        cout<<caller.avg_speed();
                        file<<caller.avg_speed()<<endl;
                        caller_q.n_queue(caller.avg_speed());
                        break;
                    }
                case 10:
                    {
                        double a,b;
                        file<<"Velocity=Displacement/Time=";
                        cout<<"Enter Displacement: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"/";
                        cout<<"Enter Time: ";
                        cin>>b;
                        caller.set_num2(b);
                        file<<b<<"=";
                        cout<<"Velocity: ";
                        cout<<caller.velocity();
                        file<<caller.velocity()<<endl;
                        caller_q.n_queue(caller.velocity());
                        break;
                    }
                case 11:
                    {
                        double a,b,c,d;
                        file<<"Average Velocity=D2-D1/T2-T1=";
                        cout<<"Enter Initial Displacement: ";
                        cin>>a;
                        caller.set_num1(a);
                        cout<<"Enter Final Displacement: ";
                        cin>>b;
                        caller.set_num2(b);
                        file<<b<<"-"<<a<<"/";
                        cout<<"Enter Initial Time: ";
                        cin>>c;
                        caller.set_num3(c);
                        cout<<"Enter Final Time: ";
                        cin>>d;
                        caller.set_num4(d);
                        file<<d<<"-"<<c<<"=";
                        cout<<"Average Velocity: ";
                        cout<<caller.avg_velocity();
                        file<<caller.avg_velocity()<<endl;
                        caller_q.n_queue(caller.velocity());
                        break;
                    }
                case 12:
                    {
                        double a,b;
                        file<<"Wave Velocity=Frequency*Wavelength=";
                        cout<<"Enter Frequency: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*";
                        cout<<"Enter Wavelength: ";
                        cin>>b;
                        caller.set_num2(b);
                        file<<b<<"=";
                        cout<<"Wave Velocity: ";
                        cout<<caller.wave_velocity();
                        file<<caller.wave_velocity()<<endl;
                        caller_q.n_queue(caller.wave_velocity());
                        break;
                    }
                case 13:
                    {
                        double a;
                        file<<"Wave Frequency=1/Time Period=";
                        cout<<"Enter Time Period: ";
                        cin>>a;
                        file<<"1/"<<a<<"=";
                        caller.set_num1(a);
                        cout<<"Wave Frequency: ";
                        cout<<caller.wave_frequency();
                        file<<caller.wave_frequency()<<endl;
                        caller_q.n_queue(caller.wave_frequency());
                        break;
                    }
                case 14:
                    {
                        double a,b;
                        file<<"Gravitational Potential Energy=Mass*Height*Gravity=";
                        cout<<"Enter Mass: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*";
                        cout<<"Enter Height: ";
                        cin>>b;
                        caller.set_num2(b);
                        file<<b<<"*9.81"<<"=";
                        cout<<"Gravitational Potential Energy: ";
                        cout<<caller.gravitational_potential_energy();
                        file<<caller.gravitational_potential_energy()<<endl;
                        caller_q.n_queue(caller.gravitational_potential_energy());
                        break;
                    }
                default:
                    {
                        cout<<"Error! Enter a valid command!"<<endl;
                        break;
                    }

                break;
        }
        file.close();
        break;
        }
    case 5:
        {
            file.open("D:/History.txt",std::fstream::out|std::fstream::app);
            int nested_option;
            cout<<"1: KM into Miles"<<endl;
            cout<<"2: Miles into KM"<<endl;
            cout<<"3: Inch Into cm"<<endl;
            cout<<"4: cm into Inch"<<endl;
            cout<<"5: Foot into Meters"<<endl;
            cout<<"6: Meters into Foot"<<endl;
            cout<<"7: Pound into Grams"<<endl;
            cout<<"8: Ounce into Grams"<<endl;
            cout<<"9: Gallons into Liters"<<endl;
            cout<<"10: Fahrenheit into Celsius"<<endl;
            cout<<"11: Celsius into Fahrenheit"<<endl;
            cout<<"Enter Your Command: ";
            cin>>nested_option;
            switch(nested_option)
            {
                case 1:
                    {
                        double a;
                        file<<"Miles=KM*0.621371=";
                        cout<<"Enter KM: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*"<<"0.621371=";
                        cout<<"Miles="<<caller.km_into_miles();
                        file<<caller.km_into_miles()<<endl;
                        caller_q.n_queue(caller.km_into_miles());
                        break;
                    }
                case 2:
                    {
                        double a;
                        file<<"KM=Miles*1.60934=";
                        cout<<"Enter Miles: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*"<<"1.60934=";
                        cout<<"KM="<<caller.miles_into_km();
                        file<<caller.miles_into_km()<<endl;
                        caller_q.n_queue(caller.miles_into_km());
                        break;

                    }
                case 3:
                    {
                        double a;
                        file<<"CM=Inch*2.54=";
                        cout<<"Enter Inch: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*"<<"2.54=";
                        cout<<"cm="<<caller.inch_into_cm();
                        file<<caller.inch_into_cm()<<endl;
                        caller_q.n_queue(caller.inch_into_cm());
                        break;
                    }
                case 4:
                    {
                        double a;
                        file<<"Inch=cm*0.393701=";
                        cout<<"Enter cm: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*"<<"0.393701=";
                        cout<<"Inch="<<caller.cm_into_inch();
                        file<<caller.cm_into_inch()<<endl;
                        caller_q.n_queue(caller.cm_into_inch());
                        break;
                    }
                case 5:
                    {
                        double a;
                        file<<"Meters=Inch*0.3048=";
                        cout<<"Enter Foot: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*"<<"0.3048=";
                        cout<<"Meters="<<caller.foot_into_m();
                        file<<caller.foot_into_m()<<endl;
                        caller_q.n_queue(caller.foot_into_m());
                        break;
                    }
                case 6:
                    {
                        double a;
                        file<<"Foot=Meters*3.28084=";
                        cout<<"Enter Meters: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*"<<"3.28084=";
                        cout<<"Foot="<<caller.m_into_foot();
                        file<<caller.m_into_foot()<<endl;
                        caller_q.n_queue(caller.m_into_foot());
                        break;
                    }
                case 7:
                    {
                        double a;
                        file<<"Grams=Pounds*453.592=";
                        cout<<"Enter Pounds: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*"<<"453.592=";
                        cout<<"Grams="<<caller.pound_into_grams();
                        file<<caller.pound_into_grams()<<endl;
                        caller_q.n_queue(caller.pound_into_grams());
                        break;
                    }
                case 8:
                    {
                        double a;
                        file<<"Grams=Ounces*28.3495=";
                        cout<<"Enter Ounces: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*"<<"28.3495=";
                        cout<<"Grams="<<caller.ounce_into_grams();
                        file<<caller.ounce_into_grams()<<endl;
                        caller_q.n_queue(caller.ounce_into_grams());
                        break;
                    }
                case 9:
                    {
                        double a;
                        file<<"Liters=Gallons*3.78541=";
                        cout<<"Enter Gallons: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a;
                        file<<"*"<<"3.78541=";
                        cout<<"Liters="<<caller.gallon_into_liter();
                        file<<caller.gallon_into_liter()<<endl;
                        caller_q.n_queue(caller.gallon_into_liter());
                        break;
                    }
                case 10:
                    {
                        double a;
                        file<<"Celsius=Fahrenheit-32*5/9=";
                        cout<<"Enter Fahrenheit: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a;
                        file<<"-32*5/9=";
                        cout<<"Celsius="<<caller.fahrenheit_into_celsius();
                        file<<caller.fahrenheit_into_celsius()<<endl;
                        caller_q.n_queue(caller.fahrenheit_into_celsius());
                        break;
                    }
                case 11:
                    {
                        double a;
                        file<<"Fahrenheit=";
                        file<<"(Celsius*9/5)+32=";
                        cout<<"Enter Celsius: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<"(";
                        file<<a;
                        file<<"*9/5)+32=";
                        cout<<"Fahrenheit="<<caller.celsius_into_fahrenheit();
                        file<<caller.celsius_into_fahrenheit()<<endl;
                        caller_q.n_queue(caller.celsius_into_fahrenheit());
                        break;
                    }
                default:
                    {
                        cout<<"Error! Enter a valid command!"<<endl;
                        break;
                    }
            }
            file.close();
            break;
        }
    case 6:
        {
            file.open("D:/History.txt");
            string str;
            //file1.read("C:/Project/Casefile.txt");
            if(file.is_open())
            {
                cout<<endl;
                while(!file.eof())
                {
                    getline(file,str);
                    cout<<str<<endl;
                }
            }
            file.close();
            break;
        }
    case 7:
        {
            file.open("D:/History.txt",std::ofstream::out | std::ofstream::trunc);
            cout<<"Contents in File Deleted";
            file.close();
            break;
        }
    case 8:
        {
            caller_q.Display();
            break;
        }
    case 9:
        {
            caller_q.d_queue();
            break;
        }
    case 10:
        {
            while(1){
            char a;
            cout<<"Goto Data Structures Menu (Y/N): ";
            cin>>a;
            if(a=='y'||a=='Y')
            {
                system("cls");
                goto data_structures_menu;
                break;
            }
            else if(a=='n'||a=='N')
            {
                goto exit;
            }
            else
            {
                cout<<"Error! Enter a valid command!"<<endl;
            }
            }//while
        }

    case 11:
        {
            cout<<"Bubye! Take care";
            file.close();
            exit(0);
        }
    default:
        {
            cout<<"Error! Enter a valid command!"<<endl;
            break;
        }
    }
            } /**while**/
        }
    case 4:
        {
            /**for arraylist**/

            Myarraylist caller_a;
            system("cls");
            while(1){
    system("color 4e");
    ///Displaying date and time
    time_t timev;
    time(&timev);
    cout<<"\n"<<"\t\t\t    Time: "<<ctime(&timev);
    ///Displaying time end///
            /**for stacks**/
            fstream file;
            calculator caller;
    cout<<endl<<"\t\t\t ___________________________________"<<endl;
    cout<<"\t\t\t|____________Toolbox V1.0___________|"<<endl;
    cout<<"\t\t\t|___________________________________|"<<endl;
    cout<<"\t\t\t|1: Arithmetic Calculator           |"<<endl;
    cout<<"\t\t\t|2: Statistics Calculator           |"<<endl;
    cout<<"\t\t\t|3: Scientific Calculator           |"<<endl;
    cout<<"\t\t\t|4: Physics Calculator              |"<<endl;
    cout<<"\t\t\t|5: Unit Converter                  |"<<endl;
    cout<<"\t\t\t|___________________________________|"<<endl;
    cout<<"\t\t\t|6: View History                    |"<<endl;
    cout<<"\t\t\t|7: Delete History                  |"<<endl;
    cout<<"\t\t\t|8: Display Array                   |"<<endl;
    cout<<"\t\t\t|9: Delete from Begin               |"<<endl;
    cout<<"\t\t\t|10: Delete from End                |"<<endl;
    cout<<"\t\t\t|11: Delete from Index              |"<<endl;
    cout<<"\t\t\t|12: Goto Data Structures Menu      |"<<endl;
    cout<<"\t\t\t|13: Exit                           |"<<endl;
    cout<<"\t\t\t|___________________________________|"<<endl;
    cout<<"\t\t\t       Enter Your Command: ";
    int option;
    cin>>option;
    cout<<"\t\t\t|___________________________________|"<<endl;
    switch(option)
    {
    case 1:
        {
            file.open("D:/History.txt",std::fstream::out|std::fstream::app);
            int nested_option;
            cout<<"1: Addition"<<endl;
            cout<<"2: Difference"<<endl;
            cout<<"3: Product"<<endl;
            cout<<"4: Division"<<endl;
            cout<<"Enter Your Command: ";
            cin>>nested_option;
            switch(nested_option)
            {
                case 1:
                    {
                        double a,b;
                        cout<<"Enter 1st No.: ";
                        cin>>a;
                        file<<a;
                        caller.set_num1(a);
                        cout<<"Enter 2nd No.: ";
                        cin>>b;
                        file<<"+";
                        file<<b;
                        file<<"=";
                        caller.set_num2(b);
                        cout<<"Result: "<<caller.sum();
                        file<<caller.sum()<<endl;
                        caller_a.insert_at_end(caller.sum());
                        cout<<endl;
                        break;
                    }
                case 2:
                    {
                        double a,b;
                        cout<<"Enter 1st No.: ";
                        cin>>a;
                        file<<a;
                        caller.set_num1(a);
                        cout<<"Enter 2nd No.: ";
                        cin>>b;
                        file<<"-";
                        file<<b;
                        file<<"=";
                        caller.set_num2(b);
                        cout<<"Result: "<<caller.difference();
                        file<<caller.difference()<<endl;
                        caller_a.insert_at_end(caller.difference());
                        break;
                    }
                case 3:
                    {
                        double a,b;
                        cout<<"Enter 1st No.: ";
                        cin>>a;
                        file<<a;
                        caller.set_num1(a);
                        cout<<"Enter 2nd No.: ";
                        cin>>b;
                        file<<"*";
                        file<<b;
                        file<<"=";
                        caller.set_num2(b);
                        cout<<"Result: "<<caller.multi();
                        file<<caller.multi()<<endl;
                        caller_a.insert_at_end(caller.multi());
                        break;
                    }
                case 4:
                    {
                        double a,b;
                        cout<<"Enter 1st No.: ";
                        cin>>a;
                        file<<a;
                        caller.set_num1(a);
                        cout<<"Enter 2nd No.: ";
                        cin>>b;
                        file<<"/";
                        file<<b;
                        file<<"=";
                        caller.set_num2(b);
                        cout<<"Result: "<<caller.divide();
                        file<<caller.divide()<<endl;
                        caller_a.insert_at_end(caller.divide());
                        break;
                    }
                    default:
                    {
                        cout<<"Error! Enter a valid command!"<<endl;
                        break;
                    }
                    file.close();
                    break;
            }
        }
    case 2:
        {
            file.open("D:/History.txt",std::fstream::out|std::fstream::app);
            file.close();
         break;
        }
    case 3:
        {
            file.open("D:/History.txt",std::fstream::out|std::fstream::app);
            int nested_option;
            cout<<"1: Sin"<<endl;
            cout<<"2: Cosine"<<endl;
            cout<<"3: Tangent"<<endl;
            cout<<"4: Sin Hyperbolic"<<endl;
            cout<<"5: Cosine Hyperbolic"<<endl;
            cout<<"6: Tangent Hyperbolic"<<endl;
            cout<<"7: Square Root"<<endl;
            cout<<"8: Power"<<endl;
            cout<<"9: Matrix Addition"<<endl;
            cout<<"10: Matrix Subtraction"<<endl;
            cout<<"Enter Your Command: ";
            cin>>nested_option;
            switch(nested_option)
            {
                case 1:
                    {
                        double a;
                        cout<<"Enter No.: ";
                        cin>>a;
                        file<<"Sin("<<a<<")=";
                        caller.set_num1(a);
                        cout<<caller.sine();
                        file<<caller.sine()<<endl;
                        caller_a.insert_at_end(caller.sine());
                        break;
                    }
                case 2:
                    {
                        double a;
                        cout<<"Enter No.: ";
                        cin>>a;
                        file<<"Cos("<<a<<")=";
                        caller.set_num1(a);
                        cout<<caller.cosine();
                        file<<caller.cosine()<<endl;
                        caller_a.insert_at_end(caller.cosine());
                        break;
                    }
                case 3:
                {
                        double a;
                        cout<<"Enter No.: ";
                        cin>>a;
                        file<<"Tan("<<a<<")=";
                        caller.set_num1(a);
                        cout<<caller.tangent();
                        file<<caller.tangent()<<endl;
                        caller_a.insert_at_end(caller.tangent());
                        break;
                }
                case 4:
                {
                        double a;
                        cout<<"Enter No.: ";
                        cin>>a;
                        file<<"Sinh("<<a<<")=";
                        caller.set_num1(a);
                        cout<<caller.sine_h();
                        file<<caller.sine_h()<<endl;
                        caller_a.insert_at_end(caller.sine_h());
                        break;
                }
                case 5:
                {
                        double a;
                        cout<<"Enter No.: ";
                        cin>>a;
                        file<<"Cosh("<<a<<")=";
                        caller.set_num1(a);
                        cout<<caller.cosine_h();
                        file<<caller.cosine_h()<<endl;
                        caller_a.insert_at_end(caller.cosine_h());
                        break;
                }
                case 6:
                {
                        double a;
                        cout<<"Enter No.: ";
                        cin>>a;
                        file<<"Tanh("<<a<<")=";
                        caller.set_num1(a);
                        cout<<caller.tangent_h();
                        file<<caller.tangent_h()<<endl;
                        caller_a.insert_at_end(caller.tangent_h());
                        break;
                }
                case 7:
                {
                        double a;
                        cout<<"Enter No.: ";
                        cin>>a;
                        file<<"Sqrt("<<a<<")=";
                        caller.set_num1(a);
                        cout<<caller.square_root();
                        file<<caller.square_root()<<endl;
                        caller_a.insert_at_end(caller.square_root());
                        break;
                }
                case 8:
                {
                        double a;
                        double exp;
                        cout<<"Enter No.: ";
                        cin>>a;
                        caller.set_num1(a);
                        cout<<"Enter Exponent: ";
                        cin>>exp;
                        file<<a<<"^"<<exp<<"=";
                        caller.set_num2(exp);
                        cout<<caller.power();
                        file<<caller.power()<<endl;
                        caller_a.insert_at_end(caller.power());
                        break;
                }
                case 9:
                {
                        caller.matrix_addition();
                        //caller_s.push(caller.matrix_addition());
                        break;
                }
                case 10:
                {
                        caller.matrix_subtraction();
                        //caller_s.push(caller.matrix_subtraction());
                        break;
                }
                default:
                {
                        cout<<"Error! Enter a valid command!"<<endl;
                        break;
                }
            }
            file.close();
            break;
        }
    case 4:
        {
            file.open("D:/History.txt",std::fstream::out|std::fstream::app);
            int nested_option;
            cout<<"1: Force"<<endl;
            cout<<"2: Weight"<<endl;
            cout<<"3: Density"<<endl;
            cout<<"4: Moment of Force"<<endl;
            cout<<"5: Power"<<endl;
            cout<<"6: Work Done"<<endl;
            cout<<"7: Pressure"<<endl;
            cout<<"8: Acceleration"<<endl;
            cout<<"9: Average Speed"<<endl;
            cout<<"10: Velocity"<<endl;
            cout<<"11: Average Velocity"<<endl;
            cout<<"12: Wave Velocity"<<endl;
            cout<<"13: Wave Frequency"<<endl;
            cout<<"14: Gravitational Potential Energy"<<endl;
            cout<<"Enter Your Command: ";
            cin>>nested_option;
            switch(nested_option)
            {
                case 1:
                    {
                        double a,b;
                        file<<"mass*acceleration=";
                        cout<<"Enter Mass: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*";
                        cout<<"Enter Acceleration: ";
                        cin>>b;
                        caller.set_num2(b);
                        file<<b<<"=";
                        cout<<"Force: ";
                        cout<<caller.force();
                        file<<caller.force()<<endl;
                        caller_a.insert_at_end(caller.force());
                        break;
                    }
                case 2:
                    {
                        double a;
                        file<<"Mass*Gravity=";
                        cout<<"Enter Mass: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*"<<"9.81"<<"=";
                        cout<<"Weight: ";
                        cout<<caller.weight();
                        file<<caller.weight()<<endl;
                        caller_a.insert_at_end(caller.weight());
                        break;
                    }
                case 3:
                    {
                        double a,b;
                        file<<"mass/volume=";
                        cout<<"Enter Mass: ";
                        cin>>a;
                        file<<a<<"/";
                        caller.set_num1(a);
                        cout<<"Enter Volume: ";
                        cin>>b;
                        file<<b<<"=";
                        caller.set_num2(b);
                        cout<<"Density: ";
                        cout<<caller.density();
                        file<<caller.density()<<endl;
                        caller_a.insert_at_end(caller.density());
                        break;
                    }
                case 4:
                    {
                        double a,b;
                        file<<"moment of force=force*distance=";
                        cout<<"Enter Force: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*";
                        cout<<"Enter Distance: ";
                        cin>>b;
                        caller.set_num2(b);
                        file<<b<<"=";
                        cout<<"Moment of Force: ";
                        cout<<caller.moment_of_force();
                        file<<caller.moment_of_force()<<endl;
                        caller_a.insert_at_end(caller.moment_of_force());
                        break;
                    }
                case 5:
                    {
                        double a,b;
                        file<<"Power=Work Done/Time=";
                        cout<<"Enter Work Done: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"/";
                        cout<<"Enter Time: ";
                        cin>>b;
                        caller.set_num2(b);
                        file<<b<<"=";
                        cout<<"Power: ";
                        cout<<caller.power_physics();
                        file<<caller.power_physics()<<endl;
                        caller_a.insert_at_end(caller.power_physics());
                        break;
                    }
                case 6:
                    {
                        double a,b;
                        file<<"Work Done=Force*Distance=";
                        cout<<"Enter Force: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*";
                        cout<<"Enter Distance: ";
                        cin>>b;
                        caller.set_num2(b);
                        file<<b<<"=";
                        cout<<"Work Done: ";
                        cout<<caller.work_done();
                        file<<caller.work_done()<<endl;
                        caller_a.insert_at_end(caller.work_done());
                        break;
                    }
                case 7:
                    {
                        double a,b;
                        file<<"Pressure=Force/Area=";
                        cout<<"Enter Force: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"/";
                        cout<<"Enter Area: ";
                        cin>>b;
                        caller.set_num2(b);
                        file<<b<<"=";
                        cout<<"Pressure: ";
                        cout<<caller.pressure();
                        file<<caller.pressure()<<endl;
                        caller_a.insert_at_end(caller.pressure());
                        break;
                    }
                case 8:
                    {
                        double a,b;
                        file<<"Acceleration=Velocity/Time=";
                        cout<<"Enter Velocity: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"/";
                        cout<<"Enter Time: ";
                        cin>>b;
                        caller.set_num2(b);
                        file<<b<<"=";
                        cout<<"Acceleration: ";
                        cout<<caller.acceleration();
                        file<<caller.acceleration()<<endl;
                        caller_a.insert_at_end(caller.acceleration());
                        break;
                    }
                case 9:
                    {
                        double a,b,c,d;
                        file<<"Average Speed=D2-D1/T2-T1=";
                        cout<<"Enter Initial Distance: ";
                        cin>>a;
                        caller.set_num1(a);
                        cout<<"Enter Final Distance: ";
                        cin>>b;
                        caller.set_num2(b);
                        file<<b<<"-"<<a<<"/";
                        cout<<"Enter Initial Time: ";
                        cin>>c;
                        caller.set_num3(c);
                        cout<<"Enter Final Time: ";
                        cin>>d;
                        caller.set_num4(d);
                        file<<d<<"-"<<c<<"=";
                        cout<<"Average Speed: ";
                        cout<<caller.avg_speed();
                        file<<caller.avg_speed()<<endl;
                        caller_a.insert_at_end(caller.avg_speed());
                        break;
                    }
                case 10:
                    {
                        double a,b;
                        file<<"Velocity=Displacement/Time=";
                        cout<<"Enter Displacement: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"/";
                        cout<<"Enter Time: ";
                        cin>>b;
                        caller.set_num2(b);
                        file<<b<<"=";
                        cout<<"Velocity: ";
                        cout<<caller.velocity();
                        file<<caller.velocity()<<endl;
                        caller_a.insert_at_end(caller.velocity());
                        break;
                    }
                case 11:
                    {
                        double a,b,c,d;
                        file<<"Average Velocity=D2-D1/T2-T1=";
                        cout<<"Enter Initial Displacement: ";
                        cin>>a;
                        caller.set_num1(a);
                        cout<<"Enter Final Displacement: ";
                        cin>>b;
                        caller.set_num2(b);
                        file<<b<<"-"<<a<<"/";
                        cout<<"Enter Initial Time: ";
                        cin>>c;
                        caller.set_num3(c);
                        cout<<"Enter Final Time: ";
                        cin>>d;
                        caller.set_num4(d);
                        file<<d<<"-"<<c<<"=";
                        cout<<"Average Velocity: ";
                        cout<<caller.avg_velocity();
                        file<<caller.avg_velocity()<<endl;
                        caller_a.insert_at_end(caller.velocity());
                        break;
                    }
                case 12:
                    {
                        double a,b;
                        file<<"Wave Velocity=Frequency*Wavelength=";
                        cout<<"Enter Frequency: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*";
                        cout<<"Enter Wavelength: ";
                        cin>>b;
                        caller.set_num2(b);
                        file<<b<<"=";
                        cout<<"Wave Velocity: ";
                        cout<<caller.wave_velocity();
                        file<<caller.wave_velocity()<<endl;
                        caller_a.insert_at_end(caller.wave_velocity());
                        break;
                    }
                case 13:
                    {
                        double a;
                        file<<"Wave Frequency=1/Time Period=";
                        cout<<"Enter Time Period: ";
                        cin>>a;
                        file<<"1/"<<a<<"=";
                        caller.set_num1(a);
                        cout<<"Wave Frequency: ";
                        cout<<caller.wave_frequency();
                        file<<caller.wave_frequency()<<endl;
                        caller_a.insert_at_end(caller.wave_frequency());
                        break;
                    }
                case 14:
                    {
                        double a,b;
                        file<<"Gravitational Potential Energy=Mass*Height*Gravity=";
                        cout<<"Enter Mass: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*";
                        cout<<"Enter Height: ";
                        cin>>b;
                        caller.set_num2(b);
                        file<<b<<"*9.81"<<"=";
                        cout<<"Gravitational Potential Energy: ";
                        cout<<caller.gravitational_potential_energy();
                        file<<caller.gravitational_potential_energy()<<endl;
                        caller_a.insert_at_end(caller.gravitational_potential_energy());
                        break;
                    }
                default:
                    {
                        cout<<"Error! Enter a valid command!"<<endl;
                        break;
                    }

                break;
        }
        file.close();
        break;
        }
    case 5:
        {
            file.open("D:/History.txt",std::fstream::out|std::fstream::app);
            int nested_option;
            cout<<"1: KM into Miles"<<endl;
            cout<<"2: Miles into KM"<<endl;
            cout<<"3: Inch Into cm"<<endl;
            cout<<"4: cm into Inch"<<endl;
            cout<<"5: Foot into Meters"<<endl;
            cout<<"6: Meters into Foot"<<endl;
            cout<<"7: Pound into Grams"<<endl;
            cout<<"8: Ounce into Grams"<<endl;
            cout<<"9: Gallons into Liters"<<endl;
            cout<<"10: Fahrenheit into Celsius"<<endl;
            cout<<"11: Celsius into Fahrenheit"<<endl;
            cout<<"Enter Your Command: ";
            cin>>nested_option;
            switch(nested_option)
            {
                case 1:
                    {
                        double a;
                        file<<"Miles=KM*0.621371=";
                        cout<<"Enter KM: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*"<<"0.621371=";
                        cout<<"Miles="<<caller.km_into_miles();
                        file<<caller.km_into_miles()<<endl;
                        caller_a.insert_at_end(caller.km_into_miles());
                        break;
                    }
                case 2:
                    {
                        double a;
                        file<<"KM=Miles*1.60934=";
                        cout<<"Enter Miles: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*"<<"1.60934=";
                        cout<<"KM="<<caller.miles_into_km();
                        file<<caller.miles_into_km()<<endl;
                        caller_a.insert_at_end(caller.miles_into_km());
                        break;

                    }
                case 3:
                    {
                        double a;
                        file<<"CM=Inch*2.54=";
                        cout<<"Enter Inch: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*"<<"2.54=";
                        cout<<"cm="<<caller.inch_into_cm();
                        file<<caller.inch_into_cm()<<endl;
                        caller_a.insert_at_end(caller.inch_into_cm());
                        break;
                    }
                case 4:
                    {
                        double a;
                        file<<"Inch=cm*0.393701=";
                        cout<<"Enter cm: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*"<<"0.393701=";
                        cout<<"Inch="<<caller.cm_into_inch();
                        file<<caller.cm_into_inch()<<endl;
                        caller_a.insert_at_end(caller.cm_into_inch());
                        break;
                    }
                case 5:
                    {
                        double a;
                        file<<"Meters=Inch*0.3048=";
                        cout<<"Enter Foot: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*"<<"0.3048=";
                        cout<<"Meters="<<caller.foot_into_m();
                        file<<caller.foot_into_m()<<endl;
                        caller_a.insert_at_end(caller.foot_into_m());
                        break;
                    }
                case 6:
                    {
                        double a;
                        file<<"Foot=Meters*3.28084=";
                        cout<<"Enter Meters: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*"<<"3.28084=";
                        cout<<"Foot="<<caller.m_into_foot();
                        file<<caller.m_into_foot()<<endl;
                        caller_a.insert_at_end(caller.m_into_foot());
                        break;
                    }
                case 7:
                    {
                        double a;
                        file<<"Grams=Pounds*453.592=";
                        cout<<"Enter Pounds: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*"<<"453.592=";
                        cout<<"Grams="<<caller.pound_into_grams();
                        file<<caller.pound_into_grams()<<endl;
                        caller_a.insert_at_end(caller.pound_into_grams());
                        break;
                    }
                case 8:
                    {
                        double a;
                        file<<"Grams=Ounces*28.3495=";
                        cout<<"Enter Ounces: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*"<<"28.3495=";
                        cout<<"Grams="<<caller.ounce_into_grams();
                        file<<caller.ounce_into_grams()<<endl;
                        caller_a.insert_at_end(caller.ounce_into_grams());
                        break;
                    }
                case 9:
                    {
                        double a;
                        file<<"Liters=Gallons*3.78541=";
                        cout<<"Enter Gallons: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a;
                        file<<"*"<<"3.78541=";
                        cout<<"Liters="<<caller.gallon_into_liter();
                        file<<caller.gallon_into_liter()<<endl;
                        caller_a.insert_at_end(caller.gallon_into_liter());
                        break;
                    }
                case 10:
                    {
                        double a;
                        file<<"Celsius=Fahrenheit-32*5/9=";
                        cout<<"Enter Fahrenheit: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a;
                        file<<"-32*5/9=";
                        cout<<"Celsius="<<caller.fahrenheit_into_celsius();
                        file<<caller.fahrenheit_into_celsius()<<endl;
                        caller_a.insert_at_end(caller.fahrenheit_into_celsius());
                        break;
                    }
                case 11:
                    {
                        double a;
                        file<<"Fahrenheit=";
                        file<<"(Celsius*9/5)+32=";
                        cout<<"Enter Celsius: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<"(";
                        file<<a;
                        file<<"*9/5)+32=";
                        cout<<"Fahrenheit="<<caller.celsius_into_fahrenheit();
                        file<<caller.celsius_into_fahrenheit()<<endl;
                        caller_a.insert_at_end(caller.celsius_into_fahrenheit());
                        break;
                    }
                default:
                    {
                        cout<<"Error! Enter a valid command!"<<endl;
                        break;
                    }
            }
            file.close();
            break;
        }
    case 6:
        {
            file.open("D:/History.txt");
            string str;
            //file1.read("C:/Project/Casefile.txt");
            if(file.is_open())
            {
                cout<<endl;
                while(!file.eof())
                {
                    getline(file,str);
                    cout<<str<<endl;
                }
            }
            file.close();
            break;
        }
    case 7:
        {
            file.open("D:/History.txt",std::ofstream::out | std::ofstream::trunc);
            cout<<"Contents in File Deleted";
            file.close();
            break;
        }
    case 8:
        {
            caller_a.print();
            break;
        }
    case 9:
        {
            caller_a.delete_from_begin();
            break;
        }
    case 10:
        {
            caller_a.delete_at_end();
            break;
        }
    case 11:
        {
            int a;
            cout<<"Enter Index to Delete: ";
            cin>>a;
            caller_a.delete_from_index(a);
            break;
        }
    case 12:
        {
            while(1){
            char a;
            cout<<"Goto Data Structures Menu (Y/N): ";
            cin>>a;
            if(a=='y'||a=='Y')
            {
                system("cls");
                goto data_structures_menu;
                break;
            }
            else if(a=='n'||a=='N')
            {
                goto exit;
            }
            else
            {
                cout<<"Error! Enter a valid command!"<<endl;
            }
            }//while
        }

    case 13:
        {
            cout<<"Bubye! Take care";
            file.close();
            exit(0);
        }
    default:
        {
            cout<<"Error! Enter a valid command!"<<endl;
            break;
        }
    }
            } /**while**/
        }
    case 5:
        {
            /**for Double Linklist**/

            double_Link_List caller_DLL;
            system("cls");
            while(1){
    system("color 4e");
    ///Displaying date and time
    time_t timev;
    time(&timev);
    cout<<"\n"<<"\t\t\t    Time: "<<ctime(&timev);
    ///Displaying time end///
            /**for stacks**/
            fstream file;
            calculator caller;
    cout<<endl<<"\t\t\t ___________________________________"<<endl;
    cout<<"\t\t\t|____________Toolbox V1.0___________|"<<endl;
    cout<<"\t\t\t|___________________________________|"<<endl;
    cout<<"\t\t\t|1: Arithmetic Calculator           |"<<endl;
    cout<<"\t\t\t|2: Statistics Calculator           |"<<endl;
    cout<<"\t\t\t|3: Scientific Calculator           |"<<endl;
    cout<<"\t\t\t|4: Physics Calculator              |"<<endl;
    cout<<"\t\t\t|5: Unit Converter                  |"<<endl;
    cout<<"\t\t\t|___________________________________|"<<endl;
    cout<<"\t\t\t|6: View History                    |"<<endl;
    cout<<"\t\t\t|7: Delete History                  |"<<endl;
    cout<<"\t\t\t|8: Display List                    |"<<endl;
    cout<<"\t\t\t|9: Delete from Begin               |"<<endl;
    cout<<"\t\t\t|10: Delete from End                |"<<endl;
    cout<<"\t\t\t|11: Delete After Index             |"<<endl;
    cout<<"\t\t\t|12: Goto Data Structures Menu      |"<<endl;
    cout<<"\t\t\t|13: Exit                           |"<<endl;
    cout<<"\t\t\t|___________________________________|"<<endl;
    cout<<"\t\t\t       Enter Your Command: ";
    int option;
    cin>>option;
    cout<<"\t\t\t|___________________________________|"<<endl;
    switch(option)
    {
    case 1:
        {
            file.open("D:/History.txt",std::fstream::out|std::fstream::app);
            int nested_option;
            cout<<"1: Addition"<<endl;
            cout<<"2: Difference"<<endl;
            cout<<"3: Product"<<endl;
            cout<<"4: Division"<<endl;
            cout<<"Enter Your Command: ";
            cin>>nested_option;
            switch(nested_option)
            {
                case 1:
                    {
                        double a,b;
                        cout<<"Enter 1st No.: ";
                        cin>>a;
                        file<<a;
                        caller.set_num1(a);
                        cout<<"Enter 2nd No.: ";
                        cin>>b;
                        file<<"+";
                        file<<b;
                        file<<"=";
                        caller.set_num2(b);
                        cout<<"Result: "<<caller.sum();
                        file<<caller.sum()<<endl;
                        caller_DLL.Insert_at_tail(caller.sum());
                        cout<<endl;
                        break;
                    }
                case 2:
                    {
                        double a,b;
                        cout<<"Enter 1st No.: ";
                        cin>>a;
                        file<<a;
                        caller.set_num1(a);
                        cout<<"Enter 2nd No.: ";
                        cin>>b;
                        file<<"-";
                        file<<b;
                        file<<"=";
                        caller.set_num2(b);
                        cout<<"Result: "<<caller.difference();
                        file<<caller.difference()<<endl;
                        caller_DLL.Insert_at_tail(caller.difference());
                        break;
                    }
                case 3:
                    {
                        double a,b;
                        cout<<"Enter 1st No.: ";
                        cin>>a;
                        file<<a;
                        caller.set_num1(a);
                        cout<<"Enter 2nd No.: ";
                        cin>>b;
                        file<<"*";
                        file<<b;
                        file<<"=";
                        caller.set_num2(b);
                        cout<<"Result: "<<caller.multi();
                        file<<caller.multi()<<endl;
                        caller_DLL.Insert_at_tail(caller.multi());
                        break;
                    }
                case 4:
                    {
                        double a,b;
                        cout<<"Enter 1st No.: ";
                        cin>>a;
                        file<<a;
                        caller.set_num1(a);
                        cout<<"Enter 2nd No.: ";
                        cin>>b;
                        file<<"/";
                        file<<b;
                        file<<"=";
                        caller.set_num2(b);
                        cout<<"Result: "<<caller.divide();
                        file<<caller.divide()<<endl;
                        caller_DLL.Insert_at_tail(caller.divide());
                        break;
                    }
                    default:
                    {
                        cout<<"Error! Enter a valid command!"<<endl;
                        break;
                    }
                    file.close();
                    break;
            }
        }
    case 2:
        {
            file.open("D:/History.txt",std::fstream::out|std::fstream::app);
            file.close();
         break;
        }
    case 3:
        {
            file.open("D:/History.txt",std::fstream::out|std::fstream::app);
            int nested_option;
            cout<<"1: Sin"<<endl;
            cout<<"2: Cosine"<<endl;
            cout<<"3: Tangent"<<endl;
            cout<<"4: Sin Hyperbolic"<<endl;
            cout<<"5: Cosine Hyperbolic"<<endl;
            cout<<"6: Tangent Hyperbolic"<<endl;
            cout<<"7: Square Root"<<endl;
            cout<<"8: Power"<<endl;
            cout<<"9: Matrix Addition"<<endl;
            cout<<"10: Matrix Subtraction"<<endl;
            cout<<"Enter Your Command: ";
            cin>>nested_option;
            switch(nested_option)
            {
                case 1:
                    {
                        double a;
                        cout<<"Enter No.: ";
                        cin>>a;
                        file<<"Sin("<<a<<")=";
                        caller.set_num1(a);
                        cout<<caller.sine();
                        file<<caller.sine()<<endl;
                        caller_DLL.Insert_at_tail(caller.sine());
                        break;
                    }
                case 2:
                    {
                        double a;
                        cout<<"Enter No.: ";
                        cin>>a;
                        file<<"Cos("<<a<<")=";
                        caller.set_num1(a);
                        cout<<caller.cosine();
                        file<<caller.cosine()<<endl;
                        caller_DLL.Insert_at_tail(caller.cosine());
                        break;
                    }
                case 3:
                {
                        double a;
                        cout<<"Enter No.: ";
                        cin>>a;
                        file<<"Tan("<<a<<")=";
                        caller.set_num1(a);
                        cout<<caller.tangent();
                        file<<caller.tangent()<<endl;
                        caller_DLL.Insert_at_tail(caller.tangent());
                        break;
                }
                case 4:
                {
                        double a;
                        cout<<"Enter No.: ";
                        cin>>a;
                        file<<"Sinh("<<a<<")=";
                        caller.set_num1(a);
                        cout<<caller.sine_h();
                        file<<caller.sine_h()<<endl;
                        caller_DLL.Insert_at_tail(caller.sine_h());
                        break;
                }
                case 5:
                {
                        double a;
                        cout<<"Enter No.: ";
                        cin>>a;
                        file<<"Cosh("<<a<<")=";
                        caller.set_num1(a);
                        cout<<caller.cosine_h();
                        file<<caller.cosine_h()<<endl;
                        caller_DLL.Insert_at_tail(caller.cosine_h());
                        break;
                }
                case 6:
                {
                        double a;
                        cout<<"Enter No.: ";
                        cin>>a;
                        file<<"Tanh("<<a<<")=";
                        caller.set_num1(a);
                        cout<<caller.tangent_h();
                        file<<caller.tangent_h()<<endl;
                        caller_DLL.Insert_at_tail(caller.tangent_h());
                        break;
                }
                case 7:
                {
                        double a;
                        cout<<"Enter No.: ";
                        cin>>a;
                        file<<"Sqrt("<<a<<")=";
                        caller.set_num1(a);
                        cout<<caller.square_root();
                        file<<caller.square_root()<<endl;
                        caller_DLL.Insert_at_tail(caller.square_root());
                        break;
                }
                case 8:
                {
                        double a;
                        double exp;
                        cout<<"Enter No.: ";
                        cin>>a;
                        caller.set_num1(a);
                        cout<<"Enter Exponent: ";
                        cin>>exp;
                        file<<a<<"^"<<exp<<"=";
                        caller.set_num2(exp);
                        cout<<caller.power();
                        file<<caller.power()<<endl;
                        caller_DLL.Insert_at_tail(caller.power());
                        break;
                }
                case 9:
                {
                        caller.matrix_addition();
                        //caller_s.push(caller.matrix_addition());
                        break;
                }
                case 10:
                {
                        caller.matrix_subtraction();
                        //caller_s.push(caller.matrix_subtraction());
                        break;
                }
                default:
                {
                        cout<<"Error! Enter a valid command!"<<endl;
                        break;
                }
            }
            file.close();
            break;
        }
    case 4:
        {
            file.open("D:/History.txt",std::fstream::out|std::fstream::app);
            int nested_option;
            cout<<"1: Force"<<endl;
            cout<<"2: Weight"<<endl;
            cout<<"3: Density"<<endl;
            cout<<"4: Moment of Force"<<endl;
            cout<<"5: Power"<<endl;
            cout<<"6: Work Done"<<endl;
            cout<<"7: Pressure"<<endl;
            cout<<"8: Acceleration"<<endl;
            cout<<"9: Average Speed"<<endl;
            cout<<"10: Velocity"<<endl;
            cout<<"11: Average Velocity"<<endl;
            cout<<"12: Wave Velocity"<<endl;
            cout<<"13: Wave Frequency"<<endl;
            cout<<"14: Gravitational Potential Energy"<<endl;
            cout<<"Enter Your Command: ";
            cin>>nested_option;
            switch(nested_option)
            {
                case 1:
                    {
                        double a,b;
                        file<<"mass*acceleration=";
                        cout<<"Enter Mass: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*";
                        cout<<"Enter Acceleration: ";
                        cin>>b;
                        caller.set_num2(b);
                        file<<b<<"=";
                        cout<<"Force: ";
                        cout<<caller.force();
                        file<<caller.force()<<endl;
                        caller_DLL.Insert_at_tail(caller.force());
                        break;
                    }
                case 2:
                    {
                        double a;
                        file<<"Mass*Gravity=";
                        cout<<"Enter Mass: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*"<<"9.81"<<"=";
                        cout<<"Weight: ";
                        cout<<caller.weight();
                        file<<caller.weight()<<endl;
                        caller_DLL.Insert_at_tail(caller.weight());
                        break;
                    }
                case 3:
                    {
                        double a,b;
                        file<<"mass/volume=";
                        cout<<"Enter Mass: ";
                        cin>>a;
                        file<<a<<"/";
                        caller.set_num1(a);
                        cout<<"Enter Volume: ";
                        cin>>b;
                        file<<b<<"=";
                        caller.set_num2(b);
                        cout<<"Density: ";
                        cout<<caller.density();
                        file<<caller.density()<<endl;
                        caller_DLL.Insert_at_tail(caller.density());
                        break;
                    }
                case 4:
                    {
                        double a,b;
                        file<<"moment of force=force*distance=";
                        cout<<"Enter Force: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*";
                        cout<<"Enter Distance: ";
                        cin>>b;
                        caller.set_num2(b);
                        file<<b<<"=";
                        cout<<"Moment of Force: ";
                        cout<<caller.moment_of_force();
                        file<<caller.moment_of_force()<<endl;
                        caller_DLL.Insert_at_tail(caller.moment_of_force());
                        break;
                    }
                case 5:
                    {
                        double a,b;
                        file<<"Power=Work Done/Time=";
                        cout<<"Enter Work Done: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"/";
                        cout<<"Enter Time: ";
                        cin>>b;
                        caller.set_num2(b);
                        file<<b<<"=";
                        cout<<"Power: ";
                        cout<<caller.power_physics();
                        file<<caller.power_physics()<<endl;
                        caller_DLL.Insert_at_tail(caller.power_physics());
                        break;
                    }
                case 6:
                    {
                        double a,b;
                        file<<"Work Done=Force*Distance=";
                        cout<<"Enter Force: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*";
                        cout<<"Enter Distance: ";
                        cin>>b;
                        caller.set_num2(b);
                        file<<b<<"=";
                        cout<<"Work Done: ";
                        cout<<caller.work_done();
                        file<<caller.work_done()<<endl;
                        caller_DLL.Insert_at_tail(caller.work_done());
                        break;
                    }
                case 7:
                    {
                        double a,b;
                        file<<"Pressure=Force/Area=";
                        cout<<"Enter Force: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"/";
                        cout<<"Enter Area: ";
                        cin>>b;
                        caller.set_num2(b);
                        file<<b<<"=";
                        cout<<"Pressure: ";
                        cout<<caller.pressure();
                        file<<caller.pressure()<<endl;
                        caller_DLL.Insert_at_tail(caller.pressure());
                        break;
                    }
                case 8:
                    {
                        double a,b;
                        file<<"Acceleration=Velocity/Time=";
                        cout<<"Enter Velocity: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"/";
                        cout<<"Enter Time: ";
                        cin>>b;
                        caller.set_num2(b);
                        file<<b<<"=";
                        cout<<"Acceleration: ";
                        cout<<caller.acceleration();
                        file<<caller.acceleration()<<endl;
                        caller_DLL.Insert_at_tail(caller.acceleration());
                        break;
                    }
                case 9:
                    {
                        double a,b,c,d;
                        file<<"Average Speed=D2-D1/T2-T1=";
                        cout<<"Enter Initial Distance: ";
                        cin>>a;
                        caller.set_num1(a);
                        cout<<"Enter Final Distance: ";
                        cin>>b;
                        caller.set_num2(b);
                        file<<b<<"-"<<a<<"/";
                        cout<<"Enter Initial Time: ";
                        cin>>c;
                        caller.set_num3(c);
                        cout<<"Enter Final Time: ";
                        cin>>d;
                        caller.set_num4(d);
                        file<<d<<"-"<<c<<"=";
                        cout<<"Average Speed: ";
                        cout<<caller.avg_speed();
                        file<<caller.avg_speed()<<endl;
                        caller_DLL.Insert_at_tail(caller.avg_speed());
                        break;
                    }
                case 10:
                    {
                        double a,b;
                        file<<"Velocity=Displacement/Time=";
                        cout<<"Enter Displacement: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"/";
                        cout<<"Enter Time: ";
                        cin>>b;
                        caller.set_num2(b);
                        file<<b<<"=";
                        cout<<"Velocity: ";
                        cout<<caller.velocity();
                        file<<caller.velocity()<<endl;
                        caller_DLL.Insert_at_tail(caller.velocity());
                        break;
                    }
                case 11:
                    {
                        double a,b,c,d;
                        file<<"Average Velocity=D2-D1/T2-T1=";
                        cout<<"Enter Initial Displacement: ";
                        cin>>a;
                        caller.set_num1(a);
                        cout<<"Enter Final Displacement: ";
                        cin>>b;
                        caller.set_num2(b);
                        file<<b<<"-"<<a<<"/";
                        cout<<"Enter Initial Time: ";
                        cin>>c;
                        caller.set_num3(c);
                        cout<<"Enter Final Time: ";
                        cin>>d;
                        caller.set_num4(d);
                        file<<d<<"-"<<c<<"=";
                        cout<<"Average Velocity: ";
                        cout<<caller.avg_velocity();
                        file<<caller.avg_velocity()<<endl;
                        caller_DLL.Insert_at_tail(caller.velocity());
                        break;
                    }
                case 12:
                    {
                        double a,b;
                        file<<"Wave Velocity=Frequency*Wavelength=";
                        cout<<"Enter Frequency: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*";
                        cout<<"Enter Wavelength: ";
                        cin>>b;
                        caller.set_num2(b);
                        file<<b<<"=";
                        cout<<"Wave Velocity: ";
                        cout<<caller.wave_velocity();
                        file<<caller.wave_velocity()<<endl;
                        caller_DLL.Insert_at_tail(caller.wave_velocity());
                        break;
                    }
                case 13:
                    {
                        double a;
                        file<<"Wave Frequency=1/Time Period=";
                        cout<<"Enter Time Period: ";
                        cin>>a;
                        file<<"1/"<<a<<"=";
                        caller.set_num1(a);
                        cout<<"Wave Frequency: ";
                        cout<<caller.wave_frequency();
                        file<<caller.wave_frequency()<<endl;
                        caller_DLL.Insert_at_tail(caller.wave_frequency());
                        break;
                    }
                case 14:
                    {
                        double a,b;
                        file<<"Gravitational Potential Energy=Mass*Height*Gravity=";
                        cout<<"Enter Mass: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*";
                        cout<<"Enter Height: ";
                        cin>>b;
                        caller.set_num2(b);
                        file<<b<<"*9.81"<<"=";
                        cout<<"Gravitational Potential Energy: ";
                        cout<<caller.gravitational_potential_energy();
                        file<<caller.gravitational_potential_energy()<<endl;
                        caller_DLL.Insert_at_tail(caller.gravitational_potential_energy());
                        break;
                    }
                default:
                    {
                        cout<<"Error! Enter a valid command!"<<endl;
                        break;
                    }

                break;
        }
        file.close();
        break;
        }
    case 5:
        {
            file.open("D:/History.txt",std::fstream::out|std::fstream::app);
            int nested_option;
            cout<<"1: KM into Miles"<<endl;
            cout<<"2: Miles into KM"<<endl;
            cout<<"3: Inch Into cm"<<endl;
            cout<<"4: cm into Inch"<<endl;
            cout<<"5: Foot into Meters"<<endl;
            cout<<"6: Meters into Foot"<<endl;
            cout<<"7: Pound into Grams"<<endl;
            cout<<"8: Ounce into Grams"<<endl;
            cout<<"9: Gallons into Liters"<<endl;
            cout<<"10: Fahrenheit into Celsius"<<endl;
            cout<<"11: Celsius into Fahrenheit"<<endl;
            cout<<"Enter Your Command: ";
            cin>>nested_option;
            switch(nested_option)
            {
                case 1:
                    {
                        double a;
                        file<<"Miles=KM*0.621371=";
                        cout<<"Enter KM: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*"<<"0.621371=";
                        cout<<"Miles="<<caller.km_into_miles();
                        file<<caller.km_into_miles()<<endl;
                        caller_DLL.Insert_at_tail(caller.km_into_miles());
                        break;
                    }
                case 2:
                    {
                        double a;
                        file<<"KM=Miles*1.60934=";
                        cout<<"Enter Miles: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*"<<"1.60934=";
                        cout<<"KM="<<caller.miles_into_km();
                        file<<caller.miles_into_km()<<endl;
                        caller_DLL.Insert_at_tail(caller.miles_into_km());
                        break;

                    }
                case 3:
                    {
                        double a;
                        file<<"CM=Inch*2.54=";
                        cout<<"Enter Inch: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*"<<"2.54=";
                        cout<<"cm="<<caller.inch_into_cm();
                        file<<caller.inch_into_cm()<<endl;
                        caller_DLL.Insert_at_tail(caller.inch_into_cm());
                        break;
                    }
                case 4:
                    {
                        double a;
                        file<<"Inch=cm*0.393701=";
                        cout<<"Enter cm: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*"<<"0.393701=";
                        cout<<"Inch="<<caller.cm_into_inch();
                        file<<caller.cm_into_inch()<<endl;
                        caller_DLL.Insert_at_tail(caller.cm_into_inch());
                        break;
                    }
                case 5:
                    {
                        double a;
                        file<<"Meters=Inch*0.3048=";
                        cout<<"Enter Foot: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*"<<"0.3048=";
                        cout<<"Meters="<<caller.foot_into_m();
                        file<<caller.foot_into_m()<<endl;
                        caller_DLL.Insert_at_tail(caller.foot_into_m());
                        break;
                    }
                case 6:
                    {
                        double a;
                        file<<"Foot=Meters*3.28084=";
                        cout<<"Enter Meters: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*"<<"3.28084=";
                        cout<<"Foot="<<caller.m_into_foot();
                        file<<caller.m_into_foot()<<endl;
                        caller_DLL.Insert_at_tail(caller.m_into_foot());
                        break;
                    }
                case 7:
                    {
                        double a;
                        file<<"Grams=Pounds*453.592=";
                        cout<<"Enter Pounds: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*"<<"453.592=";
                        cout<<"Grams="<<caller.pound_into_grams();
                        file<<caller.pound_into_grams()<<endl;
                        caller_DLL.Insert_at_tail(caller.pound_into_grams());
                        break;
                    }
                case 8:
                    {
                        double a;
                        file<<"Grams=Ounces*28.3495=";
                        cout<<"Enter Ounces: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*"<<"28.3495=";
                        cout<<"Grams="<<caller.ounce_into_grams();
                        file<<caller.ounce_into_grams()<<endl;
                        caller_DLL.Insert_at_tail(caller.ounce_into_grams());
                        break;
                    }
                case 9:
                    {
                        double a;
                        file<<"Liters=Gallons*3.78541=";
                        cout<<"Enter Gallons: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a;
                        file<<"*"<<"3.78541=";
                        cout<<"Liters="<<caller.gallon_into_liter();
                        file<<caller.gallon_into_liter()<<endl;
                        caller_DLL.Insert_at_tail(caller.gallon_into_liter());
                        break;
                    }
                case 10:
                    {
                        double a;
                        file<<"Celsius=Fahrenheit-32*5/9=";
                        cout<<"Enter Fahrenheit: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a;
                        file<<"-32*5/9=";
                        cout<<"Celsius="<<caller.fahrenheit_into_celsius();
                        file<<caller.fahrenheit_into_celsius()<<endl;
                        caller_DLL.Insert_at_tail(caller.fahrenheit_into_celsius());
                        break;
                    }
                case 11:
                    {
                        double a;
                        file<<"Fahrenheit=";
                        file<<"(Celsius*9/5)+32=";
                        cout<<"Enter Celsius: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<"(";
                        file<<a;
                        file<<"*9/5)+32=";
                        cout<<"Fahrenheit="<<caller.celsius_into_fahrenheit();
                        file<<caller.celsius_into_fahrenheit()<<endl;
                        caller_DLL.Insert_at_tail(caller.celsius_into_fahrenheit());
                        break;
                    }
                default:
                    {
                        cout<<"Error! Enter a valid command!"<<endl;
                        break;
                    }
            }
            file.close();
            break;
        }
    case 6:
        {
            file.open("D:/History.txt");
            string str;
            //file1.read("C:/Project/Casefile.txt");
            if(file.is_open())
            {
                cout<<endl;
                while(!file.eof())
                {
                    getline(file,str);
                    cout<<str<<endl;
                }
            }
            file.close();
            break;
        }
    case 7:
        {
            file.open("D:/History.txt",std::ofstream::out | std::ofstream::trunc);
            cout<<"Contents in File Deleted";
            file.close();
            break;
        }
    case 8:
        {
            caller_DLL.print();
            break;
        }
    case 9:
        {
            caller_DLL.delete_head();
            break;
        }
    case 10:
        {
            caller_DLL.delete_tail();
            break;
        }
    case 11:
        {
            int a;
            cout<<"Enter Index to Delete after: ";
            cin>>a;
            caller_DLL.delete_after(a);
            break;
        }
    case 12:
        {
            while(1){
            char a;
            cout<<"Goto Data Structures Menu (Y/N): ";
            cin>>a;
            if(a=='y'||a=='Y')
            {
                system("cls");
                goto data_structures_menu;
                break;
            }
            else if(a=='n'||a=='N')
            {
                goto exit;
            }
            else
            {
                cout<<"Error! Enter a valid command!"<<endl;
            }
            }//while
        }

    case 13:
        {
            cout<<"Bubye! Take care";
            file.close();
            exit(0);
        }
    default:
        {
            cout<<"Error! Enter a valid command!"<<endl;
            break;
        }
    }
            } /**while**/
        }
    case 6:
        {
            /**Using Trees**/
            fstream file;
    system("cls");
    system("color 4e");
    ///Displaying date and time
    time_t timev;
    time(&timev);
    cout<<"\n"<<"\t\t\t    Time: "<<ctime(&timev);
    ///Displaying time end///
    Tree caller_T;
    while(1!=0)
{
    calculator caller;
    cout<<endl<<"\t\t\t ___________________________________"<<endl;
    cout<<"\t\t\t|____________Toolbox V1.0___________|"<<endl;
    cout<<"\t\t\t|___________________________________|"<<endl;
    cout<<"\t\t\t|1: Arithmetic Calculator           |"<<endl;
    cout<<"\t\t\t|2: Statistics Calculator           |"<<endl;
    cout<<"\t\t\t|3: Scientific Calculator           |"<<endl;
    cout<<"\t\t\t|4: Physics Calculator              |"<<endl;
    cout<<"\t\t\t|5: Unit Converter                  |"<<endl;
    cout<<"\t\t\t|___________________________________|"<<endl;
    cout<<"\t\t\t|6: View History                    |"<<endl;
    cout<<"\t\t\t|7: Delete History                  |"<<endl;
    cout<<"\t\t\t|8: Display Inorder Tree            |"<<endl;
    cout<<"\t\t\t|9: Display Postorder Tree          |"<<endl;
    cout<<"\t\t\t|10: Display Preorder Tree          |"<<endl;
    cout<<"\t\t\t|11: Search in Tree                 |"<<endl;
    cout<<"\t\t\t|12: Goto Data Structures Menu      |"<<endl;
    cout<<"\t\t\t|13: Exit                           |"<<endl;
    cout<<"\t\t\t|___________________________________|"<<endl;
    cout<<"\t\t\t       Enter Your Command: ";
    int option;
    cin>>option;
    cout<<"\t\t\t|___________________________________|"<<endl;
    switch(option)
    {
    case 1:
        {
            file.open("D:/History.txt",std::fstream::out|std::fstream::app);
            int nested_option;
            cout<<"1: Addition"<<endl;
            cout<<"2: Difference"<<endl;
            cout<<"3: Product"<<endl;
            cout<<"4: Division"<<endl;
            cout<<"Enter Your Command: ";
            cin>>nested_option;
            switch(nested_option)
            {
                case 1:
                    {
                        double a,b;
                        cout<<"Enter 1st No.: ";
                        cin>>a;
                        file<<a;
                        caller.set_num1(a);
                        cout<<"Enter 2nd No.: ";
                        cin>>b;
                        file<<"+";
                        file<<b;
                        file<<"=";
                        caller.set_num2(b);
                        cout<<"Result: "<<caller.sum();
                        file<<caller.sum()<<endl;
                        caller_T.insert(caller.sum());
                        break;
                    }
                case 2:
                    {
                        double a,b;
                        cout<<"Enter 1st No.: ";
                        cin>>a;
                        file<<a;
                        caller.set_num1(a);
                        cout<<"Enter 2nd No.: ";
                        cin>>b;
                        file<<"-";
                        file<<b;
                        file<<"=";
                        caller.set_num2(b);
                        cout<<"Result: "<<caller.difference();
                        file<<caller.difference()<<endl;
                        caller_T.insert(caller.difference());
                        break;
                    }
                case 3:
                    {
                        double a,b;
                        cout<<"Enter 1st No.: ";
                        cin>>a;
                        file<<a;
                        caller.set_num1(a);
                        cout<<"Enter 2nd No.: ";
                        cin>>b;
                        file<<"*";
                        file<<b;
                        file<<"=";
                        caller.set_num2(b);
                        cout<<"Result: "<<caller.multi();
                        file<<caller.multi()<<endl;
                        caller_T.insert(caller.multi());
                        break;
                    }
                case 4:
                    {
                        double a,b;
                        cout<<"Enter 1st No.: ";
                        cin>>a;
                        file<<a;
                        caller.set_num1(a);
                        cout<<"Enter 2nd No.: ";
                        cin>>b;
                        file<<"/";
                        file<<b;
                        file<<"=";
                        caller.set_num2(b);
                        cout<<"Result: "<<caller.divide();
                        file<<caller.divide()<<endl;
                        caller_T.insert(caller.divide());
                        break;
                    }
                    default:
                    {
                        cout<<"Error! Enter a valid command!"<<endl;
                        break;
                    }
                    file.close();
                    break;
            }
            break;
        }
    case 2:
        {
            file.open("D:/History.txt",std::fstream::out|std::fstream::app);
            int nested_option;
            cout<<"1: Mean"<<endl;
            cout<<"2: Median (Ungrouped)"<<endl;
            cout<<"3: Mode"<<endl;
            cout<<"Enter Your Command: ";
            cin>>nested_option;
            switch(nested_option)
            {
            case 1:
                {
                    int total;
                    double *val;
                    int count=0;
                    cout<<"Enter total no. of X: ";
                    cin>>total;
                    val= new double [total];
                    for(int i=0;i<total;i++)
                    {
                        cin>>val[i];
                        count++;
                    }
                    double sum=0;
                    for(int i=0;i<total;i++)
                    {
                        sum=sum+val[i];
                    }
                    cout<<"Mean = "<<sum/total;
                    break;
                }
            case 2:
                {
                    int total;
                    double *val;
                    int count=0;
                    val= new double [total];
                    cout<<"Enter total no. of X: ";
                    cin>>total;
                    for(int i=0;i<total;i++)
                    {
                        cin>>val[i];
                        count++;
                    }
                    if(count%2==1)
                    {
                        int centre;
                        centre=total/2;
                        cout<<"Median = "<<val[centre];
                    }
                    else if(count%2==0)
                    {
                        int centre;
                        centre=total/2;
                        cout<<"Median = "<<(val[centre-1]+val[centre])/2;
                    }
                    break;
                }
            case 3:
                {
                    int total;
                    double *val;

                    val= new double [total];
                    cout<<"Enter total no. of X: ";
                    cin>>total;
                    for(int i=0;i<total;i++)
                    {
                        cin>>val[i];

                    }
                            int counter = 0;
                            int max = 0;
                            //int mode = 0;
                            for (int pass = 0; pass < total-1; pass++)
                            {

                                for (int count =  0; count < total; count++)
                                {
                                    if (val[count] == val[count+1])
                                    {
                                        max = val[count];
                                        counter = val[pass];
                                    }

                                }
                            }
                            cout << "The mode is: " << counter << endl;
                            break;
                }
                default:
                    {
                        cout<<"Error! Enter a valid command!"<<endl;
                        break;
                    }
                     file.close();
                break;
                }
               break;
            }


    case 3:
        {
            file.open("D:/History.txt",std::fstream::out|std::fstream::app);
            int nested_option;
            cout<<"1: Sin"<<endl;
            cout<<"2: Cosine"<<endl;
            cout<<"3: Tangent"<<endl;
            cout<<"4: Sin Hyperbolic"<<endl;
            cout<<"5: Cosine Hyperbolic"<<endl;
            cout<<"6: Tangent Hyperbolic"<<endl;
            cout<<"7: Square Root"<<endl;
            cout<<"8: Power"<<endl;
            cout<<"9: Matrix Addition"<<endl;
            cout<<"10: Matrix Subtraction"<<endl;
            cout<<"Enter Your Command: ";
            cin>>nested_option;
            switch(nested_option)
            {
                case 1:
                    {
                        double a;
                        cout<<"Enter No.: ";
                        cin>>a;
                        file<<"Sin("<<a<<")=";
                        caller.set_num1(a);
                        cout<<caller.sine();
                        file<<caller.sine()<<endl;
                        caller_T.insert(caller.sine());
                        break;
                    }
                case 2:
                    {
                        double a;
                        cout<<"Enter No.: ";
                        cin>>a;
                        file<<"Cos("<<a<<")=";
                        caller.set_num1(a);
                        cout<<caller.cosine();
                        file<<caller.cosine()<<endl;
                        caller_T.insert(caller.cosine());
                        break;
                    }
                case 3:
                {
                        double a;
                        cout<<"Enter No.: ";
                        cin>>a;
                        file<<"Tan("<<a<<")=";
                        caller.set_num1(a);
                        cout<<caller.tangent();
                        file<<caller.tangent()<<endl;
                        caller_T.insert(caller.tangent());
                        break;
                }
                case 4:
                {
                        double a;
                        cout<<"Enter No.: ";
                        cin>>a;
                        file<<"Sinh("<<a<<")=";
                        caller.set_num1(a);
                        cout<<caller.sine_h();
                        file<<caller.sine_h()<<endl;
                        caller_T.insert(caller.sine_h());
                        break;
                }
                case 5:
                {
                        double a;
                        cout<<"Enter No.: ";
                        cin>>a;
                        file<<"Cosh("<<a<<")=";
                        caller.set_num1(a);
                        cout<<caller.cosine_h();
                        file<<caller.cosine_h()<<endl;
                        caller_T.insert(caller.cosine_h());
                        break;
                }
                case 6:
                {
                        double a;
                        cout<<"Enter No.: ";
                        cin>>a;
                        file<<"Tanh("<<a<<")=";
                        caller.set_num1(a);
                        cout<<caller.tangent_h();
                        file<<caller.tangent_h()<<endl;
                        caller_T.insert(caller.tangent_h());
                        break;
                }
                case 7:
                {
                        double a;
                        cout<<"Enter No.: ";
                        cin>>a;
                        file<<"Sqrt("<<a<<")=";
                        caller.set_num1(a);
                        cout<<caller.square_root();
                        file<<caller.square_root()<<endl;
                        caller_T.insert(caller.square_root());
                        break;
                }
                case 8:
                {
                        double a;
                        double exp;
                        cout<<"Enter No.: ";
                        cin>>a;
                        caller.set_num1(a);
                        cout<<"Enter Exponent: ";
                        cin>>exp;
                        file<<a<<"^"<<exp<<"=";
                        caller.set_num2(exp);
                        cout<<caller.power();
                        file<<caller.power()<<endl;
                        caller_T.insert(caller.power());
                        break;
                }
                case 9:
                {
                        caller.matrix_addition();
                        break;
                }
                case 10:
                {
                        caller.matrix_subtraction();
                        break;
                }
                default:
                {
                        cout<<"Error! Enter a valid command!"<<endl;
                        break;
                }
            }
            file.close();
            break;
        }
    case 4:
        {
            file.open("D:/History.txt",std::fstream::out|std::fstream::app);
            int nested_option;
            cout<<"1: Force"<<endl;
            cout<<"2: Weight"<<endl;
            cout<<"3: Density"<<endl;
            cout<<"4: Moment of Force"<<endl;
            cout<<"5: Power"<<endl;
            cout<<"6: Work Done"<<endl;
            cout<<"7: Pressure"<<endl;
            cout<<"8: Acceleration"<<endl;
            cout<<"9: Average Speed"<<endl;
            cout<<"10: Velocity"<<endl;
            cout<<"11: Average Velocity"<<endl;
            cout<<"12: Wave Velocity"<<endl;
            cout<<"13: Wave Frequency"<<endl;
            cout<<"14: Gravitational Potential Energy"<<endl;
            cout<<"Enter Your Command: ";
            cin>>nested_option;
            switch(nested_option)
            {
                case 1:
                    {
                        double a,b;
                        file<<"mass*acceleration=";
                        cout<<"Enter Mass: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*";
                        cout<<"Enter Acceleration: ";
                        cin>>b;
                        caller.set_num2(b);
                        file<<b<<"=";
                        cout<<"Force: ";
                        cout<<caller.force();
                        file<<caller.force()<<endl;
                        caller_T.insert(caller.force());
                        break;
                    }
                case 2:
                    {
                        double a;
                        file<<"Mass*Gravity=";
                        cout<<"Enter Mass: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*"<<"9.81"<<"=";
                        cout<<"Weight: ";
                        cout<<caller.weight();
                        file<<caller.weight()<<endl;
                        caller_T.insert(caller.weight());
                        break;
                    }
                case 3:
                    {
                        double a,b;
                        file<<"mass/volume=";
                        cout<<"Enter Mass: ";
                        cin>>a;
                        file<<a<<"/";
                        caller.set_num1(a);
                        cout<<"Enter Volume: ";
                        cin>>b;
                        file<<b<<"=";
                        caller.set_num2(b);
                        cout<<"Density: ";
                        cout<<caller.density();
                        file<<caller.density()<<endl;
                        caller_T.insert(caller.density());
                        break;
                    }
                case 4:
                    {
                        double a,b;
                        file<<"moment of force=force*distance=";
                        cout<<"Enter Force: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*";
                        cout<<"Enter Distance: ";
                        cin>>b;
                        caller.set_num2(b);
                        file<<b<<"=";
                        cout<<"Moment of Force: ";
                        cout<<caller.moment_of_force();
                        file<<caller.moment_of_force()<<endl;
                        caller_T.insert(caller.moment_of_force());
                        break;
                    }
                case 5:
                    {
                        double a,b;
                        file<<"Power=Work Done/Time=";
                        cout<<"Enter Work Done: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"/";
                        cout<<"Enter Time: ";
                        cin>>b;
                        caller.set_num2(b);
                        file<<b<<"=";
                        cout<<"Power: ";
                        cout<<caller.power_physics();
                        file<<caller.power_physics()<<endl;
                        caller_T.insert(caller.power_physics());
                        break;
                    }
                case 6:
                    {
                        double a,b;
                        file<<"Work Done=Force*Distance=";
                        cout<<"Enter Force: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*";
                        cout<<"Enter Distance: ";
                        cin>>b;
                        caller.set_num2(b);
                        file<<b<<"=";
                        cout<<"Work Done: ";
                        cout<<caller.work_done();
                        file<<caller.work_done()<<endl;
                        caller_T.insert(caller.work_done());
                        break;
                    }
                case 7:
                    {
                        double a,b;
                        file<<"Pressure=Force/Area=";
                        cout<<"Enter Force: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"/";
                        cout<<"Enter Area: ";
                        cin>>b;
                        caller.set_num2(b);
                        file<<b<<"=";
                        cout<<"Pressure: ";
                        cout<<caller.pressure();
                        file<<caller.pressure()<<endl;
                        caller_T.insert(caller.pressure());
                        break;
                    }
                case 8:
                    {
                        double a,b;
                        file<<"Acceleration=Velocity/Time=";
                        cout<<"Enter Velocity: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"/";
                        cout<<"Enter Time: ";
                        cin>>b;
                        caller.set_num2(b);
                        file<<b<<"=";
                        cout<<"Acceleration: ";
                        cout<<caller.acceleration();
                        file<<caller.acceleration()<<endl;
                        caller_T.insert(caller.acceleration());
                        break;
                    }
                case 9:
                    {
                        double a,b,c,d;
                        file<<"Average Speed=D2-D1/T2-T1=";
                        cout<<"Enter Initial Distance: ";
                        cin>>a;
                        caller.set_num1(a);
                        cout<<"Enter Final Distance: ";
                        cin>>b;
                        caller.set_num2(b);
                        file<<b<<"-"<<a<<"/";
                        cout<<"Enter Initial Time: ";
                        cin>>c;
                        caller.set_num3(c);
                        cout<<"Enter Final Time: ";
                        cin>>d;
                        caller.set_num4(d);
                        file<<d<<"-"<<c<<"=";
                        cout<<"Average Speed: ";
                        cout<<caller.avg_speed();
                        file<<caller.avg_speed()<<endl;
                        caller_T.insert(caller.avg_speed());
                        break;
                    }
                case 10:
                    {
                        double a,b;
                        file<<"Velocity=Displacement/Time=";
                        cout<<"Enter Displacement: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"/";
                        cout<<"Enter Time: ";
                        cin>>b;
                        caller.set_num2(b);
                        file<<b<<"=";
                        cout<<"Velocity: ";
                        cout<<caller.velocity();
                        file<<caller.velocity()<<endl;
                        caller_T.insert(caller.velocity());
                        break;
                    }
                case 11:
                    {
                        double a,b,c,d;
                        file<<"Average Velocity=D2-D1/T2-T1=";
                        cout<<"Enter Initial Displacement: ";
                        cin>>a;
                        caller.set_num1(a);
                        cout<<"Enter Final Displacement: ";
                        cin>>b;
                        caller.set_num2(b);
                        file<<b<<"-"<<a<<"/";
                        cout<<"Enter Initial Time: ";
                        cin>>c;
                        caller.set_num3(c);
                        cout<<"Enter Final Time: ";
                        cin>>d;
                        caller.set_num4(d);
                        file<<d<<"-"<<c<<"=";
                        cout<<"Average Velocity: ";
                        cout<<caller.avg_velocity();
                        file<<caller.avg_velocity()<<endl;
                        caller_T.insert(caller.avg_velocity());
                        break;
                    }
                case 12:
                    {
                        double a,b;
                        file<<"Wave Velocity=Frequency*Wavelength=";
                        cout<<"Enter Frequency: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*";
                        cout<<"Enter Wavelength: ";
                        cin>>b;
                        caller.set_num2(b);
                        file<<b<<"=";
                        cout<<"Wave Velocity: ";
                        cout<<caller.wave_velocity();
                        file<<caller.wave_velocity()<<endl;
                        caller_T.insert(caller.wave_velocity());
                        break;
                    }
                case 13:
                    {
                        double a;
                        file<<"Wave Frequency=1/Time Period=";
                        cout<<"Enter Time Period: ";
                        cin>>a;
                        file<<"1/"<<a<<"=";
                        caller.set_num1(a);
                        cout<<"Wave Frequency: ";
                        cout<<caller.wave_frequency();
                        file<<caller.wave_frequency()<<endl;
                        caller_T.insert(caller.wave_frequency());
                        break;
                    }
                case 14:
                    {
                        double a,b;
                        file<<"Gravitational Potential Energy=Mass*Height*Gravity=";
                        cout<<"Enter Mass: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*";
                        cout<<"Enter Height: ";
                        cin>>b;
                        caller.set_num2(b);
                        file<<b<<"*9.81"<<"=";
                        cout<<"Gravitational Potential Energy: ";
                        cout<<caller.gravitational_potential_energy();
                        file<<caller.gravitational_potential_energy()<<endl;
                        caller_T.insert(caller.gravitational_potential_energy());
                        break;
                    }
                default:
                    {
                        cout<<"Error! Enter a valid command!"<<endl;
                        break;
                    }

                break;
        }
        file.close();
        break;
        }
    case 5:
        {
            file.open("D:/History.txt",std::fstream::out|std::fstream::app);
            int nested_option;
            cout<<"1: KM into Miles"<<endl;
            cout<<"2: Miles into KM"<<endl;
            cout<<"3: Inch Into cm"<<endl;
            cout<<"4: cm into Inch"<<endl;
            cout<<"5: Foot into Meters"<<endl;
            cout<<"6: Meters into Foot"<<endl;
            cout<<"7: Pound into Grams"<<endl;
            cout<<"8: Ounce into Grams"<<endl;
            cout<<"9: Gallons into Liters"<<endl;
            cout<<"10: Fahrenheit into Celsius"<<endl;
            cout<<"11: Celsius into Fahrenheit"<<endl;
            cout<<"Enter Your Command: ";
            cin>>nested_option;
            switch(nested_option)
            {
                case 1:
                    {
                        double a;
                        file<<"Miles=KM*0.621371=";
                        cout<<"Enter KM: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*"<<"0.621371=";
                        cout<<"Miles="<<caller.km_into_miles();
                        file<<caller.km_into_miles()<<endl;
                        caller_T.insert(caller.km_into_miles());
                        break;
                    }
                case 2:
                    {
                        double a;
                        file<<"KM=Miles*1.60934=";
                        cout<<"Enter Miles: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*"<<"1.60934=";
                        cout<<"KM="<<caller.miles_into_km();
                        file<<caller.miles_into_km()<<endl;
                        caller_T.insert(caller.miles_into_km());
                        break;

                    }
                case 3:
                    {
                        double a;
                        file<<"CM=Inch*2.54=";
                        cout<<"Enter Inch: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*"<<"2.54=";
                        cout<<"cm="<<caller.inch_into_cm();
                        file<<caller.inch_into_cm()<<endl;
                        caller_T.insert(caller.inch_into_cm());
                        break;
                    }
                case 4:
                    {
                        double a;
                        file<<"Inch=cm*0.393701=";
                        cout<<"Enter cm: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*"<<"0.393701=";
                        cout<<"Inch="<<caller.cm_into_inch();
                        file<<caller.cm_into_inch()<<endl;
                        caller_T.insert(caller.cm_into_inch());
                        break;
                    }
                case 5:
                    {
                        double a;
                        file<<"Meters=Inch*0.3048=";
                        cout<<"Enter Foot: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*"<<"0.3048=";
                        cout<<"Meters="<<caller.foot_into_m();
                        file<<caller.foot_into_m()<<endl;
                        caller_T.insert(caller.foot_into_m());
                        break;
                    }
                case 6:
                    {
                        double a;
                        file<<"Foot=Meters*3.28084=";
                        cout<<"Enter Meters: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*"<<"3.28084=";
                        cout<<"Foot="<<caller.m_into_foot();
                        file<<caller.m_into_foot()<<endl;
                        caller_T.insert(caller.m_into_foot());
                        break;
                    }
                case 7:
                    {
                        double a;
                        file<<"Grams=Pounds*453.592=";
                        cout<<"Enter Pounds: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*"<<"453.592=";
                        cout<<"Grams="<<caller.pound_into_grams();
                        file<<caller.pound_into_grams()<<endl;
                        caller_T.insert(caller.pound_into_grams());
                        break;
                    }
                case 8:
                    {
                        double a;
                        file<<"Grams=Ounces*28.3495=";
                        cout<<"Enter Ounces: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a<<"*"<<"28.3495=";
                        cout<<"Grams="<<caller.ounce_into_grams();
                        file<<caller.ounce_into_grams()<<endl;
                        caller_T.insert(caller.ounce_into_grams());
                        break;
                    }
                case 9:
                    {
                        double a;
                        file<<"Liters=Gallons*3.78541=";
                        cout<<"Enter Gallons: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a;
                        file<<"*"<<"3.78541=";
                        cout<<"Liters="<<caller.gallon_into_liter();
                        file<<caller.gallon_into_liter()<<endl;
                        caller_T.insert(caller.gallon_into_liter());
                        break;
                    }
                case 10:
                    {
                        double a;
                        file<<"Celsius=Fahrenheit-32*5/9=";
                        cout<<"Enter Fahrenheit: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<a;
                        file<<"-32*5/9=";
                        cout<<"Celsius="<<caller.fahrenheit_into_celsius();
                        file<<caller.fahrenheit_into_celsius()<<endl;
                        caller_T.insert(caller.fahrenheit_into_celsius());
                        break;
                    }
                case 11:
                    {
                        double a;
                        file<<"Fahrenheit=";
                        file<<"(Celsius*9/5)+32=";
                        cout<<"Enter Celsius: ";
                        cin>>a;
                        caller.set_num1(a);
                        file<<"(";
                        file<<a;
                        file<<"*9/5)+32=";
                        cout<<"Fahrenheit="<<caller.celsius_into_fahrenheit();
                        file<<caller.celsius_into_fahrenheit()<<endl;
                        caller_T.insert(caller.celsius_into_fahrenheit());
                        break;
                    }
                default:
                    {
                        cout<<"Error! Enter a valid command!"<<endl;
                        break;
                    }
            }
            file.close();
            break;
        }
    case 6:
        {
            file.open("D:/History.txt");
            string str;
            //file1.read("C:/Project/Casefile.txt");
            if(file.is_open())
            {
                cout<<endl;
                while(!file.eof())
                {
                    getline(file,str);
                    cout<<str<<endl;
                }
            }
            file.close();
            break;
        }
    case 7:
        {
            file.open("D:/History.txt",std::ofstream::out | std::ofstream::trunc);
            cout<<"Contents in File Deleted";
            file.close();
            break;
        }
    case 8:
        {
            Tnode* temp=caller_T.root;
            caller_T.Inorder_print(temp);
            break;
        }
    case 9:
        {
            Tnode* temp=caller_T.root;
            caller_T.Postorder_print(temp);
            break;
        }
    case 10:
        {
            Tnode* temp=caller_T.root;
            caller_T.Preorder_print(temp);
            break;
        }
    case 11:
        {
            /**searching**/
            Tnode* temp=caller_T.root;
            int no;
            cout<<"Enter Number to Search: ";
            cin>>no;
            if(caller_T.search(temp,no)==NULL)
            {
                cout<<"Not Found";
            }
            else
            {
                cout<<"Found";
            }

            break;
        }
    case 12:
        {
            while(1){
            char a;
            cout<<"Goto Data Structures Menu (Y/N): ";
            cin>>a;
            if(a=='y'||a=='Y')
            {
                system("cls");
                goto data_structures_menu;
                break;
            }
            else if(a=='n'||a=='N')
            {
                goto exit;
            }
            else
            {
                cout<<"Error! Enter a valid command!"<<endl;
            }
            }//while
        }
    case 13:
        {
            cout<<"Bubye! Take care";
            file.close();
            exit(0);
        }

    default:
        {
            cout<<"Error! Enter a valid command!"<<endl;
            break;
        }
    }

} //while loop
        }


    } /** base switch**/
        exit:
         cout<<"Bubye! Take care";
         exit(0);
    }

