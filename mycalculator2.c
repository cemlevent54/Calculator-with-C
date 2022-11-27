#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>

void addition();
void substraction();
void multipication();
void division();
void power();
void modul();
unsigned long long int factorial();
void logarithm10();
void logarithme();
void squareroot();
void absolute();
void percentage();
void sinus();
void cosinus();
void tanjant();
void arcsin();
void arccos();
void arctan();
void reversingnumber();
void asagiyuv();
void yukariyuv();
void cubicroot();
void hypotenus();
void gauss();
void prime();
void temperature();
void denklem();
void armstrongnumber();
void decimaltobinary();
void binarytodecimal();
void fibonaccisequence();
void palindrome();
void leapyear();
void greatestcommondivisior();
void lowestcommonmultiple();
void perfectnumber();

int main() {
	
	char op;
	
	printf("toplama => +\n");
    printf("cikarma => -\n");
    printf("carpma => * \n");
    printf("bolme => / \n");
    printf("modul alma => ?\n");
    printf("faktoriyel => !\n");
    printf("10 tabaninda logaritma => 1\n");
    printf("e tabaninda logaritma => 2\n");
	printf("karekok alma => 3\n");
	printf("mutlak deger alma => 4\n");
	printf("yuzde alma => y\n");
	printf("sinus alma => s\n");
	printf("cos alma => c\n");
	printf("tan alma => t\n");
	printf("arcsin => a\n");
	printf("arccos => b\n");
	printf("arctan => d\n");
	printf("sayinin tersini alma => 5\n");
	printf("asagi yuvarlama => 6\n");
	printf("yukari yuvarlama => 7\n");
	printf("kup kok alma => k\n");
	printf("hipotenus => h\n");
	printf("gauss toplami => g\n");
	printf("asal sayi => p\n");
	printf("sicaklik donusumu =>e\n");
	printf("ax^2+bx+c=0 => f\n");
	printf("armstrong numarasi => 8\n");
	printf("decimal to binary => o\n");
	printf("binary to decimal => i\n");
	printf("fibonacci dizisi => 9\n");
	printf("palindrom sayi => 0\n");
	printf("artik yil => l\n");
	printf("ebob alma => m\n");
	printf("ekok alma =>n\n");
	printf("mukemmel sayi =>x\n");
	
	printf("\nhesap makinesine hosgeldiniz.lutfen yukaridan bir islem seciniz:");
	scanf("%c",&op);
	
	
	switch (op) {
		case '+': addition();
		    break;
		case '-': substraction();		    
			break;
		case '*': multipication();
			break;
		case '/': division();
			break;
		case '^': power();
			break;
		case '?': modul();
			break;
		case '!': factorial();
			break;
		case '1': logarithm10();
		    break;
		case '2': logarithme();
		    break;
		case '3': squareroot();
		    break;
		case '4': absolute();
			break;
		case 'y': percentage();
		    break;
		case 's': sinus();
		    break;
		case 'c': cosinus();
		    break;
		case 't': tanjant();
		    break;
		case 'a': arcsin();
		    break;
		case 'b': arccos();
		    break;
		case 'd': arctan();
		    break;
		case '5': reversingnumber();
		    break;
		case '6': asagiyuv();
		    break;
		case '7': yukariyuv();
		    break;
		case 'k': cubicroot();
		    break;
		case 'h': hypotenus();
		    break;
		case 'g': gauss();
		    break;
		case 'p': prime();
		    break;
		case 'e': temperature();
		    break;
		case 'f': denklem();
		    break;
		case '8': armstrongnumber();
		    break;
		case 'o': decimaltobinary();
		    break;
		case 'i': binarytodecimal();
		    break;
		case '9': fibonaccisequence();
		    break;
		case '0': palindrome();
		    break;
		case 'l': leapyear();
		    break;
		case 'm': greatestcommondivisior();
		    break;
		case 'n': lowestcommonmultiple();
		    break;
		case 'x': perfectnumber();
		    break;
	}
	
	return 0;
}

void addition() {
	
	float a;
	float b;
	float sum;
	printf("ilk numara: ");
	scanf("%f",&a);
	printf("ikinci numara: ");
	scanf("%f",&b);
	sum = a + b;
	printf("%.2f + %.2f = %.2f",a,b,sum);
	
	
}

