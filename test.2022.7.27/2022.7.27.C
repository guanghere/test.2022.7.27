#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//void printf_table(int n){
//
//	int line = 0;
//	//��  ���ֱֵ��С������ľͿ������޼���
//	for (line = 1; line <= n; line++){
//
//		int row = 0;
//
//		for (row = 1; row <= line; row++){
//
//			printf("%d*%d=%d ", line, row, line*row);
//		}
//		printf("\n");
//	}
//
//}
//
//int main(){
//
//	int n = 0;
//	scanf("%d", & n);
//
//	 printf_table(n);
//
//	return 0;
//}


//			�ǵݹ�


//���ַ�������
//int my_strlen(char*str) {
//
//	int count = 0;
//	while (*str != '\0') {
//
//		count++;
//		str++;
//	}
//	return count;
//}
//
//
//void reverse_string(char*str) {
//
//	int left = 0;
//	int right = my_strlen(str) - 1;
//
//	while (left<right){
//		char tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//
//
//int main() {
//
//	char arr[] = "abcdef";
//
//	/*char arr[] = { 0 };
//
//	scanf("%s", &arr);*/
//
//	// �Ѵ��ݵ�ֵ����
//	reverse_string(arr);
//
//	printf("%s\n", arr);
//
//	return 0;
//}


//			�ݹ�


int my_strlen(char* str) {

	int count = 0;
	while (*str != '\0') {

		count++;
		str++;
	}
	return count;
}


void reverse_string(char* str) {


}



int main() {

	char arr[] = "abcdef";

	/*char arr[] = { 0 };

	scanf("%s", &arr);*/

	// �Ѵ��ݵ�ֵ����
	reverse_string(arr);

	printf("%s\n", arr);

	return 0;
}