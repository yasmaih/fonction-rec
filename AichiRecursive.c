//
//  AichiRecursive.c
//  
//
//  Created by Yasmine Aichi on 05/02/2023.
//

#include "AichiRecursive.h"
#include <stdio.h>
///protoypes pour premiers exos
int maxi3 (int a, int b, int c);
int max2 (int a, int b);
int maxi2 (int a, int b);
int maxi4 (int a,int b, int c, int d);
int min5 (int a,int b, int c, int d, int e);
int min5_condition(int a, int b, int c, int d, int e);
int trouve_secondMax(int a, int b, int c);
int sec4(int a,int b, int c, int d);

int som_carre (int n);
int som_cube (int n);
int som_puissance4 (int n);
int produit (int n);
int produit_carre (int n);
int produit_cube (int n);
int exponentiation(int base, int exposant);
int sompn(int n, int p);
int add(int a, int b);

int main(void){
    
    printf("Le plus grand nombre parmis 100,37, et 89 est = %d \n",maxi3(100,37,89));
    printf("Le plus grand nombre parmis 100,37,99 et 89 est = %d \n",maxi4(100,37,99,89));
    printf("Le plus petit nombre parmis 100,37,99,7 et 89 est = %d \n",min5(100,37,99,89,7));
    printf("La même fonction que la précente mais avec des blocs conditionnels = %d \n",min5_condition(100,37,99,89,7));
    printf("Le second plus grand nombre parmis 100,37, et 89 est = %d \n",trouve_secondMax(100,37,89));
    printf("Le second plus grand nombre parmis 7,3,2,9 est = %d \n",sec4(7,3,2,9));
    //faire la fonction qui trouve le second plus grand parmi cinq nombres entiers ;
    printf("-------------------------------------------\n");
    printf("______________RECURSIVES___________________\n");
    printf("___________________________________________\n");
    printf("Somme des carrés des n premiers entiers : %d \n", som_carre(5));
    printf("Somme des cubes des n premiers entiers : %d \n", som_cube(5));
    printf("Produit de 9 = %d \n",produit(9));
    printf("Produit du carré de 4 = %d \n",produit_carre(4));
    printf("Produit du cube de 2 = %d \n",produit_cube(2));
    printf("2^4 = %d \n",exponentiation(2,4));
    printf("Somme des puissance  = %d \n",sompn(2,4));
    printf("Addition par incrémentation = %d \n",add(8,4));
    printf("Soustraction par incrémentation = %d \n",substract(8,4));
    printf("Multiplication russe = %d \n",mulruss(7,3));
    printf("Division entiere = %d \n",divide(7,5));
    printf("pgcd = %d \n",pgcd(72,132));
    printf("ppcm = %d \n",ppcm(72,132));
    printf(" 4 est supérieur ou égale à la racine carrée de %d \n",racine(4,38));
}

//la fonction qui trouve le plus grand parmi trois nombres entiers ;
int maxi3 (int a, int b, int c) {
    if ( a < b || c < b) {
       return b;
    }
    else if ( b < a || c < a) {
       return a;
    }else {
        return c;
    }
}


//la fonction qui trouve le plus grand parmi quatre nombres entiers ;
int maxi2 (int a, int b) {
    if ( a < b ) {
       return b;
    }
    else {
       return a;
    }
}
int maxi4 (int a,int b, int c, int d) {
    int firstMax2 = maxi2(a,b);
    int secondMax2 = maxi2(c,d);
    int finalMax4 = maxi2(firstMax2, secondMax2);
    return finalMax4;
}


//la fonction qui trouve le plus petit parmi cinq nombres entiers ;
int min2 (int a, int b) {
    if ( a > b ) {
       return b;
    }
    else {
       return a;
    }
}
int min5 (int a,int b, int c, int d, int e) {
    int firstMin2 = min2(a,b);
    int secondMin2 = min2(c,d);
    int thirdMin2 = min2(firstMin2, secondMin2);
    int finalMin2 = min2(thirdMin2,e);
    return finalMin2;
}

////ou avec que des conditions
int min5_condition(int a, int b, int c, int d, int e) {
    int min = a;

    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }
    if (d < min) {
        min = d;
    }
    if (e < min) {
        min = e;
    }

    return min;
}


