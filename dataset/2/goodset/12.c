#include<stdio.h>
 
int main()
{
 int t;
 char s[1000001];
 int n,ans,i;
 scanf("%d",&t);
 getchar();
 while(t--)
 {
  i=n=ans=0;
  gets(s);
  while(s[i])
  {
   if(s[i++]=='<')
    n++;
   else 
    n--;
   if(n<0)
    break;
   else if(n==0)
    ans=i;
  }
  printf("%d\n",ans);
 }
} 