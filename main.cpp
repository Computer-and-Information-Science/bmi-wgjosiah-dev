#include <iostream>
using namespace std;

int main() {
    int height = 61;
    int weight= 130;

 double kg = weight * 0.453592;

 double m= height * 0.0254;

 double bmi = kg / (m * m);

 cout << "The BMI for this person is : " << bmi << "." << endl; 

}
