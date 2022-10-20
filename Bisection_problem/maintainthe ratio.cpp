#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
#define optimization() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

typedef tree< ll, null_type, less_equal<ll>, rb_tree_tag, tree_order_statistics_node_update > ordered_set;
/// change ll to any data type
/// less_equal for multiset increasing order
/// less for set increasing order
/// greater_equal for multiset decreasing order
/// greater for set decreasing order

/// cout<<*X.find_by_order(1)<<endl; // iterator to the k-th largest element
/// cout<<X.order_of_key(-5)<<endl;  // number of items in a set that are strictly smaller than our item

const int mx=1e5+123;
ll sum_0[mx],sum_1[mx];

 int main()
 {
     optimization();

int t,c=1;
cin>>t;
while(t--)
{
    int k;
 string str;
 cin>>str>>k;

ll n;
n=str.size();
for(int i=0;i<n;i++)
{
    sum_0[i+1]=(str[i]=='0')+sum_0[i];
    sum_1[i+1]=(str[i]=='1')+sum_1[i];
}
ordered_set ps;
map<ll,int>cnt;
cnt[0]++;
ps.insert(0);
ll ans=0;
for(int i=1;i<=n;i++)
{

    ll d=sum_0[i]-(k*sum_1[i]);
    ans+=ps.order_of_key(d)+cnt[d];
    cnt[d]++;
    ps.insert(d);


}
cout<<"Case "<<c<<": "  <<ans<<endl;


c++;


}





 }
