#include <stdio.h>

double get_double(){
    double sugar;
    scanf("%le",&sugar);
    return sugar;
}

int felszin(int r){
    return 4*r*r*3.14;
}

int terfogat(int r){
    return (4*r*r*r*3.14)/3;
}

int main(){

printf("Adja meg a gömb sugarát cm-ben!\n");
double sugar = get_double();
printf("\n");
printf("A gömb felszine: %d cm\n",felszin(sugar));
printf("A gömb térfogata: %d cm2\n",terfogat(sugar));

return 0;

}