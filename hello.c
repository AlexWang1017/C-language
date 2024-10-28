#include <stdio.h>
int big(int b,int c){
    int sum;
    sum = b * c;
    return sum;
}

int main(){
    int ans;
    ans = big(2,3);
    for(int i=0;i<=5;i++){
        printf("Hello world!\n");
    }
    printf("%d",ans);
    printf("I am Alex");
    
    return 0 ;

}