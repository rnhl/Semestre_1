#!usr/bin/perl -w 
sub puissance {
	$result = $x;
				if($n == 0){
							$result = 1;
							print("$x puiss $n  = $result\n");
							if($n == 1){
										$result = $x;
										print("$x puiss $n = $result\n");
							}
				}
				else{
					for($i = $n; $i > 1; $i--){ 
												$result = $result * $x;
					}
				print("$x puiss $n = $result\n");
				}
}
print("entrez x :\n");
$x = <STDIN>; chomp $x;
print("puissance ? \n");
$n = <STDIN>; chomp $n;
puissance();
