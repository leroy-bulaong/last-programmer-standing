#include<stdio.h>

int main() {
	int n, i, j, left, right, bottom;
	scanf("%d", &n);
	left = n * 4 - 4;
	right = n + 1;
	bottom = n * 3 - 2;
	for(i = 0; i < n; i++) {
		if(i == 0) {
			for(j = 1; j <= n; j++) printf("%d ", j); // top
		} else if(i == n - 1) { // bottom
			for(j = 1; j <= n; j++) {
				if(bottom % n == 0) printf("%d ", n);
				else printf("%d ", bottom % n);
				bottom--;
			}
		} else { // body
			if(left % n == 0) printf("%d ", n);
			else printf("%d ", left % n);
			left--;
			for(j = 0; j < n - 2; j++) printf("  ");
			if(right % n == 0) printf("%d ", n);
			else printf("%d ", right % n);
			right++;
		}
		printf("\n");
	}

	return 0;
}