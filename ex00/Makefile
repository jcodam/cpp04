NAME= polymorphism

SRC= main.o Animal.o Dog.o Cat.o
SRC+= WrongAnimal.o WrongDog.o WrongCat.o

CC= c++

CPPFLAGS +=	-Wall -Werror -Wextra
CPPFLAGS +=	-std=c++98

all:$(NAME)

$(NAME): $(SRC)
	$(CC) $(CPPFLAGS) -o $@ $^
%.o:%.cpp
	$(CC) -c $(CPPFLAGS) $< -o $@

clean:
	rm -rf $(SRC)
fclean:
	rm -rf $(SRC) $(NAME)

re:
	@$(MAKE) fclean
	@$(MAKE) all

r: all
	./$(NAME)

.PHONY: all clean fclean re r 