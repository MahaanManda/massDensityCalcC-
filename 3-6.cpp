/* Write a program that accepts as input the mass, in grams, and density, in grams per cubic centimeters, and outputs the volume of the object using the formula: 
volume = mass / density. Format your output to two decimal places. */

    //preprocessor
#include <iostream>
#include <iomanip>

    //header
using namespace std;



    //main algorithm
int main() {
        //Format your output to two decimal places.
    cout << fixed << showpoint << setprecision(2);

        //variables
    double mass;
    double density;
    double volume;

        //accepts as input the mass, in grams
    cout << "Enter mass (in grams): ";
    cin >> mass;
    
        //and density, in grams per cubic centimeters
    cout << "Enter density (in grams per cubic centimeters): ";
    cin >> density;

        //volume = mass / density
    volume = mass / density;

        //outputs the volume of the object
    cout << "The volume of the object is: " << volume  << " cubic centimeters"<< endl;

        // pause the console before exiting
    system("pause"); 
    
        //return statement (program end)
    return 0;

}