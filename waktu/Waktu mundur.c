#include <stdio.h>
#include <time.h>

int main() {


	//input
	int JAM;
	int MENIT;
	int DETIK;

	//INPUT DARI KEYBOARD
printf("Perhitungan Waktu Mundur\n");
printf("kholid ashari /n");
printf("------------------------\n");
printf("JAM :00 ");
printf("MENIT :05 ");
printf("DETIK :26 ");
/*Muhammad Robani*/
	//menghitung waktu
	time_t AWAL=0, AKHIR=0;


	AWAL = time( NULL );
	// time( &AWAL );

	while  ( (JAM != 0) || (MENIT != 0) || (DETIK !=0) ) {

			AKHIR = time( NULL );
			if (AKHIR > AWAL) {
				//proses
				if (DETIK==0) {
					if (MENIT==0) {
						if (JAM==0) {
								//SELESAI
						} else {
							//di sini JAM > 0
							JAM--;
							MENIT = 59;
							DETIK = 59;
						}
					} else {
						//di sini MENIT > 0
						MENIT--;
						DETIK = 59;
					}
				} else {
					//di sini DETIK > 0
					DETIK--;
				}
				//tampilkan WAKTU
				printf("Perhitungan Berjalan  | %02d:%02d:%02d | \n", JAM, MENIT, DETIK);
				/*
				printf("Waktu ");
				//menampilkan JAM
				if (JAM<10) {
					printf("0%d:", JAM);
				} else {
					printf("%d:", JAM);
				}
				//menampilkan MENIT
				if (MENIT<10) {
					printf("0%d:", MENIT);
				} else {
					printf("%d:", MENIT);
				}
				//menampilkan DETIK
				if (DETIK<10) {
					printf("0%d", DETIK);
				} else {
					printf("%d", DETIK);
				}

				printf("\n");
				*/
				AWAL = time( NULL );
				// AWAL = AKHIR;

			}
	}


	return 0;
}