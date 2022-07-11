#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define ROF(i,a,b) for(int i=b-1; i>=a; i--)
#define SORT(a,n) sort(a, a+n)
#define SORTR(a,n) sort(a, a+n, greater<int>())

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<vector<int>> vvi;
typedef pair<int, int> pii;
typedef pair<int, char> pic;
typedef pair<int, string> pis;
typedef vector<pair<int,int>> vpii;

void solve(int tc)
{
    ll R, C;
    cin >> R >> C;
    cout << "Case #" << tc << ": " << endl;
    FOR(i, 0, R*2+1) {
        FOR(j, 0 ,C*2+1) {
            if ((i == 0 && j == 0) || i+j == 1) cout << ".";
            else if (i % 2 == 1 && j % 2 == 1) cout << ".";
            else if (i % 2 == 1 && j % 2 == 0) cout << "|";
            else if (i % 2 == 0 && j % 2 == 0) cout << "+";
            else cout << "-";
        }
        cout << endl;
    }



}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int T;
    cin >> T;
    for(int i=1; i<=T; i++) {
        solve(i);
    }
    return 0;
}
