#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PI      acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl      '\n' 




//////////////code

void solve()
{

int n;
cin>>n;


for(int i=0;i<n;i++){



}





/////////////////////endcode;
}
















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




int t=1;
//cin>>t;

while(t--){

string str;
cin>>str;
 //////////////////////////////////codee 
regex reg("[47]");

   
  
 int i=0;
  
   smatch sm;
   while(regex_search (str,sm,reg)){
        i++;
    str=sm.suffix().str();
   }
    
  
  if((i==4)||(i==7))
       cout<<"YES"<<nl;
       else
        cout<<"NO"<<nl;

}


return 0;


}
