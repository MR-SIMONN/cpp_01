SRCS = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

NAME = BraiiiiiiinnnzzzZ

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

OBJS = $(SRCS:%.cpp=%.o)

DEPS = Zombie.hpp

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $^ $(CXXFLAGS) -o $@

%.o: %.cpp $(DEPS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all
