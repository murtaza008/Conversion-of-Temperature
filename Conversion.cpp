#include <iostream>

using namespace std;

int main()
{
    // The loop runs infinity times
    while(true)
    {
    // Declare variables to store input values and conversion results
    float value, fahrenheit, celsius, kelvin;
    char BasicUnit, ConversionUnit;

    // Prompt user to enter the value and units
    cout << "Enter the value : ";
    cin >> value;

    cout << "Enter the Basic Unit" << endl;
    cout << "K for Kelvin, C for Celsius and F for Fahrenheit" << endl;
    cin >> BasicUnit;

    cout << "Enter the Conversion Unit" << endl;
    cout << "K for Kelvin, C for Celsius and F for Fahrenheit" << endl;
    cin >> ConversionUnit;

    cout << "\n";

    // Check the basic unit and perform the appropriate conversions
    if (BasicUnit == 'F' || BasicUnit == 'f')
    {
        fahrenheit = value;

        // Convert Fahrenheit to Kelvin
        if (ConversionUnit == 'K' || ConversionUnit == 'k')
        {
            cout << ((fahrenheit - 32) * 5 / 9) + 273.15 << "K" << endl;
        }
        // Convert Fahrenheit to Celsius
        else if (ConversionUnit == 'C' || ConversionUnit == 'c')
        {
            cout << (fahrenheit - 32) * 5 / 9 << "C" << endl;
        }
        else if (ConversionUnit == 'F' || ConversionUnit == 'f')
        {
            cout << fahrenheit << "F" << endl;
        }
        else
        {
            cout << "Invalid Input" << endl;
        }
    }
    else if (BasicUnit == 'C' || BasicUnit == 'c')
    {
        celsius = value;

        // Convert Celsius to Kelvin
        if (ConversionUnit == 'K' || ConversionUnit == 'k')
        {
            cout << celsius + 273.15 << "K" << endl;
        }
        // Convert Celsius to Fahrenheit
        else if (ConversionUnit == 'F' || ConversionUnit == 'f')
        {
            cout << (celsius * 9 / 5) + 32 << "F" << endl;
        }
        else if (ConversionUnit == 'C' || ConversionUnit == 'c')
        {
            cout << celsius << "C" << endl;
        }
        else
        {
            cout << "Invalid Input" << endl;
        }
    }
    else if (BasicUnit == 'K' || BasicUnit == 'k')
    {
        kelvin = value;

        // Convert Kelvin to Fahrenheit
        if (ConversionUnit == 'F' || ConversionUnit == 'f')
        {
            cout << (kelvin - 273.15) * 9 / 5 + 32 << "F" << endl;
        }
        // Convert Kelvin to Celsius
        else if (ConversionUnit == 'C' || ConversionUnit == 'c')
        {
            cout << kelvin - 273.15 << "C" << endl;
        }
        else if (ConversionUnit == 'K' || ConversionUnit == 'k')
        {
            cout << kelvin << "K" << endl;
        }
        else
        {
            cout << "Invalid Input" << endl;
        }
    }
    else
    {
        cout << "Invalid Input" << endl;
    }
    }

    return 0;
}
