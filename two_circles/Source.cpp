#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Rus");

	float x1, y1, r1, x2, y2, r2;
	printf("������� ���������� #1(x y r): ");
	scanf("%f%f%f", &x1, &y1, &r1);
	printf("������� ���������� #2(x y r): ");
	scanf("%f%f%f", &x2, &y2, &r2);

	while (1) {
		if (r1 > 0 && r2 > 0) break;
		printf("\n������� ����������� ������ ���� ��������������\n");
		if (r1 <= 0) {
			printf("������� ������ ������ ���������� #1: ");
			scanf("%f", &r1);
		}
		if (r2 <= 0) {
			printf("������� ������ ������ ���������� #2: ");
			scanf("%f", &r2);
		}
	}

	float distance = sqrt(powf(x2 - x1, 2) + powf(y2 - y1, 2));
	float sum_r = r1 + r2;
	float max_r = r1, min_r = r2;
	if (r2 > r1) { max_r = r2; min_r = r1; }
	float diff = max_r - min_r;

	if (distance > sum_r) printf("���������� ����� ��� ���� ����� � �� ������������");
	else if (distance == sum_r && sum_r != 0) printf("���������� �������� � ����� �����(������)");
	else {
		if (distance == 0 && r1 == r2) printf("���������� ���������");
		else if (distance == 0) printf("���� ���������� ����� ������ ������ � ��� ����� ����� �����");
		else if (distance == diff) printf("���������� �������� � ����� �����(���������)");
		else if (distance > diff) printf("���������� ������������ � ���� ������");
		else if (distance) printf("���� ���������� ����� ������ ������, �� ��������� �");
	}
	printf("\n");

	return 0;
}