#include"ft_printf.h"
#include<stdio.h>

int main()
{
	printf(" %d : \n" , ft_printf("pepito"));
	printf(" %d : \n" , ft_printf("pe%pito"));
	printf(" %d : \n" , ft_printf("pe%%pito"));
	printf(" %d : \n" , ft_printf("pe%%%pito"));
}