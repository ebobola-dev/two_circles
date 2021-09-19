#include <stdio.h>
#include <math.h>

int main() {

	float x1, y1, r1, x2, y2, r2;
	printf("Enter circle #1(x y r): ");
	scanf("%f%f%f", &x1, &y1, &r1);
	printf("Enter circle #2(x y r): ");
	scanf("%f%f%f", &x2, &y2, &r2);

	float distance = sqrt(powf(x2 - x1, 2) + powf(y2 - y1, 2));
	float sum_r = r1 + r2;
	float max_r = r1, min_r = r2;
	if (r2 > r1) { max_r = r2; min_r = r1; }
	float diff = max_r - min_r;

	if (distance > sum_r) printf("type 1");
	else if (distance == sum_r && sum_r != 0) printf("type 4");
	else {
		if (distance == 0 && r1 == r2) printf("type 7");
		else if (distance == 0) printf("type 6");
		else if (distance == diff) printf("type 5");
		else if (distance > diff) printf("type 2");
		else if (distance) printf("type 3");
	}
	printf("\n");

	return 0;
}