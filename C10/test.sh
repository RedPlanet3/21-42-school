
# how to test
# copy to root dirrectory of day (where other ex** folders)
# comment all task you don't need
# run in cmd ->
# chmod 777 test.sh
# to start test ->
# ./test.sh

# ex00

# test .c files
echo "=================== ex00 ==================="
gcc -Wall -Wextra -Werror -o ex00/e1.out ex00/*.c
echo "123123" >> ex00/t1.txt
echo -e '123123 ->'
./ex00/e1.out ex00/t1.txt
echo "qweqwe" >> ex00/t2
echo "qweqwe ->"
./ex00/e1.out ex00/t2
echo "File name missing. ->"
ex00/e1.out
echo "Too many arguments. ->"
ex00/e1.out 1 2 3
echo "Cannot read file."
ex00/e1.out 2.ryr
rm -rf ex00/t1.txt ex00/t2 ex00/e1.out

# test makefile
echo "---------- make00 ----------"
cd ex00
make -f Makefile
make -f Makefile clean
echo "123qwe" >> t.qwe
echo "123qwe ->"
./ft_display_file t.qwe
rm -rf t.qwe
make -f Makefile fclean
cd ..

# ex01

#test .c files
echo "=================== ex01 ==================="
cd ex01
gcc -Wall -Wextra -Werror *.c
echo "123" >> t1.txt
echo "123 ->"
./a.out t1.txt
echo "No such file or directory"
./a.out EFKAkajefkA878a9898AEaef8898889aefoha8h83o83haf8ho8iieoi
echo "123\nqwe"
echo "qwe" >> t2
./a.out t1.txt t2
rm -rf t1.txt t2 a.out

# test makefile
echo "---------- make01 ----------"
cd ex01
make -f Makefile
make -f Makefile clean
echo "123" >> 1
echo "qwe" >> 2
echo "123\nqwe ->"
./ft_cat 1 2
rm -rf 1 2
make -f Makefile fclean
cd ..

# ex02

# test .c files
#echo "=================== ex02 ==================="
#cd ex02
#gcc -Wall -Wextra -Werror *.c
#echo "123" >> 1
#echo "23 ->"
#./a.out -c 3 1
#echo "123" >> 2
#./a.out -c 1000 2
#echo "(no newline) ->"
#./a.out -c 0 1
#touch 3
#echo "(no newline) ->"
#./a.out -c 10 3
#rm -rf a.out 1 2 3
#cd ..

#echo "---------- make02 ----------"
#cd ex02
#make -f Makefile
#make -f Makefile clean
#echo "123" >> 1
#echo "23 ->"
#./ft_tail -c 3 1
#rm -rf 1
#make -f Makefile fclean
#cd ..














