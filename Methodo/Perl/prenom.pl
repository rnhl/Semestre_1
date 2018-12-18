#!/usr/bin/perl -w
$nom='rache';

print "hello !\n";
print "what is your name ? ";
$prenom = <STDIN>;
chomp $prenom;

if($prenom eq 'rache') {
	print"Hi master !\n";
}

if($prenom ne $nom){
	for($i=2; $i>0; $i--){
		print"hey you're not $nom\n";
		}
	print "what is your name ? ";
	$prenom = <STDIN>;
	chomp $prenom;
	print "Bye loser\n"
}
