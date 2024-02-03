#include "list.h"

BaseList *list_new_(int size_of_each_element)
{
    BaseList *new_list = malloc(sizeof(*new_list));
    new_list->buffer = malloc(size_of_each_element * 8);

    new_list->index = 0;
    new_list->length = 0;
    new_list->capacity = 8;

    return new_list;
}

void list_resize(BaseList *list, int new_size)
{
    list->buffer = realloc(list->buffer, new_size);
}

void list_delete(BaseList *list)
{
    free(list->buffer);
    free(list);
}
