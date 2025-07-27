
Program 12: Area of Square


#include <iostream>
using namespace std;

int main() {
    int side;
    cout << "Enter the side of the square: ";
    cin >> side;
    cout << "Area of square: " << side * side << endl;
    return 0;
}


Program 13: Area of Rectangle


#include <iostream>
using namespace std;

int main() {
    int length, width;
    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;
    cout << "Area of rectangle: " << length * width << endl;
    return 0;
}


Program 14: Area of Circle


#include <iostream>
using namespace std;

#define PI 3.14159

int main() {
    float radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "Area of circle: " << PI * radius * radius << endl;
    return 0;
}


Program 15: Area of Triangle


#include <iostream>
using namespace std;

int main() {
    float base, height;
    cout << "Enter the base and height of the triangle: ";
    cin >> base >> height;
    cout << "Area of triangle: " << 0.5 * base * height << endl;
    return 0;
}
