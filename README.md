# push_swap
Push_swap, bize algoritmaları sıralamayı ve bunların nasıl optimize edileceğini öğreten bir projedir. Proje, sınırlı sayıda işlem (itme, değiştirme ve döndürme) kullanarak bir tamsayı yığınını sıralamayı ve hareket sayısını en aza indirmeyi içerir.

Başlangıçta, stack a tüm numaralarınızın yan yana yerleştirildiği çağrılan bir yığınınız olmalıdır. Aşağıdaki işlemlerin yardımıyla en sonunda, hesabınızdaki tüm sayıların stack a sıralanması gerekecektir.

stack b, bunu yapmak için öğeleri geçici olarak gönderebileceğiniz ikinci bir boş yığına sahip olabilirsiniz . Kullanabileceğiniz işlemler şunlardır:

- sa (swap a): stack a'nın en üstündeki ilk 2 öğenin yerini değiştirir. Yalnızca bir tane sayı varsa veya hiç yoksa hiçbir şey yapmaz.

- sb (swap b): stack b'nin en üstündeki ilk 2 öğenin yerini değiştirir. Yalnızca bir tane sayı varsa veya hiç yoksa hiçbir şey yapmaz.

- ss: sa'yı ve sb'yi aynı anda yapar.

- pa (push a): stack b'nin üstündeki ilk elemanı alır ve stack a'nın üstüne koyar. stack b boşsa hiçbir şey yapmaz.

- pb (push b): stack a'nın üstündeki ilk elemanı alır ve stack b'nin üzerine koyar. stack a boşsa hiçbir şey yapmaz.

- ra (rotate a): stack a'nın tüm elemanlarını bir konum yukarı kaydırır. İlk öğeyi stack a'nın sonuna koyar.

- rb (rotate b): stack b'nin tüm elemanlarını bir konum yukarı kaydırır. İlk öğeyi stack b'nin sonuna koyar.

- rr : ra'yı ve rb'yi aynı anda yapar.

- rra(ters döndürme a): stack a'nın tüm öğelerini bir konum aşağı kaydırır. Son öğeyi stack a'nın başına koyar.

- rrb(b'yi ters döndür): stack b'nin tüm öğelerini bir konum aşağı kaydırır. Son öğeyi stack b'nin başına koyar.

- rrr: rra'yı ve rrb'yi aynı anda yapar.
