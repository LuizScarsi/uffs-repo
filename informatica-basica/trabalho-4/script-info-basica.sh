#! /usr/bin/bash
cd ~
mkdir -p uffs/trabalho uffs/textos
cd uffs/
ls
touch teste.txt
echo "Matrícula: 2311101009" > teste.txt
echo "Nome: Luiz Augusto Scarsi" >> teste.txt
echo "Cidade nascimento: Xanxerê-SC" >> teste.txt
cp teste.txt teste1.txt
cp teste.txt teste.asc
cp *.txt trabalho
ls trabalho
mv teste.asc textos
ls -l textos
chmod 664 teste.txt
chmod 644 teste1.txt
mkdir ~/uffs_backup
cp -r ~/uffs ~/uffs_backup
tree ~/uffs_backup
cp textos/teste.asc trabalho/
rm -r textos
mv trabalho/teste.asc trabalho/outro_texto.txt
cat trabalho/outro_texto.txt
echo "*************************"
cat trabalho/outro_texto.txt | grep Luiz