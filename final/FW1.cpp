#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <bits/stdc++.h>
using namespace std;

/*int *f(int c[],int n)
{
    int* p[4]=new int[];
    for(int i=0;i<n;i++)
    {
        p[i]=c[i]*2;
    }
    return p;
}*/

class student
{
 private:
     int id;
     string name;
     double cgpa;
 public:
     student(){}



     student(int id,string name, double cgpa)
     {
     this->id=id;
     this->name=name;
     this->cgpa=cgpa;

     }

     int getId(){return id;}
     string getName(){return name;}
     double getCgpa(){return cgpa;}




};

int main()
{
/* int a[4]={10,20,30,40};
 int*k=f(a,4);
 for(int i=0;i<4;i++)
 {
    cout<<k[i]+" "<<;
 }*/

/* vector<int>vec;
 vec.push_back(10);
 vec.push_back(20);
 vec.push_back(30);

  vector<int>::iterator it;
  for(it = vec.begin(); it!=vec.end(); it++)
  {
    cout<<*(it)<<" ";
  }
  stack<string>name;
  name.push("Ruti");
  name.push("Halua");
  name.push("Cake");
  while(!name.empty())
  {
      cout<<name.top()<<" ";
      name.pop();
  }
*/
  stack<student>StudentST;
  freopen ("name.txt","r",stdin);
   string nam;
   int Id;
   double cgpa;

   for(int i=0;i<3;i++)
   {
       cin>>Id>>nam>>cgpa;
       student s(Id,nam,cgpa);
       StudentST.push(s);


   }
   cout<<"Stack: "<<endl;
 while(!StudentST.empty())
  {
      student s =StudentST.top();
      cout<<s.getId()<<" "<<s.getName()<<" "<<s.getCgpa()<<endl;
      StudentST.pop();
  }


vector<student>ST;
  freopen ("name.txt","r",stdin);
   string namE;
   int ID;
   double cgpA;

   for(int i=0;i<3;i++)
   {
       cin>>ID>>namE>>cgpA;
       student s0 (ID,namE,cgpA);
       ST.push_back(s0);


   }

   //vector<student>::iterator it;
  /*for(it = ST.begin(); it!=ST.end(); it++)
  {
    cout<<ST.getName()<<" ";
  }*/

  cout<<"Vector: "<<endl;
  for(auto i: ST)
  {
      cout<<i.getId()<<" "<<i.getName()<<" "<<i.getCgpa()<<endl;
  }


 /*while(!StudentST.empty())
  {
      student s =StudentST.top();
      cout<<s.getId()<<" "<<s.getName()<<" "<<s.getCgpa()<<endl;
      StudentST.pop();
  }*/



  queue<student>q;

  freopen ("name.txt","r",stdin);
   string naME;
   int iD;
   double cgPA;

   for(int i=0;i<3;i++)
   {
       cin>>iD>>naME>>cgPA;
       student s1 (ID,namE,cgPA);
       q.push(s1);


   }
cout<<"Queue: "<<endl;
  while(!q.empty())
  {
      //student s1 =q.front();
      cout<<q.front().getId()<<" "<<q.front().getName()<<" "<<q.front().getCgpa()<<endl;
      q.pop();
  }



}

