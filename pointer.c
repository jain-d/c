#include <stdio.h>

int main() {
    int a_number = 54321;
    int* pointer = &a_number;
    int** pointer_to_pointer = &pointer;
    int* new_pointer = pointer;

    printf("\nint x = \033[32m%d\033[0m", a_number);
    printf("\n'&x' = \033[33m%p\033[0m\t<- (integer's address)", &a_number);
    printf("\n\nint* p = &x");
    printf("\n'p' = \033[33m%p\033[0m\t<- (pointer storing a memory address)", pointer);
    printf("\n'*p' = \033[32m%d\033[0m\t<- (dereference of a pointer)", *pointer);
    printf("\n'&p' = \033[34m%p\033[0m\t<- (memory address of the pointer)", &pointer);
    printf("\n\nint** pp = &p\t<- (pointer to a pointer)");
    printf("\n'pp' = \033[34m%p\033[0m", pointer_to_pointer);
    printf("\n'*pp' = \033[33m%p\033[0m\t<- (dereference of pointer of pointer)", *pointer_to_pointer);
    printf("\n'**pp' = \033[32m%d\033[0m\t<- (deference of a dereference of a pointer to a pointer on an int)", **pointer_to_pointer);
    printf("\n\n'&pp' = \033[31m%p\033[0m <- (address of a pointer to pointer)", &pointer_to_pointer);

    // Addresses held by pointers can be assigned to other pointers too.
    printf("\n\n\nA new pointer 'n_p', holding what 'p' holds = %p, %p", new_pointer, pointer);
    printf("\nAddresses new pointer '&n_p' and old pointer '&p' = \033[33m%p\033[0m, \033[33m%p\033[0m", &new_pointer, &pointer);
}
