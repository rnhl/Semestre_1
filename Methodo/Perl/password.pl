#!/usr/bin/perl -w

$motsecret = "pomme";
print ("quel est ton prenom?\n");
$prenom=<STDIN>; chomp $prenom;

if($prenom eq 'rache'){
	print("Hi master\n");
}
else{
	print("Salut $prenom\n");
	print("Mot de passe jeune padawan ?");
	$password=<STDIN>;
	while($password ne $motsecret){
		print("Wrong pass try again :\n");
		$password=<STDIN>;
		chomp $password;
	}
}

