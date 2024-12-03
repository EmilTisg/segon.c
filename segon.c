#include <stdio.h>
#include <math.h>
int main(){
    int a, b, c, discrimant;
printf("Coeficient a: ");
scanf("%d", &a);

printf("Coeficient b: ");
scanf("%d", &b);

printf("Coeficient c: ");
scanf("%d", &c);

if(a == 0) printf("No és una equació de 2n grau\n");
else{
    discriminant=(b*b)-(4*a*c);
    if(discriminant<0) printf("No existeix solució real\n");
    if(discriminant=0) printf("Tenim una solució doble i és: %f\n",(-1*b)/(2*a));
    if(discriminant>0) printf("Tenim dues solucions: %f i %f\n",((-1*b)+sqrt(discriminant))/(2*a),((-1*b)-sqrt(discriminat)(-1*b))


}

    return 0;
}
