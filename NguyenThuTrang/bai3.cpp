#include<bits/stdc++.h>
using namespace std ;
main(){	
	cout << "Nhap vao mot so nguyen: "<< endl ;
	int x ; 
	cin >> x ;
	// Sang nguyen to Eratosthenes 
	int n =  1000;
	bool E[2*n+1] ;
	memset(E, true , sizeof(E)) ; // khoi tao cac so [2..n-1] deu la snt
	E[0] = E[1] = false ;  
	for(int i = 2; i<= n; i++){
		if(E[i] == true){
			for(int j =i*i; j <= 2*n ; j += i){
				E[j] = false ;     // boi cua 1 so nguyen to thi k phai so nguyento
			}
		}
	}
	
	if(E[x] == true ){
		cout << x <<" la so nguyen to" ;
	}
	else cout << x << " khong phai so nguyen to"; 
}
