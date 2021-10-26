/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaetano <jcaetano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 11:16:46 by jcaetano          #+#    #+#             */
/*   Updated: 2021/09/11 08:08:01 by jcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

# define INT_MAX 2147483647
# define INT_MIN -2147483648

/**
 * @brief Checks if c is alphabetic
 *
 * @param c Character to be analysed
 * @return int 1 if is true, 0 if false
 */
int		ft_isalpha(int c);

/**
 * @brief Checks if c is a number
 *
 * @param c Character to be verified
 * @return int 1 if is true, 0 if false
 */
int		ft_isdigit(int c);

/**
 * @brief Checks if c is an alphanumeric character
 *
 * @param c Character to be verified
 * @return int 1 if is true, 0 if false
 */
int		ft_isalnum(int c);

/**
 * @brief Checks if c is an unsigned char value from ASCII character set
 *
 * @param c Character to be verified
 * @return int 1 if is true, 0 if false
 */
int		ft_isascii(int c);

/**
 * @brief Checks if c is a printable character, including space
 *
 * @param c character to be verified
 * @return int 1 if is true, 0 if false
 */
int		ft_isprint(int c);

/**
 * @brief Calculates the length of the string
 * pointed to by str, excluding the terminating null byte
 *
 * @param str Pointer to the initial area of the string
 * @return size_t The number of bytes in the
 * string pointed to by str
 */
size_t	ft_strlen(const char *str);

/**
 * @brief Fills the first n bytes of the memory area pointed by dest with the
 * constant byte c
 * @param dest Pointer of memory area
 * @param c Constant byte to fill the memory area
 * @param size Number of bytes to fill
 * @return void* A pointer to the memory area
 */
void	*ft_memset(void *dest, int c, size_t size);

/**
 * @brief Erases the data in the n bytes of the memory starting at the location
 * pointed to by src, by writing 0 to that area
 * @param src Pointer to the start of memory location
 * @param n Buffer size
 */
void	ft_bzero(void *src, size_t n);

/**
 * @brief Copies n bytes from memory area src to memory area dest. Not treating
 * overlapping memory case
 * @param dest Destination pointer of memory area
 * @param src Source pointer of memory area
 * @param n Buffer size in bytes
 * @return void* A pointer to the start of dest memory area
 */
void	*ft_memcpy(void *dest, const void *src, size_t n);

/**
 * @brief Copies n bytes from memory area src to memory area dest. Treating
 * overlapping memory case
 * @param dest Destination pointer of memory area
 * @param src Source pointer of memory area
 * @param n Buffer size in bytes
 * @return void* A pointer to the start of dest memory area
 */
void	*ft_memmove(void *dest, const void *src, size_t n);

/**
 * @brief copies up to (size - 1) characters from the NUL-terminated string src
 * to dst, NUL-terminat‐ing the result
 *
 * @param dest Pointer to the destination area of memory
 * @param src  Pointer to the source area of memory
 * @param size BUffer size in bytes
 * @return size_t The length of src
 */
size_t	ft_strlcpy(char *dest, const char *src, size_t size);

/**
 * @brief Converts uppercase character to lowercase
 * @param c Character to be converted
 * @return int The converted character if uppercase, or c if lowercase
 */
int		ft_tolower(int c);

/**
 * @brief Converts lowercase character to uppercase
 * @param c Character to be converted
 * @return int The converted character if lowercase, or c if uppercase
 */
int		ft_toupper(int c);

/**
 * @brief Appens the NUL-terminates string src to the end of dest. It will
 * append most (size - strlen(dst) - 1) bytes, NUL-terminating the result
 * @param dest Pointer to the destination area of memory
 * @param src  Pointer to the source area of memory
 * @param size BUffer size in bytes
 * @return size_t The total length of initial dest + initial src
 */
size_t	ft_strlcat(char *dest, const char *src, size_t size);

/**
 * @brief Finds the first occurrence of the character c in the string str
 * @param str Pointer to the string memory area
 * @param c Character to be searched inside the string s
 * @return char* A pointer to the matched character
 * or NULL if the character is not found
 */
char	*ft_strchr( const char *str, int c );

/**
 * @brief Finds the last occurrence of the character c in the string str
 * @param str Pointer to the string memory area
 * @param c Character to be searched inside the string s
 * @return char* A pointer to the matched character
 * or NULL if the character is not found
 */
char	*ft_strrchr(const char *str, int c);

/**
 * @brief Compares the two strings s1 and s2
 *
 * @param s1 Pointer to the area of memory of the first string
 * @param s2 Pointer to the area of memory of the second string
 * @param n Buffer size in bytes to compare both strings
 * @return int 0, if the s1 and s2 are equal;
 * A negative value if s1 < s2; A positive value if s1 > s2
 */
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/**
 * @brief Scans the initial n bytes of the memory area
 * pointed to by ptr for the first instance of c
 *
 * @param ptr Pointer to the initial memory area
 * @param c Character to be searched
 * @param n Buffer size in bytes
 * @return A pointer str to the matching byte or NULL if it does not occur
 */
