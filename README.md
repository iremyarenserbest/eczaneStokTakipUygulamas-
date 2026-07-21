# Eczane Stok, Satış ve Reçete Yönetim Sistemi

Bu proje, C++ kullanılarak geliştirilmiş konsol tabanlı bir eczane otomasyonudur.

## Projenin Amacı

İlaç kayıtlarını, stok durumunu, satış işlemlerini ve hasta reçetelerini tek bir menü üzerinden yönetmek.

## Kullanılan Teknolojiler

- C++
- Konsol tabanlı kullanıcı arayüzü
- Struct veri yapıları
- Fonksiyonlar
- Diziler ve işaretçiler
- Dosya okuma ve yazma işlemleri

## Uygulama Özellikleri

- Yeni ilaç kaydı oluşturma
- İlaç adına göre arama
- Kayıtlı ilaçları listeleme
- Stok miktarını artırma
- Ürün kaydını silme
- Kritik stok seviyelerini kontrol etme
- İlaç satışı gerçekleştirme
- Toplam satış tutarını hesaplama
- Hasta ve reçete bilgilerini kaydetme
- Hasta soyadına göre reçete arama
- Verileri metin dosyalarında kalıcı olarak saklama

## Tutulan İlaç Bilgileri

- İlaç adı
- Üretici firma
- İlaç türü
- Stok miktarı
- Son kullanma tarihi
- Tablet sayısı
- Miligram
- Fiyat

## Tutulan Reçete Bilgileri

- Hasta adı
- Hasta soyadı
- Kan grubu
- Kurum bilgisi
- Kimlik bilgisi
- Reçete tarihi
- Reçetede yer alan ilaçlar

## Derleme

G++ ile derlemek için:

```bash
g++ pharmacy.cpp -o pharmacy
```

Windows üzerinde çalıştırmak için:

```bash
pharmacy.exe
```

Linux veya macOS üzerinde:

```bash
./pharmacy
```

## Önemli Teknik Notlar

Projede geliştirilmesi gereken bazı alanlar bulunmaktadır:

- `fprintf` ile sayı yazdırılırken değişken adresleri değil değerleri kullanılmalıdır.
- `while (feof(fp))` yerine okuma işleminin başarı durumunu kontrol eden döngüler tercih edilmelidir.
- `strcmp` ile yapılan koşullardan sonra gereksiz noktalı virgül kullanılmamalıdır.
- Karşılaştırmalarda `=` yerine `==` kullanılmalıdır.
- Menü çıkış koşulundaki gereksiz noktalı virgül kaldırılmalıdır.
- Hasta kimlik numarası sayısal tür yerine metin olarak saklanmalıdır.

## Geliştirme Fikirleri

- Kod yapısını sınıflara ayırmak
- C tarzı dosya işlemleri yerine `fstream` kullanmak
- Verileri CSV veya SQLite veritabanında saklamak
- Girdi doğrulama ve hata yönetimi eklemek
- Grafik kullanıcı arayüzü geliştirmek
- Stok geçmişi ve satış raporu oluşturmak
