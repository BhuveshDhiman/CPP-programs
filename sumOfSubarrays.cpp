#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x[n];

    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    int curr = 0;

    for (int i = 0; i < n; i++)
    {
        curr = 0;
        for (int j = i; j < n; j++)
        {
            curr += x[j];
            cout << curr << "\n";
        }
    }
}