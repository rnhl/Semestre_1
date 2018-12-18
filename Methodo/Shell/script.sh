#!/usr/bin/sh
date +"%A %d %B %Y"
date +"Il est %Hh%m.\n"
echo
echo "contenu du repertoire courant :"
ls
echo -e "\n\n"
echo -e "ENVIRONNEMENT (attention à la longueur)\n\n"
echo
env
#time