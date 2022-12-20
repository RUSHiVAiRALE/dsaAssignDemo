#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cout << "Enter row : ";
    cin >> row;
    cout << "Enter colum : ";
    cin >> col;
    int arr1[row][col];
    int count = 0;
    int p = 0;

    // Taking intput from user ;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter " << i << j << "th Element :";
            cin >> arr1[i][j];
            if (arr1[i][j] != 0)
            {
                ++count;
            }
        }
    }
    // intialized new sparce array
    int arr2[count][3];

    // storing elements in sparce matrix
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr1[i][j] != 0)
            {
                arr2[p][0] = i;
                arr2[p][1] = j;
                arr2[p][2] = arr1[i][j];
                p++;
            }
        }
    }

    // Reading elments of sparce matrix;
    cout << "##### Sparce matrix #####\n";
    for (size_t i = 0; i < count; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\n";

    // Transpose of Sparce matrix
    cout << "##### Trnaspose of Sparce matrix ##### \n";
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < count; j++)
        {
            cout << arr2[j][i] << " ";
        }
        cout << endl;
    }
}