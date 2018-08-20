#include<bits/stdc++.h> 
using namespace std;

struct node{

struct timestamp{
	struct date{
		int day;
		int month;
		int year;
	};

	date d;

	struct time{
		int hrs;
		int minutes;
		int second;
	};

	time t;
};

timestamp ti;

struct data{
	string name;
	string address;
	int mobileNo;
	int phone;
	float value;
};

data da;

int nodeID;
int nodeNum;
node *reference_nodeID;
int child_id;
node *refChildId;
};

void createFirstNode(node**first_node) {
     cin>>(*first_node)->ti.d.month; 
     cin>>(*first_node)->ti.d.year;
     cin>>(*first_node)->ti.d.day;

    cin>>(*first_node)->ti.t.hrs;
    cin>>(*first_node)->ti.t.minutes;
    cin>>(*first_node)->ti.t.second;

    cin>>(*first_node)->da.address;
    cin>>(*first_node)->da.mobileNo;
    cin>>(*first_node)->da.name;
    cin>>(*first_node)->da.phone;
    cin>>(*first_node)->da.value;

    (*first_node)->nodeNum=1;
    (*first_node)->nodeID=1;
    (*first_node)->child_id=0;
    (*first_node)->refChildId=NULL;

}

void append_fun(nodenodeAppend,nodefirst_node) { 
    node*temp = new node; 
    cin>>temp->ti.d.month; 
    cin>>temp->ti.d.year; 
    cin>>temp->ti.d.day;


    cin>>temp->ti.t.hrs;
    cin>>temp->ti.t.minutes;
    cin>>temp->ti.t.second;

    cin>>temp->da.phone;
    cin>>temp->da.value;
    cin>>temp->da.name;
    cin>>temp->da.address;
    cin>>temp->da.mobileNo;
    


    if((*nodeAppend)->refChildId==NULL)
    {
        temp->reference_nodeID=(*first_node); 
        (*nodeAppend)=temp;
        temp->nodeNum=++((*first_node)->nodeNum);
        temp->child_id=(((*first_node)->child_id)++);
    }
    else
    {
        temp->nodeNum= ++((*nodeAppend)->nodeNum);
        temp->child_id=(((*nodeAppend)->child_id)++);
        (*nodeAppend)->refChildId=temp;   
        (*nodeAppend)=temp;
    }
} 

void makeMultisetFirstNode(node**root) { 
    int multisets=3; 

	int size_set=2; 
	int k=size_set;
	while(k--)
	{
		node*nodeAppend;
		nodeAppend->refChildId=NULL;
		append_fun(&nodeAppend,root);
	}
  }
}

int main() { 
    node*r; 
   r->refChildId = NULL;
   createFirstNode(&r);
   makeMultisetFirstNode(&root);
   return 0;
}
