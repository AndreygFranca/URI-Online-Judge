#include <iostream>
#include <iomanip>

using namespace std;


int main ()
{
    int i = -2, j = 65;

    while (j != 0)
    {
        j -=5;
        i += 3;
        cout << "I=" << i << " J=" << j << endl;
    }
}
