#!usr/bin/perl -w 

print("donnez nombre : ");
$nb = <STDIN>; chomp $nb;

if($nb % 2 eq 0){
	print("$nb est pair\n");
}
else{
	print("$nb est impair\n");
}