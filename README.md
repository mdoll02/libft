 [![CodeFactor](https://www.codefactor.io/repository/github/mdoll02/libft/badge/master)](https://www.codefactor.io/repository/github/mdoll02/libft/overview/master)
![Lines of code](https://img.shields.io/tokei/lines/github/mdoll02/libft?style=flat-square)
# libft

In this project we needed to implement our own versions of standart libc functions and a few additional functions

## standart functions
  isalpha -> int	ft_isalpha(int c);
  isdigit -> int	ft_isdigit(int c);
  isalnum -> int	ft_isalnum(int c);
  isascii -> int	ft_isascii(int c);
  isprint -> int	ft_isprint(int c);
  strlen  -> size_t	ft_strlen(const char *s);
  memset  -> void	*ft_memset(void *b, int c, size_t len);
  bzero   -> void	ft_bzero(void *s, size_t n);
  memcpy  -> void	*ft_memcpy(void *dst, const void *src, size_t n);
  memmove -> void	*ft_memmove(void *dst, const void *src, size_t len);
  strlcpy -> size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
  strlcat -> size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
  toupper -> int	ft_toupper(int c);
  tolower -> int	ft_tolower(int c);
  strchr  -> char	*ft_strchr(const char *s, int c);
  strrchr -> char	*ft_strrchr(const char *s, int c);
  strncmp -> int	ft_strncmp(const char *s1, const char *s2, size_t n);
  memchr  -> void	*ft_memchr(const void *s, int c, size_t n);
  memcmp  -> int	ft_memcmp(const void *s1, const void *s2, size_t n);
  strnstr -> char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
  atoi    -> char	*ft_itoa(int n);
  calloc  -> void	*ft_calloc(size_t count, size_t size);
  strdup  -> char	*ft_strdup(const char *s1);
