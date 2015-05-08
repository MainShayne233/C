#include <iostream>
using namespace std;
int main()
{
    int x;
    int y = 0;
    int a1;
    int a2;
    int a3;
    int a4;
    int b1;
    int b2;
    int b3;
    int b4;
    int c1;
    int c2;
    int c3;
    int c4;
    int d1;
    int d2;
    int d3;
    int d4;
    int subdeterm1;
    int subdeterm2;
    int subdeterm3;
    int subdeterm4;
    int determ;
    string size;
    
    while (y==0)
    {
    
        cout << "What size is the matrix that you want to find the determinant for, 2x2, 3x3, or 4x4?\n\n";
        cin >> size;
    
    
        if (size == "2x2")
        {
            y++;
            x = 2;
            cout << "\nEnter the values for your 2x2 matrix so that they are in the following order:\n\na1 b1\na2 b2\n\n";
            cout << "a1 = ";
            cin >> a1;
            cout << "a2 = ";
            cin >> a2;
            cout << "b1 = ";
            cin >> b1;
            cout << "b2 = ";
            cin >> b2;
            determ = ((a1*b2)-(b1*a2));
        }
        else if (size == "3x3")
        {
            y++;
            x=3;
            cout << "\nEnter the values for your 3x3 matrix so that they are in the following order: \n\na1 b1 c1\na2 b2 c2\na3 b3 c3\n\n";
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
        }
        else if (size == "4x4")
        {
            y++;
            x = 4;
            cout << "\nEnter the values for your 4x4 matrix so that they are in the following order: \n\na1 b1 c1 d1\na2 b2 c2 d2\na3 b3 c3 d3\na4 b4 c4 d4\n\n";
            cout << "a1 = ";
            cin >> a1;
            cout << "a2 = ";
            cin >> a2;
            cout << "a3 = ";
            cin >> a3;
            cout << "a4 = ";
            cin >> a4;
            cout << "b1 = ";
            cin >> b1;
            cout << "b2 = ";
            cin >> b2;
            cout << "b3 = ";
            cin >> b3;
            cout << "b4 = ";
            cin >> b4;
            cout << "c1 = ";
            cin >> c1;
            cout << "c2 = ";
            cin >> c2;
            cout << "c3 = ";
            cin >> c3;
            cout << "c4 = ";
            cin >> c4;
            cout << "d1 = ";
            cin >> d1;
            cout << "d2 = ";
            cin >> d2;
            cout << "d3 = ";
            cin >> d3;
            cout << "d4 = ";
            cin >> d4;
            subdeterm1 = (b2*(c3*d4-d3*c4))-(b3*(c2*d4-d2*c4))+(b4*(c2*d3-d2*c3));
            subdeterm2 = (b1*(c3*d4-d3*c4))-(b3*(c1*d4-d1*c4))+(b4*(c1*d3-d1*c3));
            subdeterm3 = (b1*(c2*d4-d2*c4))-(b3*(c1*d4-d1*c4))+(b4*(c1*d2-d1*c2));
            subdeterm4 = (b1*(c2*d3-d2*c3))-(b2*(c1*d3-d1*c3))+(b3*(c1*d2-d1*c2));
            determ = (a1*subdeterm1)-(a2*subdeterm2)+(a3*subdeterm3)-(a4*subdeterm4);
        }
        else
            cout << "I did not understand. Try again.\n\n";
    }
    
    cout << "\nThe determinant of this " << x << "x" << x << " matrix is " << determ << ".\n\n";
    
    
    
}