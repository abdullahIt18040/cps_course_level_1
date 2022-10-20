#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimization() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

typedef tree< long long , null_type, less_equal<long long >, rb_tree_tag, tree_order_statistics_node_update > ordered_set;
/// change ll to any data type
/// less_equal for multiset increasing order
/// less for set increasing order
/// greater_equal for multiset decreasing order
/// greater for set decreasing order

/// cout<<*X.find_by_order(1)<<endl; // iterator to the k-th largest element
/// cout<<X.order_of_key(-5)<<endl;  // number of items in a set that are strictly smaller than our item

const int mx=1e5+123;
long long a[mx],sum[mx];

int main()
{
optimization();
long long int n,t;
cin>>n>>t;
for(int i=1;i<=n;i++)
{
    cin>>a[i];
}
for(int i=1;i<=n;i++)
{
    sum[i]=a[i]+sum[i-1];
}


map<long long, int >cnt;

ordered_set ps;
ps.insert(0);
cnt[0]++;
long long ans =0;
for(int i=1;i<=n;i++)
{
  ans+=(i-ps.order_of_key(sum[i]-t) - cnt[sum[i]-t] );
  ps.insert(sum[i]);
  cnt[sum[i]]++;
}

cout<<ans<<endl;
return 0;




}
