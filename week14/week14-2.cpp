///week14-2.cpp
#include <stdio.h>
int main()
{
    char c;
    char s[100];
    printf("請輸入你的英文名字,裡面不能有空格: ");
    scanf("%s", s);
    printf("你的英文名字是: %s", s);

    printf("請再輸入一次你的英文名字: ");
    scanf("%c", &c);
    printf("結果讀到了: %c, c");
}
