//
// Created by Sam on 11/10/2021.
//
struct NombreRationnel SaisirNombreRationnel(){
    struct NombreRationnel nbrrat;
    printf("Entrez le numerateur:\n");
    scanf("%d", &nbrrat.numerateur);
    printf("Entrez le denominateur:\n");
    scanf("%d", &nbrrat.denominateur);
    return nbrrat;
}

//Affiche un nombre rationnel
void afficherNombreRationnel(struct NombreRationnel nbrrat){
    printf("Votre nombre est: %d/%d\n", nbrrat.numerateur, nbrrat.denominateur );
}

//Multiplie deux nombres rationnel
struct NombreRationnel multiplierNombreRationnel(struct NombreRationnel nbrrat, struct NombreRationnel nbrrat2){
    struct NombreRationnel nbrrat3;
    nbrrat3.numerateur = nbrrat.numerateur * nbrrat2.numerateur;
    nbrrat3.denominateur = nbrrat.denominateur * nbrrat2.denominateur;
    return nbrrat3;
}

//Additionne deux nombres rationnel
struct NombreRationnel additionnerNombreRationnel(struct NombreRationnel nbrrat, struct NombreRationnel nbrrat2){
    struct NombreRationnel nbrrat4;
    nbrrat4.numerateur = nbrrat.numerateur * nbrrat2.denominateur + nbrrat2.numerateur * nbrrat.denominateur;
    nbrrat4.denominateur = nbrrat.denominateur * nbrrat2.denominateur;
    return nbrrat4;
}
