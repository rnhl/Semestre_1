#!usr/bin/perl -w

print("entrez poids (kgs) : ");
$poids = <STDIN>; chomp $poids;

$poids_lune = $poids/6;

print("sur la lune $poids kg feraient $poids_lune kgs\n");

