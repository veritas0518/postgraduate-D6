#include<stdio.h>
#include<stdbool.h>
#include<malloc.h>
#include<stdlib.h>
typedef struct Arr {
	int* pbase;//�洢���������һ��Ԫ�صĵ�ַ
	int len;//�����������ɵ����Ԫ�صĸ���
	int cnt;//��ǰ������ЧԪ�صĸ���
	
}Arr;
void init_arr(Arr *parr,int len) {
	parr->pbase = (int*)malloc(sizeof(int)*len);
	if (parr->pbase == NULL) {
		printf("��̬�ڴ����ʧ��\n");
		exit(-1); //��ֹ��������
	}
	else {
		parr->len = len;
		parr->cnt = 0;
	}
	return;
}
bool append_arr(Arr *parr,int val) {  //׷��
	if (is_full(parr)) 
		return false;
	
	
		parr->pbase[parr->cnt] = val;
		(parr->cnt)++;
		return true;
	
}
bool insert_arr(Arr *parr,int pos,int val) {
	int i;
	if(pos<1||pos>parr->len)
	for (i = parr->cnt - 1; i > pos - 1; --i) {
		parr->pbase[i+1] = parr->pbase[i];

	}
	parr->pbase[pos - 1] = val;
	return true;
}
bool delete_arr() {

}
int get() {

}
bool is_empty(Arr *parr) {
	if (parr->cnt == 0) {
		return true;
	
	}
	else {
		return false;
	}
}
bool is_full(Arr* parr) {
	if (parr->cnt == parr->len) {
		return true;
	}
	else {
		return false;
	}
}
void sort_arr() {

}
void show_arr(Arr *parr) {
	if (is_empty(parr)) {
		printf("����Ϊ��\n");
	}
	else {
		for (int i = 0; i < parr->cnt; i++) {
			printf("%d ", parr->pbase[i]);
			printf("\n");
		}
	}
}
void inversion_arr() {

}
int main() {
	Arr arr;
	//Arr *p = &arr;
	init_arr(&arr,6);
	show_arr(&arr);
	append_arr(&arr, 1);
	append_arr(&arr, 2);
	append_arr(&arr, 3);
	append_arr(&arr, 4);
	append_arr(&arr, 5);
	append_arr(&arr, 6); 
	append_arr(&arr, 7);
	show_arr(&arr);

	//printf("%d  ", arr.len);
	return 0;
}