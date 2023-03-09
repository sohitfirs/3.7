/* https://github.com/sohitfirs/3.7.git */

#include <stdio.h>
#include <cstdlib>

main()
{
	int i;
	int sum=0;
	for(i=1; i<100; ++i)
	{
		sum=sum+i;
		printf("%i+", i);
	}
	sum=sum+i;
	printf("%i=%i\n", i, sum);
	system("pause");
}
