#include <iostream>
using namespace std;

int main()
{
    int n;
    float mean, sum = 0;
    cout << "Enter number of element : ";
    cin >> n;
    float arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << " number : ";
        cin >> arr[i];
        sum += arr[i];
    }

    mean = sum / n;
    cout << "Mean is : " << mean;
}