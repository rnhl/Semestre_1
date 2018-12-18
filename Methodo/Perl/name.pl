#!/usr/bin/perl -w
$name = "larry";


print "hello !\n";
print "what is your name ? ";
$nom = <STDIN>;
chomp $nom;

if($name = $nom) {
	print " bonjour, $nom\n"
}

else(){
	for($i=3; $i>0; $i--){
		print"Pas le bon user, $nom !\n";
	}
	print"Au revoir\n";
}


#print "hello, $nom ! \n";