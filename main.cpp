#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(0,"");
    float y,x;
    for (x = 0.1; x < 2.2; x+= 0.2)
    {
        y=1.8*pow(x,2)-sin(10*x);
        cout << "Результат выражения с шагом x+=0.2 y = " << y << endl;
    }
    return 0;
}
