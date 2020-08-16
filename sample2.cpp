#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<int,null_type,less<int>,rb_tree_tag,
	tree_order_statistics_node_update> indexed_set;

void test_case() {
	set<int> a = {5,2,8,9,4};
	set<int> b = {3,2,9,5};
	int cnt2 = 0;
	for(auto x : b) {
		if(a.count(x)) cnt2++;
	}
	cout << cnt2 << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	//int T;
	//cin >> T;
	//for(int nr = 1; nr <= T; ++nr) {
		//test_case();
	//}
	test_case();
	return 0;
}
