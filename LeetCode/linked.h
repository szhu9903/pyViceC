//
// Created by 朱帅杰 on 2021/7/16.
//

#ifndef PYVICEC_LINKED_H
#define PYVICEC_LINKED_H




struct User {
    char name[20];
    int age;
    struct User *next;
};
void add_user(struct User **);
void add_user_w(struct User **);
void set_data(struct User *);
void get_user(struct User *);
void search_user(struct User *, char *);
void free_malloc(struct User *);


#endif //PYVICEC_LINKED_H