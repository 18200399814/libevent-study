#include "event.h"
#include <stdio.h>

int main()
{
	const char *version = event_get_version();
	printf("hello libevent : version =%s\n", version);

	return 0;
}