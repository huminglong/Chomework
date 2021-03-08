#include <stdio.h>

int main(void){
	int PersonalMoney;
	float PersonalPlasma;
	printf("请输入您的非负工资:");
	scanf("%d",&PersonalMoney);

	if(PersonalMoney <= 1600){
		PersonalPlasma = 0;
	}
	else if(PersonalMoney > 1600 && PersonalMoney <= 2500){
		PersonalPlasma = (PersonalMoney - 1600) * 0.05;
	}
	else if(PersonalMoney > 2500 && PersonalMoney <=3500){
		PersonalPlasma = (PersonalMoney - 1600) * 0.1;
	}
	else if(PersonalMoney > 3500 && PersonalMoney <=4500){
		PersonalPlasma = (PersonalMoney - 1600) * 0.15;
	}
	else if(PersonalMoney > 4500){
		PersonalPlasma = (PersonalMoney - 1600) * 0.2;
	}
	else{
		printf("请输入一个正数\n");
	}

	printf("%.2f\n",PersonalPlasma);

	return 0;


}