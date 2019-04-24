/*Write a function to get the number of vertices in an undirected graph and its edges. You may
assume that no edge is input twice.
i. Use adjacency list representation of the graph and find runtime of the function
ii. Use adjacency matrix representation of the graph and find runtime of the function*/
#include<iostream>
using namespace std;
#define A 20
class node{
	public:
	node *temp,*next;
	node *start[A],*alink=NULL,*adjstart;
	int data;

};
class graph : public node{

	public:int a[A][A],M,N;
	void inAM(int node){
		for(int i=1;i<=node;i++){
			cout<<"enter the nodes connected with"<<i<<endl;
			for(int j=1;j<=node;j++){
				cin>>a[i][j];
			}
		}
	}

	void dispAM(int node){
		for(int i=1;i<=node;i++){
			for(int j=1;j<node;j++){
				cout<<a[i][j]<<"\t";
			}cout<<endl;
		}
	}

	void AML(){
		cout<<"Adjancy Matrix List"<<endl;
		create();
		putAML();

	}
	void create(){

		cout<<"enter the number of nodes in graph "<<endl;
		cin>>N;
			for(int k=1;k<=N;k++){
				cout<<"enter the node data"<<endl;
				
				start[k]=new node;
				start[k]->next=NULL;
				
				cin>>start[k]->data;
			}
		for(int k=1;k<=N;k++){
				cout<<"enter the total no. of nodes connected with "<<start[k]->data<<endl;
				cin>>M; 
				cout<<"enter adjacent nodes are:"<<endl;
					for(int p=1;p<=M;p++){
						node *adj;
						adj=new node;
						adj->next=NULL;

						cin>>adj->data;
					 		add(adj,k);
					 	
					}

		}
	}

	void add(node *temp1,int k){
		temp=start[k];

		while(temp->next!=NULL){
			temp=temp->next;}
			temp->next = temp1 ;
	}


	void putAML(){
		cout<<"Displayng AML"<<endl;
			for(int k=1;k<=N;k++){
				cout<<start[k]->data<<"\t";
				cout<<"Adjacent nodes are:\t";
				temp=start[k]->next;
					while(temp!=NULL){
					cout<<temp->data<<"->";
					temp=temp->next;
					}cout<<"NULL"<<endl;

			}


	}


};
int main(){
	graph g;
	int n,m;

	cout<<"Menu\n1.adjancy matrix\n2.Adjancy matrix list "<<endl;
	cin>>m;
		switch(m){
			case 1:
			cout<<"enter the total number of nodes in graph"<<endl;
			cin>>n;
			g.inAM(n);
			g.dispAM(n);
			break;
			
			case 2:
			
			g.AML();
			
			break;
			
		}
}














































