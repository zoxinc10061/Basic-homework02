#include <stdio.h> 

#include <stdlib.h> 



int main() 

{

 int y,m,d; 

 printf("請輸入你的出生年分(西元)：");

 scanf("%d",&y);  

 printf("請輸入你的出生月分：");

 scanf("%d",&m); 

 printf("請輸入你的出生日期：");

 scanf("%d",&d);  
 printf("你的出生年月日為：%d,%d,%d\n",y,m,d);

 system("pause");   

 return 0;

}
