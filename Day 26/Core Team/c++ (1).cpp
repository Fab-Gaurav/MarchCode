#include<iostream>
using namespace std;
void swapping(int &x,int &y)
{
    int z;
    z=x;
    x=y;
    y=z;
}
int main( )
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("\n Before calling swap function : %d %d",a,b);
    swapping(a,b);
    printf("\n Before calling swap function : %d %d",a,b);
    return 0;

}