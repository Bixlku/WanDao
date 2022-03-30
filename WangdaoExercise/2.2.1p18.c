#define MaxSize 10
#include<stdio.h>

typedef struct{
    int data[MaxSize];
    int length;
} SqList;

int system(const char *command);
int delMin(SqList L);

int main(){
    SqList l;
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("%d", a[9]);

    system("pause");
    return 0;
}

int delMin(SqList L){
    int sub,i=0,min;
    if(L.length==0)
        return NULL;

    min = L.data[0];

    for (i = 1;i<L.length;i++){
        if(L.data[i]<min){
            min = L.data[i];
            sub = i;
        }
    }//得到最小值min和其下标sub

    if(sub == L.length-1){
        L.length--;
        return min;
    }else{
        L.data[sub] = L.data[L.length - 1];
        L.length--;
        return min;
    }
}