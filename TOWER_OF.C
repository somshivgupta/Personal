#include<stdio.h>
#include<conio.h>

void tower_of_hanoi(int,char,char,char);
int main()
{
	int n=5;
	tower_of_hanoi(5,'A','C','B');
	return 0;
}

void tower_of_hanoi(int n,char from_rod,char to_rod,char aux_rod)
{
	if(n==1)
	{
		printf("Move disk 1 from rod %c to rod %c",from_rod,to_rod);
	}
	else
	{
		tower_of_hanoi(n-1,from_rod,aux_rod,to_rod);
		printf("move disk %d from rod %c to rod ",n,from_rod,to_rod);
		tower_of_hanoi(n-1,aux_rod,to_rod,from_rod);
	}
}
