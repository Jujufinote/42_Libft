![cover libft_bonus](https://github.com/Jujufinote/42_badges_and_covers/blob/main/covers/cover-libft-bonus.png)
<br>
<br>

## Preface
The Libft is the first project intended at 42School. It aims to revew projects of the 42pool and revise the fundamentals of the C language. It allows also to create a library of most basic fonctions that you'll can use in some other projects if you want.

This project enable exercising on five capital skills : analisation of alphanumeric variables, manipulation and transformation of strings, memory and linked lists, and commands of displaying/writing on file descriptor.
<br>
<br>

## 📜 Mandatory part
The mandatory part is the necessary portion to success any project. Here, you'll brush up on some of the basic fonctions already learned in 42pool and recreate some fonctions of the standard library of C language. One goal is to learn basic operations on and with a static library and the other to work your logic and vision of C language with the fonctions asked.
<br>
<br>

## ✅ Bonus part
This part will help and encourage you to discover the linked lists. They're an important skill that will allow you to organise and stock different variable's types at the same time and accessing at all of them. You'll need them in the future and it's a difficult concept for many people, so the sooner you start to learn and undertand them, the faster you will comprehend them when the time comes to use the linked lists.
<br>
<br>
<br>

---

## ⚙️ How to use step by step :
First, I gave you in this repository, for every fonction, a main tester, an explanation of the principle, tips and an example fonction (my version). I put some help for understanding the Makefile if you still have some difficulties and give you an example file. And finally, a main program to test all your project and verify if your library compiles and works correctly.
<br>
<br>

>[!WARNING]
> Do NOT COPY my work (fonctions, makefile, etc) without thinking and understanding them (we call that cheating) and you don't want that on your case, neither have -42 correcting points on your account (if you're at a 42School).
> <br> PLEASE LEARN AND MAKE YOUR OWN
<br>

### Step 1 :
_waiting for update_
<br>
<br>
<br>

---

## 🗒️ Fontions list
### Fonctions (1st part 23/23)
| Name | Prototype | 
|---|---|
| ft_atoi | `int	ft_atoi(const char *nptr)` |
| ft_bzero | `void	ft_bzero(void *s, size_t n)` |
| ft_calloc | `void	*ft_calloc(size_t nmemb, size_t size)` |
| ft_isalnum | `int	ft_isalnum(int c)` |
| ft_isalpha | `int	ft_isalpha(int c)` |
| ft_isascii | `int	ft_isascii(int c)` |
| ft_isdigit | `int	ft_isdigit(int c)` |
| ft_isprint | `int	ft_isprint(int c)` |
| ft_memchr | `void	*ft_memchr(const void *s, int c, size_t n)` |
| ft_memcmp | `int	ft_memcmp(const void *s1, const void *s2, size_t n)` |
| ft_memcpy | `void	*ft_memcpy(void *dest, const void *src, size_t n)` |
| ft_memmove | `void	*ft_memmove(void *dest, const void *src, size_t n)` |
| ft_memset | `void	*ft_memset(void *s, int c, size_t n)` |
| ft_strchr | `char	*ft_strchr(const char *s, int c)` |
| ft_strdup | `char	*ft_strdup(const char *s)` |
| ft_strlcat | `size_t	ft_strlcat(char *dst, const char *src, size_t size)` |
| ft_strlcpy | `size_t	ft_strlcpy(char *dst, const char *src, size_t size)` |
| ft_strlen | `size_t	ft_strlen(const char *s)` |
| ft_strncmp | `int	ft_strncmp(const char *s1, const char *s2, size_t n)` |
| ft_strnstr | `char	*ft_strnstr(const char *big, const char *little, size_t len)` |
| ft_strrchr | `char	*ft_strrchr(const char *s, int c)` |
| ft_tolower | `int	ft_tolower(int c)` |
| ft_toupper | `int	ft_toupper(int c)` |

### Fonctions (2nd part 11/11)
| Name | Prototype |
|---|---|
| ft_itoa | `char	*ft_itoa(int n)` |
| ft_putchar_fd | `void	ft_putchar_fd(char c, int fd)` |
| ft_putendl_fd | `void	ft_putendl_fd(char *s, int fd)` |
| ft_putnbr_fd | `void	ft_putnbr_fd(int n, int fd)` |
| ft_putstr_fd | `void	ft_putstr_fd(char *s, int fd)` |
| ft_split | `char	**ft_split(char const *s, char c)` |
| ft_striteri | `void	ft_striteri(char *s, void (*f)(unsigned int, char *))` |
| ft_strjoin | `char	*ft_strjoin(char const *s1, char const *s2)` |
| ft_strmapi | `char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))` |
| ft_strtrim | `char	*ft_strtrim(char const *s1, char const *set)` |
| ft_substr | `char	*ft_substr(char const *s, unsigned int start, size_t len)` |

### Fonctions bonus (9/9)
| Name | Prototype |
|---|---|
| ft_lstadd_back | `void	ft_lstadd_back(t_list **lst, t_list *new)` |
| ft_lstadd_front | `void	ft_lstadd_front(t_list **lst, t_list *new)` |
| ft_lstclear | `void	ft_lstclear(t_list **lst, void (*del)(void *))` |
| ft_lstdelone | `void	ft_lstdelone(t_list *lst, void (*del)(void *))` |
| ft_lstiter | `void	ft_lstiter(t_list *lst, void (*f)(void *))` |
| ft_lstlast | `t_list	*ft_lstlast(t_list *lst)` |
| ft_lstpmap | `t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))` |
| ft_lstnew | `t_list	*ft_lstnew(void *content)` |
| ft_lstsize | `int	ft_lstsize(t_list *lst)` |
