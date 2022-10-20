
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimization() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int mx=1e6+123;
bool is_prime[mx];
vector<int>vec;
void prime_num_gen(int n)
{
    memset(is_prime,1,sizeof(is_prime));
    is_prime[1]=0;
    for(int i=2;i<=sqrt(n);i++)
    {
        for(int j=i+i;j<=n;j=j+i)
        {
           is_prime[j]=0;

        }
    }
    is_prime[2]=0;
    for(int i=3;i<=n;i++)
    {
        if(is_prime[i]==1)
        {
            vec.push_back(i);
        }
    }


    int p,q,dif=-1;
    for(int i=1;i<vec.size();i++)
    {
        if(i>n)
            break;
        int a,b;
        a=vec[i];
        b=n-a;
        if(is_prime[b]==1)
        {
            if(abs(b-a)>dif)
            {
                dif=abs(b-a);
                p=a;
                q=b;
            }
        }


    }

    if(dif==-1)
    {
      cout << "Goldbach's conjecture is wrong." << endl;
    }else{
    cout<<n<<" = "<<q<<" + "<<p<<endl;

    }




}

 int main()
 {


     int num;

     while(cin>>num)
     {if(num==0)
     break;
          prime_num_gen(num);
     }

      return 0;

 }
