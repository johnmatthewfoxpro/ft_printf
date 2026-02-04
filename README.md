_This project has been created as part of the 42 curriculum by jfox_
# ft_printf
Rebuilding Printf in C, for School 42.

__## DESCRIPTION__

Ft_printf is a project designed to reinforce the lessons of Libft.
We were tasked with recreating the printf function inside it's own library.
We were authorized to use malloc, free, write and va macro functions.

I have also included ft_strlen.c from libft.a even though I am not using the rest of the library.

__## INSTRUCTIONS__

Use the make file included to compile the project.
The make file includes -Wall -Wextra and -Werror as flags for the CC compile.
The ft_printf function can be used when compiling your project like thi example: "cc main.c -Wall -Wextra -Werror libftprintf.a"

__## RESOURCES__

AI was not used on this project.
I followed [this guide](https://elgibbor.hashnode.dev/building-your-own-printf-in-c-a-step-by-step-guide) to get to grips on the concept of printf.


__## ADDITIONAL__

I believe I implimented a simple and straight forward approach to my printf.
My printf itself contains only 2 functions, one which looks through the given string looking for the % char and another which then calls the correct function for the char associated with the %.
This keeps my functions clean.
Meaning I check each % char found, then the character after and call a function to deal with that char.
All the while I count the number of chars printed to return at the end as per printf.
Most error handling is covered in the functions themselves giving me space in my functions and keeping my code clean.

Following corrections, it does appear there is an error if you submit single % signs, or incorrectly addressed %'s. Like %%%.
