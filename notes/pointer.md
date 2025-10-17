# The C Programming Language

## Essentials


### Pointers
**Pointers** are special kind of variables that stores memory address. Printing pointers would print the memory address to the screen.

```c
int a_number = 45;
int* pointer = &a_number;
```

The variable `pointer` is the pointer here, and `&a_number` gives the memory address of the variable `a_number`. 

```c
printf("the integer 'x' = %d", a_number);
printf("the memory address '&x' = %p", &a_number);
printf("memory address, through a pointer 'p' = %p", pointer);
```

BUT

Unlike most other variables, pointer have a special feature. Along with storing and accessing the memory address, the can access, and operate on the value stored at that memory location too. This is called **dereferencing**.

```c
printf("the integer, accessed through a pointer dereference '*p' = %d", *pointer);
```

Here, `*pointer` is the **dereference**.
So these 2 things, to have memory addresses an stored, and the ability to access and manipulate the values at that address, is what makes pointers extremely versatile and powerful.


But since pointers are just variables themselves, they have addresses of their own. Which we can store and access in through another pointer, but this pointer will be a pointer of pointer.

```c
int** pointer_to_the_pointer = &pointer;

printf("the pointer to the pointer 'pp' = %p", pointer_to_the_pointer);
printf("dereference of pointer to the pointer '*pp' = %p", *pointer_to_the_pointer);
printf("dereference of dereference of pointer to the pointer '**pp' = %p", **pointer_to_the_pointer);       // this will give us the original integer
```

Function Pointers
Interestingly, a function is just chunck of code stored at a memory address, and the function name points to that address.
So we can have pointers that points to a function.

```c
int add(int a, int b) {
    return a + b;
}

int (*func_pointer)(int, int);                      // <=== this is a function pointer

func_pointer = add;

int result = func_pointer(5, 4);                    // works as normal function call
```

`int (*func_pointer)(int, int)` the way to read this is -
- `int` in is the return type of the function
- `(*func_pointer)` is the name of the pointer
- `(int, int)` denotes the argument that the function will take
