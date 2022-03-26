#include <iostream>
using namespace std;
void msg_items() {
	//ما در این مثال اومدیم کاربرد سوییچ رو شرح دادیم در قالب یه مینی پروژه
	//سوییچ رفتن به حالت های متفاوت
	cout << "--------Menu---------" << "\n";
	cout << "Bardasht:  1"<<"\n";
	cout << "Mojodi:    2" << "\n";
	cout << "Ghoboz:    3" << "\n";
	cout << "Sharzh:    4" << "\n";
	int a;
	cout << "Gozineh Mord Nazar Ra Vared Konid:" << "\n";
	cin >> a;
	switch (a) {
	case 1:
		cout << "100$ Bardasht Shod......." << "\n";
		break;
	case 2:
		cout << "Mojodi Shoma 200$......." << "\n";
		break;
	case 3:
		cout << "Ghabz Gaz Pardakht Shoad......." << "\n";
		break;

	case 4:
		cout << "100$ SharZh Irancell......." << "\n";
		break;
	default: 
		exit(0);

	}
	
}
void atm() {
	int a;
	cout << "Enter PassWord: " << "\n";
	cin >> a;
	if (a == 12) {
		msg_items();
	}
	else
	{
		
			atm();
		
	
		//exit(0);
		//for (int i = 0; i <2; i++) {
		//	cout << "Errors" << "\n";
			//atm();
			//if (i >= 3) {
				//std::cin.get();
				//break;
			//}
		//}
		
	}
}
void methodriyazi() {
	//ما در این نمونه کد به متد های ریاضی میپردازیم
	int a;
	int b;
	cout << "Enter Numbers1: "<<"\n";
	cin >> a;
		cout << "Enter Numbers2: " << "\n";
		cin >> b;
		cout << "=Jazr: " <<sqrt(a)<< "\n";
		cout << "=kochaktarin: " << min(a, b)<<"\n";
		cout << "=bozorgtarin: " << max(a, b)<<"\n";
		cout << "=Logaritm: " <<log(a)<< "\n";
		cout << "=sinos: " << asin(a) << "\n";
		cout << "=sinos: " << asin(a) << "\n";
		cout << "=cosinos: " << acos(a) << "\n";
		cout << "=Tanzhant: " << atan(a) << "\n";
		cout << "=GHadMotlagh: " << abs(a) << "\n";

	//for (int i = 1; i <= a;i++) {
	//	if (i % 2 == 0) {
		//	cout << i << "=Jazr_Zoj: " << sqrt(i) << "\n";
		//}
	//}


}
void hoghogDastmozd() {
	//برای محاسبه درصد از فرمول زیر استفاده مشود
	// int res=value-value*10/100;*
	//این نمونه کد جهت اشنایی با یک نمونه پروژه ساده می باشد
	//در این کد ما به مالیات هم میپردازیم
	int hoghogpayeh = 3700000;//Hoghog Payeh
	int maskan = 320000;//حق مسکن
	int farzand = 92000;//حق فرزند
	int ezafehkar = 25000;//میزان اضافه کار بر ساعت
	int khorbar = 250000;//خواربار
	cout << "etelat payeh dar system darj shodeh....\n";
	cout << "mizain time Ezafeh Kar:\n";//گرفتن تایم اضافه کار
	double overtimes;
	cin >> overtimes;
	cout << "tedad Farzand:\n";//گرفتن تایم اضافه کار
	int numberchildern;
	cin >> numberchildern;
	int sumsalary = hoghogpayeh + maskan + khorbar + int(ezafehkar * overtimes) + int(numberchildern * farzand);
	
	if (sumsalary >= 5000001) {
		// اینجا تعریف شده اگه بیشتر از مورد نظر بوده 10 درصد کم شود
		int maliyat = sumsalary - sumsalary * 10 / 100;
		cout << "Hoghogh Daryafti NAKHLESI:  " << sumsalary << "\n";
		cout << "Hoghogh Daryafti KHALES:  " << maliyat;
	}
	else
	{
		cout << "Hoghogh Daryafti NAKHLESI:  " << sumsalary << "\n";

	}
	
	
}
void loop1() {
	//کد های زیر برای حلقه های میباشد و در قالب محاسبات ریاضی نوشته شده
	cout << "Enter number:  \n";
	int a;
	cin >> a;
	for (int n = 1; n <= a; n++) {
		cout << "Loops_Jazr " << n << " :" << sqrt(n)<<"\n";
	}
}
void loop2(){
	//نکته مهم اینکه برای تولید اعداد اول و ساخت انواع اشکال  با نماد ها باید از حلقه های تو در تو استفاده کنیم
	cout << "Enter number:  \n";
	int a;
	cin >> a;
	int i=1;
	int n = 1;
	//type Loop down while
	while (i<a)
	{
		if (i % 2 == 0) {
			cout << "Adad Zoj: " << i<<"\n";
		}
		i++;
	}
	//type loop down do while
	do
	{
		if (n % 2 == 1) {
			cout << "Adad Fard: " << n << "\n";
		}
		n++;
	} while (n<a);
	

}
void runmain() {
	cout << "1. Atm \n"<<endl;
	cout << "2. Methodhay Riyazi \n" << endl;
	cout << "3. HoghoghDastmozd \n" << endl;
	cout << "4. Loop1 \n" << endl;
	cout << "5. Loop2 \n" << endl;
	cout << "6. Bazgasht Be Menu \n" << endl;
	cout << "7. Exit \n" << endl;
	cout << "********************* \n" << endl;
	cout << "Gozineh Mordnazar Ra Vared konid: " ;
	int getnumber;
	cin >> getnumber;
	switch (getnumber)
	{
	case 1:
		atm();
		break;
	case 2:
		methodriyazi();
		break;
	case 3:
		hoghogDastmozd();
		break;
	case 4:
		loop1();
		break;
	case 5:
		loop2();
		break;
	case 6:
		runmain();
		break;
	case 7:
		exit(0);
		break;
	default:
		break;
	}
	
}
int main(){

	runmain();
	
	}