void	*ft_memchr(const void *ptr, int c, size_t n);

/**
 * @brief Compares the first n bytes (each interpreted as unsigned char) of the
 * memory areas s1 and s2
 * @param s1 Pointer to the first memory area to be compared
 * @param s2 Pointer to the second memory area to be compared
 * @param n Buffer size in bytes
 * @return int 0, if the s1 and s2 are equal or if n value is 0
 * A negative value if s1 < s2
 * A positive value if s1 > s2

 */
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/**
 * @brief Locates the first occurrence of the null-terminated
 * string little in the string big, where not more than `n` characters
 * are checked. Characters that appear after a `\\0` character are not
 * checked
 *
 * @param big String to be searched by `little`
 * @param little String to search in `big`
 * @param n Number of bytes to search
 * @return char* If little is an empty string, big is returned
 * If little occurs nowhere in big, NULL is returned
 * Otherwise a pointer to the first character of the first occurrence
 * of little is returned
 */
char	*ft_strnstr(const char *big, const char *little, size_t n);

/**
 * @brief Converts the initial portion of the string pointed
 * by nptr to int
 *
 * @param nptr Pointer to the string to be converted
 * @return int The converted value or 0 on error
 */
int		ft_atoi(const char *nptr);

/**
 * @brief Allocates memory for an array
 * of nmemb elements of size bytes each and set them to zero.
 *
 * @param nmemb Number of elements in array
 * @param size Size of bytes for each element
 * @return void* A pointer to the
 * allocated memory, which is suitably aligned for any built-in
 * type. Return NULL on allocation error or with size 0.
 */
void	*ft_calloc(size_t nmemb, size_t size);

/**
 * @brief Duplicates the string pointed by s in a new string
 *
 * @param s Pointer to the start of the string to be copied
 * @return char* A pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */
char	*ft_strdup(const char *s);

/**
 * @brief Allocates a substring from the string ’s’.
 * The substring begins at index ’start’ and is of maximum size ’len’.
 *
 * @param s		The string from which to create the substring.
 * @param start	The start index of the substring in the string’s’.
 * @param len	The maximum length of the substring.
 * @return char* The substring. NULL if the allocation fails.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len);

/**
 * @brief Allocates a newstring, which is the result of the concatenation of
 * ’s1’ and ’s2’.
 *
 * @param s1 The prefix string
 * @param s2 The suffix string
 * @return char* The new string or NULL if the allocation fails.
 */
char	*ft_strjoin(char const *s1, char const *s2);

/**
 * @brief Allocates (with malloc(3)) and returns
 * a copy of ’s1’ with the characters specified
 * in ’set’ removed from the beginning and the
 * end of the string.
 *
 * @param s1 The string to be trimmed
 * @param set The set of characters to trim
 * @return char* Returns the trimmed string,
 * or NULL if allocation fails.
 */
char	*ft_strtrim(char const *s1, char const *set);

/**
 * @brief Allocates (with malloc) and returns an array
 * of strings obtained by splitting ’s’ using the
 * character ’c’ as a delimiter. The array must be
 * ended by a NULL pointer.
 *
 * @param s The string to be split
 * @param c The delimiter character
 * @return char** The array of new strings resulting from the split.
 * NULL if allocation fails.
 */
char	**ft_split(char const *s, char c);

/**
 * @brief Allocates (with malloc()) a string representing the integer
 * received as an argument. Negative numbers must be handled.
 *
 * @param n The integer to convert
 * @return char* Returns the string representing the integer.
 * NULL if the allocation fails.
 */
char	*ft_itoa(int n);

/**
 * @brief Applies the function ’f’ to each character of the string ’s’
 * to create a new string (with malloc) resulting from successive
 * applications of ’f’.
 *
 * @param s The string on which to iterate
 * @param f The function to apply to each character
 * @return char* The string created from the successive applications of ’f’.
 * Returns NULL if the allocation fails.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/**
 * @brief Applies the function f to each character of the string passes as
 * argument, and passing its index as first argument. Each character is passed
 * by address to f to be modified if necessary.
 *
 * @param s The string on which to interate
 * @param f The function to apply to each character
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

/**
 * @brief Outputs the character ’c’ to the given filedescriptor.
 *
 * @param c The character to output
 * @param fd The file descriptor on which to write
 */
void	ft_putchar_fd(char c, int fd);

/**
 * @brief Outputs the string ’s’ to the given file descriptor.
 *
 * @param s The string to output.
 * @param fd The file descriptor on which to write.
 */
void	ft_putstr_fd(char *s, int fd);

/**
 * @brief Outputs the string ’s’ to the given file descriptor,
 * followed by a newline.
 *
 * @param s The string to output.
 * @param fd The file descriptor on which to write.
 */
void	ft_putendl_fd(char *s, int fd);

/**
 * @brief Outputs the integer ’n’ to the given file descriptor.
 *
 * @param n The integer to output.
 * @param fd The file descriptor on which to write.
 */
void	ft_putnbr_fd(int n, int fd);
#endif
