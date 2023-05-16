#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * count_words - count number of words
 * @str: input string
 * Return: number of words
 */

int count_words(char *str)
{
	int count = 0;
	int is_word = 0;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
	{
		if (!is_word)
		{
			count++;
			is_word = 1;
		}
	}
		else
		{
			is_word = 0;
		}
	}

	return (count);
}

/**
 * strtow - splits a string into words
 * @str: input string
 * Return: words
 */

char **strtow(char *str)
{
	char **words;
	int i, j, word_index, word_count;

	if (str == NULL || *str == '\0')
		return (NULL);

	word_count = count_words(str);
	words = (char **)malloc((word_count + 1) * sizeof(char *));

	if (words == NULL)
		return (NULL);

	word_index = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			int word_length = 0;

			while (str[i + word_length] != ' ' && str[i + word_length] != '\0')
				word_length++;
			words[word_index] = (char *)malloc((word_length + 1) * sizeof(char));
			if (words[word_index] == NULL)
			{
				for (j = 0; j < word_index; j++)
					free(words[j]);
				free(words);
				return (NULL);
			}
			strncpy(words[word_index], &str[i], word_length);

			words[word_index][word_length] = '\0';
			word_index++;

			i += word_length;
		}
	}
	words[word_index] = NULL;
	return (words);
}
