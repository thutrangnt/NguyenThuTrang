#include<bits/stdc++.h>
using namespace std;
typedef long long int ll ;
ll Giaithua(ll x){
	if(x == 1)  return 1 ;
	return x*Giaithua(x-1) ;
}
main(){
	ll n ;
	cin >> n ;
	cout << Giaithua(n) ; 
	
}
