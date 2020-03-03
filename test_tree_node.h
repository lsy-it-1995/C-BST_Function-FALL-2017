#ifndef TEST_TREE_NODE_H
#define TEST_TREE_NODE_H

#include <iostream>
#include "tree_node.h"
#include "time.h"

using namespace std;

int createnumber(int f)
{
    f= rand()%100+1;//1-100
    return f;
}

void test_baby()
{
    tree_node<int> *root1=NULL;
    int g=0;
    for(int i =1;i<10;i++)
    {
        g=createnumber(g);
        tree_insert(root1,g);
    }

    root1->update_height();
    tree_print_debug(root1);
    cout<<"----------------------------"<<endl;

    int a[]={1,2,3,4,5,6,7,8,9,10,13,25,56,57,68,80,93};

    tree_node<int> *test = tree_from_sorted_list(a,17);
    tree_print_debug(test);
    cout<<"----------------------------"<<endl;

    tree_node<int> *root2 = NULL;
    tree_insert(root2,2);
    tree_insert(root2,4);
    tree_insert(root2,6);
    tree_insert(root2,8);
    tree_insert(root2,7);
    tree_insert(root2,5);
    tree_insert(root2,3);
    tree_insert(root2,3);
    tree_insert(root2,1);
    tree_insert(root2,73);
    tree_insert(root2,93);
    tree_insert(root2,4);
    tree_insert(root2,34);
    root2->update_height();
    tree_print_debug(root2);

    cout<<"----------------------------"<<endl;
    cout<<"erase 73"<<endl;

    tree_erase(root2,73);
    tree_print_debug(root2);

    cout<<"----------------------------"<<endl;
    cout<<"erase34"<<endl;

    tree_erase(root2,34);

    tree_print_debug(root2);

    cout<<"----------------------------"<<endl;

    tree_add(test,root2);
    if(tree_search(test,8))
        cout<<"found "<<endl;
    else
        cout<<"not found"<<endl;

    tree_print_debug(test);

    cout<<"----------------------------"<<endl;
    tree_node<int> *root3 = NULL;
    root3 = tree_copy(root2);
    tree_print_debug(root3);

    cout<<"----------------------------"<<endl;
    tree_clear(root3);
    tree_print_debug(root3);


}
#endif // TEST_TREE_NODE_H
