#include<iostream>
#include<stack>
using namespace std;


//code to read the binary numbers
stack<int>read()
{
	stack<int> s;
	int x,n,i;

	cout<<"Enter the no. of bits in the no : "<<endl;
	cin>>n;
	cout<<"Enter the binary number: "<<endl;

	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>x;
		s.push(x);
	}
	return s;
}

//code to display the binary numbers
void display(stack<int> &s)
{
	cout<<"display function entered";
	while(!s.empty())
	{
		//cout<<"Stack not empty !"<<endl; 
		cout<<s.top()<<" ";
		s.pop();
	}
}

//addition of two binary numbers;
stack<int> add(stack<int> &s1 , stack<int> &s2)
{
	stack<int> s;
	int sum,carry=0,b1,b2;

	while(!s1.empty() || !s2.empty())
	{
		b1=b2=0;
		if (!s1.empty())
		{
			/* code */
			b1 = s1.top();
			s1.pop();
		}
		if (!s2.empty())
		{
			/* code */
			b2 = s2.top();
			s2.pop();
		}
		sum = (b1+b2+carry)%2;
		carry = (b1+b2+carry)/2;
		s.push(sum);
	}
	if(carry == 1)
		s.push(1);

	return s;
}

int main(){

	stack<int> s1,s2,s3;
	int ch;

	do{
		cout<<"****MENU*****"<<endl;
		cout<<"1.Read first number"<<endl;
		cout<<"2.Read second number"<<endl;	
	    cout<<"3.Display additon of two numbers"<<endl;
	    cout<<"4.Exit "<<endl;
	    cout<<"Enter your choice: "<<endl;
	    cin>>ch;

	    switch(ch)
	    {
	    	case 1:
	    		s1 = read();
	    	break;
	    	case 2:
	    		s2 = read();
	    	break;
	    	case 3:
	    		cout<<"The result of addition: "<<endl;
	    		s3 = add(s1,s2);
	    		display(s3);
	    	break;
	    }   
    }while(ch!=4);
    return 0;
}	