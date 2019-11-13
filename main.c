#include <stdio.h>
#include <stdlib.h>


int main()
{
    char fanxu(char a[5]);
    char m[5];
    int i;
    printf("Please Input 5 Characters:\n");
    for(i=0;i<5;i++)
        {scanf("%c",&m[i]);}
     printf("Output:\n");
     fanxu(m);
    return 0;
}

char fanxu(char a[5])
{
    int j;
    for (j=4;j>=0;j--)
    printf("%c",a[j]);
    return (0);
}
