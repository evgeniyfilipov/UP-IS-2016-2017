#include <iostream>
#include <iomanip>
using namespace std;

void spiralArray (int arr[][100], int size)
{
    int sizeCopy, i=0, j=0, k=1;
    sizeCopy = size;
    while (sizeCopy)
    {
        for (int p=0; p<sizeCopy; p++)
        {
            arr[i][j++]=k++;
        }
        sizeCopy--;
        if(sizeCopy==0) break;
        i++;
        j--;
        for(int p=0; p<sizeCopy; p++)
        {
            arr[i++][j]=k++;
        }
        i--;
        j--;
        for(int p=0; p<sizeCopy; p++)
        {
            arr[i][j--]=k++;
        }
        sizeCopy--;
        if(sizeCopy==0) break;
        i--;
        j++;
        for(int p=0; p<sizeCopy; p++)
        {
            arr[i--][j]=k++;
        }
        i++;
        j++;
    }
    for (i=0; i<size; i++)
    {
        for(j=0; j<size; j++)
        {
            cout<<setw(5)<<arr[i][j];
        }
        cout<<endl;
    }
}

int main()
{
    int arr[100][100], size;
    cin>>size;
    spiralArray(arr, size);
    return 0;
}





