#include <stdio.h>
#include <string.h>
typedef enum (integer =1, string =2, float =3) Type;
typedef struct
{
    Type tioo;
    union
    {
        int i;
        char s[256];
        float f;
    }dado;
}desconhecido;
int main ()
{

    return 0;
}
