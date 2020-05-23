#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a[1000], n;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int max = a[0];
	int min = a[0];
	int cnt = 0;
	for(int i = 0; i < n;i++){
		if(a[i] > max){
			max = a[i];
			cnt++;
		}
		if(a[i] < min){
			min = a[i];
			cnt++;
		}
	}
	cout << cnt << "\n";
	return 0;
}
