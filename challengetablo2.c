#include<stdlib.h>
#include<stdiO.h>
int main(){
    int n;
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
printf("%d \t",t[i]);

}

}
