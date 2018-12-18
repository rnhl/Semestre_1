#! /usr/bin/perl - w

use strict;

print("Entrez tableau : \n");
my @liste = split(/\s+/, <>);
#la fonction split permet de séparer chaque nombre par un espace en l'intégrant au tableau

sub add_nb_tableau {

my $somme = 0;
foreach $_ (@_) {
$somme += $_;
}
return $somme;
}
print("Somme du tableau = ", add_nb_tableau(@liste), "\n");

