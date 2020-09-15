
#include "ex00/ft_create_elem.c"
//#include "ex01/ft_list_push_front.c"
#include "ex02/ft_list_size.c"
//#include "ex03/ft_list_last.c"
#include "ex04/ft_list_push_back.c"
//#include "ex05/ft_list_push_strs.c"
#include "ex06/ft_list_clear.c"
#include "ex07/ft_list_at.c"
#include "ex08/ft_list_reverse.c"
//#include "ex09/ft_list_foreach.c"

#include <stdio.h>


void f6(void *d) {
	printf("cleared: %s\n", (char *)d);
}

void clr(void *d) {
	(void)(d);
}

void f9(void *d) {
	printf("touched: %s\n", (char *)d);
}

int main()
{

	printf("\n\033[33;1;40m===================== ex08 ====================\033[32;1;40m\n\n");

	t_list *l8 = 0;
	int a8[] = {1, 2, 3, 4, 5};
	for (int i=0; i<5; i++)
		ft_list_push_back(&l8, a8 + i);
	for (int i=0; i<5; i++)
		printf("%d ", *(int *)ft_list_at(l8, i)->data);
	ft_list_reverse(&l8);
	printf("\n");
	for (int i=0; i<5; i++)
		printf("%d ", *(int *)ft_list_at(l8, i)->data);
	ft_list_clear(l8, clr);


}





































