#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << " element : ";
        cin >> arr[i];
    }

    int min = arr[0];
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        else
        {
            if (arr[i] > max)
            {
                max = arr[i];
            }
        }
    }
    cout << "Min : " << min << "\n";
    cout << "Max : " << max << "\n";
    max = min + max;
    min = max - min;
    max = max - min;
    cout << "Min : " << min << "\n";
    cout << "Max : " << max;
}