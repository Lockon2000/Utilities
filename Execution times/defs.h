#ifndef DECLARATIONS_H_INCLUDED
#define DECLARATIONS_H_INCLUDED

#define second_m  1000000ULL
#define minute_m  60*second_m
#define hour_m    60*minute_m
#define day_m     24*hour_m
#define month_m   30*day_m
#define year_m    12*month_m
#define century_m 100*year_m

unsigned long long lgn(unsigned long long);
unsigned long long sqrtn(unsigned long long);
unsigned long long n(unsigned long long);
unsigned long long nlgn(unsigned long long);
unsigned long long nsquared(unsigned long long);
unsigned long long ncubed(unsigned long long);
unsigned long long nexp(unsigned long long);
unsigned long long nfact(unsigned long long);


#endif // DECLARATIONS_H_INCLUDED
