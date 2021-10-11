//
// Created by Sam on 11/10/2021.
//

void exercice1(){
    //Utilisation de toutes les fonction de MesFonction.c sur tous les nombres rationnels
    struct NombreRationnel nbrrat = entrerNombreRationnel();
    struct NombreRationnel nbrrat2 = entrerNombreRationnel();
    struct NombreRationnel nbrrat3 = multiplierNombreRationnel(nbrrat, nbrrat2);
    struct NombreRationnel nbrrat4 = additionnerNombreRationnel(nbrrat, nbrrat2);

    //Affichage tout les nombres rationnels
    afficherNombreRationnel(nbrrat);
    afficherNombreRationnel(nbrrat2);
    afficherNombreRationnel(nbrrat3);
    afficherNombreRationnel(nbrrat4);
}
void exercice2(){
    const int MAX = 100; //Constante du nombre maximum d'entier (ici 100)
    int nbtotal = 0;
    int nb;
    int tab[];
    printf("Entrez le nombre d'entier a rentrer: \n");
    scanf("%d",&nbtotal);

    //Verifie une seul fois si le nombre entrer est correct
    if (nbtotal > 100 || nbtotal <= 0) {
        printf(&"Nombre trop grand, veuillez entrer un nombre inferieur a " [ nbtotal] + ": \n");
        scanf("%d",&nbtotal);
    }

    for (int i = 1; i < nbtotal + 1; ++i) {
        printf("Entrez l'entier pour la case : %d\n", i);
        scanf("%d", &nb);
        tab[i] = nb;
        printf("%d : %d\n", i , tab[i]);
    }
}

void exercice3(){
    int cpt = 1;
    int nb;
    int k = 0;
    int tab3x4[3][4];
    int tab12[MAX2];
    for (int i = 0; i<3; ++i){
        for (int j = 0; j < 4 ; ++j) {
            printf("Entrez le nombre a inserer: (%d/12)\n", cpt++);
            scanf("%d", &nb);
            tab3x4[i][j] = nb;
        }
    }

    //Désolé je n'ai pas eu le temps de faire la suite mais il ne reste plus qu'à faire l'affichage avec 2 boucles for qui parcourt la matrice
}