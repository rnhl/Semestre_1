#!usr/bin/perl -w

use strict;

sub moyenne{
	my (@donnees)= @_;
	my $somme = 0;
	foreach(@donnees){
		$somme += $_;
	}
	return ($somme / @donnees);	
}

sub mediane{
	my(@donnees) = sort{$a <=> $b} @_;
	if(scalar@donnees % 2){
		return ($donnees [@donnees / 2]);
	}else {
		my($haut, $bas);
		$bas = $donnees [@donnees / 2];
		$haut = $donnees [@donnees / 2 - 1];
		return (moyenne($bas, $haut));
	}	
}

sub ecart{
 	my (@donnees) = @_;
 	my ($nom_ecart, $moy) = 0.0;
 	$moy = moyenne(@donnees);
 	foreach my $elem (@donnees) {
 		$nom_ecart += ($moy - $elem) ** 2;
 	}
 	return (sqrt($nom_ecart / (@donnees - 1)));
 }


print("moyenne = ", moyenne(15, 14, 20, 5, 9, 12),"\n");
print("mediane = ",mediane(15, 14, 20, 5, 9, 12),"\n");
print("ecart-type = ", ecart(15, 14, 20, 5, 9, 12), "\n");




