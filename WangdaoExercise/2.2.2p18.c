#include<stdio.h>
#define MaxSize 11
typedef struct {
	int data[MaxSize];
	int length;
}SqList;
SqList Invert(SqList L);

int main() {
	int i;
	SqList l;
	l.length = 11;

	int a[11] = { 1,2,3,-1,5,6,7,8,9,0,11 };
	for (i = 0; i < l.length; i++) {
		l.data[i] = a[i];
	}
	l=Invert(l);
	for (i = 0; i < l.length; i++) {
		printf("%d ", l.data[i]);
	}
    while(1)
        ;
    return 0;
}

SqList Invert(SqList L) {
	int i,temp;
	for (i = 0; i < L.length/2; i++) {
		temp = L.data[i];
		L.data[i] = L.data[L.length - 1 - i];
		L.data[L.length - 1 - i] = temp;
	}
	return L;
}