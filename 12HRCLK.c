#include<stdio.h>

int main() {
	int i, n, timeFlag, prev, current;
	char a;
	scanf("%d", &n);
	scanf(" %c", &a);
	int arr[n], amPM[n];

	for(i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		if(arr[i] == 12) current = 0;
		else current = arr[i];
		if(i == 0) {
			if(a == 'A') amPM[i] = 0;
			else amPM[i] = 1;
		} else {
			if(amPM[i - 1] == 0) { // if am
				if(prev < current) amPM[i] = 0;
				else if(prev == current || current == 0 || prev > current) amPM[i] = 1;
				else amPM[i] = 1;
			} else { // else pm
				if(prev < current) amPM[i] = 1;
				else if(prev == current || current == 0 || prev > current) amPM[i] = 0;
				else amPM[i] = 0;
			}
		}
		prev = arr[i];
	}

	printf("\n");

	for(i = 0; i < n; i++) {
		if(amPM[i] == 0) printf("%d AM\n", arr[i]);
		else printf("%d PM\n", arr[i]);
	}

	return 0;
}