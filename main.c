#include"ft_printf.h"
#include<stdio.h>

int main()
{
	printf(" %d : \n" , ft_printf("pepito"));
	printf(" %d : \n" , ft_printf("pe%%%%ito"));
	printf(" %d : \n" , ft_printf("pe%%pito"));
	printf(" %d : \n" , ft_printf("pe%%%pito"));
	
	printf(" %d : \n" , ft_printf("pe%dpito" , 5));
	printf(" %d : \n" , ft_printf("pe%dpito" , 5654));
	printf(" %d : \n" , ft_printf("pe%dpito" , -5875));
	printf(" %d : \n" , ft_printf("pe%dpito" , -9415));
	printf(" %d : \n" , ft_printf("pe%dpito" , 0));
	printf(" %d : \n" , ft_printf("pe%dpito" , +545));
	printf(" %d : \n" , ft_printf("pe%dpito" , 111111111111111));

	printf(" %d : \n" , ft_printf("pe%spito" , "111111111111111" ));
	printf(" %d : \n" , ft_printf("pe%sto" , "pi"));
	//printf(" %d : \n" , ft_printf("pe%dpito" , 111111111111111));
	// printf(" %d : \n" , ft_printf("pe%dpito" , 111111111111111));
	// printf(" %d : \n" , ft_printf("pe%dpito" , 111111111111111));
	// printf(" %d : \n" , ft_printf("pe%dpito" , 111111111111111));

	
}