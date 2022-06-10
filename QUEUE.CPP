#include<iostream.h>
#include<conio.h>
class queue
{ public:
   int a;
   queue *q;
}*front,*rear,*t;
void insert()
{ queue *n=new queue;
   if(n==NULL)
     cout<<"\n overflow";
  else
     { cout<<"\n enter value";
       cin>>n->a;
       if(rear==NULL)
       { front=n;
	 rear=n;
       }
       else
       { rear->q=n;
	 rear=n;
       }
}
}
void del()
{ if(front==NULL)
  cout<<"\n underflow";
  else
  { cout<<"\n deleted element";
    cout<<front->a;
    t=front;
    if(front==rear)
    { front=NULL;
      rear=NULL;
    }
    else
    front=front->q;
  }
}
void disp()
{if(front==NULL)
 cout<<"\no element";
 else
 { t=front;
 while(t!=NULL)
  { cout<<"\n"<<t->a;
    t=t->q;
  }
 }
}
void main()
{front=NULL;
rear=NULL;
t=NULL;
int ch;
char f;
do
{ cout<<"\n enter operation:\n1.insert\n2.delete\n3.display";
 cin>>ch;
 switch(ch)
 { case 1:
   cout<<"\n insert";
   insert();
   break;

   case 2:
   cout<<"\n delete";
   del();
   break;

   case 3:
   cout<<"\n display " ;
   disp();
   break;
 }
cout<<"\n do you want to continue(y/n):";
cin>>f;
}while(f=='y');
getch();
}
