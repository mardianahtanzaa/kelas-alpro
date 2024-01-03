LAPORAN TUGAS BESAR
MATA KULIAH ALGORITMA DAN PEMROGRAMAN
SIMULASI GERAK PENDULUM DENGAN METODE EULER 
Laporan ini disusun untuk memenuhi syarat mata kuliah Praktikum Algoritma dan Pemrograman Program Studi S1 Teknik Fisika Universitas Telkom




 


Disusun oleh :
KELOMPOK 1 KELAS TF-47-03
Anggota :

	MARDIANAH TANZA	(1105223086)
	SALMAN ARIF AL-GHIFARI	(101042300004)
	YIDZUKA YASHA YASHYFA	(101042300072)
	ALIFIA SYAHRANI PUTRI	(101042330028)



FAKULTAS TEKNIK ELEKTRO
TELKOM UNIVERSITY
DAFTAR ISI

DAFTAR ISI	ii
DAFTAR GAMBAR	iii
BAB I PENDAHULUAN	1
1.1	Latar Belakang	1
1.2	Metode	1
1.3	Tujuan dan Manfaat	2
BAB II HASIL DAN ANALISIS	3
2.1	Deskripsi Program	3
2.2	Screenshoot Program	4
2.3	Analisis Program	4
BAB III PENUTUP	5
3.1 Kesimpulan	5



















DAFTAR GAMBAR

Gambar 1 Koding Bahasa C	4
Gambar 2 Koding Bahasa C	4
Gambar 3 Koding Python dan Grafik	4





 
BAB I
PENDAHULUAN

	Latar Belakang
Pendulum adalah sebuah alat yang terdiri dari sebuah benda berat yang digantungkan pada sebuah tali atau batang yang dapat bergerak bebas dan periodik. Ketika benda berat digeser dari posisi istirahatnya, ia akan mengalami gaya restorasi yang disebabkan oleh gravitasi dan akan kembali ke posisi setimbang. Gerakan bolak-balik ini disebut osilasi atau ayunan. Periode ayunan bergantung pada panjang tali dan percepatan gravitasi, dan dapat dihitung menggunakan rumus T = 2π√(L/g), di mana T adalah periode, L adalah panjang tali, dan g adalah percepatan gravitasi. 

Pendulum digunakan dalam berbagai aplikasi, seperti dalam pengukuran waktu, pengukuran gravitasi, dan dalam ilmu teknik mesin. Selain itu, pendulum adalah sistem umum yang penggunaannya terlihat dalam berbagai keadaan. Ada yang digunakan sebagai jam untuk mencatat waktu, ada pula yang hanya digunakan untuk bersenang-senang jika ada ayunan anak-anak. Dalam beberapa kasus, ini digunakan dengan cara yang tidak konvensional, seperti pemberat di tali pancing. Bandul atau pendulum merupakan temuan penting karena digunakan untuk mengukur detik-detik waktu dalam observasi benda-benda angkasa. Penemuannya ini 600 tahun sebelum Galileo Galilei dan C Huygens yang sekarang dianggap penemuannya
	Metode 
Metode Euler adalah metode untuk menyelesaikan persamaan differensial biasa dengan memanfaatkan uraian deret Taylor. Langkah awal penurunan metode ini dimulai dari hubungan eksplisit
dy/dx=f(x,y) 	2.1
Persamaan tersebut dapat didekati dengan bentuk beda hingga
	dy/dx=Δy/Δx=(y_(i+1)-y_i)/(x_(i+1)-x_i )=f(x) 	2.2
Dengan menamakan Φ=f(x,y) maka persamaan 2.2 dapat diuraikan
	y_(i+1)=y_i+Φ∆x 	2.3
Nilai Φ adalah perkiraan kemiringan yang digunakan untuk ekstrapolasi yi ke yi+1 sejauh ∆x, dengan ∆x=x_(i+1)-x_i. Persamaan 2.3 dapat digunangan untuk menghitung langkah demi langkah nilai y, sehingga disebut metode satu langkah.
	Uraian deret Taylor ruas kiri persamaan 2.3 dinyatakan secara terpisah sebagai bagian dari langkah untuk menurunkan metode Euler
	y_(i+1)=y_i+y_i^' ∆x+y_i^"  〖∆x〗^2/2! 	2.4
Jika ∆x sangat kecil, maka suku yang mengandung pangkat lebih tinggi atau sama dengan 2 adalah sangat kecil, sehingga dapat diabaikan
	y_(i+1)=y_i+y_i^' ∆x 	2.5
Persamaan 2.6 merupakan hasil pemotongan Deret Taylor pada persamaan 2.4 dan 2.5 akan memberikan nilai kemiringan Φ= y’ = f(x,y), sehingga persamaan 2.5 dapat ditulisakan dalam bentuk formula umum Euler
	y_(i+1)=y_i+f(x,y)∆x 	2.6
