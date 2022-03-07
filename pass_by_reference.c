#include <stdio.h>

void Pass_By_Reference(int *a) { //Prosedur yang menggunakan pass by reference
	*a = *a + 2;
}

void Without_Pass_By_Reference(int a) { //Prosedur tanpa pass by reference
	a = a + 2;
}

int main () {
	int a = 0;
	//Sebelum memanggil prosedur yang menggunakan pass by reference maka nilai a adalah 0
	printf("Nilai awal dari variabel a : %d\n", a);
	
	//Memanggil prosedur tanpa pass by reference
	Without_Pass_By_Reference(a);
	printf("Nilai a setelah diproses dalam prosedur tanpa pass by reference : %d\n", a); 
	//Nilai a sama sesperti masukan awal tidak mengalami perubahan, karena konsep dari prosedur hanya memproses tapi tidak mengubah nilai variabel tersebut (khusus tipe data : char, int, float)
	
	//Memanggil prosedur yang menggunakan pass by reference
	Pass_By_Reference(&a);
	printf("Nilai a setelah diproses dalam prosedur yang mengggunakan pass by reference : %d\n", a);
	/*
	Nilai a akan mengalami perubahan sesuai dengan operasi matematika yang dilakukan dalam prosedur, hal ini karena parameter diisi berdasarkan alamat dari nilai a pada fungsi main, 
	maka dari itu bila nilai a dalam prosedur diubah, nilai dari alamat asalnya (fungsi main) juga akan ikut berubah.
	*/
	
	return 0;
}