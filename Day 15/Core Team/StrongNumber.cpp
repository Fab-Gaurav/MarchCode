#include<iostream>
using namespace std;

int main(){
int n,temp,sum=0;
cout<<"Enter a number"<<endl;
cin>>n;
temp=n;
while(n>0){
int f=n%10;
int fact=1;
for(int i=f;i>=1;i--){
fact=fact*i;
}
sum=sum+fact;
n=n/10;
}
n=temp;
if(n==sum){
cout<<"Strong number"<<endl;
}
else{
cout<<"Not A Strong number"<<endl;
}


}
