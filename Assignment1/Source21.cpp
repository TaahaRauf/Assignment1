#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

int main()
{
    float rand1, rand2, answer;
    int max;
    srand(time(0));
    max = 99999;
    rand1 = rand() % max;
    rand2 = rand() % max;
    answer = rand1 + rand2;
    cout << setw(10) << rand1  << endl;
    cout << "+" << endl;
    cout << setw(10) << rand2 << endl;
    cout << "---------------------" << endl;
    system("pause");
    cout << setw(10) << answer;

    return 0;
}
