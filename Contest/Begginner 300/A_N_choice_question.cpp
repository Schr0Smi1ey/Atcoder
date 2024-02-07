#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int n,a,b;
    scanf("%d %d %d",&n,&a,&b);
    int flag = a+b, index;
    int arr[n];
    for(int i = 0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i] == flag)
        index = i+1;
    }
    printf("%d",index);
    return 0;
}