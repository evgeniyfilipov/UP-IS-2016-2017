#include <iostream>
#include <iomanip>

using namespace std;

void printArray(int* arr, int size)
{
    cout<<"Enter your array's elements: ";
    for (int i=0; i<size; i++)
    {
        cin>>*(arr+i);
    }
}

void sort(int* arr, int size)
{
    int temp;
    for (int i=0; i<size; i++)
    {
        for (int j=i+1; j<size; j++)
        {
            if (*(arr+i) > *(arr+j))
            {
                temp = *(arr+i);
                *(arr+i) = *(arr+j);
                *(arr+j) = temp;
            }
        }
    }
}

int main()
{
    int arr[255];
    int size;
    cout<<"Enter the number of elements of the array: ";
    cin>>size;
    printArray(arr, size);
    sort(arr, size);
    for (int i=0; i<size; i++)
    {
        cout<<*(arr+i)<<setw(10);
    }
    return 0;
}
