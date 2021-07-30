#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
}*p,*tmp,*tmp1,*pre;

void insert_end(int);
void insert_beg(int);
void delete_end();
void delete_beg();
void display_data();

void main()
{
    int val,n;
    p=NULL;
    do
    {
        printf("\n**********MENU****************");
        printf("\n1. INSERT AT THE END");
        printf("\n2. INSERT AT THE BEGINING");
        printf("\n3. DELETE FROM BEG");
        printf("\n4. DELETE FROM END");
        printf("\n5. DISPLAY");
        printf("\n6. EXIT");
        printf("\n. ENTER YOUR CHOICE\t");
        scanf("%d",&n);

        switch(n)
        {
            case 1: printf("\n Enter the value\t");
            scanf("%d",&val);
            insert_end(val);
            break;

            case 2: printf("\n Enter the value\t");
            scanf("%d",&val);
            insert_beg(val);
            break;

            case 3:
            delete_beg();
            break;

            case 4:
            delete_end();
            break;

            case 5:
            display_data();
            break;

            case 6:
            exit(0);
            break;

            default: printf("\n Wrong Choice!!!");
            break;

        }
        printf("\n Do you want to continue?\n ");
    }while('y'==getch());


    }

    void insert_end(int ele)
    {
        tmp=p;
        tmp1=(struct node*)malloc(sizeof(struct node));
        tmp1->data=ele;
        tmp1->next=NULL;
        if (p==NULL)
            p=tmp1;
        else
        {
            while(tmp->next!=NULL)
                tmp=tmp->next;
            tmp->next=tmp1;
        }
    }

    void insert_beg(int ele)
    {
        tmp=p;
        tmp1=(struct node*)malloc(sizeof(struct node));
        tmp1->data=ele;
        tmp1->next=tmp;
            p=tmp1;
    }

    void delete_beg()
    {
        tmp=p;
        if(p==NULL)
            printf("\n No elements can be deleted!!!");
        else
        {

            printf("\n First Element has been deleted");
        p=p->next;
        }
    }

      void delete_end()
    {
        tmp=p;
        if(p==NULL)
            printf("\n No elements can be deleted!!!");
        else if(tmp->next==NULL)
        {
            printf("\n Element has been deleted !!! - %d", p->data);
            p=NULL;
        }
        else
        {
            while(tmp->next!=NULL)
            {
                pre=tmp;
                tmp=tmp->next;
            }
           pre->next=NULL;

        }
    }

    void display_data()
    {
        tmp=p;
        if(p==NULL)
            printf("\n No Elements has been found");
        else
        {

        while(tmp!=NULL)
        {
            printf("\n %d", tmp->data);
            tmp=tmp->next;
        }
    }
    }

