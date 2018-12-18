#!/usr/bin/perl -w
$tentative = int 3;

$nb_secret = int(rand 10);
print("choisis un nombre :  ");
$nb = <STDIN>; chomp $nb;
while($nb ne $nb_secret && $tentative > 1){
if($nb > $nb_secret){
	print("ton choix est trop grand !\n");
	$tentative--;
} else{
	print("ton choix est trop petit\n");
	$tentative--;
} 
print("Mauvaise réponse il te reste $tentative chance ! \n");
$nb = <STDIN>; chomp $nb;
}

if($nb eq $nb_secret){
print("Bravo ! ton choix est juste !\n");
} else{
	print("Perdu ! \n Le bon nombre est : $nb_secret \n");
} 