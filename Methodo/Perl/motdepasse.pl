#!/usr/bin/perl -w

%mots = qw( mehdi cerise 
			paul pomme 
			aline fraise 
			ryan kiwi);
print("quel est ton prenom ?");
$prenom = <STDIN>; chomp $prenom;
if($prenom eq "rache"){
	print("Bonjour master !\n");
} else {
	print("Bonjour $prenom, quel est le mot de passe ?\n");
	$motsecret = $mots{$prenom};
	$password = <STDIN>; chomp $password;

	while($password ne $motsecret){
		print("Erreur, try again. Pass ?");
		$password = <STDIN>; chomp $password;
	}
	print("Bienvenue $prenom ! \n");

}


