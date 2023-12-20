NAME = phonebook

CXX = g++

CFLAGS = -Werror -Wall -Wextra -std=c++98 -fsanitize=address

RM = rm -rf

SRCS = 	phonebook.cpp\
		main.cpp\

OBJS = $(SRCS:.cpp=.o)

HEADER = phonebook.hpp

all : $(NAME)

$(NAME) : $(OBJS) $(HEADER)
	$(CXX) $(CFLAGS) $(OBJS) -o $(NAME)

fclean : clean
	$(RM) $(NAME)

clean :
	$(RM) $(OBJS)

re : fclean all clean