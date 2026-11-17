#include<stdio.h>
#include<string.h>
#include<strings.h>

int main(){

    char c[100] , a[100];


    scanf("%s",c);
    scanf("%s",a);

    int result = strcasecmp(c,a);

    if (result == 0){
        printf("0\n");
    }
    else if (result < 0){
        printf("-1\n");
    }
    else{
        printf("1\n");
    }




}