All:
#	echo "First arg: $1"
#	echo "Second arg: $2"
$("touch $1")

	NAME = $2
	nasm -f elf64 $NAME.nasm-o $NAME.o
	ld $NAME.o -o $NAME



