#!/usr/bin/perl -w

# autre exemple avec listes/tableaux

@parfums=qw(vanille pistache chocolat banane);
for($index=0; $index<@parfums; $index++) {
    print "mon parfum favori est le parfum $parfums[$index] et ...\n"
}
print "beaucoup d\'autres encore ...\n";


# autre exemple

foreach $parfum(@parfums) {
    $parfum="glace $parfum";
    print "je voudrais un bol de $parfum svp !\n";
}


# autre exemple

@mots=split(//, "Bonjour tout le monde");
print "@mots\n";


# autre exemple

@musique=('White Album, Beatles', 'Random Access Memory, Daft Punk', 'Racine Carrée, Stromae');
foreach $elem(@musique) {
($nom_album, $artiste)=split(/,/, $elem);
print "\n\n";
print "$nom_album \t\t\t $artiste\n\n";
}




# autre exemple
print "veuillez saisir votre prénom : ";
$prenom=<STDIN>;
chomp $prenom;
$msg="bonjour $prenom comment vas-tu ?\n";
print $msg;
print "la chaîne \"$msg\" est composée de : \n",
    join('-', split(//, $msg));


# autre exemple


print "\n\nVeuillez écrire qqchose svp : ";
while(<STDIN>) {

($premiercar)=split(//, $_);
print "le premier caractère était $premiercar\n\n";
exit ;

}

