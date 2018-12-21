#include <iostream>
#include <cstring>
using namespace std;

class String {
private:
    int len;
    char* s;
    int stringlen(const char* str) {
        int count = 0;
        while (*str++ != '\0')
            count++;
        return count;
    }
public:
    String() : len(0), s(nullptr) {}
    String(const char str[]) : len(strlen(str) ), s(new char[len]) {
        for (int i = 0; i < len; i++)
            s[i] = str[i];
    }

    String (const char str[], int mult) : len(strlen(str) * mult), s(new char[len]){
        int strsize = len/mult;
        int c = 0;
        for (int j = 0; j < mult; j++)
            for (int i = 0; i < strsize; i++, c++)
                s[c] = str[i];
    }

    ~String() {delete [] s;}
    String (const String& orig) : len(orig.len), s(new char[len]){
        int* src = (int*) orig.s;
        int* dest = (int*) s;
        int count;
        for (count = len; count >=8; count -=8)
            *dest++ = *src++;
        char* pdest = (char*) dest;
        char* psrc = (char*) src;
        for (; count > 0; count --)
            *pdest++ = *psrc++;
    }

    String& operating =(const String& orig){
        String copy(orig);
        len = orig.len;
        swap(s, copy.s);
        return *this;
    }

    char& operator [] (int pos) {return s[pos]}
    friend ostream& operator << (ostream& s, const String& str) {
        for (int i = 0; i < str.len; i++){
            s << str[i];
        } 
        return s;
    }

};