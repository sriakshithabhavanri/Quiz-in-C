#include<stdio.h> 
int main()
{
int score;
char a;
char name[100];
printf("Enter player name: "); 
gets(name);
score=0;
for(int i=0; i<10;i++)
{
switch(i){
case 0:
 
printf("\n\nWhat is the maximum no. of asymptotes of the curve x^4+2x+6=0?"); printf("\n\nA.4\tB.3\n\nC.none\tD.infinite\n\n");
scanf("%c", &a);
if(a=='A'){
printf("Correct answer"); score++;
}
else{printf("Incorrect answer..");} break;
case 1:
printf("\n\n\nHow many points are possible in a compound pendulum about which"); printf("time period is same?");
printf("\n\nA.4\tB.2\n\nC.none\tD.infinite\n\n"); scanf("%c", &a);
if(a=='A'){
printf("Correct answer"); score++;
}
else{printf("Incorrect answer..");} break;
case 2:
printf("\n\n\nWho was the first US President?");
printf("\n\nA.Richard Nikson\tB.Abraham Linkon\n\nC.John F. Kennedy\tD.George Washington\n\n");
scanf("%c", &a);
if(a=='D'){
printf("Correct answer"); score++;
}
else{printf("Incorrect answer..");} break;
 
case 3:
printf("\n\n\nWho was awarded the 'Man of the Tournament' of ICC WORLD CUP 2007?");
printf("\n\nA.Glen Magrath\tB.Mahela Jawardan\n\nC.Mathew Hayden\tD.Sachin Tendulkar\n\n");
scanf("%c", &a);
if(a=='D'){
printf("Correct answer"); score++;
}
else{printf("Incorrect answer..");} break;
case 4:
printf("\n\n\nWho was awarded the 'Man of the Tournament' of ICC WORLD CUP 2007?"); printf("\n\nA.Glen Magrath\tB.Mahela Jawardan\n\nC.Mathew Hayden\tD.SachinTendulkar\n\n");
scanf("%c", &a);
if(a=='A'){
printf("Correct answer"); score++;
}
else{printf("Incorrect answer..");} break;
case 5:
printf("\n\n\nWhich country won the Fifa World Cup 1998?"); printf("\n\nA.France\tB.Brazil\n\nC.Italy\tD.England\n\n");
scanf("%c", &a);
if(a=='A'){
printf("Correct answer"); score++;
}
else{printf("Incorrect answer..");} break;
 
case 6:
printf("\n\n\nWhich country won the Fifa World Cup 1998?"); printf("\n\nA.France\tB.Brazil\n\nC.Italy\tD.England\n\n");
scanf("%c", &a);
if(a=='A'){
printf("Correct answer"); score++;
}
else{printf("Incorrect answer..");} break;
case 7:
printf("\n\n\nWhich syllabe is stressed in the word 'democracy'?"); printf("\n\nA.1st\tB.2nd\n\nC.3rd\tD.4th\n\n");
scanf("%c", &a);
if(a=='B'){
printf("Correct answer"); score++;
}
else{printf("Incorrect answer..");} break;
case 8:
printf("\n\n\nWhich country was the winner of Cricket World Cup 1987?"); printf("\n\nA.West Indies\tB.India\n\nC.Australia\tD.England\n\n");
scanf("%c", &a);
if(a=='C'){
printf("Correct answer"); score++;
}
else{printf("Incorrect answer..");} break;
case 9:
 
printf("\n\n\nWhat is the height of Mount everest in feet?"); printf("\n\nA.8648\tB.6648\n\nC.8884\tD.8848\n\n");
scanf("%c", &a);
if(a=='D'){
printf("Correct answer"); score++;
}
else{printf("Incorrect answer..");} break;
case 10:
printf("\n\n\nWhat is the capital of Denmark?");
printf("\n\nA.Copenhagen\tB.Helsinki\n\nC.Rome\t\tD.Madrid\n\n"); scanf("%c", &a);
if(a=='A'){
printf("Correct answer"); score++;
}
else{printf("Incorrect answer..");} break;
case 11:
printf("\n\n\nWhich syllabe is stressed in the word 'instanteneous'?"); printf("\n\nA.1st\tB.2nd\n\nC.3rd\tD.4th\n\n");
scanf("%c", &a);
if(a=='C'){
printf("Correct answer"); score++;
}
else{
    printf("Incorrect answer..");
    }
break;
case 12:
printf("\n\n\nWho was the only player to score 6 successive sixes in an over?");
printf("\n\nA.Adam Gilchrist\tB.M.S.Dhoni\n\nC.Herschel Gibbs\tD.Sanath Jayasurya\n\n");
scanf("%c",&a);
if(a=='C')
{
printf("Correct answer"); score++;
}
else
{
    printf("Incorrect answer..");
} 
break;
default:
printf("%d", score);
}
}
return 0;
}