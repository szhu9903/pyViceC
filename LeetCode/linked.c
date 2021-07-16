#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linked.h"

// 生成节点数据
void set_data(struct User *user)
{
    printf("user name:");
    scanf("%s", user->name);
    printf("user age:");
    scanf("%d", &user->age);
}

// 头插法 插入节点
void add_user(struct User **library)
{
    struct User *user, *tmp;
    user = (struct User *)malloc(sizeof(struct User));
    set_data(user);
    if (*library == NULL)
    {
        user->next = NULL;
        *library = user;
    }else
    {
        tmp = *library;
        user->next = tmp;
        *library = user;
    }
}

// 尾插法 插入节点
void add_user_w(struct User **library)
{
    struct User *user;
    static struct User *tail;
    user = (struct User *)malloc(sizeof(struct User));
    set_data(user);
    if (*library == NULL)
    {
        user->next = NULL;
        *library = user;
    }else
    {
        tail->next = user;
        user->next = NULL;
    }
    tail = user;
}

// 获取数据
void get_user(struct User *library)
{
//    if (library != NULL){
//        printf("get user name %s", library->name);
//        printf("get user name %d", library->age);
//        get_user(library->next);
//    }
    while (library != NULL)
    {
        printf("get_user user user \n");
        printf("get user name %s \n", library->name);
        printf("get user name %d \n", library->age);
        library = library->next;
    }
}

void search_user(struct User *library, char *user_msg)
{
    struct  User *tmp;
    tmp = library;
    while (tmp != NULL)
    {
        if (!strcmp(tmp->name, user_msg))
        {
            printf("user name %s \n", tmp->name);
            printf("user name %d \n", tmp->age);
        }
        tmp = tmp->next;
    }
}

// 清空占用内存空间
void free_malloc(struct User *library)
{
    struct User *tmp;
    while (library != NULL)
    {
        tmp = library->next;
        free(library);
        library = tmp;
    }
}

int main()
{
    //初始化头节点
    struct User *library = NULL;
    char ch;
    char user_msg[128];
    // 创建下一个节点，并将当前节点指向下节点
    while (1)
    {
        printf("输入信息");
        do {

            ch = getchar();
        } while (ch != 'Y' && ch != 'N');
        if (ch == 'Y')
        {
//            add_user(&library);
            add_user_w(&library);
        }else{
            break;
        }
    }
    printf("输出数据... \n");
    get_user(library);
    printf("请输入名称进行搜索");
    scanf("%s", user_msg);
    search_user(library, user_msg);
    free_malloc(library);
    return 0;
}


