#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 50
int i,n,nb,j,choix,netudiant;
struct etudiants{
                    int num;
                    char nom[30],prenom[30],module[30];
                    float moy;
                          };

struct etudiants les_etudiants[max];
struct trier    {
                    int v;
                    char vnom[30],vprenom[30],vmodule[30];
                    float vmoy;
                       };
struct trier trier[max];
void saisir_plusieur_etudiants(){

                            printf("Entrer le nombre des etudiants que vous voullias saisie : ");
                            scanf("%d",&nb);
                            printf("\n\n");

 for(i=1;i<=nb;i++){

                              printf("Saisir les information de l'etudiant numero %d :  \n\n",n+1);

                              printf("Nemero d'inscreption : ");
                              scanf("%d",&les_etudiants[n+1].num);

                              printf("Nom : ");
                              scanf("%s",&les_etudiants[n+1].nom);
                              printf("Prenom : ");
                              scanf("%s",&les_etudiants[n+1].prenom);

                              printf("Moyenne : ");
                              scanf("%f",&les_etudiants[n+1].moy);

                              printf("Module : ");
                              scanf("%s",&les_etudiants[n+1].module);
                                 n=n+1;
                              }}

void inserer_une_etudiant(){

                            printf("\n\n");
                            printf("Saisir les information de votre etudiant :  \n\n");
                            printf("Nemuro d'inscreption : ");
                            scanf("%d",&les_etudiants[n+1].num);
                            printf("Nom : ");
                            scanf("%s",&les_etudiants[n+1].nom);
                            printf("Prenom : ");
                            scanf("%s",&les_etudiants[n+1].prenom);
                            printf("Moyenne : ");
                            scanf("%f",&les_etudiants[n+1].moy);
                            printf("Module : ");
                            scanf("%s",&les_etudiants[n+1].module);
                            n=n+1;
                            printf("\n\n");
                                          }
void afficher_les_etudiants(){

                          for(i=1;i<=n;i++){

     printf("L etudient Num :%d Sa Nom : %s & Prenom : %s & Moy : %.2f & Module : %s \n\n",les_etudiants[i].num,les_etudiants[i].nom,les_etudiants[i].prenom,les_etudiants[i].moy,les_etudiants[i].module);
                                                     }
                                           }
void rechercher_etudiant_par_num(){

                                        int num;
                                        printf(" Saisir un numero : ");
                                        scanf("%d",&num);

                     for(i=1;i<=n;i++){

                            if(les_etudiants[i].num==num){

                        printf("\nRechercher un etudiant par sa numero : \n");
                        printf("Qullque informations sur les etudiants que vous avez recherche : \n");
                        printf("----------------------------------\n");
                        printf("Numero d'inscription : %d\n",num);
                        printf("Nom : %s\n",les_etudiants[i].nom);
                        printf("Prenom : %s\n",les_etudiants[i].prenom);
                        printf("Moyenne : %0.2f\n\n",les_etudiants[i].moy);
                        }
                        }
                        }

void rechercher_un_etudiant_par_nom(){

            printf("\nRechercher un etudiant par sa nom :\n");
            printf("--------------------------\n");
            char nom[15];
            printf("Entrer le nom d'etudiant : ");
            scanf("%s",&nom);

                for(i=1;i<=n;i++){

                 if(strcmp(les_etudiants[i].nom,nom)==0){

                    printf("\nRechercher par le nom : \n");
                    printf("--------------------");
                    printf("Informations sur l'etudient (%s) :\n",nom);
                    printf("----------------------------------\n");
                    printf("Numero d'inscription : %d\n",les_etudiants[i].num);
                    printf("Nom : %s\n",les_etudiants[i].nom);
                    printf("Prenom : %s\n",les_etudiants[i].prenom);
                    printf("Moyenne : %0.2f\n",les_etudiants[i].moy);
                    printf("Module : %s\n",les_etudiants[i].module);
                                                           }
                                                           }

                                                           }
 void afficher_les_etudiants_admet(){

int j,k=1;
                                            printf("\n\nLes etudiant admest sont : \n\n");

for(i=1;i<=n;i++){

    if(les_etudiants[i].moy>10){

      printf("Numero d'inscription : %d\n",les_etudiants[i].num);
      printf("Nom : %s\n",les_etudiants[i].nom);
      printf("Prenom : %s\n",les_etudiants[i].prenom);
      printf("Moyenne : %0.2f\n",les_etudiants[i].moy);
      printf("Module : %s\n",les_etudiants[i].module);
                                                              }
                                                      }
                                                      }
void afficher_les_etudiant_d_un_module(){

     char module[15];
     printf("Saisir le module : ");
     scanf("%s",&module);
     printf("Les etudiants de module %s sont : \n\n",module);

     for(i=1;i<=n;i++){

                      if(strcmp(les_etudiants[i].module,module)==0){

     printf("Numero d'inscription : %d\n",les_etudiants[i].num);
     printf("Nom : %s\n",les_etudiants[i].nom);
     printf("Prenom : %s\n",les_etudiants[i].prenom);
     printf("Moyenne : %0.2f\n",les_etudiants[i].moy);
     printf("Module : %s\n",les_etudiants[i].module);
     }}}
