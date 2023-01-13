// Codeforce Problem No - 4A
// Problem Name - Watermelon

#include <stdio.h>
using namespace std;
int main()
{
    int w;

    cin >> w;
    string output = (w <= 2 || w % 2) ? "No" : "Yes";
    cout<< output <<endl;
    return 0;
}
