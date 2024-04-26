#include "3-calc.h"

int main(int argc, char**argv) {
	int result;

	if (argc != 4) {
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(argv[2]) == NULL) {
		printf("Error\n");
		exit(99);
	}

	result = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
	printf("%d", result);
	return (0);

}
