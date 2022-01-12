#include <stdio.h>
#include <stdlib.h>

int main()
{
/*
//Exercice 1 - Voyage

//BUT : Afficher le nombre de villes et villages par rapport à des valeurs entrées
//ENTREE : Nombre de lieux et nombres d'habitants
//SORTIE : Nombre de villes

int lieux = 0;
int population = 0;
int i = 0;
int villes = 0;

//DEBUT

printf("Combien de lieux avez vous visite ?\n");
scanf("%d", &lieux);
for (i = 1; i <= lieux; i++){
    printf("Entrez le nombre d'habitants\n");
    scanf("%d", &population);
    if(population >= 10000){
        villes = villes + 1;
    }
}
printf("Vous avez traverse %d villes\n", villes);

//FIN
*/

/*
//Exercice 2 - Auberge

//BUT : Afficher un prix pour une nuit en fonction de valeurs entrées
//ENTREE : Deux entiers, l'âge du client et le poids de ses bagages
//SORTIE : Le prix de la nuit en fonction du client

int age = 0;
int poids = 0;
int prix = 0;

//DEBUT

printf("Veuillez entrer le poids des bagages du client\n");
scanf("%d", &poids);
printf("Veuillez entrer l'age du client\n");
scanf("%d", &age);
if (poids >= 20){
    prix = prix + 10;
}
if  (age == 60){
    prix = 0;
}else{
    if (age < 10){
        prix = prix + 5;
    }else{
        prix = prix + 30;
    }
}
printf("Le prix de la nuit est %d ecus\n", prix);

//FIN
*/
/*
//Exercice 3 - Start to Play

//BUT : Savoir combien de personnes sont au Start to Play, avec une limite de 250
//ENTREE : 2 valeurs, les personnes entrantes et les personnes sortantes
//SORTIE : Une information sur le nombre de personnes présentes, et sur le fait que la salle soit pleine ou non

int inout = 0;
int nbr = 0;
int max = 250;

//DEBUT
do{
   printf("Entrez le nombre de personnes entrantes ou sortantes (+/-)\n");
   scanf ("%d", &inout);
   nbr=nbr+inout;
if (nbr>max){
            printf("Entree impossible\n\n");
            nbr=nbr-inout;
            }else{
                    if (nbr==max){
                                printf("Nombre Maximum Atteint\n\n");
                                }
                }
   }while (nbr!=0);

//FIN
*/


//Exercice 4 - Triangles

//BUT : Dessiner un triangle
//ENTREE :
//SORTIE : Un triangle

//Premier triangle

int i = 0;

switch (i <= 8) {

    case 1 : printf("X\n");
    case 2 : printf("XX\n");
    case 3 : printf("XOX\n");
    case 4 : printf("XOOX\n");
    case 5 : printf("XOOOX\n");
    case 6 : printf("XOOOOX\n");
    case 7 : printf("XOOOOOX\n");
    case 8 : printf("XXXXXXXX\n");
    break;
    default : printf("erreur");

}





}

