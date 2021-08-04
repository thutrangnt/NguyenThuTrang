#include<bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std ;
ll n, f[100] ;
main(){
	cout << "Ban can bao nhieu so trong day Fibonacci: " << endl ;
	cin >> n ;
	f[0] = 1; f[1] = 1 ;
	for(int i = 2;i< 100 ;i++){
		f[i] = f[i-1]+f[i-2] ;
	}
	for(int i =0; i< n;i++){
		cout << f[i] << " " ;
	}
	
}
