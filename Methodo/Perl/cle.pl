#!/usr/local/bin/perl
use Switch;
print "entrez une valeur : \n";
$nb = <STDIN>; chomp $nb;
@tab = (10, 20, 30, 40);
%cles = ('key1' => 10, 'key2' => 20);
switch($nb){
	case 10	{ print "nombre 100\n" }
	case "a"			{ print "chaine a\n" }
	case [1..10,42]		{ print "nombre dans la liste\n" }
	case (\@tab)		{ print "nombre dans la liste\n" }
	case (\%cles)		{ print "clef dans la table de hachage\n" } 
	else 				{ print "les cas précédents sont faux\n" }
}

