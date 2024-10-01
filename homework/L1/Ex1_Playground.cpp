#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double side;
    double radius;
    
    cout << "Enter the side of the square playground: ";
    cin >> side;

    cout << "Enter the radius of the gazebo: ";
    cin >> radius;

    double squareArea = pow(side, 2);
    double circleArea = M_PI * pow(radius, 2);
    double materialArea = squareArea - circleArea;

    cout << "The required material to cover is: " << materialArea << " square meters." << endl;

    return 0;
}
