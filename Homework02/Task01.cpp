#include <iostream>

using namespace std;

void toPerc (int arr[][2], int N)
{
    for  (int i=0; i<N; i++)
    {
        cin>>arr[i][0]>>arr[i][1];
    }
    for (int i=0; i<N; i++)
    {
        int perc = (arr[i][0]*100)/arr[i][1];
        cout<<perc<<"%"<<endl;
    }
}

int main()
{
    const int COLUMNS = 105;
    int arr[COLUMNS][2], N;

    cin>>N;
    if(N<5 || N>105)
    {
        cout<<"Enter a valid number!"<<endl;
    }
    else
    {
        toPerc(arr, N);
    }
    return 0;
}
