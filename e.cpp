#include <iostream>
#include <cmath>

using namespace std;
int main() {
        int n;
	cin>>n;
	int a[n];
	bool ok=false;
	for(int i=0; i<n; i++){
		cin>> a[i];
	}
	for(int i=1; i<n; ++i){

                if(a[i-1]>0 && a[i]>0 || a[i-1]<0 && a[i]<0) ok=true;
	}

	
	 if(ok==true) cout<<"YES";
	else cout<<"NO";
                    
        

return 0;
}