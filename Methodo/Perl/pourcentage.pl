#! usr/bin/perl -w

print("entrez prix : ");
$prix = <STDIN>; chomp $prix;
sub reduc{
	$total = $prix * (100 - 45)/100;
	print("$prix¥ à -45% = $total¥\n");
}

reduc();