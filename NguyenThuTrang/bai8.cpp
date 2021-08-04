#include<bits/stdc++.h>
using namespace std ;
main(){
	int n , b ;
	int k= 0 , res[10001];
	cout << "Nhap n: " ;
	cin >> n ;
	cout << "Nhap b: " ;
	cin >> b ;
	if( b>32 || b<2) return 0 ;
	while(n >0){	
		res[k++] = n%b ; 
		n = n/b ;
	}
	for(int i = k-1 ; i >= 0; i--){
		cout << res[i] ;
	}
	
}
