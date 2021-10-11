//
// Created by Sam on 11/10/2021.
//

#ifndef TP5_MESFONCTIONS_H
#define TP5_MESFONCTIONS_H

typedef struct NombreRationnel {
    int numerateur;
    int denominateur;
} NombreRationnel;s


//Definition des fonciton de l'exercie 1
struct NombreRationnel entrerNombreRationnel();
void afficherNombreRationnel(struct NombreRationnel nbrrat);
struct NombreRationnel multiplierNombreRationnel(struct NombreRationnel nbrrat, struct NombreRationnel nbrrat2);
struct NombreRationnel additionnerNombreRationnel(struct NombreRationnel nbrrat, struct NombreRationnel nbrrat2);

#endif //TP5_MESFONCTIONS_H
