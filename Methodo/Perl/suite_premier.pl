#!usr/bin/perl -w
$maxnbrs=20;
   $valeur=1;
   $compte=0;
   while($compte<$maxnbrs){
$valeur++;
         $compose=0;
   EXTER:for($i=2; $i<$valeur; $i++){
               for($j=$i; $j<$valeur; $j++){
                     if(($j*$i) == $valeur){
                           $compose=1;
                           last EXTER;
                           }
} }
               if(!$compose){
               $compte++;
               print "$valeur est ????\n";
               }
}
   