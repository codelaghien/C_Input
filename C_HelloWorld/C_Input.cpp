#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 6031)
#pragma warning(disable : 6054)

#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

#define EOL '\0' // End of Line
// name = [100] = "Huy\0" = [H][u][y][\0][][][][][]

int nhapKyTu(const char* tieuDe);
int nhapSoNguyen(const char* tieuDe);
double nhapSoThuc(const char* tieuDe);
void nhapTu(const char* tieuDe, char* var);
void nhapHang(const char* tieuDe, char* var);
   
int main() { 
	printf("Hoc viet Nhap tu ban phim 1 lan thoi ! \n\n"); 
	 
	/*char c = nhapKyTu("Nhap vao 2 ky tu: ");
	char c2 = nhapKyTu(""); 
	printf("Ky tu da nhap vao c: %c \n", c);
	printf("Ky tu da nhap vao c2: %c \n", c2);*/

	/*char firstName[200];
	char lastName[200];
	nhapTu("Nhap vao ten va ho: ", firstName);
	nhapTu("", lastName);
	printf("Ten: %s \n", firstName);
	printf("Ho: %s \n", lastName);*/

	/*char hang[200]; 
	nhapHang("Nhap vao 1 hang: ", hang);
	printf("Hang nhap vao la: %s \n", hang); */

	/*int x = nhapSoNguyen("Nhap vao 2 so nguyen: ");
	int y = nhapSoNguyen("");
	printf("So nguyen nhap vao la: x = %d, y = %d \n", x, y);

	double z = nhapSoThuc("Nhap vao 2 so thuc: ");
	double z2 = nhapSoThuc("");
	printf("So thuc nhap vao la: z = %lf, z2 = %lf \n", z, z2);*/

	int x = nhapSoNguyen("Nhap vao 2 so nguyen va 1 tu: ");
	double y = nhapSoThuc("");
	char chuoi[200];
	nhapTu("", chuoi);
	printf("Nhap vao la: x = %d, y = %lf, chuoi = %s \n", x, y, chuoi);
	 
	printf("\n\n");

	printf("\n\n\nNhan ENTER de thoat ... ");
	getchar();
	return 0;
}

int nhapKyTu(const char* tieuDe) {
	char c;
	if (tieuDe[0] != EOL) {
		printf(tieuDe);
	}
	//scanf("%c", &c);
	c = getchar();
	getchar(); // bo ENTER hoac khoang trang
	return c;
}
int nhapSoNguyen(const char* tieuDe) {
	int so;
	if (tieuDe[0] != EOL) {
		printf(tieuDe);
	}
	scanf("%d", &so);
	getchar(); // bo ENTER hoac khoang trang
	return so;
}
double nhapSoThuc(const char* tieuDe) {
	double so;
	if (tieuDe[0] != EOL) {
		printf(tieuDe);
	}
	scanf("%lf", &so);
	getchar(); // bo ENTER hoac khoang trang
	return so;
}
void nhapTu(const char* tieuDe, char* var) {
	if (tieuDe[0] != EOL) {
		printf(tieuDe);
	}
	char c = getchar();
	int i = 0;
	while (c != '\n' && c != ' ') {
		var[i++] = c; // [H][u][y][\0][][][][][]
		c = getchar();
	}
	var[i] = EOL;
}
void nhapHang(const char* tieuDe, char* var) {
	if (tieuDe[0] != EOL) {
		printf(tieuDe);
	}
	//gets(var);
	//scanf("%s", st);
	char c = getchar();
	int i = 0;
	while (c != '\n') {
		var[i++] = c;
		c = getchar();
	}
	var[i] = EOL;
}
