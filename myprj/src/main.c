#include <zephyr/kernel.h>
#include <stdio.h>

int main(void)
{
	//test
	printf("Hello World! from Zephyr CI/CD\n");

	while (1) {
		k_msleep(1000);
		printf("Running...\n");
	}
	return 0;
}
