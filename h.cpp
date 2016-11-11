#include <iostream>

using namespace std;
int main() {
        int n,x,y;
	cin>>n;
	int a[n];

	for(int i=0; i<n; i++){
		cin>> a[i];
	}
	int i=0;
	while(n){
		if(n==1){
			cout<<a[i]; break;
		}
		x=a[i];
		a[i]=a[i+1];
		a[i+1]=x;
		cout<<a[i]<<" "<<a[i+1]<<" ";
		i+=2;
		
		if(n % 2==0 && i==n) break;
		if(n % 2!=0 && i==n-1)	 
		{
		cout<<a[i];
		break;
	}
}
}