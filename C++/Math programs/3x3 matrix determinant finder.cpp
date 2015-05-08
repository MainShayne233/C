#include <iostream>
using namespace std;
int main()
{
    int a1;
    int a2;
    int a3;
    int b1;
    int b2;
    int b3;
    int c1;
    int c2;
    int c3;
    int determ;
    
    cout << "Enter the values for your 3x3 matrix so that they are in the following order: \n\na1 b1 c1\na2 b2 c2\na3 b3 c3\n\n";
    cout << "a1 = ";
    cin >> a1;
    cout << "a2 = ";
    cin >> a2;
    cout << "a3 = ";
    cin >> a3;
    cout << "b1 = ";
    cin >> b1;
    cout << "b2 = ";
    cin >> b2;
    cout << "b3 = ";
    cin >> b3;
    cout << "c1 = ";
    cin >> c1;
    cout << "c2 = ";
    cin >> c2;
    cout << "c3 = ";
    cin >> c3;
    determ = (a1*(b2*c3-c2*b3))-(a2*(b1*c3-c1*b3))+(a3*(b1*c2-c1*b2));
    cout << "\nThe determinant of this matrix is: " << determ << ".\n\n.";
    
}