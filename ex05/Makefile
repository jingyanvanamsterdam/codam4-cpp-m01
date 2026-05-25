NAME = harl

HEADER = Harl.hpp

SRC = Harl.cpp main.cpp
OBJ = $(SRC:%.cpp=%.o)

FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME):$(OBJ)
	c++ $(FLAGS) $(OBJ) -o $@

%.o: %.cpp $(HEADER)
	c++ $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.phony: all, clean, fclean