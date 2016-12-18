#include <iostream>

using namespace std;

void printArray (int arr[][5], int rows, int columns)
{
    for (int i=0; i<rows; i++)
    {
            for (int j=0; j<columns; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

void printElement (int arr[][5], int numberIndex)
{
    int *ptr;
    ptr = *(arr)+numberIndex;
    cout<<*ptr<<endl;
}

int main()
{
    int ROWS=6, COLUMNS=5;
    int arr[6][5]=
    {
        {11, 12, 13, 14, 15},
        {21, 22, 23, 24, 25},
        {31, 32, 33, 34, 35},
        {41, 42, 43, 44, 45},
        {51, 52, 53, 54, 55},
        {61, 62, 63, 64, 65}
    };
    printArray(arr, ROWS, COLUMNS);
    int numberIndex;
    cin>>numberIndex;
    if(numberIndex<5 || numberIndex>29)
    {
        cout<<"Wrong input."<<endl;
    }
    else
    {
        printElement(arr,numberIndex);
    }
    return 0;
}
