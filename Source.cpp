#include <iostream>
#include <Windows.h>
#include <iomanip>
using namespace std;

int main()
{
    // Set console code page to handle non-ASCII characters
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double height;
    double weight, body_mass_index;

    cout << "Enter the person's height (in cm): ";
    cin >> height;
    cout << "Enter the weight (in kg): ";
    cin >> weight;

    // Check for unrealistic weight
    while (weight >= 1000)
    {
        cout << "Invalid weight!\n ";
        cout << "Enter the weight: ";
        cin >> weight;
    }

    // Convert height from cm to meters
    height = height / 100;
    // Calculate Body Mass Index (BMI)
    body_mass_index = weight / pow(height, 2);

    cout << "Body Mass Index: " << setprecision(3) << body_mass_index << "\n";

    // Determine BMI category
    if (body_mass_index < 18.5)
        cout << "Underweight!\n";
    else if (body_mass_index >= 18.5 && body_mass_index < 25)
        cout << "Normal weight!\n";
    else if (body_mass_index >= 25 && body_mass_index < 30)
        cout << "Overweight!\n";
    else if (body_mass_index >= 30 && body_mass_index < 35)
        cout << "Obesity Class I!\n";
    else if (body_mass_index >= 35 && body_mass_index < 40)
        cout << "Obesity Class II!\n";
    else if (body_mass_index >= 40)
        cout << "Obesity Class III!\n";

    return 0;
}
