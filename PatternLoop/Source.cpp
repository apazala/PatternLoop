#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	int i, j, d;

	for (i = -n + 1; i < n; i++) {
		for (j = -n + 1; j < n; j++) {
			d = i;
			if (-i > d)
				d = -i;
			if (j > d)
				d = j;
			if (-j > d)
				d = -j;
			d++;
			printf("%d ", d);
		}
		printf("\n");
	}

	return 0;
}