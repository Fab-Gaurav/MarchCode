#include<iostream>
using namespace std;

void Merge(int a[],int n,int b[], int m)
{
    int i=0,j=0,k=0;
    int c[n+m];

    while ((i<n) && (j <m))
    {
        if (a[i] < b[j])
            c[k++]=a[i++];
        else
            c[k++]=b[j++];
    }

    while (i<n)
            c[k++]=a[i++];

    while (j<m)
            c[k++]=b[j++];

    cout<<"Merged Array: ";
    for (i=0; i<k; i++)
        cout<<c[i]<<" , ";

}

int main()
{
    int arr1[10]={1,5,9,23,90};
    int arr2[10]={0,14,16,20,33,54,71,100};
    Merge(arr1,5,arr2,8);
    return 0;
}
