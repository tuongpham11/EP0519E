#include <stdio.h>
#include <stdlib.h>

int main()
{   int a,*p,i = 0;
    printf("moi nhap vao mot so: ");
    scanf("%d",&a);
    p = (int*)malloc(sizeof(int));
    while(a!=0){
    p = (int*)realloc(p,sizeof(int));
    p[i] = a%2;
    a = a/2;
    i++;
    }
    int j;
    printf("\nso duoi dang nhi phan la: ");
    for(j = i-1 ; j>=0 ;j--){
    printf("%d",p[j]);
    }
    free(p);
    return 0;
}
