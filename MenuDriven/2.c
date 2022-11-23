 #include<stdio.h>

int add(int num1,int num2);
int sub(int num1,int num2);
int multi(int num1,int num2);
int divi(int num1,int num2);





   void main()
{
int op ,num1,num2,A,B,C,D;


//A=addition
//B=subtraction
//C=multiplication
//D=division
//E=Exit


printf("Select Your Option:--\n");


printf("Option 1 For Addition:--\n");
printf("Option 2 For Subtraction:--\n");
printf("Option 3 For Multiplication:--\n");
printf("Option 4 For Division:--\n");
printf("Option 5 For Exit:--\n");

scanf("%d",&op);



switch(op){
	
	case 1:
		printf("Enter The  Number:");
scanf("%d %d",&num1,&num2);
		A=add(num1,num2);
		printf("Your Answer Is %d",A);
		break;
		
	case 2:
		printf("Enter The  Number:");
scanf("%d %d",&num1,&num2);
		B=sub(num1,num2);
		printf("Your Answer Is %d",B);
		break;
	
	case 3:
		printf("Enter The  Number:");
scanf("%d %d",&num1,&num2);
	
		C=multi(num1,num2);
		printf("Your Answer Is %d",C);
		break;
	
	case 4:
		printf("Enter The  Number:");
scanf("%d %d",&num1,&num2);
	     
		  D=divi(num1,num2);
		  printf("Your Answer IS %d ",D);
		  break;
	
	

	default:
		
		printf("Thank you");
		

	}	  	
		  	
		  	
}




int add(int num1,int num2){
	
	int ans;
	
	ans=num1+num2;
	return(ans);
}

int sub(int num1,int num2){
	
	int ans;
	ans=num1-num2;
	return(ans);
}
int multi(int num1, int num2){
	int ans;
	ans=num1*num2;
	return(ans);
	
}
int divi(int num1,int num2){
	
	int ans;
	ans=num1/num2;
	return(ans);
}


