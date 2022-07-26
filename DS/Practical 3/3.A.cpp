/* Write a program to perform matrix addition */
#include<iostream>
using namespace std;
int main()
{
    int r, c;
    cout << "--------Matrix Addition--------";
    cout << "\n\nEnter size of rows and columns: ";
    cin >> r >> c;
    int m1[r][c], m2[r][c], add[r][c], i, j;
    //Taking input for elements of Matrix 1
    cout << "\nEnter elements of Matrix 1: \n";
    for(i = 0; i < r; i++)
    {
        cout << ": ";
        for(j = 0; j < c; j++)
        {
            cin >> m1[i][j];
        }
    }

    //Taking input for elements of Matrix 2
    cout << "\nEnter elements of Matrix 2: \n";
    for(i = 0; i < r; i++)
    {
        cout << ": ";
        for(j = 0; j < c; j++)
        {
            cin >> m2[i][j];
        }
    }

    //Add Matrix 1 & Matrix 2
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            add[i][j] = m1[i][j] + m2[i][j];
        }
    }
    cout << "\nMatrix Addition: \n";
    for(i = 0; i < r; i++)
    {
        cout << ": ";
        for(j = 0; j < c; j++)
        {
            cout << add[i][j] << " ";
        }
        cout << "\n";
    }
}