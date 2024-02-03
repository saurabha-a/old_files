#pragma
#include <stdlib.h>

typedef struct _BaseList
{
    void *buffer;
    int   index;
    int   length;
    int   capacity;
} BaseList;

#define List(type)         \
    struct                  \
    {                       \
        type *buffer;       \
        int   element_size; \
        int   index;        \
        int   length;       \
        int   capacity;     \
    } *



BaseList *list_new_  (int size_of_each_element);
void      list_delete(BaseList *list);
void      list_resize(BaseList *list, int new_size);

#define list_new(type) (List (type) ) list_new_(sizeof(type));

#define list_push(list, data)    \
    if(list->index > list->length) \
        list_resize(list, list->capacity * 2); \
    list->buffer[list->index++] = data;        \
    list->length++;
