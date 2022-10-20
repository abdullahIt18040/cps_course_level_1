#include<stdio.h>
 int main()
 {
     int n,a,b,c;
    scanf("%d%d%d%d",&n,&a,&b,&c);
     int arr[10000];
     arr[0]=0;
     arr[1]=a;
     arr[2]=b;
     arr[3]=c;
     for(int i=4;i<=n;i++)
     {
         arr[i]=arr[i-1]+arr[i-2]+arr[i-3];
     }
    printf("%d\n",arr[n]);
     return 0;
 }
