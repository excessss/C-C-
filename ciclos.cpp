#include<stdio.h>
#include <conio.h>
#include<math.h>

void asteriscs(void){
	
	int rows, asteriscs, limit;
	char ast = '*';
	
	limit=1;
	while(limit!=0){
		printf("Limit: ");
		scanf("%d", &limit);
		rows=0;
		while(rows<limit){
			asteriscs=0;
			while(asteriscs<limit){
				printf(" %c", ast);
				asteriscs++;
			}
			printf("\n");
		    rows++;
		}
		printf("\n");
	}
	printf("END...");
}
void numbers(void){
	unsigned int num1, num2;
	
	num1=1;
	num2=0;
	while(num1>num2){
	    printf("Enter the first limit: ");
		scanf("%i", &num1);
	    printf("\nEnter the second limit: ");
		scanf("%i", &num2);
	    if(num1>num2)
	        printf("\nThe first limit can not be bigger than the second\n\n");
    }
    printf("\n");
    for(int i=num2; i>=num1; --i){
        if( pow(-1, i) > 0)             	
    	    printf(" %i", i);
    }
}
void ladderAst(void){
	int rows, asteriscs, limit, limitEsp;
	char ast = '*';
	char espaces = ' ';
	
	limit=1;
	while(limit!=0){
		printf("Limit: ");
		scanf("%d", &limit);
		printf("n=%d\n", limit);
		limitEsp=limit;
		rows=0;
		while(rows<limit){
			espaces=limitEsp--;
			for(; espaces>1; espaces--)
				printf(" ");
			asteriscs=0;
			while(asteriscs<limit){
				printf("%c", ast);
				asteriscs++;
			}
			printf("\n");
		    rows++;
		}
		printf("\n");
	}
	printf("END...");
}
void TRIAN_NUM(void){
	int rows, columbs, limit, limitEsp;
	
	limit=1;
	while(limit!=0){
		printf("Limit: ");
		scanf("%d", &limit);
		printf("n=%d\n", limit);
		limitEsp=limit;
		rows=0;
		while(rows<limit){
			rows++;
			printf("\n");
		    int espaces=limitEsp--;
			for(; espaces>1; espaces--)
				printf("  ");
			columbs=1;
			int SquareOne=rows;
			while(columbs<=rows){
				columbs++;
				printf("%2d", SquareOne);
				SquareOne--;
			}
			columbs=1;
			while(columbs<rows){
				columbs++;
				printf("%2d", columbs);
			}
		}
		printf("\n\n");
	}	
	printf("THE END...");
}
void DiagonalAST(void){
	int limitEsp, limit, rows, columbs, espaces;
	char ast = '*';
	
	while(limit!=0){
		printf("Limit: ");
 	    scanf("%i", &limit);
 	    limitEsp=limit;
 	    rows=0;
 	    while(rows<limit){
 	    	printf("\n");
 	    	rows = rows + 1;
 	    	espaces=limitEsp--;
 	    	while(espaces>=1){
 	    		printf(" ");
 	    		espaces--;
			}
			columbs=0;
			while(columbs<1){
				columbs++;
				printf("%c", ast);
			} 
		}
		printf("\n\n");
	}
	
}
void DecimalToBinary(void){
	int decimal, rem;
	
	decimal=1;
	while(decimal>0){
		printf("Enter the number to convert: ");
		scanf("%d", &decimal);
		printf("\n");
		float n = decimal;
		if(n==0)
		   printf("  0  ");
	    while(n>=1)
		    n/=2;
	    while(n!=decimal){
	    	n*=2;
	    	rem=((int) n%2);
	    	printf(" %d ", rem);
		}
	    printf("\n\n");
	}       	
}
/*void BinaryToDecimal(void){
	short int const base2=2;
	int const negative=-1;
	long int sum;
	int potency, positionByBit; 
	char bit, one = '1'; //zero= '0';
	
	printf("Enter the binary number bit by bit");
	printf(" and a different number from 0 or 1 to end the sequence\n");
	bit=one;potency=negative;; sum=0;
	while(bit=='1' || bit=='0'){//bit>=0 && bit<=1
		printf("\n: ");
		//scanf("%d", &bit);
		bit = getche();
		potency++;
		if(bit=='1'){
		   positionByBit=pow(base2, potency);
		   sum+=positionByBit;
		}
	}
	printf("\n\n(((((((((((%ld)))))))))))\n", sum);
}*/

void BinaryToDecimal(void){
	short int const base2=2;
	int const negative=-1;
	long int sum;
	int potency, positionByBitOne, positionByBitZero; 
	char bit; 
	short int one, zero;
	
	printf("Enter the binary number bit by bit");
	printf(" and a different number from 0 or 1 to end the sequence\n");
	bit='0';
	//potency=negative; 
	//sum=0;
	one=-1, zero=-1;
	while(bit=='1' || bit=='0'){//bit>=0 && bit<=1
		//printf("\n: ");
		//scanf("%d", &bit);
		bit = getche();
		if(bit=='1')
			one++;
		else 
		   if(bit=='0')
			   zero++;
	}
	if(zero>=0){
	    while(zero>=0){
		    potency=zero;
	        positionByBitZero=pow(base2, potency);
	        printf("\n%d", positionByBitZero);
	        zero--;
	    }
	}
	if(one>=0){
	    while(one>=0){
	        potency=one;
	        positionByBitOne=pow(base2, potency);
	        printf("\n%d", positionByBitOne);
		    one--;
		}
	}
	//potency=zero;
	//positionByBitZero=pow(base2, potency);
	//printf("\n%d", positionByBitZero);
    //-positionByBitZero;
	printf("\n\n(((((((((((%ld)))))))))))\n", sum);
}

int main(){
	//asteriscs();
	//ladderAst();
	//numbers();
	//TRIAN_NUM();
	//DiagonalAST();
	//DecimalToBinary();
	BinaryToDecimal();
	return 0;
}
