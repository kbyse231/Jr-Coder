/*Created by Kyle Byse
Date: Feb. 2, 2020
This is my first simple C++ program.
Note: Feel free to leave comments. I am aware that there may be slight errors but I tested the code with different numbers and there were slight errors. Let me know of the problems.
*/
#include <iostream>

using namespace std;

int temp;
string unit;
double C;
double F;
double K;

int main(){
cout << "Enter your temperature: " << endl;
cin >> temp;
cout << "Choose your unit: " << endl;
cin >> unit;

if (unit == "F"){
    C = (temp - 32) * 5/9;
    K = (temp - 32) * 5/9 + 273.15;
    cout << temp << " degrees" << " Fahrenheit" << endl;
    cout << C << " degrees" << " Celsius" << endl;
    cout << K << " Kelvin";
}
else if (unit == "C"){
    F = (temp * 9/5) + 32;
    K = temp + 273.15;
    cout << temp << " degrees" << " Celsius" << endl;
    cout << F << " degrees" << " Fahrenheit" << endl;
    cout << K << " Kelvin";
}
else if (unit == "K"){
    C = temp - 273.15;
    F = (temp - 273.15) * 9/5 + 32;
    cout << temp << " Kelvin" << endl;
    cout << C << " degrees" << " Celsius" << endl;
    cout << F << " degrees" << " Fahrenheit" << endl;
}
else{
    cout << "Enter either 'F', 'C', or 'K'." << endl;
}
}
