///week10-4.cpp �n���ܼƽd�� variable scope
#include <stdio.h>
int z=100;
void myFunc(){
    int x=20;
    printf("myFunc()�̪� x: %d z: %d\n",x,z);
    printf("�b���}�ɡA�����x�Mz���]�w 0\n");
    x=0;
    z=0;
}

int main()
{
    int x=10;
    printf("main() �̪� x: %d z: %d\n",x,z);
    myFunc();
    printf("main() �̪� x: %d z: %d\n",x,z);
}
