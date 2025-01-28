void f (int a, int b) {
    int *p1, *p2, *p3;      //integer pointers
    p1 = (int *) malloc (sizeof(int));
    *p1 = a;
    p2 = p1;
    if (a > b)
        free (p1);
    p3 = (int *) malloc (sizeof (int));
    *p3 = b;
    printf ("%d", *p2);
}

// what is wrong with this code?
//  1. a dangling pointer is created when p1 is freed and then dereferenced.

// 2. use of freed memory: After freeing p1, the code attempts to print the value pointed to by p2 (printf("%d", *p2);). Since p2 points to freed memory, this results in undefined behavior. The program may crash, produce incorrect results, or exhibit other unpredictable behavior.

//this can lead to memory leak : 
    // - the memory allocated to p3 with malloc is not freed, resulting in a memory leak. Every call to f will allocate memory that is never deallocated.

//: Dereferencing a dangling pointer means accessing or modifying the memory location it points to, even though that memory has been deallocated.
