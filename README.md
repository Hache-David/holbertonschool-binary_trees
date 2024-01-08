# Introduction

![Logo](https://zupimages.net/up/24/02/tnpf.png)

# Arbres Binaires en C

Ce projet est dédié à l'apprentissage et à la mise en œuvre des arbres binaires en langage C.

## Introduction aux Arbres Binaires

Un arbre binaire est une structure de données dans laquelle chaque nœud a au maximum deux enfants, connus sous les noms de "fils gauche" et "fils droit". Ils sont utilisés dans diverses applications telles que les arbres de recherche binaires, les tas, les arbres de syntaxe, etc.

## Objectifs

- Comprendre le concept des arbres binaires.
- Implémenter les opérations de base sur les arbres binaires en C.
- Respecter les normes de codage Betty pour une meilleure lisibilité et maintenance du code.

## Contenu

- `binary_tree.h` : En-tête contenant les définitions des structures et prototypes de fonctions.
- `create_node.c` : Fonction pour créer un nouveau nœud.
- `insert_left.c` : Fonction pour insérer un nœud à gauche d'un nœud donné.
- `insert_right.c` : Fonction pour insérer un nœud à droite d'un nœud donné.
- `delete_tree.c` : Fonction pour supprimer un arbre entier.
- `print_tree.c` : Fonction pour afficher l'arbre de manière visuelle.
- Exemples de code et explications.

## Usage

Pour utiliser ce projet, clonez le dépôt et compilez les fichiers avec un compilateur C standard comme `gcc`.

```bash
gcc -Wall -Wextra -Werror -pedantic *.c -o binary_trees

## Authors

- [@David HACHE](https://github.com/Hache-David)
- [@Thierry CRAVERO](https://github.com/SpeedCash)