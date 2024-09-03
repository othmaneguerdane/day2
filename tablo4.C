#include<stdlib.h>
#include<stdiO.h>
int main(){
    int n,s;
    s=0;
    printf("n=");
    scanf("%d",&n);
    if(n<=0){
        printf("impsible le nombre doit etre positive");
    }
    int t[n];
    int i;
    for(i=0;i<n;i++){
    printf("t[%d]=",i);
    scanf("%d",&t[i]);
}
for(i=0;i<n;i++){
printf("%d \t ",t[i]);

}
for(i=0;i<n;i++){
    s=s+t[i];
}
printf("\n");
printf("donc la somme des éléments d'un tableau est :%d ",s);
return 0;
}


