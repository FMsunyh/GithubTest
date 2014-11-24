#include <stdio.h>
#include "version.h"

int main()
{
	printf( "Hello, world.\n" );
	printf( "version:%s.\n,",_VERSION );
	return 0;
}
