#include <stdio.h>
#include <stdlib.h>

int main(){
    int x;
    x = 420;
    
    int *p; // pointer 
    p = &x; // uložit do hodnoty p hodnotu lokace paměti x (když je end(&) tak napíše lokaci v paměti), pointer místo toho aby to vzalo to místo jde do toho adresáře a vezme hodnotu x co je 420
    *p += 2; // zapíše do hodnoty x a přidá 2
   
    printf("h = %d, p = %d, pontier =%d", x, &x, *p); //stímhle znakem & se ukáže kde je lokace tady mám x v paměti
}