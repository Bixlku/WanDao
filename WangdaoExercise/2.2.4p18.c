#include<stdio.h>
#define MaxSize 10

typedef struct
{
    int data[MaxSize];
    int length;
    /* data */
}*Sqlist;

int delst(int s, int t, Sqlist L);
int main(){
    int i;
    Sqlist l;
    Sqlist *ls;
    l->length = 11;

    int a[11] = { 1,2,3,-1,5,6,7,8,9,0,11 };
	for (i = 0; i < l->length; i++) {
		l->data[i] = a[i];
	}
    delst(1, 3, l);
    for (i = 0; i < l->length; i++) {
		printf("%d ", l->data[i]);
	}
    while(1)
        ;
    return 0;
}

int delst(int s,int t, Sqlist L){
    int i,k=0;
    if(s>=t||L->length==0){
        return -1;
    }

    for (i = 0;i<L->length;i++){
        if(L->data[i]>t||L->data[i]<s){
            L->data[k] = L->data[i];
            k++;
        }
    }
    L->length = k;
    return 0;
}