#include "smallstr.h"
#include <stdio.h>

int main() {
    smallstr str = smallstr_from_trunc("Hello, , world!");
    smallstr b = smallstr_substr(&str, opstr_find(smallstr_op(&str), ','), -1);
    puts(b.str);
}