void substraction() {
	float a, b;
	float c = 0;
	
	printf("ilk numara: ");
	scanf("%f",&a);
	printf("ikinci numara: ");
	scanf("%f",&b);
	
	c = a - b;
	
	printf("\n%.2f - %.2f = %.2f",a,b,c);
	
}

void multipication() {
	
	float a;
	float b;
	float result;
	printf("ilk numara: ");
	scanf("%f",&a);
	printf("ikinci numara: ");
	scanf("%f",&b);
	result = a * b;
	printf("%.3f * %.3f = %.3f",a,b,result);



}

void division() {
	float a,b;
	float c = 0;
	
	printf("ilk numarayi giriniz: ");
	scanf("%f",&a);
	printf("ikinci numarayi giriniz: ");
	scanf("%f",&b);
	
	c = a / b;
	
	printf("%f / %f = %f",a,b,c);
	
}

void power() {
	float base,exp;
	float result ;
	
	printf("taban degerini giriniz: ");
	scanf("%f",&base);
	printf("kuvvet degerini giriniz: ");
	scanf("%f",&exp);
	
	result = pow(base,exp);
	
	printf("%.4f ^ %.4f = %.4f",base,exp,result);
	
}

void modul() {
	int a,b;
	int result = 0;
	
	printf("ilk numarayi giriniz: ");
	scanf("%d",&a);
	printf("ikinci numarayi giriniz: ");
	scanf("%d",&b);
	
	result = a % b;
	
	printf("%d mod %d = %d",a,b,result);
}



unsigned long long int factorial() {
	int i;
	unsigned long long int result = 1;
	int  number;
	
	printf("faktoriyel almak istediginiz numarayi giriniz: ");
	scanf("%d",&number);

	if(number < 0) {
		printf("error");
	}

	else {
	
	for (i = 1; i <= number; i++) {
		result *= i;
	}
	
	printf("%d nin faktoriyeli: %llu",number,result);

	}
	
}

void logarithm10() {
	float a;
	float result ;
	
	printf("log10(x) icin x degeri giriniz:  ");
	scanf("%f",&a);
	
	result = log10(a);
	
	printf("log(%f) = %f",a,result);
	
}

void logarithme() {
	int a;
	float result;
	
	printf("loge(x) icin x degeri giriniz:  ");
	scanf("%d",&a);
	
	result = log(a);
	
	printf("loge(%d) = %f",a,result);
}

void squareroot() {
	float a;
	float result;
	
	printf("karekoku alinacak sayiyi giriniz: ");
	scanf("%f",&a);
	
	result = sqrt(a);
	
	printf("sqrt(%f) = %f",a,result);
}

void absolute() {
	float a;
	float result;
	
	printf("mutlak degeri alinacak sayiyi giriniz: ");
	scanf("%f",&a);
	
	result = fabs(a);
	
	printf("|%.3f| = %.3f",a,result);
}

void percentage() {
	float a,b;
	float result;
	
	printf("yuzdesi alinacak sayiyi giriniz: ");
	scanf("%f",&a);
	printf("yuzde kacı alinacagini giriniz: ");
	scanf("%f",&b);
	
	result = a * (b/100);
	
	printf("%f sayisininin yuzde %f si %.2f dir.",a,b,result);

}

void sinus() {
	
	const double PI = 3.14159265;
	float aci;
	float radyan;
	float result;
	
	
	printf("acinin derecesini giriniz: ");
	scanf("%f",&aci);
	
	radyan = aci * PI / 180;
	result = sin(radyan);
	
	printf("%.2f derece (%.4f radyan) acinin sinus degeri: %.8f",aci,radyan,result);
}

void cosinus() {
	const double PI = 3.14159265;
	float aci;
	float radyan;
	float result;
	
	printf("acinin derecesini giriniz: ");
	scanf("%f",&aci);
	
	radyan = aci * PI / 180;
	result = cos(radyan);
	
	printf("%.2f derece (%.4f radyan) acinin cosinus degeri: %.8f",aci,radyan,result);
}

void tanjant() {
	const double PI = 3.14159265;
	float aci;
	float radyan;
	float result;
	
	printf("acinin derecesini giriniz: ");
	scanf("%f",&aci);
	
	radyan = aci * PI / 180;
	result = tan(radyan);
	
	printf("%.2f derece (%.4f radyan) acinin tanjant degeri: %.8f",aci,radyan,result);
}

