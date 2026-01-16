#include <zephyr/kernel.h>
#include <stdio.h>

int main(void)
{
	//add comment 1.
	//add comment 2.
	//add comment 3.
	printf("Hello World! from Zephyr CI/CD\n");

	while (1) {
		k_msleep(1000);
		printf("Running...\n");
	}
	return 0;
}
