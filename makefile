cc = clang
c_flags = -Wall -Wextra -g
src = twoSum_twoPointer
target = out

all: $(target)

$(target): $(src)
	$(cc) $(c_flags) $(src).c -o $(target)

run:
	./$(target)

