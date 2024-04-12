#include"ft_printf.h"
#include<stdio.h>

int main()
{
	printf("============================\n");
	printf("pruebas con %%\n");
	printf("============================\n");
	printf(" %d : \n" , ft_printf("pepito"));
	printf(" %d : \n" , ft_printf("pe%%%%ito"));
	printf(" %d : \n" , ft_printf("pe%%pito"));
	printf(" %d : \n" , ft_printf("pe%%%pito"));

	printf("============================\n");
	printf("pruebas con %%d\n");
	printf("============================\n");
	printf(" %d : \n" , ft_printf("pe%dpito" , 5));
	printf(" %d : \n" , ft_printf("pe%dpito" , 5654));
	printf(" %d : \n" , ft_printf("pe%dpito" , -5875));
	printf(" %d : \n" , ft_printf("pe%dpito" , +545));
	printf(" %d : \n" , ft_printf("pe%dpito" , 111111111111111));
	printf(" %d : \n" , ft_printf("pe%dpito" , 0));
	printf(" %d : \n" , ft_printf("pe%dpito" , 100));
	printf(" %d : \n" , ft_printf("pe%dpito" , -100));
	printf("============================\n");
	printf("pruebas con %%u	\n");
	printf("============================\n");
	printf(" %d : \n" , ft_printf("pe%upito" , -5875));
	printf(" %d : \n" , ft_printf("pe%upito" , -9415));
	printf("============================\n");
	printf("pruebas con %%s	\n");
	printf("============================\n");
	printf(" %d : \n" , ft_printf("pe%spito" , "111111111111111" ));
	printf(" %d : \n" , ft_printf("pe%sto" , "pi"));
	printf("============================\n");
	printf(" pruebas con %%c\n");
	printf("============================\n");
	printf(" %d : \n" , ft_printf("pe%cpito" , '\t'));
	printf(" %d : \n" , ft_printf("pe%cito" , 'p'));
	printf(" %d : \n" , ft_printf("pe%cpito" , '\n'));
	printf(" %d : \n" , ft_printf("pe%cpito" , '\0'));
	printf("============================\n");
	printf(" pruebas con %%p\n");
	printf("============================\n");
	int a = 5;
	printf(" %d : \n" , ft_printf("dirección de a %p" , &a ));
	printf("============================\n");
	printf(" pruebas con %%x %%X\n");
	printf("============================\n");
	printf(" %d : \n" , ft_printf("hexadecimal %x" , 15 ));
	printf(" %d : \n" , ft_printf("hexadecimal %X" , 15 ));
	printf(" %d : \n" , ft_printf("hexadecimal %X" , 30 ));
	printf(" %d : \n" , ft_printf("hexadecimal %X" , 31 ));
	printf(" %d : \n" , ft_printf("hexadecimal %X" , 32 ));
	printf(" %d : \n" , ft_printf("hexadecimal %X" , 33 ));


	
	
}