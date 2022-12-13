#include <iostream>
using namespace std;

int main()
{
    int arr[3][3];
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            cout << i << j << "th element :";
            cin >> arr[i][j];
        }
    }

    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << "\n";
    }
}