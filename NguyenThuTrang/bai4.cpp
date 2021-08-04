#include<bits/stdc++.h>
using namespace std;
int check(string s){ 
// ktra dau vao co thoa man chuoi nhi phan 4 chu so
// ngan cach boi dau phay	
	for(int i = 0; i< s.length() ;i++){
		if(s[i] != '0' && s[i]!= '1' && s[i] !=','){
	        cout << 0;
			return 0; // neu trong day co ky hieu khac '1','0',','  thi return
		}
	}
	
	for(int i = 4; i< s.length();i+=5){
		if(s[i] ==','){
			for(int j = i-4; j< i;j++){
				if(s[j] == ',')  return 2 ;
			}
		}
		if(s[i] !=',') return 3; 
	}
	return 1 ;	
}
main(){
	string s ;
	cin >> s ;
	int ll = s.length() ;
    if(check(s)){	
    	for(int i = 4; i <ll ;i+=5){
    		if(s[i-1] == '0' && s[i-4] == '1'){
    			for(int j = i-4; j< i; j++){
    				cout << s[j]  ;
				}
				cout << "," ;
			} 	
		}
		if(s[ll-4] =='1' && s[ll-1] == '0'){
			for(int j = ll-4; j< ll ;j++) {
				cout << s[j] ;
			}
			    
		}
	}
		
}
