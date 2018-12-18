#!/usr/bin/perl -w
#@mots=("pomme" "cerise" "fraise");
@mots=qw(pomme cerise fraise);
print ("quel est ton prenom?\n");
$prenom=<STDIN>; chomp $prenom;

if($prenom eq 'rache'){
	print("Hi master\n");
}
else{
	print("Salut $prenom\n");
	print("Mot de passe jeune padawan ?");
	$password=<STDIN>;
	print("Wrong pass try again :\n");
	$password=<STDIN>;
	chomp $password;
	$i=0;
	$correct="maybe";
		while($correct eq "maybe"){
			if(@mots[$i] eq $password){
				$correct="oui";
			}
			elsif($i < 2){
				$i = $i + 1;
			}
			
			else{
				print("Error try again. Password : ");
				$password=<STDIN>; chomp $password;
				$i = O;
			}
		}
	}


