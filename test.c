#include<stdio.h>
int main(){
    unsigned char arr[]="BinaLee";
    for(int i=0;i<7;i++){
        for(int j=7;j>=0;j--){
            printf("%d",arr[i]>>j & 0x01);
        }
        printf(" ");
    }
    return 0;
}
//01000010 01101001 01101110 01100001 01001100 01100101 01100101