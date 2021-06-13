#include <stdio.h>
int main()
{
    int s[10];
    int t[42]={0, };
    for(int i=0;i<10;i++)
    {
        scanf("%d", &s[i]);
    }
    
    int cnt=0;
    for(int i=0;i<10;i++)
    {
        t[(s[i]%42)]++;
    }
    
    for(int i=0;i<42;i++)
    {
        if(t[i]>0) cnt++;
    }
    printf("%d", cnt);
}
