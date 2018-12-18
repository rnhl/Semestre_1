#!usr/bin/perl -w

print("entrez longueur : ");
$long = <STDIN>; chomp $long;

print("entrez largeur : ");
$largeur = <STDIN>; chomp $largeur;

$surface = $long * $largeur;

print("Votre piece fait $surface metre carre\n");

