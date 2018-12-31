#include <stdlib.h>
#include <time.h>
#include <stdio.h>


float random_weight(void)
{
	float first_half;

	srand(time(NULL));
	if (!(first_half = (float)(rand() % 2)))
		first_half = (float)(rand() % 101) / 100 + 1;
	else
		first_half = (float)(rand() % 101) / 200 + 0.5;
	return (first_half);
}

typedef struct		percept_unit
{
	char			data;
	struct percept_unit	*next;
}					percept;

typedef struct		middle_unit
{
	char			data;
	float leight;
	percept *one_percept;
	struct middle_unit	*next;
}					middle;

typedef struct		out_unit
{
	char			data;
	middle *one_middle;
}					out;

percept *percept_neuron(char data)
{
	percept *new;

	if (!(new = (percept *)malloc(sizeof(percept))))
		return (NULL);
	new->data = data;
	new->next = NULL;
	return (new);
}

middle *middle_neuron(char data, float leight, percept *one_percept)
{
	middle *new;

	if (!(new = (middle *)malloc(sizeof(middle))))
		return (NULL);
	new->data = data;
	new->leight = leight;
	new->next = NULL;
	new->one_percept = one_percept;

	return (new);
}

out *out_neuron(char data)
{
	out *new;

	if (!(new = (out *)malloc(sizeof(out))))
		return (NULL);
	new->data = data;
	return (new);
}

// middle *middle_init(percept *one_percept)
// {
// 	percept *temp;
// 	middle *result;
// 	middle *result_temp;
// 
// 	temp = one_percept;
// 
// 	while (1)
// 	{
// 		result = middle_neuron(char data, float leight, percept *one_percept);
// 		temp = temp->next;
// 		if (temp->next == NULL)
// 			break;
// 	}
// }

int main()
{
	printf("%f", random_weight());
	return (0);
}
	*(new->data) = data;
	return (new);
}
