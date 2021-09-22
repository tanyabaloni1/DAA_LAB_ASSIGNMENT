#include <bits/stdc++.h>
using namespace std;

#define ll long long int


void linear_search(ll arr[], ll size, ll key){
	ll comparisons = 0;
	ll index = -1;
	for(ll i = 0; i < size; i++){
		comparisons++;
		if(arr[i] == key){
			cout << "Present " << comparisons << "\n";
            index = i;
			break;
		}
	}
    if(index < 0){
        cout << "Not Present " << comparisons << "\n";
    }
}

void solve(){
    ll size, key;
	cin >> size;
	ll arr[size];
	for(ll i = 0; i < size; i++){
		cin >> arr[i];
	}
    cin >> key;

	linear_search(arr, size, key);
}


int main(){
    // Setting up Input/ Output
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    // Driver Code
    ll t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}
