#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int b[a];
    for (int i=0;i<a;i++)
        cin >> b[i];
    int sumeven = 0, sumodd = 0;
    for (int i = 0; i < a ; i++)
    {
        if (b[i] % 2 == 0)
            sumodd++;
        else
            sumeven++;
    }
    if (sumeven > sumodd)
    {
        for (int i = 0; i < a; i++)
        {
            if (b[i] % 2 == 0)
            {
                cout <<i+1;
                break;
            }
        }
    }
    else
    {
        for (int i = 0; i < a; i++)
        {
            if (b[i] % 2 !=0)
            {
                cout << i+1;
                break;
            }
        }
    }
    return 0;
}