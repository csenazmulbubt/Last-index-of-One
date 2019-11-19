#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        string s;
        int l=0,index=0,i,flag=0;
        cin>>s;
        for(i=0; s[i]!='\0'; i++)
        {
            if(s[i]=='1')
            {
                index=i;
                flag=1;
            }

        }
        if(flag!=0)
            printf("%d\n",index);
        else
            printf("-1\n");

    }
return 0;
}
