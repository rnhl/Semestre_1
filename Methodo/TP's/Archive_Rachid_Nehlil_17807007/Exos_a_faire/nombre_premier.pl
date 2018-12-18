#!usr/bin/perl -w

print("entrez nombre ?  ");
$nombre = <STDIN>; chomp $nombre;

if($nombre eq 2){
	print("$nombre est premier\n"); 
}

else{
	$nb_premier = (2 ** ($nombre - 1)) - 1;
	if($nb_premier % $nombre eq 0 && $nombre > 1){
		print("$nombre est premier\n"); 
	}
	else{
		print("$nombre n'est pas premier\n");
	}

}

