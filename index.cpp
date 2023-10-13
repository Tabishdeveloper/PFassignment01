#include<iostream>

using namespace std;
int main(){

    // Find Mean in which input taken from user    (In this program user is restricted to put only 4 inputs to find mean)
       int num1,num2,num3,num4;
       cout<<"Please Enter your Ist number :\n";
 cin>>num1;
 cout<<"Please Enter your 2nd number :\n";
    cin>>num2;
    cout<<"Please Enter your 3rd number :\n";
    cin>>num3;
    cout<<"Please Enter your 4th number :\n";
    cin>>num4;
    int sum = num1 + num2 + num3 + num4;

    int mean = sum/4;
    cout<<"\nThe mean of given numbers is =\n "<<mean;
    //____________________________________________________________________________________________________________________________

    // Unit Convesions
    // => Kg to grams

float units;
    cout<<"Enter the weight in Kg\n";
    cin>>units;
    int conv = units*1000;
    cout<<"The given weight is "<<conv <<" grams\n";
    
    // => cm to meter
    cout<<"Enter the lenght in cm\n";
    cin>>units;
    float conv_1 = units/100;
    cout<<"The given lenght is "<<conv_1 <<" meter\n";

    // => Celsius to fahrenheit

    cout<<"Enter the Temperature in Celsius\n";
    cin>>units;
    float conv_2 = units *9/5+32;
     cout<<"The given temperature is "<<conv_2 <<" Fahrenheit\n";

     //____________________________________________________________________________________________________________________________
     
     // if / else if / else 

     int marks;
     cout<<"PLease enter students marks\n";
     cin>>marks;
     if(marks>90){
        cout<<"Student got A+ grade\n";
     }
     else if(marks>80){
        cout<<"Student got B+ grade\n";

     }
     else{cout<<"All students fail\n";}

     // USE OF SWITCH CASE STATEMENT

     char button;
     cout<<"Please press one button\n";
     cin>>button;
     switch (button){
        case 'a':
        cout<<"Hello";
        break;
        case 'b':
        cout<<"My name is Tabish Almas";
        break;
        case 'c':
        cout<<"Programming is not to write only Hello World";
        break;
        default:
        cout<<"Sorry this is not available on this device";
        break;
     }




    return 0;
}

    //____________________________________________________________________________________________________________________________


    

