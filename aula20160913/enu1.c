#include <stdio.h>
#define mostrabool(x) ({ printf("%s\n",(x)?"Verdadeiro":"falso");})
typedef enum {false=0, true=1} bool;
int main()
{
    bool v=true;
    bool f=false;
    switch (v)
    {
    case true:
    mostrabool(v);
    break;
    case false:
    mostrabool(f);
}
    mostrabool(2>3);
    mostrabool(2<3);
    mostrabool(2==3);
    mostrabool(2!=3);
    mostrabool(2<=3);
    mostrabool(2>=3);
    return 0;
}
