// Implementing array functions for DPST1091 
// Week 5 Tutorial


#include <stdio.h>
// function prototypes
void print_array(int n, int array[n]);
int scanf_array(int n, int array[n]);

int main(void) {
	int size = 5;
	int numbers[5];
	scanf_array(size, numbers);
	print_array(size, numbers);
    return 0;
}




// q9
void print_array(int n, int array[n]) {
	int i = 0;
	while (i < n) {
		printf("%d", array[i]);
		i++;
	}
    return;
}

// q10
int scanf_array(int n, int array[n]) {
    	int i = 0;
	while (i < n) {
		scanf("%d", &array[i]);
		i++;
	}
	return 0;
}
