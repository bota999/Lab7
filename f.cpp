#include <iostream>

using namespace std;
int main() {
        int n;
	cin>>n;
	int a[n];
	
	for(int i=0; i<n; ++i){
		cin>> a[i];
	}
	int s=0;
	for(int i=1; i<n-1; ++i){

                if(a[i-1]<a[i] && a[i]>a[i+1]) s++;

	}
		cout<<s;
                    
        

return 0;
}
