///week04-2bad.cpp 這程式是對的，用進階 C++ 迴圈
/// 但在CodeBloccks 出錯， warning: range-vased for only available with ...
/// 2011年之後， 只有在  -std=c++11 或 -std=gun++11才能用
/// 所以，需要改一下設定 Settings-Compiler...
/// 選第2個 「使用 C++11 ISO 國際標準的」 C++ 也就是 -std=c++11
/// 下面是 week04 的小考題目 SOIT106_ADVACNE_012
#include <vector>
#include <iostream>
using namespace std;
int main()
{
    vector<int> a;
    int now;
    for (int i=0; i<20; i++) {
        cin >> now;
        if (now==0) break;
        a.push_back(now);
    }
    cin >> now;
    int ans = 0;
    for (int num : a){ /// 在 CodeBlocks 設定出錯時 ，永遠跑不出答案
        if (num==now) ans++;
    }
    cout << ans << "\n";
} /// 截圖時 ，請把 build messages 裡面的藍色的 warnig 也截圖進來
