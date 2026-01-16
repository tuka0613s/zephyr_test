#include <zephyr/kernel.h>
#include <stdio.h>

int main(void)
{
	//add comment 1.
	printf("Hello World! from Zephyr CI/CD\n");

	while (1) {
		k_msleep(1000);
		printf("Running...\n");
	}
	return 0;
}
