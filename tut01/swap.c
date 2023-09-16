int main(void) {
	int a = 5;
	int b = 7;
	swap(&a, &b);
	printf("a = %d, b = %d\n", a, b);
}

// doesn't work
// passes a and b "by value"
void swap(int a, int b) {
	int tmp = a;
	a = b;
	b = tmp;
}

// correct and works by using pointers 
// passes a and b "by reference"
void swap(int *a, int *b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}





// #include <stdio.h>

// int main(void) {
// 	int a = 5;
// 	int b = 123;

// 	int *pa = &a;
// 	int *pb = &b;

// 	*pa = 6;
// 	*pb = 234;

// 	int c = *pa;
// 	*pa = *pb;
// 	*pb = c;

// 	pa = pb;
// 	*pa = 345;


// 	printf("value of a: %d\n", a);
// 	printf("value of b: %d\n", b);
// 	printf("derefernce pa: %d\n", *pa);
// 	printf("dereference pb: %d\n", *pb);
// 	printf("value of c: %d\n", c);
// 	printf("value of pa: %d\n", pa);
// 	printf("address of b: %d\n", &b);
// }