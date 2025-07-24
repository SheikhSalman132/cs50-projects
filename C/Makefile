CC = clang
CFLAGS = -Wall -Wextra

# Compile any .c file into matching .exe
%: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	del /Q *.exe

