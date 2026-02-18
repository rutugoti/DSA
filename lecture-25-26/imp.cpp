
// very impotant q for allcatio it work on the painter allocation problem on gfg and ship allcation onleetcode 1011 wowwww

// class Solution {
//   public:
//     int findPages(vector<int> &arr, int k) {
        
//         int n = arr.size();   // total books
        
//         if (k > n)
//             return -1;  // jo students books karta vadhare hoy to possible nathi
        
//         int start = arr[0];  // minimum possible answer (initially first book)
//         int end = 0;         // maximum possible answer (sum of all books)
        
//         // 🔹 search space prepare kariye
//         for (int i = 0; i < n; i++) {
//             end += arr[i];               // total pages calculate
//             start = max(start, arr[i]);  // largest single book find kariye
//         }
        
//         int ans = -1;  // final answer store karva
        
//         // 🔥 Binary Search start
//         while (start <= end) {
            
//             int mid = start + (end - start) / 2;  
//             // mid = candidate answer (max pages per student)
            
//             int count = 1;   // currently 1 student thi start kariye
//             int pages = 0;   // current student ne allocate thayela pages
            
//             // 🔹 Check kariye ke mid pages ma allocation possible che ke nai
//             for (int i = 0; i < n; i++) {
                
//                 pages += arr[i];  
//                 // current book na pages add kariye
                
//                 if (pages > mid) {
//                     // jo current student ne mid karta vadhare pages thai gaya
                    
//                     count++;        // navo student allocate kariye
//                     pages = arr[i]; // nava student ne aa book thi start karaviye
//                 }
//             }
            
//             // 🔥 Important Decision Part
            
//             if (count <= k) {
//                 // jo required students k karta ochha ke barabar che
//                 // matlab allocation possible che
                
//                 ans = mid;       // mid valid answer che
//                 end = mid - 1;   // try kariye ke aapde vadhare minimum kari shakiye?
//             } 
//             else {
//                 // jo students vadhare thai gaya
//                 // matlab mid bahu nano che
                
//                 start = mid + 1;  // answer vadharo
//             }
//         }
        
//         return ans;  // minimum possible maximum pages
//     }
// };
