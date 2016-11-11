#include <iostream>
#include <cmath>

using namespace std;
int main() {
        int n;
	cin>>n;
	int a[n];
	int s=0;
	for(int i=0; i<n; i++){
		cin>> a[i];
	}
	for(int i=1; i<n; i++){

                if(a[i-1]<a[i]) s++;
	} 

                    cout<< s;
        

return 0;
}