//la fonction qui trouve le second plus grand parmi trois nombres entiers ;
int trouve_secondMax(int a, int b, int c){
    int secondMax = 0;
    int max = 0;
    
    ///premier if-else pour trouver le plus grand nombre
    if(a > b && a > c){
        return max = a;
    }else if (b > a && b > c){
        return max = b;
    } else{
        max = c;
    }
    ///second if else pour comparer max au deux entiers restant
    if (a>b && a<max){
        secondMax = a;
    }else if(b>a && b<max){
        secondMax = b;
    }else if(c>a && c<max){
        secondMax = c;
    }
    return secondMax;
}


//la fonction qui trouve le second plus grand parmi quatre nombres entiers ;
int max2 (int a, int b) {
    if ( a < b ) {
       return b;
    }
    else {
       return a;
    }
}
int sec4(int a,int b, int c, int d){
    int secondMax=0;
    int max = a;
     max = max2(max,b);
     max = max2(max,c);
     max = max2(max,d);
    
    if(a>b && a<max){
        secondMax = a;
    }else if(b>a && b<max){
        secondMax = b;
    }else if(c>a && c<max){
        secondMax = c;
    }else if(d > a && d < max){
        secondMax = d;
    }    return secondMax;
    
}


//5)la fonction qui trouve le second plus grand parmi quatre nombres entiers ; ;
int max2 (int a, int b) {
    if ( a < b ) {
       return b;
    }
    else {
       return a;
    }
}
int sec4(int a,int b, int c, int d){
    int secondMax=0;
    int max = a;
     max = max2(max,b);
     max = max2(max,c);
     max = max2(max,d);
    
    if(a>b && a<max){
        secondMax = a;
    }else if(b>a && b<max){
        secondMax = b;
    }else if(c>a && c<max){
        secondMax = c;
    }else if(d > a && d < max){
        secondMax = d;
    }    return secondMax;
    
}


/*-------------------------------------------
______________RECURSIVES___________________
___________________________________________*/


//1) Somme des carrés des n premiers entiers
int som_carre (int n) {
    if (n == 0) {
        return 0;
    }else
        return n*n + som_carre(n-1);
    }
    


//2) Somme des cubes des n premiers entiers
int som_cube (int n) {
    if (n == 0) {
        return 0;
    }else
        return n*n*n + som_cube(n-1);
    }

//3) Somme des puissance quatre des n premiers entiers
int som_puissance4 (int n) {
    if (n == 0) {
        return 0;
    }else
        return n*n*n*n + som_puissance4(n-1);
    }
    
///4°)produit d'un entier
    int produit (int n) {
       if ( n == 1 ) {
          return 1;
       }
       else {
          return n * produit(n-1);
       }
    }

//produit des carrés
    int produit_carre (int n) {
       if (n == 1) {
          return 1;
       }
       else {
          return n*n * produit_carre(n-1);
       }
    }

//produit des cubes
    int produit_cube (int n) {
       if ( n == 1) {
          return 1;
       }
       else {
          return n*n*n * produit_carre(n-1);
       }
    }
//8)Exponentiation (x puissance n)
int exponentiation(int base, int exposant) {
        if (exposant == 0) {
            return 1;
        } else {
            return base * exponentiation(base, exposant - 1);
        }
    }

//9) Somme des puissances p des n premiers entiers
// sompn(2,4) = 0^4 + 1^4 + 2^4 = 1
int sompn(int n, int p) {
if (n == 0) {
    return 0;
}else
    return exponentiation(n,p) + sompn(n-1,p);
}
//// 10) Additions par incrémentations successives
int add(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return add(a + 1, b - 1);
    }
}
//Soustractions de deux valeurs
int substract(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return substract(a - 1, b -1 );
    }
}
int mulruss(int x, int n){
    if (x == 1){
        return n ;
    }else {
        return n+mulruss(x-1,n);
    }
}
//Division entière et récursive
int divide(int a, int b) {
  if (a < b)
    return 0;
  else{
      return 1 + divide(a - b, b);
  }
}

//Plus grand diviseur commun de deux entiers
int pgcd(int a, int b){
    if (b == 0){
        return a;
    }else{
        return pgcd(b,a%b);
        }
}

///Plus petit multiple commun de deux entiers
int ppcm(int a, int b){
    if (a < b){
        return ppcm(b, a);
    }else {
        return (a*b) / pgcd(a, b);
    }
}

////Pour trouver l'entier x supérieur ou égale à la racine carrée d'un nombre a, il suffit de passer en revue tous les entiers jusqu'à avoir dépassé la racine.
int racine(int a, int x) {
    if (x*x >= a) {
        return x-1;
    }else {
        return racine(a, x +1);
    }
}
