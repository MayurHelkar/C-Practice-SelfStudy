#include <stdio.h>

// main() // error: return type defaults to 'int' [-Wimplicit-int]
// main(void) // error: return type defaults to 'int' [-Wimplicit-int]
int main()
{
//    return; // error: 'return' with a value, in function returning void [-Wreturn-mismatch]
    return 67;
}