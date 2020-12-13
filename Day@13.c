#include <stdint.h>
#include <stddef.h>

int main(void)
{
	uint32_t	prime[9] = {13, 17, 19, 23, 29, 37, 41, 643, 743};
	uint32_t	rest[9] = {6, 16, 0, 4, 19, 19, 9, 50, 19};
	//uint32_t	prime[9] = {37, 47, 1789, 1889, 29, 37, 41, 643, 743};
	//uint32_t	rest[9] = {1, 2, 0, 3, 19, 19, 9, 50, 19};
	uint64_t	result = 0;
	int			j;
	uint64_t	prev = 1;
	long double check = 0;

	for (int i = 0; i < 9; i++)
	{
		j = -1;
		do
		{
			check = (result + ++j * prev + rest[i])/(0.0L + prime[i]);
		} while (check != (uint64_t)check);
		printf("%zu\n", j);
		result += j * prev;
		prev = prev * prime[i];
	}
	printf("%llu\n", result);
	return (0);
}
