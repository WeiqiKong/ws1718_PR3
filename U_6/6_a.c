#include <stdio.h>
#include <string.h>

struct S {
    char c[64];
};
int main(void) {
    //也就是它 sub 的 stackframe 没有申请 直接使用了 main 的 stackframe 造成了误读
    char text[] = "HALLO WELT!";
    /* lokal im main-Stackframe */
    printf("main(): text= %s\n", text);
    printf("main(): Adressbereich= %p-%p\n", (void *) text, (void *) &text[strlen(text)]);
    sub();
    printf("main(): text= %s\n", text);
    printf("main(): Adressbereich= %p-%p\n", (void *) text, (void *) &text[strlen(text)]);
    printf("Ende main\n");
    return 0;
}

int sub(struct S s) {
    int k;
    for (k = 63; k >= 0; k--) {
        printf("sub(): %3d (%p): %02X %c\n", k, s.c + k, (unsigned char) s.c[k], s.c[k]);
    }
    strcpy(s.c, "Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed di");
    return 0;
}