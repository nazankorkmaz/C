#include <stdio.h>
typedef struct date{
    int ay;
    int yil;
    int gun;
}dt;

dt *buyukOlaniBul(dt *x, dt *y);
int main()
{
    dt a;
    dt b;
    dt *big;
    printf("ilk tarihi girin:gun-ay-yil\n");
    scanf("%d%d%d",&a.gun,&a.ay,&a.yil);
    printf("ikinci tarihi girin:\n");
    scanf("%d%d%d",&b.gun,&b.ay,&b.yil);
    printf("ileride olan tarih:\t");
    big = buyukOlaniBul(&a,&b);
    printf("%d/ %d /%d",big->gun,big->ay,big->yil);

}

dt *buyukOlaniBul(dt *x, dt *y)
{
    if(x->yil>x->yil)
        return x;
    else
        return y;
    if(x->yil == y->yil && (x->ay > y->ay ))
        return x;
    else
        return y;
    if(x->yil == y->yil && (x->ay == y->ay ) && (x->gun > y->gun))
        return x;
    else
        return y;
}