#!/usr/bin/perl -w


sub comptearebours {
    for($i=10; $i>0; $i--){
	print "$i !\n ";
    }
}

print "\n\nH - moins :\n ";
comptearebours();
print "décollage !!!!! \n\n";
#---------------------------------------------------------------
# une autre fonction

sub x_plusque100 {
#dépend de la valeur de $x détermine ailleurs
    return(1) if  ($x>100);
    0;
}

print "\nveuillez saisir une valeur pour x svp :";
$x=<STDIN>;
chomp $x;
if (x_plusque100()) {
    print "$x est plus grand que 100 !\n\n";
}else {
    print "la valeur saisie est infèrieure à 100 !\n\n";
}
#---------------------------------------------------------------


