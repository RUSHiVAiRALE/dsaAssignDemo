#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cout << "Enter row :";
    cin >> row;
    cout << "Enter colum :";
    cin >> col;
    int arr[row][col];
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            cout << i << j << "th element :";
            cin >> arr[i][j];
        }
    }
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "\n";
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            cout << arr[j][i] << "\t";
        }
        cout << endl;
    }
}