#include <iostream>
using namespace std;

double volt(double current, double resistance)
{
    return current * resistance;
}

int main()
{
    double current, resistance;
    cout << "Enter your current :";
    cin >> current;
    cout << "Enter your resistance : ";
    cin >> resistance ;

    double voltage = volt (current, resistance);

    cout << "Total Voltage: " << voltage << " V" << endl;

    return 0;
}
