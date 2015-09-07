#include <cstdio>

const int pos[24][6]={{1,2,3,4,5,6},{1,4,2,5,3,6},{1,5,4,3,2,6},{1,3,5,2,4,6},
		      {2,6,3,4,1,5},{2,4,6,1,3,5},{2,1,4,3,6,5},{2,3,1,6,4,5},
		      {3,2,6,1,5,4},{3,1,2,5,6,4},{3,5,1,6,2,4},{3,6,5,2,1,4},
		      {4,2,1,6,5,3},{4,6,2,5,1,3},{4,5,6,1,2,3},{4,1,5,2,6,3},
		      {5,1,3,4,6,2},{5,4,1,6,3,2},{5,6,4,3,1,2},{5,3,6,1,4,2},
		      {6,2,4,3,5,1},{6,3,2,5,4,1},{6,5,3,4,2,1},{6,4,5,2,3,1}};

char s[13];

int main()
{
    while (gets(s))
    {
	bool flag;
	for (int i=0; i<24; i++)
	{
	    flag=true;
	    for (int j=0; j<6; j++)
		if (s[pos[i][j]-1]!=s[j+6])
		{
		    flag=false;
		    break;
		}
	    if (flag) break;
	}
	if (flag) printf("TRUE\n");
	else printf("FALSE\n");
    }
    return 0;
}
