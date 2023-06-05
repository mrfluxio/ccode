#include<stdio.h>

int main(int argc, char const *argv[])
{
    int c, *c_ptr;

    c=34;
    c_ptr = &c;
    //print_info(c, c_ptr);
    printf("c = %d\n", c);
    printf("c adress = %d\n", &c);
    printf("*c_ptr = %d\n", *c_ptr);
    printf("c_ptr address = %d\n", c_ptr);
    *c_ptr = 35;
    printf("Now we modify c value thorug c_ptr pointer\n");
    printf("c = %d\n", c);
    printf("c adress = %d\n", &c);
    printf("*c_ptr = %d\n", *c_ptr);
    printf("c_ptr address = %d\n", c_ptr);

    return 0;
}
