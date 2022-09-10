#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    
	    double n,m,k;
	    cin>>n>>m>>k;
	    
	    double req_days=n/k;
	    if(req_days==m){
	        cout << "YES \n";
	    }
	    else if(req_days>m){
	        cout << "NO \n";
	    }
	    else{
	        cout << "YES \n";
	    }
	    
	}
	return 0;
}
