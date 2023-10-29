#if 0
#include<stdio.h>
int main(){
    unsigned int n;
    int p,q;
    scanf("%d %d %d",&n, &p, &q);
    for(int i=p;i<=q;i++){
        if(n & 0x01<<i) n = n - (1<<i);
        else n = n + (1<<i);
    }
    printf("%d",n);
    return 0;
}
#endif

#if 0
#include<stdio.h>
int main(){
    unsigned char arr[6][6];
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            scanf("%hhu",&arr[i][j]);
        }
    }
    int arrshift;
    scanf("%d",&arrshift);
    arrshift=(arrshift+36)%36;
    for(int i=0;i<arrshift;i++){
        unsigned char temp=arr[5][5];
        for(int k=35;k>0;k--) {
            *(arr+k) = *(arr+k-1);
        }
        arr[0][0]=temp;
    }
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
#endif

#if 0
#include<stdio.h>
int main(){
    unsigned char data[20]={0,};
    for(int i=0;i<20;i++)scanf("%hhu",&data[i]);
    
    getchar();
    
    unsigned char arr[5];
    for(int i=0;i<5;i++){
        scanf("%c",&arr[i]);
        getchar();
    }
    
    void* temp=&data[0];
    
    for(int i=0;i<5;i++){
        switch(arr[i]){
            case 'c':
                printf("%c ",*((unsigned char*)temp));
                temp=temp+1;
                break;
                
            case 's':
                printf("%d ",*((unsigned short*)temp));
                temp=temp+2;
                break;
                
            case 'i':
                printf("%u ",*((unsigned int*)temp));
                temp=temp+4;
                break;
        }
    }
    return 0;
}
#endif

#if 01
#include<stdio.h>
int main(){
    unsigned char arr[12]={0,};
    for(int i=0;i<12;i++)scanf("%hhu",&arr[i]);
    int shift=0;
    scanf("%d",&shift);
    unsigned char shiftleft[12]={0,};
    unsigned char shiftright[12]={0,};
    for(int i=0;i<3;i++){
        shiftleft[i]=arr[i];
        shiftleft[i+6]=arr[i+6];
        shiftright[i+3]=arr[i+3];
        shiftright[i+9]=arr[i+9];
    }
    for(int i=0;i<shift;i++){
        for(int i=0;i<9;i++){
            shiftleft[i]<<=1;
            if(shiftleft[i+1] & 0x01<<7)shiftleft[i]|=0x01;
            
            shiftright[12-i]>>=1;
            if(shiftright[12-(i+1)] & 0x01)shiftright[12-i]|=0x01<<7;
        }
    }
    unsigned char result[12]={0,};
    for(int i=0;i<12;i++)result[i]=shiftleft[i]|shiftright[i];

    for(int i=0;i<12;i++){
        printf("%d ",result[i]);
    }
    printf("\n");
    
    if(shift<8){
        unsigned char andshift[12]={0xFF,0xFF,0xFF,0xFF>>shift,0xFF,0xFF,0xFF,0xFF,0xFF<<shift,0xFF,0xFF,0xFF};
        for(int i=0;i<12;i++){
            result[i]&=andshift[i];
        }
    }
    else if(shift<16){
        shift-=8;
        unsigned char andshift[12]={0xFF,0xFF,0xFF,0x00,0xFF>>shift,0xFF,0xFF,0xFF<<shift,0x00,0xFF,0xFF,0xFF};
        for(int i=0;i<12;i++){
            result[i]&=andshift[i];
        }
    }
    else if(shift<24){
        shift-=16;
        unsigned char andshift[12]={0xFF,0xFF,0xFF,0x00,0x00,0xFF>>shift,0xFF<<shift,0x00,0x00,0xFF,0xFF,0xFF};
        for(int i=0;i<12;i++){
            result[i] &= andshift[i];
        }
    }
    
    for(int i=0;i<12;i++){
        printf("%d ",result[i]);
    }
    return 0;
}
#endif