void modifier(){


     int num,k;
     printf("Saisir la numero d insctiption de l etudient que vous voulai modifier : ");
     scanf("%d",&num);

     for(i=1;i<=n;i++){

        if(les_etudiants[i].num==num){
                                      k=i;
                                                      }}
            printf("Nemuro d'inscreption : ");
            scanf("%d",&les_etudiants[k].num);
            printf("Nom : ");
            scanf("%s",&les_etudiants[k].nom);
            printf("Prenom : ");
            scanf("%s",&les_etudiants[k].prenom);
            printf("Moyenne : ");
            scanf("%f",&les_etudiants[k].moy);
            printf("Module : ");
            scanf("%s",&les_etudiants[k].module);
                                           }
void supprimer(){

     int j,num,k;
     printf("Saisir le numero d insctiption de l etudient que vous voulai supprimier : ");
     scanf("%d",&num);

     for(i=1;i<=n;i++){

         if(les_etudiants[i].num==num){
                                             k=i;
                                             n=n-1;

            for(j=k;j<=n;j++){
                les_etudiants[j]=les_etudiants[j+1];
                                                                        }
                                               }}}
void trierr(){
     int h,t;
     do{
      h=0;
       for(i=1;i<=n-1;i++){
            if(les_etudiants[i].moy>les_etudiants[i+1].moy ){
            trier[i].v=les_etudiants[i].moy;
            strcpy(trier[i].vnom,les_etudiants[i].nom);
            strcpy( trier[i].vprenom,les_etudiants[i].prenom);
            trier[i].vmoy=les_etudiants[i].moy;
            strcpy( trier[i].vmodule,les_etudiants[i].module);
            les_etudiants[i].num=les_etudiants[i+1].num;
            strcpy( les_etudiants[i].nom,les_etudiants[i+1].nom);
            strcpy( les_etudiants[i].prenom,les_etudiants[i+1].prenom);
            les_etudiants[i].moy=les_etudiants[i+1].moy;
            strcpy( les_etudiants[i].module,les_etudiants[i+1].module);
            les_etudiants[i+1].num=trier[i].v;
            strcpy(  les_etudiants[i+1].nom, trier[i].vnom);
            strcpy( les_etudiants[i+1].prenom,trier[i].vprenom);
            les_etudiants[i+1].moy=trier[i].vmoy;
            strcpy( les_etudiants[i+1].module,trier[i].vmodule);
              h++;}
                                                           }
              }while(h!=0);
               printf("Les etudiant trier par moyenne : \n\n");
for(i=1;i<=n;i++){
    printf(" %d     %d     %s      %s      %.2f      %s   \n\n",i,les_etudiants[i].num,les_etudiants[i].nom,les_etudiants[i].prenom,les_etudiants[i].moy,les_etudiants[i].module);
    }
    }
/*void note_max{
    char module [15];
    printf("le module pour la note maximale : ");
    scanf("%s",&module);
    for(i=1;i<=n-1;i++){

    }
} */
void quitter(){
 system("cls");
 printf("\n\n        \t------------END-----------\n\n\n");
 printf("\n\n        \t------------THX-----------\n\n\n");
 }

int main()
{
    system("color 0A");
do{
           printf("\n        *******      Gestion des etudiants    ****** \n\n");
           printf("          ============================================= \n\n");
                     printf("  Totale des eleves : %d\n\n",n);
           printf("      <1.  Saisir plusiurs etudiants----------------------- \n");
           printf("      <2.  Afficher la list des etudiants------------------ \n");
           printf("      <3.  Rechercher un etudiant par numero--------------- \n");
           printf("      <4.  Rechercher un etudiant par nom------------------ \n");
           printf("      <5.  Inserer un etudiant dans la liste -------------- \n");
           printf("      <6.  Afficher les etudiants admet-------------------- \n");
           printf("      <7.  Afficher les etudiants d'un module-------- \n");
           printf("      <8.  Modifier un etudiant---------------------------- \n");
           printf("      <9. Supprimier un etudiant-------------------------- \n");
           printf("      <10. Trier les etudiants----------------------------- \n");
           printf("      <11.  Quitter---------------------------------------- \n");
           printf("          ============================================== \n\n");
           printf("Entre votre choix : ");
           scanf("%d",&choix);
           printf("\n\n");

           switch(choix){

case 1: system("cls");saisir_plusieur_etudiants();break;
case 2: system("cls");afficher_les_etudiants();break;
case 3: system("cls");rechercher_etudiant_par_num();break;
case 4: system("cls");rechercher_un_etudiant_par_nom();break;
case 5: system("cls");inserer_une_etudiant();break;
case 6: system("cls");afficher_les_etudiants_admet();break;
case 7: system("cls");afficher_les_etudiant_d_un_module();break;
case 8: system("cls");modifier();break;
case 9:system("cls");supprimer();break;
case 10:system("cls");trierr();break;
case 11:system("cls");quitter();break;
default : system("cls");printf("votre choix n'est pas valide !!!\n");
        }

        }while(choix!=11);


  system("PAUSE>null");
  return 0;
  }
