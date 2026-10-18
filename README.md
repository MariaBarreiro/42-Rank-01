# 🎓 42 — Rank 01

**Three projects in C and Linux system administration.**

![Rank](https://img.shields.io/badge/42%20Rank-01-5c6ac4?style=for-the-badge)
![Time](https://img.shields.io/badge/Estimated%20time-160%20hours-007ec6?style=for-the-badge)

---

## 📚 Projects

| Project | Grade | Time | Main topic |
|---|---:|---:|---|
| 🖨️ [ft_printf](https://github.com/MariaBarreiro/42_Printf) | **100/100** | ~55 h | Variadic functions |
| 🖥️ [Born2beroot](https://github.com/MariaBarreiro/42_Born_2_be_Root) | **125/125** | ~50 h | Virtualization and Linux |
| 📄 [get_next_line](https://github.com/MariaBarreiro/42_GetNextLine) | **125/125** | ~55 h | Reading files line by line |

---

## 🖨️ ft_printf

> Recreate a useful subset of C’s `printf` function.

![Grade](https://img.shields.io/badge/Grade-100%2F100-brightgreen?style=flat-square)
![Time](https://img.shields.io/badge/Time-~55%20hours-blue?style=flat-square)

**What I learned**
- How variadic functions work
- How to parse format specifiers and handle different data types
- How to organize reusable C functions

**Compile**

```sh
make
```

This creates `libftprintf.a`. Run `make clean` to remove object files, or `make fclean` to remove the object files and library.

---

## 🖥️ Born2beroot

> Set up and secure a Linux server inside a virtual machine.

![Grade](https://img.shields.io/badge/Grade-125%2F125-brightgreen?style=flat-square)
![Time](https://img.shields.io/badge/Time-~50%20hours-blue?style=flat-square)

**What I learned**
- Linux system administration and virtualization
- LVM partitioning and disk encryption
- User, password, and `sudo` policies
- SSH, firewall configuration, and system monitoring

**Run**

This project is a virtual machine setup, rather than a compiled program. See the [project README](https://github.com/MariaBarreiro/42_Born_2_be_Root) for the Debian/Rocky setup and configuration details.

---

## 📄 get_next_line

> Write a function that returns one line at a time from a file descriptor.

![Grade](https://img.shields.io/badge/Grade-125%2F125-brightgreen?style=flat-square)
![Time](https://img.shields.io/badge/Time-~55%20hours-blue?style=flat-square)

**What I learned**
- How to read input in buffers and preserve leftover data between calls
- How to manage file descriptors and dynamic memory
- How to support multiple file descriptors in the bonus version

**Compile and run the included test**

```sh
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 \
  main.c get_next_line.c get_next_line_utils.c -o gnl
./gnl
```

The included `main.c` reads from `text.txt`. Change `BUFFER_SIZE` to try different read sizes.
