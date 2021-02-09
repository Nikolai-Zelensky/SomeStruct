#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 3

struct Sportteam
{
	char name[20];
	char city[20];
	int score;
};

void some_function(struct Sportteam* team)
{
	struct Sportteam t[size];
	for (short i = 0; i < size; i++)
	{
		printf("Enter the team name:\n");
		scanf("%s", t[i].name);
		printf("Enter the city:\n");
		scanf("%s", t[i].city);
		printf("Enter the team`s score:\n");
		scanf("%hi", &t[i].score);
	}
	short max = 0;
	short num = 0;
	for (short i = 1; i < size; i++)
	{
		if (t[i].score > max)
		{
			max = t[i].score;
			num = i;
		}
	}
	for (short i = 0; i < size; i++)
	{
		printf("Team name: %s\n", t[i].name);
		printf("City: %s\n", t[i].city);
		printf("Score: %d\n", t[i].score);
	}
	printf("The team with the most points: %s", t[num].name);
}

void main()
{
	struct Sportteam* t;
	some_function(NULL);
}