void arcsin() {
	const double PI = 3.14159265;
	float deger;
	float radyan;
	float derece;
	
	printf("sinus degeri giriniz: ");
	scanf("%f",&deger);
	
	radyan = asin(deger);
	derece = radyan * 180 / PI;
	
	printf("sinus degeri %.4f olan aci: radyan: %.4f derece: %.2f",deger,radyan,derece);
}

void arccos() {
	const double PI = 3.14159265;
	float deger;
	float radyan;
	float derece;
	
	printf("cosinus degeri giriniz(-1 ve 1 aralıgında): ");
	scanf("%f",&deger);
	
	radyan = acos(deger);
	derece = radyan * 180 / PI;
	
	printf("cosinus degeri %.4f olan aci: radyan: %.4f derece: %.2f",deger,radyan,derece);
}

void arctan() {
	const double PI = 3.14159265;
	float deger;
	float radyan;
	float derece;
	
	printf("tanjant degeri giriniz(-1 ve 1 aralıgında): ");
	scanf("%f",&deger);
	
	radyan = atan(deger);
	derece = radyan * 180 / PI;
	
	printf("tanjant degeri %.4f olan aci: radyan: %.4f derece: %.2f",deger,radyan,derece);
}

void reversingnumber() {
	float a;
	float result;
	
	printf("sayi giriniz: ");
	scanf("%f",&a);
	
	result = 1 / a;
	
	printf("%f sayisinin tersi: %f",a,result);
	
}

void asagiyuv() {
	float a;
	float result;
	
	printf("sayi giriniz: ");
	scanf("%f",&a);
	
	result = floor(a);
	
	printf("%f sayisini asagi yuvarla: %f",a,result);
}

void yukariyuv() {
	float a;
	float result;
	
	printf("sayi giriniz: ");
	scanf("%f", &a);
	
	result = ceil(a);
	
	printf("%f sayisini yukari yuvarla: %f",a,result);
}

void cubicroot() {
	float a;
	float result;
	
	printf("sayi giriniz: ");
	scanf("%f",&a);
	
	result = cbrt(a);
	
	printf("%f sayisinin kupkoku: %f",a,result);
}

void hypotenus() {
	float a,b;
	float result;
	
	printf("1. kenari giriniz: ");
	scanf("%f",&a);
	printf("2. kenari giriniz: ");
	scanf("%f",&b);
	
	result = hypot(a,b);
	
	printf("1. kenari %f, 2. kenarı %f olan ucgenin hipotenus degeri: %f",a,b,result);
}

void gauss(){
    int i;
	int number;
	int sum;
	int result;
	
	printf("son numarayi giriniz: ");
	scanf("%d",&number);
	
	result = ((number) * (number + 1)) / 2;
	
	printf("ilk elemani 0, son elemani %d olan sayi dizisinin gauss toplami: %d",number,result);
}

void prime() {
	int i;
	int number;
	int count = 0;
	
	printf("sayi giriniz: ");
	scanf("%d",&number);
	
	for (i= 2; i < number;i++) {
		if (number % i == 0){
		    count++;
		}
	}
	
	if (count > 0) {
		printf("%d sayisi asal sayi degildir",number);
		
	}
	else {
		printf("%d sayisi asal sayidir",number);
	}
}

void temperature() {
	float derece;
	float fahrenheit;
	
	printf("dereceyi giriniz: ");
	scanf("%f",&derece);
	
	fahrenheit = (derece*1.8) + 32;
	
	printf("%f derece = %f fahrenheit",derece,fahrenheit);
	
}

void denklem() {
	double a,b,c,delta,x1,x2,realpart,imaginarypart;
	
	printf("ax2+bx+c=0 denklemi icin a,b,c degerlerini giriniz: ");
	scanf("%lf %lf %lf",&a, &b, &c);
	delta = b * b - 4 * a * c;
	                                          
    if (delta > 0) {
    	x1 = (-b + sqrt(delta)) /2 * a;
    	x2 = (-b - sqrt(delta)) /2 * a;
    	printf("(%.1f)x^2+(%.1f)x+(%.1f)=0 denkleminin 1. koku = %.2f, 2. koku = %.2f",a,b,c,x1,x2);
	}
	else if (delta < 0) {
		realpart = (-b) / 2 * a;
		imaginarypart = sqrt(-delta) / 2 * a;
		printf("(%.1f)x^2+(%.1f)x+(%.1f)=0 denkleminin 1. koku = %.2lf + %.2lfi, 2. koku = %.2lf - %.2lfi",a,b,c,realpart,imaginarypart,realpart,imaginarypart);
	}
	else {
		x1 = x2 = (-b) / 2 * a;
		printf("(%.1f)x^2+(%.1f)x+(%.1f)=0 denkleminin kokleri esit ve %.2f degerindedir.",a,b,c,x1);
	}
}

