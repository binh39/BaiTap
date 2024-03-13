#include <iostream>

using namespace std;

int main()
{
    int n; cin>>n;
    int a[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
           if(a[j]<a[i]) {
            int x=a[i];
            a[i]=a[j];
            a[j]=x;
        }
        }
        sum+=a[i]*(n-i-1);
    }
    cout<<sum;
}
