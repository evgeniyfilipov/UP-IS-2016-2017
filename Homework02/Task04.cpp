#include <iostream>
#include <iomanip>
using namespace std;

void initArray (int arr[][100], int sizeRows, int sizeCol)
{
    for (int i=0; i<sizeRows; i++)
    {
        for (int j=0; j<sizeCol; j++)
        {
            cin>>arr[i][j];
        }
    }
}

void printArray (int arr[][100], int sizeRows, int sizeCol)
{
    cout<<"Your initial array is: "<<endl;
    for (int i=0; i<sizeRows; i++)
    {
        for (int j=0; j<sizeCol; j++)
        {
            cout<<setw(5)<<arr[i][j];
        }
        cout<<endl;
    }
}

void sortArray (int arr[][100], int sizeRows, int sizeCol)
{
    cout<<"Your initial array, sorted, is: "<<endl;
    for(int i=0; i<sizeRows; i++)
    {
        for(int j=0; j<sizeCol; j++)
        {
            int m = i;
            int n = j+1;
            while (1)
            {
                if (n==sizeCol)
                {
                    n=0;
                    m++;
                    if(m==sizeRows) break;
                }
                if (arr[i][j] > arr[m][n] ) swap (arr[i][j], arr[m][n]);
                n++;
            }
                cout<<setw(5)<<arr[i][j];
        }
            cout<<endl;
    }
}
int main()
{
    int arr[100][100], sizeRows, sizeCol;
    cin>>sizeRows>>sizeCol;
    initArray(arr, sizeRows, sizeCol);
    printArray(arr, sizeRows, sizeCol);
    sortArray(arr, sizeRows, sizeCol);
    return 0;
}