void armstrongnumber() {
	int num, originalnum, remainder, n = 0;
	float result = 0.0;
	
	printf("numara giriniz: ");
	scanf("%d",&num);
	
	originalnum = num;
	
	for (; num != 0; n++) {
		num /= 10;
		
	}
	num = originalnum;
	
	for (; num != 0; num /= 10) {
		remainder = num % 10;
		result += pow(remainder,n);
	}
	
	if ((int)result == originalnum) {
		printf("%d bir armstrong numarasidir.",originalnum);
	}
	else {
		printf("%d bir armstrong numarasi degildir.",originalnum);
	}
}

void decimaltobinary() {
	int num;
	int n;
	int i= 1,rem;
	long long bin = 0;
	
	printf("decimal sisteminden sayi giriniz: ");
	scanf("%d",&num);
	
	n = num; 
	
	while (num != 0) {
		rem = num % 2;
		num /= 2;
		bin += rem * i;
		i *= 10;
	}
	
	printf("%d sayisinin binary sistemdeki karsiligi = %d",n,bin);
}

void binarytodecimal() {
	int dec = 0, i = 0, rem; 
	int num, n;
	
	printf("binary sisteminden numara giriniz (1 ve 0): ");
	scanf("%d",&num);
	
	n = num;
	
	while (num != 0) {
		rem = num % 10;
		num /= 10;
		dec += rem * pow(2,i);
		i++;
	}
	
	printf("%d binary sayisinin decimal sistemdeki karsiligi= %d",n,dec);
}

void fibonaccisequence() {
	
	int limit, a = 0, b = 1,c;
	
	printf("fibonacci dizisindeki terim sayisini giriniz: ");
	scanf("%d",&limit);

    printf("%d\n%d\n",a,b);
	
	for (int i=1; i<=limit-2;i++) {
        c = a + b;
		printf("%d\n",c);
        a = b;
        b = c;
		
	}
}

void palindrome() {
	int n, reversed = 0, remainder, original;
	
	printf("bir sayi giriniz: ");
	scanf("%d",&n);
	
	original = n;
	
	while (n != 0) {
		remainder = n % 10;
		reversed = reversed * 10 + remainder;
		n /= 10;
	}
	if (original == reversed) {
		printf("%d sayisi bir palindrom sayidir.",original);
	}
	else {
		printf("%d sayisi bir palindrom sayi degildir.",original);
	}
	
}

void leapyear() {
	
	int yil;
	
	printf("yil giriniz: ");
	scanf("%d",&yil);
	
	if ((yil % 4 == 0) && (yil % 100 != 0)) {
		printf("%d yili artik yildir",yil);
	}
	else if (yil % 400 == 0) {
		printf("%d yili artik yildir",yil);
	}
	else {
		printf("%d yili artik yil degildir",yil);
	}
}

void greatestcommondivisior() {
	int n1,n2,i,gcd;
	
	printf("ebobu alinacak sayilari giriniz: ");
	scanf("%d %d",&n1,&n2);
	
	for (i = 1; i <= n1 && i <= n2; i++) {
		if (n1%i==0 && n2%i==0) {
			gcd = i;
		}
	}
	printf("ebob(%d,%d)=%d",n1,n2,gcd);
}

void lowestcommonmultiple() {
	int n1,n2,i;
	int max;
	
	printf("ekokunu istediginiz iki sayiyi giriniz: ");
	scanf("%d %d",&n1,&n2);
	
	max = (n1 > n2) ? n1 : n2;
	
	while(1) {
		if (max % n1 == 0 && max % n2 == 0) {
			printf("ekok(%d,%d) = %d ",n1,n2,max);
		    break;
		}
		max++;
	}
}

void perfectnumber() {
	int number,n;
	int sum = 0;
	
	printf("sayi giriniz: ");
	scanf("%d",&n);
	number = n;
	
	for (int j = 1; j < n; j++) {
		if (n%j == 0) {
			sum = sum + j;
		}
	}
	
	if (sum == number) {
		printf("%d bir mukemmel sayidir.",number);
	}
	else {
		printf("%d bir mukemmel sayi degildir.",number);
	}
}