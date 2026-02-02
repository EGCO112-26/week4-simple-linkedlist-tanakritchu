//
//  node.h
//  simple linkedlist
//
//  Created by Mingmanas Sivaraksa on 4/2/2566 BE.
//

#ifndef node_h
#define node_h

struct node
{
    int value;
    struct node *next;
};

#endif /* node_h */

struct std_node
{
char id[20];
char name[30];
struct std_node *next;
};