// #include <stdlib.h>

// char    *ft_itoa(int nbr);

// char	*ft_itoa(int nbr)
// {
// 	char *str;
// 	char *t;
// 	char *u;

// 	if (!(str = (char *)malloc(16)))
// 		return (NULL);
// 	t = str;
// 	(nbr < 0 ? *t++ = '-' : 1);
// 	if (nbr > 0)
// 		nbr = -nbr;
// 	if (nbr <= -10)
// 	{
// 		u = ft_itoa(-(nbr / 10));
// 		while (*u)
// 			*t++ = *u++;
// 	}
// 	*t = '0' - nbr % 10;
// 	*(t + 1) = '\0';
// 	return (str);
// }





// #include <stdlib.h>

// int	*ft_range(int min, int max)
// {
// 	int	n;
// 	int	*s;

// 	n = max >= min ? max - min : min - max;
// 	if (!(s= (int *)malloc(sizeof(int) * (n))))
// 		return (NULL);
// 	while (max != min)
// 		*s++ = max > min ? min++ : min--;
// 	*s = min;
// 	return (s - n);
// }




// #include <stdlib.h>

// int *ft_rrange(int start, int end)
// {
// 	int *r;
// 	int len;

// 	len = (end >= start) ? end - start + 1 : start - end + 1;
// 	if (!(r = (int*) malloc(sizeof(int) * len)))
// 		return (NULL);
// 	while (len--)
// 		r[len] = (end >= start) ? start++ : start--;
// 	return (r);
// }





// #include <stdlib.h>

// int *ft_rrange(int start, int end)
// {
// 	int *rrange;
// 	int i;

// 	if (start > end)
// 		rrange = (int *)malloc(sizeof(int) * (start - end) + 1);
// 	else
// 		rrange = (int *)malloc(sizeof(int) * (end - start) + 1);
// 	i = 0;
// 	while (start != end)
// 	{
// 		rrange[i++] = end;
// 		end -= (start > end) ? -1 : 1;
// 	}
// 	rrange[i] = end;
// 	return (rrange);
// }


// ======================================ft_split.txt=========================================
// Assignment name  : ft_split
// Expected files   : ft_split.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Write a function that takes a string, splits it into words, and returns them as
// a NULL-terminated array of strings.

// A "word" is defined as a part of a string delimited either by spaces/tabs/new
// lines, or by the start/end of the string.

// Your function must be declared as follows:

// char    **ft_split(char *str);
// ==========================================================================================






