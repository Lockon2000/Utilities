#include <stdio.h>
#include <stdlib.h>
#include <tgmath.h>
#include "defs.h"

unsigned long long lgn_input_g = 1 ;


int main()
{
    printf("          |  second  |  minute  |   hour   |   day   |  month  |  year  | century \n");
    printf("   lg(n)  |%10I64u   |%10I64u   |%10I64u   |%10I64u   |%10I64u   |%10I64u   |%10I64u   |", lgn(second_m), lgn(minute_m), lgn(hour_m), lgn(day_m), lgn(month_m), lgn(year_m), lgn(century_m));
/*
    printf("   lg(n)  |%10I64u   |%10I64u   |%10I64u   |%10I64u   |%10I64u   |%10I64u   |%10I64u   |", sqrtn(second_m), sqrtn(minute_m), sqrtn(hour_m), sqrtn(day_m), sqrtn(month_m), sqrtn(year_m), sqrtn(century_m));
    printf("   lg(n)  |%10I64u   |%10I64u   |%10I64u   |%10I64u   |%10I64u   |%10I64u   |%10I64u   |", n(second_m), n(minute_m), n(hour_m), n(day_m), n(month_m), n(year_m), n(century_m));
    printf("   lg(n)  |%10I64u   |%10I64u   |%10I64u   |%10I64u   |%10I64u   |%10I64u   |%10I64u   |", nlgn(second_m), nlgn(minute_m), nlgn(hour_m), nlgn(day_m), nlgn(month_m), nlgn(year_m), nlgn(century_m));
    printf("   lg(n)  |%10I64u   |%10I64u   |%10I64u   |%10I64u   |%10I64u   |%10I64u   |%10I64u   |", nsquared(second_m), nsquared(minute_m), nsquared(hour_m), nsquared(day_m), nsquared(month_m), nsquared(year_m), nsquared(century_m));
    printf("   lg(n)  |%10I64u   |%10I64u   |%10I64u   |%10I64u   |%10I64u   |%10I64u   |%10I64u   |", ncubed(second_m), ncubed(minute_m), ncubed(hour_m), ncubed(day_m), ncubed(month_m), ncubed(year_m), ncubed(century_m));
    printf("   lg(n)  |%10I64u   |%10I64u   |%10I64u   |%10I64u   |%10I64u   |%10I64u   |%10I64u   |", nexp(second_m), nexp(minute_m), nexp(hour_m), nexp(day_m), nexp(month_m), nexp(year_m), nexp(century_m));
    printf("   lg(n)  |%10I64u   |%10I64u   |%10I64u   |%10I64u   |%10I64u   |%10I64u   |%10I64u   |", nfact(second_m), nfact(minute_m), nfact(hour_m), nfact(day_m), nfact(month_m), nfact(year_m), nfact(century_m));
*/
    return 0 ;
}

unsigned long long lgn(unsigned long long time)
{

    while ( ((unsigned long long) log2(lgn_input_g)) < time)
        ++lgn_input_g ;

    return lgn_input_g ;
}
