#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    map<int,int> m;
	    int mx_m = 0;
	    for(auto i: arr){
	        m[i]++;
	        mx_m = max(mx_m,m[i]);
	    }
	    cout<<(n-mx_m)<<endl;
	}
	return 0;
}
