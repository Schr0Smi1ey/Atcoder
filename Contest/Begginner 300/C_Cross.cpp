#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int h,w;
    scanf("%d %d",&h,&w);
    getchar();
    char str[h][w];
    int min = (h<w) ? h: w;
    int size[min];
    for(int i = 0; i<min ;i++)
    {
        size[i] = 0;
    }
    for(int i=0;i<h;i++)
    {
        scanf("%s",str[i]);
    }
    for(int i=1;i<h;i++)
    {
        for(int j=0;j<w;j++)
        {
            if(str[i][j]=='#')
            {
                int n=1;
                while(1)
                {
                    if(str[i+n][j+n]=='#')
                    {
                        if(str[i+n][j-n]=='#')
                        {
                            if(str[i-n][j+n]=='#')
                            {
                                if(str[i-n][j-n]=='#')
                                {
                                    size[n-1]++;
                                    if(n>1)
                                    {
                                        size[n-2]--;
                                        n++;
                                    }
                                    else
                                    n++;
                                }
                                else
                                break;
                            }
                            else
                            break;
                        }
                        else
                        break;
                    }
                    else
                    break;
                }
            }
        }
    }
    for(int i=0;i<min;i++)
    {
        printf("%d ",size[i]);
    }
    
}