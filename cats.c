#include<stdio.h>

int main(){
	int random_num;
	printf("Gimme a random number :3");
	scanf("%d",&random_num);
	if (random_num<0)
	{
		printf("You are in debt! bring me %d cat the -w-",-1*random_num);
	}else if (random_num>0)
	{
		printf("Lucky you! You won %d cat from us~ >v<",random_num);
	}else{
		printf("How unlucky... you did this purpusly didnt you");
	}
	
	
	printf("Heyy cats!!");
	return 0;
}
