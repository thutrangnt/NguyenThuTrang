#include<bits/stdc++.h>
using namespace std ;
main(){
	string s1, s2 ;
	cout << "Nhap mot chuoi:"  << endl;
	cin >> s1 ;
	s2 =s1 ;
	reverse(s1.begin(), s1.end()) ;
	if(s1 == s2){
		cout << "La chuoi Palindrome";
	}
	else{
		cout << "Khong phai chuoi Palindrome" ;
	}
	
}
