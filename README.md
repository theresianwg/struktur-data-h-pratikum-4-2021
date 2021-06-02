# Roy Sang Kurir
## Verdict
AC Saat Revisi

## Bukti
![Verdict Roy Sang Kurir](https://user-images.githubusercontent.com/81666422/120421787-21392700-c391-11eb-8742-9ebbf5f973e7.jpg)

## Penjelasan Soal
Pada soal roy sang kurir ini kita diminta untuk menentukan apakah ada cycle atau tidak.

## Penjelasan Solusi
```
int main() {
    ios::sync_with_stdio(0);
    
    Graph graph(100);
    int testcase, N, M;
    cin >> testcase;
			for (int i = 1; i <= testcase; i++) {
        		cin >> N >> M;
        		graph.addEdge(N, M); 
    		}
  
    if(graph.isCyclic()) 
        cout << "Ada Cycle!"; 
    else
        cout << "Tidak Ada Cycle!";
        cout << endl;
    return 0; 
}
```
Pertama menginisialisasi graph menggunakan ```  Graph graph(100); ``` diisi 100(seratus) karena sesuai dengan yng dimint soal. Lalu menginputkn data dengan ``` cin >> testcase; ```, testcase yang dimasukkan sesuai yang diminta soal yaitu 5(lima). Lalu memasukkan kembali angka yang diminta soal dengan ``` cin >> N >> M; ```. Kemudian angka tersebut dimasukkan dengan ```graph.addEdge(N, M);```. Lalu untuk menemukan adanya cycle dengan ``` if(graph.isCyclic()) ```. Jika ditemukan cycle makan akan mengeluarkan output 
``` cout << "Ada Cycle!";  ``` dan jika tidak ada cycle maka akan dikeluarkan ``` cout << "Tidak Ada Cycle!"; ```. 

## Visualisasi Solusi
![Visualisasi Roy Sang Kurir](https://user-images.githubusercontent.com/81666422/120435794-5bfa8980-c3a8-11eb-87f6-20819bf34878.jpg)

# Distribusi Vaksin
## Verdict
![Verdict Distribusi Vaksin](https://user-images.githubusercontent.com/81666422/120436802-97498800-c3a9-11eb-93e7-d5f497bb5a2f.jpg)

## Penjelasan Soal
Pada soal distribusi vaksin diminta untuk menentukan total waktu minimum yang dibutuhkan untuk mengantarkan semua vaksin.

## Penjelasan Solusi
``` Input ```
```
5 6 5  -> ( 5 = rumah, 6 = jalan, 5 = query )
--- u v w ---
    1 2 6
    1 4 12
    3 2 8 
    3 4 4
    3 5 10
    5 4 16
    
--- jalan ---
1
5
2
4
3
```
Karena pada soal sudah diberikan node dan weight masing-masing beberapa. Maka tujuannya untuk mencari jalan terpendek, tetapi jalan yang ditentukan tidak sembarang karena harus melewati path tertentu, jika di soal dijelaskan jalan adalah ``` 1,5,2,4,3 ``` maka pathnya harus sebagai berikut :
``` 1 -> 5 -> 2 -> 4 -> 3 ```, dari sini dapat dilihat bagaimana cara untuk mengetahui jalan terpendek setiap sub-path ada 4 yaitu,
```
1 -> 5
5 -> 2
2 -> 4
4 -> 3
```

Jika sudah mengetahui sub-path maka memakai alogaritma djikstra untuk mengetahui shortest path, maka output anya adalah
``` output ```
```
1 -> 5 = 24
5 -> 2 = 18
2 -> 4 = 12
4 -> 3 = 4
Total 24 + 18 + 12 + 4 = 58.
```

# Cayo Refreshing
## Bukti
![Verdict Cayo Refreshing](https://user-images.githubusercontent.com/81666422/120439394-ad0c7c80-c3ac-11eb-8666-f2437d3fad38.jpg)

## Penjelasan Soal 
Pada soal cayo refreshing diminta untuk menghitung jembatan yang diperlukan untuk menghubungkan semua pulau atau menghitung jumah garis yang diperlukan untuk menghubungkan seua node pada graph 

## Penjelasan Solusi
``` input ```
```
6 4 
3 4
4 2
2 5
1 3
```
```
contoh
1_____3
2_____5
      |
4     6
```
Maka jumlah jembatan yang diperlukan adalah ``` 2 ```. Jembatan pertama untuk menyambungkan ``` 1__3 dan 2__5__6 ``` dan Jembatan kedua digunakan untuk menyambungkan ``` 4```.
Disini menghitung berapa banyak continuous graph dalam satu graph, jika pada contoh diatas graph yang tersambung ialah 3. Maka 3-1 =2. Lalu untuk ```mencari continuous``` memakai ```queue``` yang berisi semua node yang belu di visit, mulai dari node 1 hingga node N, dilanjutkan dengan ``` Breadth First Search (BFS) / Depth First Search (DFS)```. Dimulai dari node tersebut, jika ada node yang ```belum di visit maka ditambahkan pada queue```. 




