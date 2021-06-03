#include <stdio.h>

int main(void) {
#ifdef DEBUG
	printf ("Отладка включена.\n");
#endif
	printf ("Нормальный запуск.\n");
	return 0;
}
