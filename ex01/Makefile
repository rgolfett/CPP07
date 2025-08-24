NAME = Iter

SRCS =  main.cpp \

		
INCLUDES = Iter.hpp \
			

OBJS =	$(SRCS:%.cpp=%.o)

CXX = c++

all : $(NAME)

CPPFLAGS = -g  -Wall -Wextra -std=c++98 -Werror 
$(NAME) : $(OBJS)
		$(CXX) $(CPPFLAGS) -o $(NAME) $(OBJS)

clean :
		rm -f $(OBJS)

fclean : clean 
		rm -f $(NAME)

re : fclean all

%.o : %.cpp $(INCLUDES) Makefile
	$(CXX) -c $(CPPFLAGS) $< -o $@

.PHONY = all clean fclean re