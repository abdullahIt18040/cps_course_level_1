#include<stdio.h>
int main()
{
 int n;
 int vec[10000][10000];
 char str[10000];
     scanf("%s",&str);

     for(int i=0;str[i]!='\0';i++)
     {

      if(str[i]=='0')
      {
          vec[0]++;
      }else if(str[i]=='1')
      {
          vec[1]++;
      }else if(str[i]=='2')
      {
          vec[2]++;
      }else if(str[i]=='3')
      {
          vec[3]++;
      }else if(str[i]=='4')
      {
          vec[4]++;
      }else if(str[i]=='5')
      {
          vec[5]++;
      }else if(str[i]=='6')
      {
          vec[6]++;
      }else if(str[i]=='7')
      {
          vec[7]++;
      }else if(str[i]=='8')
      {
          vec[8]++;
      }else if(str[i]=='9')
      {
          vec[9]++;
      }else{

      int a=-1;
      }

     }
     for(int i=n-1;i>=0;i--)
     {
         printf("%d ",vec[i]);
     }

return 0;
}

