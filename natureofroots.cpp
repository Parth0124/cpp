#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a, b, c, root1, root2;

    cout << "Enter the values of a, b, c" << endl;
    cin >> a >> b >> c;

    float d = pow(b, 2) - 4 * a * c;

    if (d == 0)
    {
        cout << "The roots are real and identical." << endl;
        root1 = -b / (2 * a);  
        cout << "The root is " << root1 << endl;
    }
    else if (d > 0)
    {
        cout << "The roots are real and distinct" << endl;
        root1 = (-b + sqrt(d)) / (2 * a);  
        root2 = (-b - sqrt(d)) / (2 * a);
        cout << "The roots are " << root1 << " and " << root2 << endl;
    }
    else
    {
        cout << "The roots are imaginary." << endl;
    }

    return 0;
}
