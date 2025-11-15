#include <iostream>
#include <iomanip>
#define _USE_MATH_DEFINES
#include <cmath>

using namespace std;

void info() {
    cout << "Program Author: Kokhanenko Sofiia" << endl;
    cout << "Purpose: Calculate a mathematical expression for x and check its domain." << endl;
    cout << "Variant: 59" << endl;
}

//Перевіряє, чи належить вхідне значення x області визначення виразу.
bool in_domain(double x){
    return x >= -4.0 && x <= -2.0;
}

//Обчислює значення виразу
double f(double x) { 

    return std::cos(30.0/56.0) + ((24.0*M_PI)/(45.0*M_E)) * (12.0/((x-10.0)*(x-8.0))) + 5.0*std::acos(x+3.0) - std::sqrt(x+6.0); 
}

int main() {
    info();
    
//Ввести вхідні дані    
    double x;
    cout << "Enter the value for x (Domain is [-4.0, -2.0]): ";
    cin >> x;
    
// Контроль помилок введення
    if (cin.fail()) {
        cout << "wrong input" << endl;
        return 0; 
    }
    
//Виконання обчислень 
    cout << "***** do calculations ...";
    double result = 0.0;
    bool is_defined = in_domain(x); 
    

    if (is_defined) {
        result = f(x); 
    } 
    

    cout << " done" << endl;
    
//Виведення введених даних
    cout << fixed << setprecision(7);
    cout << "for x = " << x << endl;
    
//Виведення результатів обчислення
    cout << setprecision(8);
    
    if (is_defined) {
        cout << "result = " << result << endl;
    } else {

        cout << "result = undefined" << endl; 
    }
    
    return 0;
} 