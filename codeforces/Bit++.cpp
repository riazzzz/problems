#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PI      acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl      '\n' 



//https://codeforces.com/problemset/problem/282/A



int main()
{
 //{
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);

freopen("output.txt", "w", stdout);
#else
// online submission
#endif
//}




int t;
cin>>t;
string s;
int x=0;

while(t--){


 //////////////////////////////////codee 
//solve();
cin>>s;
if(s[1]=='+'){
 x++;
}
else{
x--;
}


}

cout<<x<<nl;

return 0;


}
