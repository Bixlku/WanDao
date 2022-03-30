#include<stdio.h>
#define MaxSize 10

typedef struct 
{
    int data[MaxSize];
    int length;
} *Sqlist, p;

int Delx(Sqlist L, int x);

int main(){
    int i;
    Sqlist l;
    Sqlist *ls;
    l->length = 11;
    p pt;

    int a[11] = { 1,2,3,-1,5,6,7,8,9,0,11 };
	for (i = 0; i < l->length; i++) {
		l->data[i] = a[i];
	}
    Delx(l,2);
    for (i = 0; i < l->length; i++) {
		printf("%d ", l->data[i]);
	}
    while(1)
        ;
    return 0;
}

int Delx(Sqlist L,int x){
    int i,num=0;//num表示与x相同的元素的数量
        
    for (i = 0;i<L->length;i++){
        if(L->data[i]==x){
            num++;
        }
        if(i<L->length-num) L->data[i] = L->data[i+num];
    }
    (*L).length = L->length - 1;

    return 0;
}