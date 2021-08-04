#include<bits/stdc++.h>
using namespace std ;

main(){
	srand((int)time(0)) ;
	int r = 1000 + rand() % 9000 ;  // sinh so ngau nhien
	int rand[4] ;
	for(int i =3; i>=0 ;i--){
		rand[i] = r%10  ;
		r = r/10 ; 		  
	}	
	string n ;
	int cow, bull =-1;
	while(1){
		cin >> n ;  //length =4 ;
		cow = 0;
		for(int i = 0; i< 4; i++){
			if(rand[i] == n[i]-'0'){
				cow++ ;			
			}
		}
		bull++ ;
		if (cow == 4){		
	    	break ;
    	}
		cout << cow << " cows," << bull << " bulls" << endl	 ;	
	}
	cout << "So lan doan: " << bull+1 << endl ;

}
