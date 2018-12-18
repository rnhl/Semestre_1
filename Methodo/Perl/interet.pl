#!/usr/bin/perl -w

print("depot de montant mensuel ?");
$paiement = <STDIN>; chomp $paiement;

print("taux d'interet annuel ? (pourcentage en décimal)");
$interet = <STDIN>; chomp $interet;

print("Nb de mois à deposer ?");
$mois = <STDIN>; chomp $mois;

$interet /= 12;

$total = $paiement * ((1 + $interet) ** $mois - 1) / $interet;
print("apres $mois mois, a $interet par mois, vous aurez $total\n");

$i = 2;
$p = $i ** 3; print("$p");