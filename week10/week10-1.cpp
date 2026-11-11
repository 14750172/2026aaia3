// week10-1.cpp SOIT108_Advance_002
#include <iostream>
using namespace std;
// 質數 2,3,5,7,11,13,17......
int isPrime(int n){ // 只被 1 跟本身 整除
	for (int i=2; i<n; i++) {
		if (n%i==0) return 0;
	}
	return 1;
}
int main(){
	int a,b;
	cin>>a>>b;
	// 把 a...b 每個數字，都試一遍
	int ans=0;
	for(int i=a;i<=b;i++){
		//質數 2,3,5,7,11,13,17......
		if (isPrime(i)) ans++; // 要判斷質數
	}
	cout << ans << "\n";
}
