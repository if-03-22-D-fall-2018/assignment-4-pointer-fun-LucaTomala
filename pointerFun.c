#include <stdio.h>

void print_integers(int int_value, int* int_pointer);
void change_integers(int int_value, int* int_pointer);

int main(int argc, const char *argv[])
{
    int int_value = 852;
    int* int_pointer = &int_value;
    /* we have to write an & because we want the adress of int_value and give it
    to int_pointer*/

    print_integers(int_value, int_pointer);
    change_integers(int_value, int_pointer);
    print_integers(int_value, int_pointer);
    /* int_pointer is the pointer in this case
    Nothing changes because only the values of the variables are
    copied.  */

}

void print_integers(int int_value, int* int_pointer)
{
    printf("Got an integer value %d and an address to an integer with value %d\n", int_value, *int_pointer);
}

void change_integers(int int_value, int* int_pointer)
{
    int_value = 258;
    int_pointer = &int_value;
    /* here we are changing the value and give it with a pointer back */
}
