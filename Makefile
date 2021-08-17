#$(NAME)

main.o:
	gcc -c -Wall -Wextra -Werror -o main.o main.c

all: 
	echo "TODO all rule"

clean:
	rm *.o
	rm *.out
	rm test/*.o
	rm test/*.out

fclean:
	rm ft*.o
	rm test/*.o

re:
	echo "TODO: re rule"

ft_strlen.o:
	norminette ft_strlen.c
	norminettev2 ft_strlen.c
	gcc -c -Wall -Wextra -Werror ft_strlen.c

test_ft_strlen:
	gcc -Wall -Wextra -Werror test/test_ft_strlen.c -o test_ft_strlen.out
	chmod +x test_ft_strlen.out

run:
	./test_ft_strlen.out
