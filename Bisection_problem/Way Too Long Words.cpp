#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimization() ios_base::sync_with_stdio(0);cin.tie(0).cout.tie(0);
int main()
{

int n;
cin>>n;
int a=0;
for(int i=0;i<n;i++)
{
    int x;
    cin>>x;
    if(x==1)
        a=1;
}
if(a==1)
{
    cout<<"HARD"<<endl;
}else{
cout<<"EASY"<<endl;
}


 return 0;

}
