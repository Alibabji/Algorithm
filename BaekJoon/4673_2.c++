//https://www.acmicpc.net/source/43347409

#include<stdio.h>

int a[10100],i=1,c,t;

main(){

    for(;i<10001;i++){

        t=i;

        while(t){

            c+=t%10;

            t/=10;

        }

        a[c+i]++;

        c=0;

    }

    for(i=1;i<10001;i++)if(!a[i])printf("%d\n",i);

}