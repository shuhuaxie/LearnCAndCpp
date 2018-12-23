#include <printf.h>
struct book {
    float value;
};
int c_main(void) {
    struct book library;
    library.value = 12;
    struct book* lib = &library;
    printf("%f", library.value);
    printf("%f", lib->value);
    return 0;
}