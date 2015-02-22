#include <stdio.h>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <iostream>
#include <sstream>

using namespace std;

stack < pair <int, int> > bon;

int main()
{
	int i, j, n, erro, vazio=0, entrou=0;
	string line;
	while (getline(cin, line)) 
	{
		while(!bon.empty())
			bon.pop();
		stringstream ss(line);
		int num;
		erro=0;
		while (ss >> num) 
		{
			entrou=1;
			if(vazio || !num)
			{
				erro=1;
				break;
			}
            if(num>0)
           	{
			   if(!bon.empty() && bon.top().first == -num)
				{
					bon.pop();
        	    	if(!bon.empty())
            			bon.top().second+=num;
            	}
            	else
            	{
            		erro=1;
            		break;
            	}
            }
            else
            	bon.push(make_pair(num, 0));
            if(!bon.empty() && bon.top().second >= -bon.top().first)
            {
            	erro=1;
            	break;
           	}
           	if(bon.empty())
           		vazio=1;
        }
        if(entrou)
        {
        	if(bon.empty() && !erro)
        		printf(":-) Matrioshka!\n");
        	else
        		printf(":-( Try again.\n");
    	}
		vazio=entrou=0;
    }	
	return 0;
}
