#include <studio.h>
int main() {
    int n,shift;
    scanf("%d %d",&n,&shift);
    int bitmask= n>>shift;
    if(bitmask&1==1){
        printf("%d",1);
    }else{
        printf("%d",0);
    }
    return 0;
}