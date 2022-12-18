/* Write a program to perform transpose of a matrix */
#include<iostream>
using namespace std;
int main()
{
    int r, c;
    cout << "--------Transpose of Matrix--------";
    cout << "\n\nEnter size of rows and columns: ";
    cin >> r >> c;
    int m[r][c], t[c][r],i, j;
    //Taking input for elements of Matrix 
    cout << "\nEnter elements of Matrix : \n";
    for(i = 0; i < r; i++)
    {
        cout << ": ";
        for(j = 0; j < c; j++)
        {
            cin >> m[i][j];
        }
    }

    //Logic for transpose of Matrix
    for(i = 0; i < c; i++)
    {
        for(j = 0; j < r; j++)
        {
            t[i][j] = m[j][i];
        }
    }

    //Printing transpose of Matrix
    cout << "\nTranspose of Matrix: \n";
    for(i = 0; i < c; i++)
    {
        cout << ": ";
        for(j = 0; j < r; j++)
        {
            cout << t[i][j] << " ";
        }
        cout << "\n";
    }
}