#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//void printf_table(int n){
//
//	int line = 0;
//	//行  最大值直接小于输入的就可以无限计算
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


//			非递归


//求字符串长度
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
//	// 把传递的值逆序
//	reverse_string(arr);
//
//	printf("%s\n", arr);
//
//	return 0;
//}


//			递归


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

	// 把传递的值逆序
	reverse_string(arr);

	printf("%s\n", arr);

	return 0;
}