#include <stdio.h>

int main() {
	//�Ǽ� ǥ��
	//������ Ÿ�� --> float ������ ����� ����
	printf("%f \n", 9.08); 
	printf("%f \n", 298.08467);
	printf("%5.1f \n", 298.08467);
	printf("%20.1f \n", 298.08467);


	//������ Ÿ�� ==> double ������ ����� ����
	printf("%lf \n", 9.08); 
	printf("%lf \n", 298.08467);
	printf("%5.1lf \n", 298.08467);
	printf("%20.1lf \n", 298.08467);


}