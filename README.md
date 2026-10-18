# 42 — Rank 01

Rank 01 of the 42 curriculum: three projects focused on C fundamentals and Linux system administration.

## Projects

| Project | Grade | Estimated time | Focus |
|---|---:|---:|---|
| [ft_printf](https://github.com/MariaBarreiro/42_Printf) | 100/100 | ~55 hours | Recreating `printf` and working with variadic functions |
| [Born2beroot](https://github.com/MariaBarreiro/42_Born_2_be_Root) | 125/125 | ~50 hours | Virtualization, Linux setup, and system administration |
| [get_next_line](https://github.com/MariaBarreiro/42_GetNextLine) | 125/125 | ~55 hours | Reading files one line at a time |

**Total: 350/350 · about 160 hours**

## Projects and what I learned

### ft_printf

Recreates a useful subset of the standard C `printf` function.

- **Grade:** 100/100
- **Time:** About 55 hours
- **I learned:** How variadic functions work, how to process format specifiers, and how to split a larger C program into reusable functions.

**Compile the library:**

```sh
make
```

This creates `libftprintf.a`. To remove object files, run `make clean`; to remove the object files and library, run `make fclean`.

### Born2beroot

Introduces virtualization by setting up and securing a Linux server in a virtual machine.

- **Grade:** 125/125
- **Time:** About 50 hours
- **I learned:** Linux system administration, virtual machines, disk partitioning with LVM and encryption, user and password policies, SSH, firewall configuration, `sudo`, and system monitoring.

**How to run it:** This project is a virtual machine setup rather than a compiled program. See the [project README](https://github.com/MariaBarreiro/42_Born_2_be_Root) for the Debian/Rocky setup and configuration details.

### get_next_line

Implements a function that reads and returns one line at a time from a file descriptor.

- **Grade:** 125/125
- **Time:** About 55 hours
- **I learned:** How to manage file descriptors, read input in buffers, preserve leftover data between calls, and handle memory while building strings. The bonus version also explores reading from multiple file descriptors.

**Compile and run the included test program:**

```sh
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 \
  main.c get_next_line.c get_next_line_utils.c -o gnl
./gnl
```

The included `main.c` reads from `banana.txt`. Change `BUFFER_SIZE` to test different read sizes.
