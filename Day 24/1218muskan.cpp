#include<iostream>
using namespace std;

int main()
{
    int n,i,j;
    cout<<"Enter the no. of elements in array: \n";  cin>>n;
    cout<<"Enter the elements in array: ";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Unique Elements: "<<endl;

    for (i=0; i<n; i++)
    {
        for (j=0; j<i; j++)
        {
           if (arr[i] == arr[j])
               break;
        }
        if (i == j)
          cout << arr[i] << " ";
    }
    return 0;
}
