#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main()
{
    // Random training sets for XOR -- 2 inputs and 1 output
    int iteration = 3000;
    cout<< "topology: 2 4 1" << endl;
    for (int i = iteration; i >= 0; --i)
    {
        int n1 = (int)(2.0 * rand() / double(RAND_MAX));
        int n2 = (int)(2.0 * rand() / double(RAND_MAX));
        int t = n1 ^ n2; // this should be 1 or 0
        cout << "in: " << n1 << ".0 " << n2 << ".0" << endl;
        cout << "out: " << t << ".0" << endl;
    }
    //system("gen.exe > traindata.txt");
    return 0;
}