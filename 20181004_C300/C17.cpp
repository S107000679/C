/* prog3_8, 跳脫序列「\"」的列印 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	printf("恩師好 我是陳冠喨\n");
	printf("我的C300之17\n");
   char ch='\"';      /* 宣告字元變數ch，並設值為'\"' */
   printf("%cWe are the World%c\n",ch,ch);       /* 印出字串 */
   
   system("pause");
   return 0;
}


