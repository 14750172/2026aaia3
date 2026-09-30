// week04-1b.cppSOIT108_Advance_008
// C++ version
#include <iostream>
#include <algorithm> //week04 Today
#include <vector> //week03
using namespace std;
int main(){
	vector<int> a(10); // Week04 Today!!
	for (int i=0; i<10; i++){
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	for (int i=9; i>=0; i--) {
		cout << a[i] << ' ';
	}
}
