#include <iostream>
using namespace std;
int main()
{
	float sogio, tongtien;

	cout << "nhap so gio m gui xe: ";
	cin >> sogio;
	
	if (sogio <= 4) {
		tongtien = 50000;

	}
	else {
		float vuotquasogio = sogio - 4;
		tongtien = 50000 + (vuotquasogio * 15000);

	}
	cout << "so tien m phai tra cho t khi giu xe la: " << tongtien << "VND" << endl;
	
	return 0;
}