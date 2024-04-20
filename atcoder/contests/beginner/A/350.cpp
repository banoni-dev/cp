



#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<long long>
#define mp make_pair
#define ff first
#define ss second
#define all(c) (c).begin(), (c).end()
#define sz(a) int((a).size())

const int MOD = 1e9 + 7;
const int INF = INT_MAX;
const double PI = acos(-1.0);






void solve() {
    string s;
    cin >> s;
    int x = (s[3] - '0') * 100 + (s[4] - '0') * 10 + s[5] - '0';
    if (x != 316 && x <= 349 && x >= 1) {
        cout << "Yes" << endl;
        return;
    }
    cout << "No" << endl;

}








int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;

    while (t--) {
        solve();
    }

    return 0;
}



