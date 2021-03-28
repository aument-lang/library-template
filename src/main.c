#include <aument.h>
#include <stdio.h>

au_extern_module_t
au_extern_module_load(struct au_extern_module_options *options) {
    printf("Hello world!\n");
    return 0;
}