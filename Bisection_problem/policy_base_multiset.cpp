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

 int main()
 {

 optimization();
  ordered_set ps;
  ps.insert(12);
  ps.insert(1);
  ps.insert(2);

  ps.insert(4);
  ps.insert(4);
  ps.insert(5);
  ps.insert(6);
auto it=ps.upper_bound(4);
if(it!=ps.end() && *it==4)
{
    ps.erase(it);
}


 for(auto u:ps)
 {
     cout<<u<<" "<<endl;
 }


 }
