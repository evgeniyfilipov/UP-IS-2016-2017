#include <iostream>

using namespace std;

void printArray(int* arr, int size)
{
    cout<<"Enter your array's elements: ";
    for (int i=0; i<size; i++)
    {
        cin>>*(arr+i);
    }
}

int countInversions(int* arr, int size)
{
    int counter = 0;
    for (int i=0; i<size; i++)
    {
        for (int j=i+1; j<size; j++)
        {
            if(*(arr+i) > *(arr+j))
            {
                counter++;
            }
        }
    }
    return counter;
}

int main()
{
    int arr[255];
    int size;
    cout<<"Enter the number of elements of the array: ";
    cin>>size;
    printArray(arr, size);
    cout<<"The number of inversions are: "<<countInversions(arr, size)<<endl;
    return 0;
}