dengan i= 1,2,3,…,n. Nilai y_(i+1)diprediksi dengan menggunakan kemiringan (sama dengan turunan pertama di titik asli x) untuk ekstrapolasi secara linier pada grid ∆x.
	Metode Euler memiliki kekurangan, yaitu errornya bisa sampai lebih dari 60%, sehingga apabila disimulasikan masih belum sesuai dengan peristiwa yang sebenarnya. Oleh karena itu kemudian metode Euler dikembangkan oleh Cromer, Heun, Runge-Kutta, dan ilmuan-ilmuan lainnya. Perbedaan metode Euler dengan Euler-Cromer adalah terletak di persamaan 2.3, di mana metode Euler-Cromer adalah
y_(i+1)=y_i+Φ_(n+1) ∆x

	Tujuan dan Manfaat
       Tujuan dari program simulasi pendulum dengan metode Euler ini adalah untuk memahami dan memodelkan getaran pendulum secara numerik. Beberapa tujuan spesifik melibatkan :
	Pemahaman Dinamika Pendulum : Program ini membantu dalam     memahami prinsip-prinsip dinamika sederhana, khususnya gerakan pendulum.
	Implementasi Metode Euler : Program ini menerapkan metode Euler sebagai algoritma numerik untuk menyelesaikan persamaan diferensial yang menggambarkan gerakan pendulum.

       Manfaat dari program ini juga melibatkan hal-hal sebagai berikut :
	Simulasi Realistis, yang mana meskipun bersifat numerik, program ini dapat memberikan simulasi yang cukup realistis tentang pendulum, yang dapat membantu dalam eksplorasi dan pemahaman konsep fisika secara praktis
	Pemahaman Konsep Fisika, program ini juga membantu pengguna terutama dalam pelajaran fisika, untuk memahami konsep fisika yang berkaitan dengan pendulum.

 
BAB II
HASIL DAN ANALISIS
	    Deskripsi Program
          Program ini bertujuan untuk mensimulasikan gerakan pendulum menggunakan bahasa pemrograman C. Pendulum direpresentasikan sebagai titik materi yang terikat pada tali yang tidak bermassa. Program berfokus pada memodelkan dinamika pendulum dengan menggunakan persamaan diferensial yang menggambarkan perubahan sudut dan kecepatan angular seiring waktu.
Langkah-langkah Umum:
	Deklarasi Variabel:
Program dimulai dengan mendeklarasikan variabel yang diperlukan, seperti panjang tali (length), massa titik pendulum (mass), sudut awal (angle), kecepatan angular awal (angular_velocity), dan langkah waktu (time_step).
	Fungsi Update:
Dibuat fungsi yang bertanggung jawab untuk mengupdate nilai sudut dan kecepatan angular berdasarkan metode numerik tertentu, seperti metode Euler.
	Loop Utama:
Sebuah loop utama diterapkan untuk mengiterasi melalui langkah-langkah waktu. Pada setiap iterasi, fungsi update dipanggil untuk memperbarui nilai sudut dan kecepatan angular.
	Output atau Visualisasi:
Program dapat mencetak atau menampilkan hasil simulasi, seperti nilai sudut pada setiap langkah waktu. Hal ini memungkinkan pengguna untuk melihat perkembangan gerakan pendulum seiring waktu.

Deskripsi tersebut mencakup aspek konseptual dari program simulasi pendulum dalam bahasa C. Implementasi spesifik akan melibatkan penulisan kode sesuai dengan deskripsi tersebut, termasuk sintaksis bahasa C dan pilihan metode numerik yang digunakan.

	    Screenshoot Program 
Gambar 1 Koding Bahasa C
 
Gambar 2 Koding Bahasa C
 

Gambar 3 Koding Python dan Grafik
 
	    Analisis Program
Gambar 3 merupakan hasil plotting grafik pendulum dengan menggunakan metode euler. Sebelumnya dilakukan pemrograman menggunakan bahasa C dan kemudian dilakukan pemrograman dengan bahasa python jupyter sehingga menghasilkan grafik diatas. Pada grafik dapat diketahui apabila semakin banyak waktu yang dibutuhkan maka nilai dari rad (theta) akan semakin kecil. 


BAB III
PENUTUP

3.1 Kesimpulan
	Program simulasi pendulum dengan metode Euler merupakan program yang berguna untuk memodelkan gerakan pendulum secara numerik. Metode ini memberikan perkiraan solusi pada setiap langkah waktu diskrit, yang memungkinkan pemahaman awal terhadap dinamika pendulum. Meskipun metode Euler relatif sederhana, pemilihan parameter seperti langkah waktu menjadi kunci untuk mengoptimalkan akurasi hasil simulasi. 
	Program ini memberikan wawasan visual dan numerik tentang bagaimana pendulum bergerak, membantu dalam eksplorasi konsep dinamika sistem mekanik sederhana secara interaktif. Dengan pemahaman yang baik terhadap keterbatasan metode Euler, program ini dapat menjadi alat yang efektif untuk pendekatan awal dalam memahami prinsip-prinsip dasar dalam simulasi dinamika sistem fisika.
























































