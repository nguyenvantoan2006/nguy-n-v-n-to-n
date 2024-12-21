#include <stdio.h>
int main(){
	int year,month;
	printf("Moi nhap so nam: ");	scanf("%d", &year);
	
	if(year > 0){
		printf("Moi nhap so thang: ");	scanf("%d", &month);
		switch(month){
			case 1:	case 3:	case 5:	case 7:	case 8:	case 10: case 12:
				printf("%d la thang co 31 ngay",month);
				break;
			case 4:	case 6:	case 9:	case 11:
				printf("%d la thang co 30",month);
				break;
			case 2:
				{
					if(year % 400 == 0 || year % 4 == 0 && year % 100 != 0){
						printf("Day la nam nhuan nen thang %d co 29 ngay",month);
					}
					else	printf("Day khong phai nam nhuan nen thang %d co 28 ngay",month);
				}
				break;
			default:
				printf("Thang ban nhap vao khong hop le");
		}
	}
	else	printf("Nam ban nhap vao khong hop le");
}
