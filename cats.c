#include<stdio.h>

int main(){
	int random_num;
	printf("Gimme a random number :3\n");
	scanf("%d",&random_num);
	if (random_num<0)
	{
		printf("You are in debt! bring us %d cat the -w-",-1*random_num);
	}else if (random_num>0)
	{
		printf("Lucky you! You won %d cat from us~ >v<\nweee~",random_num);
	}else{
		printf("How unfortunate... you did this purposly didnt you -_-");
	}
	return 0;
}
