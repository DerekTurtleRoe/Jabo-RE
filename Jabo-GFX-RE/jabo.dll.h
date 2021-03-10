typedef unsigned char   undefined;

typedef unsigned int    ImageBaseOffset32;
typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
float10
typedef long long    longlong;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef short    wchar_t;
typedef unsigned short    word;
#define unkbyte9   unsigned long long
#define unkbyte10   unsigned long long
#define unkbyte11   unsigned long long
#define unkbyte12   unsigned long long
#define unkbyte13   unsigned long long
#define unkbyte14   unsigned long long
#define unkbyte15   unsigned long long
#define unkbyte16   unsigned long long

#define unkuint9   unsigned long long
#define unkuint10   unsigned long long
#define unkuint11   unsigned long long
#define unkuint12   unsigned long long
#define unkuint13   unsigned long long
#define unkuint14   unsigned long long
#define unkuint15   unsigned long long
#define unkuint16   unsigned long long

#define unkint9   long long
#define unkint10   long long
#define unkint11   long long
#define unkint12   long long
#define unkint13   long long
#define unkint14   long long
#define unkint15   long long
#define unkint16   long long

#define unkfloat1   float
#define unkfloat2   float
#define unkfloat3   float
#define unkfloat5   double
#define unkfloat6   double
#define unkfloat7   double
#define unkfloat9   long double
#define unkfloat11   long double
#define unkfloat12   long double
#define unkfloat13   long double
#define unkfloat14   long double
#define unkfloat15   long double
#define unkfloat16   long double

#define BADSPACEBASE   void
#define code   void

typedef struct _s_HandlerType _s_HandlerType, *P_s_HandlerType;

typedef struct _s_HandlerType HandlerType;

typedef struct TypeDescriptor TypeDescriptor, *PTypeDescriptor;

typedef int ptrdiff_t;

struct TypeDescriptor {
    void * pVFTable;
    void * spare;
    char[0] name;
};

struct _s_HandlerType {
    uint adjectives;
    struct TypeDescriptor * pType;
    ptrdiff_t dispCatchObj;
    void * addressOfHandler;
};

typedef struct _s_UnwindMapEntry _s_UnwindMapEntry, *P_s_UnwindMapEntry;

typedef struct _s_UnwindMapEntry UnwindMapEntry;

typedef int __ehstate_t;

struct _s_UnwindMapEntry {
    __ehstate_t toState;
    void (* action)(void);
};

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion;

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct {
    dword OffsetToDirectory;
    dword DataIsDirectory;
};

union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion {
    dword OffsetToData;
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;
};

typedef struct _s_TryBlockMapEntry _s_TryBlockMapEntry, *P_s_TryBlockMapEntry;

struct _s_TryBlockMapEntry {
    __ehstate_t tryLow;
    __ehstate_t tryHigh;
    __ehstate_t catchHigh;
    int nCatches;
    HandlerType * pHandlerArray;
};

typedef struct _s_FuncInfo _s_FuncInfo, *P_s_FuncInfo;

typedef struct _s_TryBlockMapEntry TryBlockMapEntry;

struct _s_FuncInfo {
    uint magicNumber_and_bbtFlags;
    __ehstate_t maxState;
    UnwindMapEntry * pUnwindMap;
    uint nTryBlocks;
    TryBlockMapEntry * pTryBlockMap;
    uint nIPMapEntries;
    void * pIPToStateMap;
};

typedef unsigned short    wchar16;
typedef struct type_info type_info, *Ptype_info;

struct type_info { // PlaceHolder Class Structure
};

typedef struct _s_FuncInfo FuncInfo;

typedef struct _cpinfo _cpinfo, *P_cpinfo;

typedef uint UINT;

typedef uchar BYTE;

struct _cpinfo {
    UINT MaxCharSize;
    BYTE DefaultChar[2];
    BYTE LeadByte[12];
};

typedef struct _cpinfo * LPCPINFO;

typedef int BOOL;

typedef char CHAR;

typedef CHAR * LPSTR;

typedef BOOL (* LOCALE_ENUMPROCA)(LPSTR);

typedef ulong DWORD;

typedef DWORD LCTYPE;

typedef struct _SYSTEM_INFO _SYSTEM_INFO, *P_SYSTEM_INFO;

typedef struct _SYSTEM_INFO * LPSYSTEM_INFO;

typedef union _union_530 _union_530, *P_union_530;

typedef void * LPVOID;

typedef ulong ULONG_PTR;

typedef ULONG_PTR DWORD_PTR;

typedef ushort WORD;

typedef struct _struct_531 _struct_531, *P_struct_531;

struct _struct_531 {
    WORD wProcessorArchitecture;
    WORD wReserved;
};

union _union_530 {
    DWORD dwOemId;
    struct _struct_531 s;
};

struct _SYSTEM_INFO {
    union _union_530 u;
    DWORD dwPageSize;
    LPVOID lpMinimumApplicationAddress;
    LPVOID lpMaximumApplicationAddress;
    DWORD_PTR dwActiveProcessorMask;
    DWORD dwNumberOfProcessors;
    DWORD dwProcessorType;
    DWORD dwAllocationGranularity;
    WORD wProcessorLevel;
    WORD wProcessorRevision;
};

typedef struct _OVERLAPPED _OVERLAPPED, *P_OVERLAPPED;

typedef union _union_518 _union_518, *P_union_518;

typedef void * HANDLE;

typedef struct _struct_519 _struct_519, *P_struct_519;

typedef void * PVOID;

struct _struct_519 {
    DWORD Offset;
    DWORD OffsetHigh;
};

union _union_518 {
    struct _struct_519 s;
    PVOID Pointer;
};

struct _OVERLAPPED {
    ULONG_PTR Internal;
    ULONG_PTR InternalHigh;
    union _union_518 u;
    HANDLE hEvent;
};

typedef struct _SECURITY_ATTRIBUTES _SECURITY_ATTRIBUTES, *P_SECURITY_ATTRIBUTES;

struct _SECURITY_ATTRIBUTES {
    DWORD nLength;
    LPVOID lpSecurityDescriptor;
    BOOL bInheritHandle;
};

typedef struct _TIME_ZONE_INFORMATION _TIME_ZONE_INFORMATION, *P_TIME_ZONE_INFORMATION;

typedef struct _TIME_ZONE_INFORMATION * LPTIME_ZONE_INFORMATION;

typedef long LONG;

typedef wchar_t WCHAR;

typedef struct _SYSTEMTIME _SYSTEMTIME, *P_SYSTEMTIME;

typedef struct _SYSTEMTIME SYSTEMTIME;

struct _SYSTEMTIME {
    WORD wYear;
    WORD wMonth;
    WORD wDayOfWeek;
    WORD wDay;
    WORD wHour;
    WORD wMinute;
    WORD wSecond;
    WORD wMilliseconds;
};

struct _TIME_ZONE_INFORMATION {
    LONG Bias;
    WCHAR StandardName[32];
    SYSTEMTIME StandardDate;
    LONG StandardBias;
    WCHAR DaylightName[32];
    SYSTEMTIME DaylightDate;
    LONG DaylightBias;
};

typedef struct _WIN32_FIND_DATAA _WIN32_FIND_DATAA, *P_WIN32_FIND_DATAA;

typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _FILETIME FILETIME;

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

struct _WIN32_FIND_DATAA {
    DWORD dwFileAttributes;
    FILETIME ftCreationTime;
    FILETIME ftLastAccessTime;
    FILETIME ftLastWriteTime;
    DWORD nFileSizeHigh;
    DWORD nFileSizeLow;
    DWORD dwReserved0;
    DWORD dwReserved1;
    CHAR cFileName[260];
    CHAR cAlternateFileName[14];
};

typedef struct _OVERLAPPED * LPOVERLAPPED;

typedef struct _SECURITY_ATTRIBUTES * LPSECURITY_ATTRIBUTES;

typedef struct _STARTUPINFOA _STARTUPINFOA, *P_STARTUPINFOA;

typedef BYTE * LPBYTE;

struct _STARTUPINFOA {
    DWORD cb;
    LPSTR lpReserved;
    LPSTR lpDesktop;
    LPSTR lpTitle;
    DWORD dwX;
    DWORD dwY;
    DWORD dwXSize;
    DWORD dwYSize;
    DWORD dwXCountChars;
    DWORD dwYCountChars;
    DWORD dwFillAttribute;
    DWORD dwFlags;
    WORD wShowWindow;
    WORD cbReserved2;
    LPBYTE lpReserved2;
    HANDLE hStdInput;
    HANDLE hStdOutput;
    HANDLE hStdError;
};

typedef struct _WIN32_FIND_DATAA * LPWIN32_FIND_DATAA;

typedef struct _STARTUPINFOA * LPSTARTUPINFOA;

typedef struct _RTL_CRITICAL_SECTION _RTL_CRITICAL_SECTION, *P_RTL_CRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION * PRTL_CRITICAL_SECTION;

typedef PRTL_CRITICAL_SECTION LPCRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION_DEBUG _RTL_CRITICAL_SECTION_DEBUG, *P_RTL_CRITICAL_SECTION_DEBUG;

typedef struct _RTL_CRITICAL_SECTION_DEBUG * PRTL_CRITICAL_SECTION_DEBUG;

typedef struct _LIST_ENTRY _LIST_ENTRY, *P_LIST_ENTRY;

typedef struct _LIST_ENTRY LIST_ENTRY;

struct _RTL_CRITICAL_SECTION {
    PRTL_CRITICAL_SECTION_DEBUG DebugInfo;
    LONG LockCount;
    LONG RecursionCount;
    HANDLE OwningThread;
    HANDLE LockSemaphore;
    ULONG_PTR SpinCount;
};

struct _LIST_ENTRY {
    struct _LIST_ENTRY * Flink;
    struct _LIST_ENTRY * Blink;
};

struct _RTL_CRITICAL_SECTION_DEBUG {
    WORD Type;
    WORD CreatorBackTraceIndex;
    struct _RTL_CRITICAL_SECTION * CriticalSection;
    LIST_ENTRY ProcessLocksList;
    DWORD EntryCount;
    DWORD ContentionCount;
    DWORD Flags;
    WORD CreatorBackTraceIndexHigh;
    WORD SpareWORD;
};

typedef struct _EXCEPTION_POINTERS _EXCEPTION_POINTERS, *P_EXCEPTION_POINTERS;

typedef LONG (* PTOP_LEVEL_EXCEPTION_FILTER)(struct _EXCEPTION_POINTERS *);

typedef struct _EXCEPTION_RECORD _EXCEPTION_RECORD, *P_EXCEPTION_RECORD;

typedef struct _EXCEPTION_RECORD EXCEPTION_RECORD;

typedef EXCEPTION_RECORD * PEXCEPTION_RECORD;

typedef struct _CONTEXT _CONTEXT, *P_CONTEXT;

typedef struct _CONTEXT CONTEXT;

typedef CONTEXT * PCONTEXT;

typedef struct _FLOATING_SAVE_AREA _FLOATING_SAVE_AREA, *P_FLOATING_SAVE_AREA;

typedef struct _FLOATING_SAVE_AREA FLOATING_SAVE_AREA;

struct _FLOATING_SAVE_AREA {
    DWORD ControlWord;
    DWORD StatusWord;
    DWORD TagWord;
    DWORD ErrorOffset;
    DWORD ErrorSelector;
    DWORD DataOffset;
    DWORD DataSelector;
    BYTE RegisterArea[80];
    DWORD Cr0NpxState;
};

struct _CONTEXT {
    DWORD ContextFlags;
    DWORD Dr0;
    DWORD Dr1;
    DWORD Dr2;
    DWORD Dr3;
    DWORD Dr6;
    DWORD Dr7;
    FLOATING_SAVE_AREA FloatSave;
    DWORD SegGs;
    DWORD SegFs;
    DWORD SegEs;
    DWORD SegDs;
    DWORD Edi;
    DWORD Esi;
    DWORD Ebx;
    DWORD Edx;
    DWORD Ecx;
    DWORD Eax;
    DWORD Ebp;
    DWORD Eip;
    DWORD SegCs;
    DWORD EFlags;
    DWORD Esp;
    DWORD SegSs;
    BYTE ExtendedRegisters[512];
};

struct _EXCEPTION_RECORD {
    DWORD ExceptionCode;
    DWORD ExceptionFlags;
    struct _EXCEPTION_RECORD * ExceptionRecord;
    PVOID ExceptionAddress;
    DWORD NumberParameters;
    ULONG_PTR ExceptionInformation[15];
};

struct _EXCEPTION_POINTERS {
    PEXCEPTION_RECORD ExceptionRecord;
    PCONTEXT ContextRecord;
};

typedef struct _SYSTEMTIME * LPSYSTEMTIME;

typedef PTOP_LEVEL_EXCEPTION_FILTER LPTOP_LEVEL_EXCEPTION_FILTER;

typedef struct _strflt _strflt, *P_strflt;

struct _strflt {
    int sign;
    int decpt;
    int flag;
    char * mantissa;
};

typedef struct _strflt * STRFLT;

typedef enum enum_3272 {
    INTRNCVT_OVERFLOW=1,
    INTRNCVT_UNDERFLOW=2,
    INTRNCVT_OK=0
} enum_3272;

typedef enum enum_3272 INTRNCVT_STATUS;

typedef struct _iobuf _iobuf, *P_iobuf;

struct _iobuf {
    char * _ptr;
    int _cnt;
    char * _base;
    int _flag;
    int _file;
    int _charbuf;
    int _bufsiz;
    char * _tmpfname;
};

typedef struct _iobuf FILE;

typedef char * va_list;

typedef uint uintptr_t;

typedef struct tagOFNA tagOFNA, *PtagOFNA;

typedef struct tagOFNA * LPOPENFILENAMEA;

typedef struct HWND__ HWND__, *PHWND__;

typedef struct HWND__ * HWND;

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

typedef struct HINSTANCE__ * HINSTANCE;

typedef CHAR * LPCSTR;

typedef long LONG_PTR;

typedef LONG_PTR LPARAM;

typedef uint UINT_PTR;

typedef UINT_PTR WPARAM;

typedef UINT_PTR (* LPOFNHOOKPROC)(HWND, UINT, WPARAM, LPARAM);

struct tagOFNA {
    DWORD lStructSize;
    HWND hwndOwner;
    HINSTANCE hInstance;
    LPCSTR lpstrFilter;
    LPSTR lpstrCustomFilter;
    DWORD nMaxCustFilter;
    DWORD nFilterIndex;
    LPSTR lpstrFile;
    DWORD nMaxFile;
    LPSTR lpstrFileTitle;
    DWORD nMaxFileTitle;
    LPCSTR lpstrInitialDir;
    LPCSTR lpstrTitle;
    DWORD Flags;
    WORD nFileOffset;
    WORD nFileExtension;
    LPCSTR lpstrDefExt;
    LPARAM lCustData;
    LPOFNHOOKPROC lpfnHook;
    LPCSTR lpTemplateName;
    void * pvReserved;
    DWORD dwReserved;
    DWORD FlagsEx;
};

struct HINSTANCE__ {
    int unused;
};

struct HWND__ {
    int unused;
};

typedef struct lconv lconv, *Plconv;

struct lconv {
    char * decimal_point;
    char * thousands_sep;
    char * grouping;
    char * int_curr_symbol;
    char * currency_symbol;
    char * mon_decimal_point;
    char * mon_thousands_sep;
    char * mon_grouping;
    char * positive_sign;
    char * negative_sign;
    char int_frac_digits;
    char frac_digits;
    char p_cs_precedes;
    char p_sep_by_space;
    char n_cs_precedes;
    char n_sep_by_space;
    char p_sign_posn;
    char n_sign_posn;
    wchar_t * _W_decimal_point;
    wchar_t * _W_thousands_sep;
    wchar_t * _W_int_curr_symbol;
    wchar_t * _W_currency_symbol;
    wchar_t * _W_mon_decimal_point;
    wchar_t * _W_mon_thousands_sep;
    wchar_t * _W_positive_sign;
    wchar_t * _W_negative_sign;
};

typedef struct threadlocaleinfostruct threadlocaleinfostruct, *Pthreadlocaleinfostruct;

typedef struct threadlocaleinfostruct * pthreadlocinfo;

typedef struct localerefcount localerefcount, *Plocalerefcount;

typedef struct localerefcount locrefcount;

typedef struct __lc_time_data __lc_time_data, *P__lc_time_data;

struct localerefcount {
    char * locale;
    wchar_t * wlocale;
    int * refcount;
    int * wrefcount;
};

struct threadlocaleinfostruct {
    int refcount;
    uint lc_codepage;
    uint lc_collate_cp;
    uint lc_time_cp;
    locrefcount lc_category[6];
    int lc_clike;
    int mb_cur_max;
    int * lconv_intl_refcount;
    int * lconv_num_refcount;
    int * lconv_mon_refcount;
    struct lconv * lconv;
    int * ctype1_refcount;
    ushort * ctype1;
    ushort * pctype;
    uchar * pclmap;
    uchar * pcumap;
    struct __lc_time_data * lc_time_curr;
    wchar_t * locale_name[6];
};

struct __lc_time_data {
    char * wday_abbr[7];
    char * wday[7];
    char * month_abbr[12];
    char * month[12];
    char * ampm[2];
    char * ww_sdatefmt;
    char * ww_ldatefmt;
    char * ww_timefmt;
    int ww_caltype;
    int refcount;
    wchar_t * _W_wday_abbr[7];
    wchar_t * _W_wday[7];
    wchar_t * _W_month_abbr[12];
    wchar_t * _W_month[12];
    wchar_t * _W_ampm[2];
    wchar_t * _W_ww_sdatefmt;
    wchar_t * _W_ww_ldatefmt;
    wchar_t * _W_ww_timefmt;
    wchar_t * _W_ww_locale_name;
};

typedef long __time32_t;

typedef struct threadlocaleinfostruct threadlocinfo;

typedef uint size_t;

typedef struct localeinfo_struct localeinfo_struct, *Plocaleinfo_struct;

typedef struct threadmbcinfostruct threadmbcinfostruct, *Pthreadmbcinfostruct;

typedef struct threadmbcinfostruct * pthreadmbcinfo;

struct threadmbcinfostruct {
    int refcount;
    int mbcodepage;
    int ismbcodepage;
    ushort mbulinfo[6];
    uchar mbctype[257];
    uchar mbcasemap[256];
    wchar_t * mblocalename;
};

struct localeinfo_struct {
    pthreadlocinfo locinfo;
    pthreadmbcinfo mbcinfo;
};

typedef int errno_t;

typedef int intptr_t;

typedef struct localeinfo_struct * _locale_t;

typedef longlong __time64_t;

typedef __time64_t time_t;

typedef struct DLGTEMPLATE DLGTEMPLATE, *PDLGTEMPLATE;

typedef struct DLGTEMPLATE * LPCDLGTEMPLATEA;

struct DLGTEMPLATE {
    DWORD style;
    DWORD dwExtendedStyle;
    WORD cdit;
    short x;
    short y;
    short cx;
    short cy;
};

typedef struct tagMSG tagMSG, *PtagMSG;

typedef struct tagMSG MSG;

typedef struct tagPOINT tagPOINT, *PtagPOINT;

typedef struct tagPOINT POINT;

struct tagPOINT {
    LONG x;
    LONG y;
};

struct tagMSG {
    HWND hwnd;
    UINT message;
    WPARAM wParam;
    LPARAM lParam;
    DWORD time;
    POINT pt;
};

typedef BOOL (* WNDENUMPROC)(HWND, LPARAM);

typedef struct tagMONITORINFO tagMONITORINFO, *PtagMONITORINFO;

typedef struct tagMONITORINFO * LPMONITORINFO;

typedef struct tagRECT tagRECT, *PtagRECT;

typedef struct tagRECT RECT;

struct tagRECT {
    LONG left;
    LONG top;
    LONG right;
    LONG bottom;
};

struct tagMONITORINFO {
    DWORD cbSize;
    RECT rcMonitor;
    RECT rcWork;
    DWORD dwFlags;
};

typedef struct tagMSG * LPMSG;

typedef LPCDLGTEMPLATEA LPCDLGTEMPLATE;

typedef int INT_PTR;

typedef INT_PTR (* DLGPROC)(HWND, UINT, WPARAM, LPARAM);

typedef struct tagLOGFONTA tagLOGFONTA, *PtagLOGFONTA;

struct tagLOGFONTA {
    LONG lfHeight;
    LONG lfWidth;
    LONG lfEscapement;
    LONG lfOrientation;
    LONG lfWeight;
    BYTE lfItalic;
    BYTE lfUnderline;
    BYTE lfStrikeOut;
    BYTE lfCharSet;
    BYTE lfOutPrecision;
    BYTE lfClipPrecision;
    BYTE lfQuality;
    BYTE lfPitchAndFamily;
    CHAR lfFaceName[32];
};

typedef struct tagLOGFONTA LOGFONTA;

typedef struct tagRGBQUAD tagRGBQUAD, *PtagRGBQUAD;

typedef struct tagRGBQUAD RGBQUAD;

struct tagRGBQUAD {
    BYTE rgbBlue;
    BYTE rgbGreen;
    BYTE rgbRed;
    BYTE rgbReserved;
};

typedef struct tagBITMAPINFOHEADER tagBITMAPINFOHEADER, *PtagBITMAPINFOHEADER;

typedef struct tagBITMAPINFOHEADER BITMAPINFOHEADER;

struct tagBITMAPINFOHEADER {
    DWORD biSize;
    LONG biWidth;
    LONG biHeight;
    WORD biPlanes;
    WORD biBitCount;
    DWORD biCompression;
    DWORD biSizeImage;
    LONG biXPelsPerMeter;
    LONG biYPelsPerMeter;
    DWORD biClrUsed;
    DWORD biClrImportant;
};

typedef struct tagBITMAPINFO tagBITMAPINFO, *PtagBITMAPINFO;

typedef struct tagBITMAPINFO BITMAPINFO;

struct tagBITMAPINFO {
    BITMAPINFOHEADER bmiHeader;
    RGBQUAD bmiColors[1];
};

typedef struct _MEMORY_BASIC_INFORMATION _MEMORY_BASIC_INFORMATION, *P_MEMORY_BASIC_INFORMATION;

typedef ULONG_PTR SIZE_T;

struct _MEMORY_BASIC_INFORMATION {
    PVOID BaseAddress;
    PVOID AllocationBase;
    DWORD AllocationProtect;
    SIZE_T RegionSize;
    DWORD State;
    DWORD Protect;
    DWORD Type;
};

typedef union _LARGE_INTEGER _LARGE_INTEGER, *P_LARGE_INTEGER;

typedef struct _struct_19 _struct_19, *P_struct_19;

typedef struct _struct_20 _struct_20, *P_struct_20;

typedef double LONGLONG;

struct _struct_20 {
    DWORD LowPart;
    LONG HighPart;
};

struct _struct_19 {
    DWORD LowPart;
    LONG HighPart;
};

union _LARGE_INTEGER {
    struct _struct_19 s;
    struct _struct_20 u;
    LONGLONG QuadPart;
};

typedef union _LARGE_INTEGER LARGE_INTEGER;

typedef WCHAR * LPWSTR;

typedef WCHAR * PCNZWCH;

typedef WCHAR * LPWCH;

typedef WCHAR * LPCWSTR;

typedef struct _MEMORY_BASIC_INFORMATION * PMEMORY_BASIC_INFORMATION;

typedef LONG * PLONG;

typedef CHAR * LPCH;

typedef struct _OSVERSIONINFOA _OSVERSIONINFOA, *P_OSVERSIONINFOA;

struct _OSVERSIONINFOA {
    DWORD dwOSVersionInfoSize;
    DWORD dwMajorVersion;
    DWORD dwMinorVersion;
    DWORD dwBuildNumber;
    DWORD dwPlatformId;
    CHAR szCSDVersion[128];
};

typedef struct _OSVERSIONINFOA * LPOSVERSIONINFOA;

typedef DWORD LCID;

typedef CHAR * PCNZCH;

typedef struct IMAGE_DOS_HEADER IMAGE_DOS_HEADER, *PIMAGE_DOS_HEADER;

struct IMAGE_DOS_HEADER {
    char e_magic[2]; // Magic number
    word e_cblp; // Bytes of last page
    word e_cp; // Pages in file
    word e_crlc; // Relocations
    word e_cparhdr; // Size of header in paragraphs
    word e_minalloc; // Minimum extra paragraphs needed
    word e_maxalloc; // Maximum extra paragraphs needed
    word e_ss; // Initial (relative) SS value
    word e_sp; // Initial SP value
    word e_csum; // Checksum
    word e_ip; // Initial IP value
    word e_cs; // Initial (relative) CS value
    word e_lfarlc; // File address of relocation table
    word e_ovno; // Overlay number
    word e_res[4][4]; // Reserved words
    word e_oemid; // OEM identifier (for e_oeminfo)
    word e_oeminfo; // OEM information; e_oemid specific
    word e_res2[10][10]; // Reserved words
    dword e_lfanew; // File address of new exe header
    byte e_program[64]; // Actual DOS program
};

typedef struct tm tm, *Ptm;

struct tm {
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
};

typedef LPCDLGTEMPLATE PROPSHEETPAGE_RESOURCE;

typedef struct _PSP _PSP, *P_PSP;

struct _PSP {
};

typedef struct _PROPSHEETPAGEA _PROPSHEETPAGEA, *P_PROPSHEETPAGEA;

typedef union _union_1933 _union_1933, *P_union_1933;

typedef union _union_1934 _union_1934, *P_union_1934;

typedef UINT (* LPFNPSPCALLBACKA)(HWND, UINT, struct _PROPSHEETPAGEA *);

typedef union _union_1935 _union_1935, *P_union_1935;

typedef struct HICON__ HICON__, *PHICON__;

typedef struct HICON__ * HICON;

typedef struct HBITMAP__ HBITMAP__, *PHBITMAP__;

typedef struct HBITMAP__ * HBITMAP;

struct HBITMAP__ {
    int unused;
};

union _union_1934 {
    HICON hIcon;
    LPCSTR pszIcon;
};

union _union_1935 {
    HBITMAP hbmHeader;
    LPCSTR pszbmHeader;
};

struct HICON__ {
    int unused;
};

union _union_1933 {
    LPCSTR pszTemplate;
    PROPSHEETPAGE_RESOURCE pResource;
};

struct _PROPSHEETPAGEA {
    DWORD dwSize;
    DWORD dwFlags;
    HINSTANCE hInstance;
    union _union_1933 u;
    union _union_1934 u2;
    LPCSTR pszTitle;
    DLGPROC pfnDlgProc;
    LPARAM lParam;
    LPFNPSPCALLBACKA pfnCallback;
    UINT * pcRefParent;
    LPCSTR pszHeaderTitle;
    LPCSTR pszHeaderSubTitle;
    HANDLE hActCtx;
    union _union_1935 u3;
};

typedef struct _PSP * HPROPSHEETPAGE;

typedef struct _PROPSHEETHEADERA_V2 _PROPSHEETHEADERA_V2, *P_PROPSHEETHEADERA_V2;

typedef struct _PROPSHEETHEADERA_V2 PROPSHEETHEADERA_V2;

typedef PROPSHEETHEADERA_V2 * LPCPROPSHEETHEADERA_V2;

typedef LPCPROPSHEETHEADERA_V2 LPCPROPSHEETHEADERA;

typedef union _union_1954 _union_1954, *P_union_1954;

typedef union _union_1955 _union_1955, *P_union_1955;

typedef union _union_1956 _union_1956, *P_union_1956;

typedef int (* PFNPROPSHEETCALLBACK)(HWND, UINT, LPARAM);

typedef union _union_1957 _union_1957, *P_union_1957;

typedef struct HPALETTE__ HPALETTE__, *PHPALETTE__;

typedef struct HPALETTE__ * HPALETTE;

typedef union _union_1958 _union_1958, *P_union_1958;

typedef struct _PROPSHEETPAGEA PROPSHEETPAGEA_V4;

typedef PROPSHEETPAGEA_V4 * LPCPROPSHEETPAGEA_V4;

typedef LPCPROPSHEETPAGEA_V4 LPCPROPSHEETPAGEA;

union _union_1956 {
    LPCPROPSHEETPAGEA ppsp;
    HPROPSHEETPAGE * phpage;
};

union _union_1957 {
    HBITMAP hbmWatermark;
    LPCSTR pszbmWatermark;
};

struct HPALETTE__ {
    int unused;
};

union _union_1958 {
    HBITMAP hbmHeader;
    LPCSTR pszbmHeader;
};

union _union_1954 {
    HICON hIcon;
    LPCSTR pszIcon;
};

union _union_1955 {
    UINT nStartPage;
    LPCSTR pStartPage;
};

struct _PROPSHEETHEADERA_V2 {
    DWORD dwSize;
    DWORD dwFlags;
    HWND hwndParent;
    HINSTANCE hInstance;
    union _union_1954 u;
    LPCSTR pszCaption;
    UINT nPages;
    union _union_1955 u2;
    union _union_1956 u3;
    PFNPROPSHEETCALLBACK pfnCallback;
    union _union_1957 u4;
    HPALETTE hplWatermark;
    union _union_1958 u5;
};

typedef struct tagLC_STRINGS tagLC_STRINGS, *PtagLC_STRINGS;

struct tagLC_STRINGS {
    wchar_t szLanguage[64];
    wchar_t szCountry[64];
    wchar_t szCodePage[16];
    wchar_t szLocaleName[85];
};

typedef struct tagLC_STRINGS * LPLC_STRINGS;

typedef struct HFONT__ HFONT__, *PHFONT__;

typedef struct HFONT__ * HFONT;

struct HFONT__ {
    int unused;
};

typedef struct HKEY__ HKEY__, *PHKEY__;

struct HKEY__ {
    int unused;
};

typedef DWORD * LPDWORD;

typedef DWORD * PDWORD;

typedef struct HDC__ HDC__, *PHDC__;

struct HDC__ {
    int unused;
};

typedef struct HMONITOR__ HMONITOR__, *PHMONITOR__;

typedef struct HMONITOR__ * HMONITOR;

struct HMONITOR__ {
    int unused;
};

typedef HINSTANCE HMODULE;

typedef struct HMENU__ HMENU__, *PHMENU__;

typedef struct HMENU__ * HMENU;

struct HMENU__ {
    int unused;
};

typedef struct _FILETIME * LPFILETIME;

typedef int (* FARPROC)(void);

typedef struct HDC__ * HDC;

typedef WORD * LPWORD;

typedef struct HKEY__ * HKEY;

typedef HKEY * PHKEY;

typedef LONG_PTR LRESULT;

typedef struct tagRECT * LPRECT;

typedef BOOL * LPBOOL;

typedef void * HGDIOBJ;

typedef void * LPCVOID;

typedef DWORD COLORREF;

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY IMAGE_RESOURCE_DIRECTORY_ENTRY, *PIMAGE_RESOURCE_DIRECTORY_ENTRY;

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion;

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct {
    dword NameOffset;
    dword NameIsString;
};

union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion {
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;
    dword Name;
    word Id;
};

union IMAGE_RESOURCE_DIRECTORY_ENTRY {
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion NameUnion;
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion DirectoryUnion;
};

typedef struct StringTable StringTable, *PStringTable;

struct StringTable {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct IMAGE_OPTIONAL_HEADER32 IMAGE_OPTIONAL_HEADER32, *PIMAGE_OPTIONAL_HEADER32;

typedef struct IMAGE_DATA_DIRECTORY IMAGE_DATA_DIRECTORY, *PIMAGE_DATA_DIRECTORY;

struct IMAGE_DATA_DIRECTORY {
    ImageBaseOffset32 VirtualAddress;
    dword Size;
};

struct IMAGE_OPTIONAL_HEADER32 {
    word Magic;
    byte MajorLinkerVersion;
    byte MinorLinkerVersion;
    dword SizeOfCode;
    dword SizeOfInitializedData;
    dword SizeOfUninitializedData;
    ImageBaseOffset32 AddressOfEntryPoint;
    ImageBaseOffset32 BaseOfCode;
    ImageBaseOffset32 BaseOfData;
    pointer32 ImageBase;
    dword SectionAlignment;
    dword FileAlignment;
    word MajorOperatingSystemVersion;
    word MinorOperatingSystemVersion;
    word MajorImageVersion;
    word MinorImageVersion;
    word MajorSubsystemVersion;
    word MinorSubsystemVersion;
    dword Win32VersionValue;
    dword SizeOfImage;
    dword SizeOfHeaders;
    dword CheckSum;
    word Subsystem;
    word DllCharacteristics;
    dword SizeOfStackReserve;
    dword SizeOfStackCommit;
    dword SizeOfHeapReserve;
    dword SizeOfHeapCommit;
    dword LoaderFlags;
    dword NumberOfRvaAndSizes;
    struct IMAGE_DATA_DIRECTORY DataDirectory[16];
};

typedef struct IMAGE_SECTION_HEADER IMAGE_SECTION_HEADER, *PIMAGE_SECTION_HEADER;

typedef union Misc Misc, *PMisc;

typedef enum SectionFlags {
    IMAGE_SCN_ALIGN_2BYTES=2097152,
    IMAGE_SCN_ALIGN_128BYTES=8388608,
    IMAGE_SCN_LNK_INFO=512,
    IMAGE_SCN_ALIGN_4096BYTES=13631488,
    IMAGE_SCN_MEM_READ=1073741824,
    IMAGE_SCN_ALIGN_8BYTES=4194304,
    IMAGE_SCN_ALIGN_64BYTES=7340032,
    IMAGE_SCN_ALIGN_256BYTES=9437184,
    IMAGE_SCN_MEM_WRITE=2147483648,
    IMAGE_SCN_LNK_COMDAT=4096,
    IMAGE_SCN_MEM_16BIT=131072,
    IMAGE_SCN_ALIGN_8192BYTES=14680064,
    IMAGE_SCN_MEM_PURGEABLE=131072,
    IMAGE_SCN_GPREL=32768,
    IMAGE_SCN_MEM_EXECUTE=536870912,
    IMAGE_SCN_ALIGN_4BYTES=3145728,
    IMAGE_SCN_LNK_OTHER=256,
    IMAGE_SCN_MEM_PRELOAD=524288,
    IMAGE_SCN_ALIGN_1BYTES=1048576,
    IMAGE_SCN_MEM_NOT_PAGED=134217728,
    IMAGE_SCN_ALIGN_1024BYTES=11534336,
    IMAGE_SCN_RESERVED_0001=16,
    IMAGE_SCN_MEM_LOCKED=262144,
    IMAGE_SCN_ALIGN_512BYTES=10485760,
    IMAGE_SCN_CNT_INITIALIZED_DATA=64,
    IMAGE_SCN_ALIGN_32BYTES=6291456,
    IMAGE_SCN_MEM_DISCARDABLE=33554432,
    IMAGE_SCN_CNT_UNINITIALIZED_DATA=128,
    IMAGE_SCN_ALIGN_2048BYTES=12582912,
    IMAGE_SCN_MEM_SHARED=268435456,
    IMAGE_SCN_CNT_CODE=32,
    IMAGE_SCN_LNK_REMOVE=2048,
    IMAGE_SCN_ALIGN_16BYTES=5242880,
    IMAGE_SCN_TYPE_NO_PAD=8,
    IMAGE_SCN_LNK_NRELOC_OVFL=16777216,
    IMAGE_SCN_RESERVED_0040=1024,
    IMAGE_SCN_MEM_NOT_CACHED=67108864
} SectionFlags;

union Misc {
    dword PhysicalAddress;
    dword VirtualSize;
};

struct IMAGE_SECTION_HEADER {
    char Name[8];
    union Misc Misc;
    ImageBaseOffset32 VirtualAddress;
    dword SizeOfRawData;
    dword PointerToRawData;
    dword PointerToRelocations;
    dword PointerToLinenumbers;
    word NumberOfRelocations;
    word NumberOfLinenumbers;
    enum SectionFlags Characteristics;
};

typedef struct Var Var, *PVar;

struct Var {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct VS_VERSION_INFO VS_VERSION_INFO, *PVS_VERSION_INFO;

struct VS_VERSION_INFO {
    word StructLength;
    word ValueLength;
    word StructType;
    wchar16 Info[16];
    byte Padding[2];
    dword Signature;
    word StructVersion[2];
    word FileVersion[4];
    word ProductVersion[4];
    dword FileFlagsMask[2];
    dword FileFlags;
    dword FileOS;
    dword FileType;
    dword FileSubtype;
    dword FileTimestamp;
};

typedef struct IMAGE_RESOURCE_DATA_ENTRY IMAGE_RESOURCE_DATA_ENTRY, *PIMAGE_RESOURCE_DATA_ENTRY;

struct IMAGE_RESOURCE_DATA_ENTRY {
    dword OffsetToData;
    dword Size;
    dword CodePage;
    dword Reserved;
};

typedef struct VarFileInfo VarFileInfo, *PVarFileInfo;

struct VarFileInfo {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct IMAGE_RESOURCE_DIRECTORY IMAGE_RESOURCE_DIRECTORY, *PIMAGE_RESOURCE_DIRECTORY;

struct IMAGE_RESOURCE_DIRECTORY {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    word NumberOfNamedEntries;
    word NumberOfIdEntries;
};

typedef struct IMAGE_DIRECTORY_ENTRY_EXPORT IMAGE_DIRECTORY_ENTRY_EXPORT, *PIMAGE_DIRECTORY_ENTRY_EXPORT;

struct IMAGE_DIRECTORY_ENTRY_EXPORT {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    dword Name;
    dword Base;
    dword NumberOfFunctions;
    dword NumberOfNames;
    dword AddressOfFunctions;
    dword AddressOfNames;
    dword AddressOfNameOrdinals;
};

typedef struct IMAGE_FILE_HEADER IMAGE_FILE_HEADER, *PIMAGE_FILE_HEADER;

struct IMAGE_FILE_HEADER {
    word Machine; // 332
    word NumberOfSections;
    dword TimeDateStamp;
    dword PointerToSymbolTable;
    dword NumberOfSymbols;
    word SizeOfOptionalHeader;
    word Characteristics;
};

typedef struct StringInfo StringInfo, *PStringInfo;

struct StringInfo {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct IMAGE_NT_HEADERS32 IMAGE_NT_HEADERS32, *PIMAGE_NT_HEADERS32;

struct IMAGE_NT_HEADERS32 {
    char Signature[4];
    struct IMAGE_FILE_HEADER FileHeader;
    struct IMAGE_OPTIONAL_HEADER32 OptionalHeader;
};

typedef struct StringFileInfo StringFileInfo, *PStringFileInfo;

struct StringFileInfo {
    word wLength;
    word wValueLength;
    word wType;
};

typedef LONG LSTATUS;

typedef struct timecaps_tag timecaps_tag, *Ptimecaps_tag;

typedef struct timecaps_tag * LPTIMECAPS;

struct timecaps_tag {
    UINT wPeriodMin;
    UINT wPeriodMax;
};

typedef UINT MMRESULT;

typedef struct _tiddata _tiddata, *P_tiddata;

typedef struct _tiddata * _ptiddata;

typedef struct setloc_struct setloc_struct, *Psetloc_struct;

typedef struct setloc_struct _setloc_struct;

typedef struct _is_ctype_compatible _is_ctype_compatible, *P_is_ctype_compatible;

struct _is_ctype_compatible {
    ulong id;
    int is_clike;
};

struct setloc_struct {
    wchar_t * pchLanguage;
    wchar_t * pchCountry;
    int iLocState;
    int iPrimaryLen;
    BOOL bAbbrevLanguage;
    BOOL bAbbrevCountry;
    UINT _cachecp;
    wchar_t _cachein[131];
    wchar_t _cacheout[131];
    struct _is_ctype_compatible _Loc_c[5];
    wchar_t _cacheLocaleName[85];
};

struct _tiddata {
    ulong _tid;
    uintptr_t _thandle;
    int _terrno;
    ulong _tdoserrno;
    uint _fpds;
    ulong _holdrand;
    char * _token;
    wchar_t * _wtoken;
    uchar * _mtoken;
    char * _errmsg;
    wchar_t * _werrmsg;
    char * _namebuf0;
    wchar_t * _wnamebuf0;
    char * _namebuf1;
    wchar_t * _wnamebuf1;
    char * _asctimebuf;
    wchar_t * _wasctimebuf;
    void * _gmtimebuf;
    char * _cvtbuf;
    uchar _con_ch_buf[5];
    ushort _ch_buf_used;
    void * _initaddr;
    void * _initarg;
    void * _pxcptacttab;
    void * _tpxcptinfoptrs;
    int _tfpecode;
    pthreadmbcinfo ptmbcinfo;
    pthreadlocinfo ptlocinfo;
    int _ownlocale;
    ulong _NLG_dwCode;
    void * _terminate;
    void * _unexpected;
    void * _translator;
    void * _purecall;
    void * _curexception;
    void * _curcontext;
    int _ProcessingThrow;
    void * _curexcspec;
    void * _pFrameInfoChain;
    _setloc_struct _setloc_data;
    void * _reserved1;
    void * _reserved2;
    void * _reserved3;
    void * _reserved4;
    void * _reserved5;
    int _cxxReThrow;
    ulong __initDomain;
    int _initapartment;
};

typedef struct EHRegistrationNode EHRegistrationNode, *PEHRegistrationNode;

struct EHRegistrationNode { // PlaceHolder Structure
};

typedef struct _s_CatchableType _s_CatchableType, *P_s_CatchableType;

struct _s_CatchableType { // PlaceHolder Structure
};

typedef enum _EXCEPTION_DISPOSITION {
} _EXCEPTION_DISPOSITION;

typedef struct PMD PMD, *PPMD;

struct PMD { // PlaceHolder Structure
};

typedef struct EHExceptionRecord EHExceptionRecord, *PEHExceptionRecord;

struct EHExceptionRecord { // PlaceHolder Structure
};

typedef struct TranslatorGuardRN TranslatorGuardRN, *PTranslatorGuardRN;

struct TranslatorGuardRN { // PlaceHolder Structure
};

typedef struct FrameInfo FrameInfo, *PFrameInfo;

struct FrameInfo { // PlaceHolder Structure
};

typedef struct _s_ThrowInfo _s_ThrowInfo, *P_s_ThrowInfo;

struct _s_ThrowInfo { // PlaceHolder Structure
};

typedef struct _LDBL12 _LDBL12, *P_LDBL12;

struct _LDBL12 {
    uchar ld12[12];
};

typedef int (* _onexit_t)(void);

typedef struct _CRT_DOUBLE _CRT_DOUBLE, *P_CRT_DOUBLE;

struct _CRT_DOUBLE {
    double x;
};




uint __cdecl FUN_10001000(uint param_1);
void __thiscall FUN_10001040(void *this,undefined4 param_1,int param_2,int param_3);
void __thiscall FUN_10001080(void *this,int *param_1,uint param_2);
void __fastcall FUN_10001110(int param_1);
int * __thiscall FUN_10001170(void *this,uint param_1,uint param_2,int param_3);
void __thiscall FUN_10001270(void *this,uint param_1);
void __thiscall FUN_10001330(void *this,int param_1,uint param_2);
void __thiscall FUN_100013c0(void *this,undefined4 *param_1);
undefined4 __fastcall FUN_100015e0(int param_1);
void __thiscall FUN_10001700(void *this,int param_1,int param_2,int param_3,int param_4,undefined4 param_5,undefined4 param_6);
void __thiscall FUN_10001790(void *this,undefined4 param_1,undefined4 param_2,uint param_3,uint param_4);
void __thiscall FUN_100017e0(void *this,int param_1,int param_2,uint param_3,int param_4);
void __thiscall FUN_100019d0(void *this,undefined (*param_1) [16],int param_2,undefined4 param_3,undefined4 param_4,uint param_5,uint *param_6,byte param_7);
void __cdecl FUN_10001ff0(undefined4 param_1);
void __thiscall FUN_10002090(void *this,int param_1);
void __thiscall FUN_10002160(void *this,int param_1,undefined4 *param_2,int param_3);
void __thiscall FUN_100022e0(void *this,int param_1,undefined4 param_2,int param_3);
void __fastcall FUN_10002410(int param_1);
void __thiscall FUN_10002460(void *this,int param_1,int param_2);
void __thiscall FUN_100024c0(void *this,undefined4 param_1,int param_2,int param_3);
void __thiscall FUN_10002560(void *this,int *param_1,uint param_2);
void __thiscall FUN_10002600(void *this,int param_1,int param_2);
void __thiscall FUN_10002660(void *this,int param_1,int param_2);
void __thiscall FUN_100026c0(void *this,int param_1);
void __thiscall FUN_10002720(void *this,int param_1);
void __thiscall FUN_100027c0(void *this,int param_1,int param_2);
void __fastcall FUN_100028a0(int param_1);
void __thiscall FUN_10002940(void *this,int param_1);
int __thiscall FUN_100029e0(void *this,uint *param_1,uint param_2,uint param_3,int param_4);
undefined4 __thiscall FUN_10002c10(void *this,undefined4 param_1,int *param_2);
undefined4 __thiscall FUN_10002df0(void *this,char *param_1);
void FUN_10002e70(undefined4 param_1,undefined4 param_2,int param_3,undefined *param_4);
void __cdecl FUN_10002eb0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_10002ef0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_10002f10(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __fastcall FUN_10002f50(uint *param_1);
void __thiscall FUN_10002f70(void *this,int *param_1);
void __fastcall FUN_10003030(int param_1);
void __fastcall FUN_100030f0(int param_1);
void __fastcall FUN_100031b0(int param_1);
int __fastcall FUN_10003a10(int param_1);
void __thiscall FUN_10003c20(void *this,int param_1);
void __fastcall FUN_10003ef0(undefined4 *param_1);
void __thiscall FUN_10004270(void *this,char param_1,int param_2,int param_3);
void __thiscall FUN_100043f0(void *this,float *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,uint param_5);
void __cdecl FUN_10004ab0(int param_1,int param_2,undefined4 *param_3);
void __cdecl FUN_10004ae0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_10004b20(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __fastcall FUN_10004b50(int **param_1);
undefined4 __fastcall FUN_10004df0(undefined4 *param_1);
void __thiscall FUN_10004e60(void *this,float *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,uint param_5);
void __cdecl FUN_10004ef0(undefined4 *param_1,int param_2,undefined4 *param_3);
void __cdecl FUN_10004f30(undefined4 *param_1,int param_2,undefined4 *param_3);
int __thiscall FUN_10004f60(void *this,uint param_1,uint param_2);
void __thiscall FUN_10004fe0(void *this,uint param_1,uint param_2);
undefined * Catch@10005053(void);
void Catch@100050ed(void);
void __fastcall FUN_10005120(int param_1);
undefined ** __thiscall FUN_10005160(void *this,byte param_1);
void __fastcall FUN_10005180(int param_1);
undefined4 * FUN_10005210(undefined4 *param_1,int param_2,undefined4 *param_3);
undefined4 * FUN_10005240(undefined4 *param_1,int param_2,undefined4 *param_3);
void * __thiscall FUN_10005270(void *this,void *param_1,uint param_2,uint param_3);
void * __thiscall FUN_10005360(void *this,undefined4 *param_1,uint param_2);
undefined ** __thiscall FUN_10005450(void *this,void *param_1);
int __thiscall FUN_100054e0(void *this,char *param_1);
void __thiscall FUN_10005520(void *this,undefined4 *param_1,int param_2);
void __fastcall FUN_10005580(int param_1);
undefined ** __thiscall FUN_10005670(void *this,int param_1);
void FUN_100056e0(void);
void __thiscall FUN_10005770(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3);
void Catch@100058ed(void);
void Catch@100058f9(void);
void __thiscall FUN_100059d0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3);
void Catch@10005b39(void);
void Catch@10005b45(void);
undefined4 * __fastcall FUN_10005c10(undefined4 *param_1);
void __thiscall FUN_10005dd0(void *this,undefined4 *param_1);
void __thiscall FUN_10005e40(void *this,undefined4 *param_1);
int __thiscall FUN_10005eb0(void *this,HWND param_1,HWND param_2,HWND param_3,int param_4,int *param_5,undefined4 param_6);
int __thiscall FUN_10006770(void *this,int param_1,int *param_2,undefined4 param_3);
undefined * FUN_10006810(void);
void __fastcall FUN_10006870(int param_1);
void __cdecl FUN_10006890(char *param_1);
void __fastcall FUN_100068d0(int param_1);
void * __thiscall FUN_10006910(void *this,int param_1,uint param_2,uint param_3);
void * __thiscall FUN_10006a00(void *this,undefined4 *param_1,uint param_2);
void __thiscall FUN_10006b10(void *this,undefined4 *param_1);
void * __cdecl FUN_10006b40(void *param_1,void *param_2,undefined4 *param_3);
void * __cdecl FUN_10006bf0(void *param_1,undefined4 *param_2);
void * __thiscall FUN_10006cf0(void *this,undefined4 param_1,undefined4 param_2);
void __cdecl FUN_10006dd0(void *param_1,int param_2,char *param_3);
void __cdecl FUN_10006ef0(int param_1,char *param_2);
int __cdecl FUN_10006f30(uint param_1);
void __fastcall FUN_10006f90(HANDLE *param_1);
int __thiscall FUN_10007010(void *this,char *param_1);
void __fastcall FUN_100070a0(void **param_1);
void __thiscall FUN_10007100(void *this,int param_1);
void __fastcall FUN_10007190(void *param_1);
void __fastcall FUN_100073f0(int param_1);
undefined4 FUN_100074b0(void);
void __thiscall FUN_10007500(void *this,float *param_1,float *param_2);
void __thiscall FUN_10007510(void *this,float *param_1);
void __thiscall FUN_10007520(void *this,undefined4 *param_1,undefined4 *param_2);
void __fastcall FUN_100076b0(void *param_1);
undefined4 __thiscall FUN_10007770(void *this,int param_1);
void __cdecl FUN_10007870(HWND param_1,int param_2,uint param_3);
void __cdecl FUN_100078c0(HWND param_1,int param_2,uint param_3,BOOL param_4);
undefined4 FUN_10007ba0(HWND param_1,uint param_2,undefined4 param_3,int param_4);
void CloseDLL(void);
undefined4 Catch@10007f58(void);
void GetRomBrowserMenu(void);
void DrawScreen(void);
void __cdecl GetDllInfo(undefined2 *param_1);
void PluginLoaded(void);
void MoveScreen(void);
void __cdecl DrawFullScreenStatus(undefined4 *param_1,int param_2);
void ProcessDList(void);
void ProcessRDPList(void);
void __cdecl SoftReset(int param_1);
void ShowCFB(void);
void ViWidthChanged(void);
void ChangeWindow(void);
undefined4 Catch@1000846e(void);
void __thiscall FUN_10008490(void *this,int *param_1);
void __cdecl FUN_100084e0(int param_1);
void __cdecl FUN_10008500(int **param_1);
void __thiscall FUN_10008520(void *this,int *param_1);
void __cdecl FUN_10008580(int param_1);
void __cdecl FUN_100085a0(int **param_1);
void __thiscall FUN_100085c0(void *this,int *param_1);
void __fastcall FUN_10008620(int **param_1);
void __fastcall FUN_10008670(int **param_1);
char ** __thiscall FUN_100086c0(void *this,char *param_1,char **param_2,uint param_3);
void __thiscall FUN_10008760(void *this,int *param_1);
uint __thiscall FUN_100087b0(void *this,uint param_1,uint param_2,byte *param_3,uint param_4);
void __fastcall FUN_10008830(int param_1);
void __fastcall FUN_100088f0(int param_1);
void RomClosed(void);
void FUN_10008980(void);
void FUN_100089a0(void);
void FUN_100089e0(int *param_1);
void __fastcall FUN_10008a20(int param_1);
bool __cdecl FUN_10008aa0(void *param_1,byte *param_2);
void __fastcall FUN_10008ae0(int param_1);
void __fastcall FUN_10008b10(int param_1);
void __fastcall FUN_10008b40(int param_1);
void __fastcall FUN_10008b70(undefined **param_1);
void * __thiscall FUN_10008bb0(void *this,void *param_1,uint param_2,uint param_3);
void __thiscall FUN_10008bf0(void *this,int **param_1,int **param_2);
void __fastcall FUN_10008ec0(int param_1);
void * __cdecl FUN_10008ef0(void *param_1,undefined4 *param_2);
void __fastcall FUN_10008ff0(undefined4 param_1,undefined4 *param_2);
void * FUN_10009140(void *param_1);
undefined4 __fastcall FUN_10009370(int param_1);
undefined4 __thiscall FUN_10009650(void *this,HWND param_1,HWND param_2);
undefined4 FUN_100097c0(HWND param_1,uint param_2,uint param_3,HWND param_4);
void * __thiscall FUN_1000a3f0(void *this,void *param_1);
void __cdecl DllAbout(HWND param_1);
void __cdecl DllConfig(HWND param_1);
void UpdateScreen(void);
void __cdecl CaptureScreen(undefined4 *param_1);
void __thiscall FUN_1000a9b0(void *this,int **param_1,int **param_2,int **param_3);
void __fastcall FUN_1000aa70(int param_1);
void __fastcall FUN_1000ac20(int param_1);
void __fastcall FUN_1000ad20(void *param_1);
undefined4 InitiateGFX(undefined param_1);
undefined4 Catch@1000b0a2(void);
void RomOpen(void);
void __fastcall FUN_1000b0e0(int param_1);
void __fastcall FUN_1000b120(int param_1);
void __thiscall FUN_1000b140(void *this,int **param_1,int **param_2);
void FUN_1000b420(int *param_1);
void __fastcall FUN_1000b460(int param_1);
void __fastcall FUN_1000b530(int param_1);
void * __fastcall FUN_1000b610(void *param_1);
void __thiscall FUN_1000b7d0(void *this,int **param_1,int **param_2,int **param_3);
undefined4 FUN_1000b890(undefined4 param_1,int param_2);
void __fastcall FUN_1000ba70(int *param_1);
void __fastcall FUN_1000baa0(int param_1);
undefined4 * __fastcall FUN_1000bba0(undefined4 *param_1);
int __fastcall FUN_1000bbe0(int param_1);
void __fastcall FUN_1000bc80(void **param_1);
void __cdecl OnRomBrowserMenuItem(int param_1,HWND param_2);
void __thiscall FUN_1000c0a0(void *this,float *param_1);
void __thiscall FUN_1000c0d0(void *this,float *param_1);
void __thiscall FUN_1000c100(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3);
void __fastcall FUN_1000c170(int param_1);
void __fastcall FUN_1000c190(int param_1);
undefined8 __cdecl FUN_1000c1d0(int *param_1,float param_2);
void __thiscall FUN_1000c250(void *this,float *param_1,float *param_2);
void __thiscall FUN_1000c360(void *this,float *param_1);
void __thiscall FUN_1000c460(void *this,float *param_1);
undefined4 __thiscall FUN_1000c490(void *this,int param_1);
undefined4 __fastcall FUN_1000c7d0(void *param_1);
void __fastcall FUN_1000ca30(void *param_1);
void __cdecl FUN_1000cb30(float param_1);
void __thiscall FUN_1000cb50(void *this,int *param_1,float *param_2);
void __thiscall FUN_1000cd20(void *this,float param_1,float param_2);
undefined4 FUN_1000d080(undefined4 param_1);
undefined4 FUN_1000d0c0(float *param_1,int param_2,int param_3,float *param_4,float param_5);
undefined4 FUN_1000d120(uint param_1,uint param_2,int param_3,int param_4);
undefined4 __thiscall FUN_1000d6d0(void *this,int param_1,void *param_2);
uint __thiscall FUN_1000d920(void *this,int param_1);
undefined4 __cdecl FUN_1000e520(int param_1,uint *param_2);
undefined4 __cdecl FUN_1000e590(int param_1);
int __fastcall FUN_1000e5c0(int param_1);
undefined ** __cdecl FUN_1000e5f0(undefined4 param_1);
undefined4 * __thiscall FUN_1000ea00(void *this,char *param_1,undefined4 *param_2,char *param_3);
void __cdecl FUN_1000ead0(int *param_1,int param_2,int param_3,int param_4);
void FUN_1000eb60(void);
void __cdecl FUN_1000ebd0(void *param_1,void *param_2,void *param_3);
void * __cdecl FUN_1000ec00(void *param_1,void *param_2,void *param_3);
void FUN_1000ec40(int param_1);
undefined4 __thiscall FUN_1000ec70(void *this,uint param_1);
void __cdecl FUN_1000ecd0(int param_1,int param_2);
void * __cdecl FUN_1000ed10(void *param_1,void *param_2,void *param_3);
int Catch@1000ed76(void);
void __cdecl FUN_1000edb0(void *param_1,int param_2,void *param_3);
void Catch@1000ee18(void);
void FUN_1000ee50(int param_1,int param_2);
void __fastcall FUN_1000ee70(int param_1);
void * FUN_1000eeb0(void *param_1,int param_2,void *param_3);
void __thiscall FUN_1000eee0(void *this,void *param_1,uint param_2,void *param_3);
void Catch@1000f0d2(void);
void Catch@1000f191(void);
void * __thiscall FUN_1000f220(void *this,int param_1);
void Catch@1000f2ac(void);
void __thiscall FUN_1000f2c0(void *this,int *param_1,void *param_2,void *param_3);
void __thiscall FUN_1000f340(void *this,void *param_1);
void * __cdecl FUN_1000f3d0(void *param_1,undefined4 param_2,void *param_3);
undefined4 __cdecl FUN_1000f540(int param_1);
void __thiscall FUN_1000f6d0(void *this,uint *param_1);
float10 __cdecl FUN_1000f730(float param_1);
uint __cdecl FUN_1000f740(uint param_1,undefined4 param_2);
void switchD_10011fae::caseD_29(void);
void FUN_100103e0(void);
void switchD_10011fae::caseD_2f(void);
void __thiscall FUN_10010dd0(void *this,uint *param_1);
void __thiscall FUN_10010e90(void *this,undefined2 *param_1);
void __thiscall FUN_10011090(void *this,int *param_1);
void __thiscall FUN_100110e0(void *this,undefined2 *param_1);
void __thiscall FUN_10011270(void *this,float *param_1,int param_2,float param_3);
undefined4 __thiscall FUN_10011800(void *this,float *param_1,int param_2,float param_3);
void __cdecl FUN_10011ba0(byte param_1,uint *param_2);
void FUN_10011fa0(void);
undefined4 FUN_10011fc0(void);
void FUN_10012060(void);
float10 __cdecl FUN_10012610(float param_1,uint param_2);
void __thiscall FUN_10012650(void *this,undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4);
void __thiscall FUN_10012680(void *this,short *param_1);
void __thiscall FUN_100126a0(void *this,short *param_1);
void __thiscall FUN_100126e0(void *this,int param_1);
void __fastcall FUN_10012710(short *param_1);
uint __fastcall FUN_10012780(byte *param_1);
uint __fastcall FUN_100127c0(short *param_1);
void __thiscall FUN_100127e0(void *this,float param_1,float param_2);
void __cdecl FUN_10012810(undefined4 param_1,char *param_2);
void __thiscall FUN_10012840(void *this,byte param_1,byte param_2);
void __thiscall FUN_10012890(void *this,char param_1,undefined4 param_2);
void __thiscall FUN_100128e0(void *this,byte param_1,byte param_2,byte param_3);
void __thiscall FUN_10012960(void *this,char param_1,undefined4 param_2,undefined4 param_3,byte param_4);
void __thiscall FUN_100129c0(void *this,byte param_1,byte param_2,byte param_3);
void __thiscall FUN_10012a20(void *this,char param_1,byte param_2,byte param_3);
void __thiscall FUN_10012a80(void *this,int param_1);
void __fastcall FUN_10012ab0(int param_1);
void __fastcall FUN_10012af0(int param_1);
void __fastcall FUN_10012b10(void **param_1);
void __fastcall FUN_10012bd0(void **param_1);
void __fastcall FUN_10012d10(void **param_1);
void __thiscall FUN_10012fd0(void *this,undefined4 param_1);
uint __fastcall FUN_10013030(int param_1);
void __thiscall FUN_10013080(void *this,int param_1);
void __thiscall FUN_10013460(void *this,uint param_1,uint *param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5,int param_6);
undefined4 __thiscall FUN_10013bb0(void *this,int *param_1,int *param_2,int *param_3,int *param_4,float *param_5,float *param_6);
void FUN_10013c80(void);
void __fastcall FUN_10013ca0(int **param_1);
undefined4 * __thiscall FUN_10013d00(void *this,undefined4 param_1);
void __fastcall FUN_10013e30(int *param_1);
undefined4 __thiscall FUN_10013f50(void *this,int param_1,int param_2,int param_3,uint param_4,undefined4 *param_5);
int __thiscall FUN_10014250(void *this,float *param_1);
void __thiscall FUN_10014570(void *this,undefined4 param_1,undefined4 param_2,undefined (*param_3) [16],float *param_4);
void __thiscall FUN_100146e0(void *this,float *param_1,float *param_2);
void FUN_100147b0(void);
void FUN_100147f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,undefined param_5);
void __fastcall FUN_10014830(int param_1);
void __thiscall FUN_10014900(void *this,int **param_1,char param_2,int **param_3,undefined4 *param_4);
void __thiscall FUN_10014ae0(void *this,int **param_1,int **param_2);
int ** __thiscall FUN_10014ba0(void *this,int **param_1,int **param_2,int **param_3);
int ** __thiscall FUN_10014d10(void *this,int *param_1);
int * __fastcall FUN_10014d90(int param_1);
undefined4 * __thiscall FUN_100152c0(void *this,int param_1,undefined4 param_2);
void __fastcall FUN_100153c0(void **param_1);
void __fastcall FUN_10015690(void **param_1);
void __thiscall FUN_10015710(void *this,uint *param_1,int param_2);
void __fastcall FUN_100162f0(void **param_1);
void __thiscall FUN_10016540(void *this,uint *param_1);
void __thiscall FUN_100169a0(void *this,undefined4 param_1,byte param_2,float **param_3,float **param_4,float *param_5);
char __fastcall FUN_10016f00(int *param_1);
uint __fastcall FUN_10017600(int *param_1);
uint __fastcall FUN_10017650(int *param_1);
undefined4 __fastcall FUN_100176a0(int param_1);
undefined4 __fastcall FUN_100176e0(int param_1);
void __thiscall FUN_10017840(void *this,undefined4 param_1);
undefined ** __thiscall FUN_10017920(void *this,undefined *param_1,undefined *param_2,undefined *param_3);
void __thiscall FUN_10017970(void *this,undefined4 param_1,int param_2);
void __thiscall FUN_100179e0(void *this,int param_1);
undefined4 __thiscall FUN_10017a10(void *this,int param_1);
undefined4 __fastcall FUN_10017a40(int *param_1);
void __fastcall FUN_10017aa0(int param_1);
void __fastcall FUN_10017b20(int param_1);
void __thiscall FUN_10017c10(void *this,int param_1);
void __thiscall FUN_10017f50(void *this,undefined4 *param_1);
void __thiscall FUN_10017fd0(void *this,int param_1,int param_2);
undefined4 __thiscall FUN_10018060(void *this,int param_1);
undefined4 __thiscall FUN_10018ae0(void *this,int param_1,undefined4 param_2,int *param_3,int param_4);
uint __thiscall FUN_10019fa0(void *this,undefined4 *param_1);
void __thiscall FUN_1001b630(void *this,int *param_1,int param_2);
undefined4 __thiscall FUN_1001b6c0(void *this,int param_1,undefined4 param_2);
void __thiscall FUN_1001bbe0(void *this,uint *param_1);
void __thiscall FUN_1001bc90(void *this,uint *param_1,uint *param_2);
void __thiscall FUN_1001bd20(void *this,int param_1);
void __thiscall FUN_1001c010(void *this,uint *param_1);
void __fastcall FUN_1001c080(int param_1);
int __thiscall FUN_1001c0e0(void *this,int param_1,int param_2);
void __thiscall FUN_1001c190(void *this,undefined4 *param_1);
char * FUN_1001c210(int param_1,int param_2,int param_3);
char * __thiscall FUN_1001c490(void *this,undefined4 *param_1);
void __fastcall FUN_1001e860(int *param_1);
int * __thiscall FUN_1001eb30(void *this,int param_1,int param_2);
void __cdecl FUN_1001eba0(ushort *param_1,byte param_2,byte param_3,byte param_4);
void __thiscall FUN_1001ece0(void *this,int param_1);
void __thiscall FUN_1001ed40(void *this,uint param_1,int param_2);
void __thiscall FUN_1001ef20(void *this,int param_1);
void __thiscall FUN_1001f070(void *this,uint param_1,uint param_2);
void __thiscall FUN_1001f460(void *this,uint param_1,uint param_2);
void __thiscall FUN_1001f6f0(void *this,uint param_1,uint param_2,uint param_3);
undefined4 __thiscall FUN_1001fc40(void *this,int param_1,uint param_2,uint param_3);
void __thiscall FUN_1001fcf0(void *this,undefined4 param_1,undefined4 param_2);
void __thiscall FUN_1001fd30(void *this,int param_1,int param_2);
int * __thiscall FUN_1001fe30(void *this,int *param_1,uint param_2);
int __thiscall FUN_1001ff00(void *this,undefined4 param_1,int param_2);
void * __thiscall FUN_1001ffb0(void *this,void *param_1,int param_2);
uint __thiscall FUN_100200b0(void *this,int *param_1);
void * __thiscall FUN_10020450(void *this,void *param_1,undefined4 *param_2);
int __fastcall FUN_10020880(int param_1);
uint FUN_100208a0(uint *param_1,uint *param_2);
void __fastcall FUN_10020910(undefined **param_1);
undefined ** __thiscall FUN_10020950(void *this,byte param_1);
char * __thiscall FUN_10020970(void *this,void *param_1,uint param_2,size_t param_3);
char ** __thiscall FUN_100209f0(void *this,void *param_1,uint param_2,size_t param_3);
undefined4 * __thiscall FUN_10020a90(void *this,uint *param_1);
void __fastcall FUN_10020af0(int **param_1);
void ** __cdecl FUN_10020b50(void **param_1,void **param_2,char *param_3);
void FUN_10020c30(void);
void __fastcall FUN_10020c50(int param_1);
void FUN_10020ca0(undefined4 param_1,undefined4 param_2,undefined4 *param_3);
void __cdecl FUN_10020ce0(int **param_1,int *param_2,int *param_3,short *param_4);
void __fastcall FUN_10020d30(int *param_1);
void __thiscall FUN_10020d80(void *this,int *param_1,int param_2,uint param_3);
void __thiscall FUN_10020de0(void *this,int *param_1,uint *param_2);
void __thiscall FUN_10020e50(void *this,int *param_1,int *param_2);
void __cdecl FUN_10020e90(int **param_1,int *param_2,int *param_3,byte **param_4);
void FUN_10020f20(void);
int __thiscall FUN_10020fb0(void *this,uint *param_1,int *param_2,uint param_3,int param_4);
void * __thiscall FUN_10021270(void *this,undefined4 *param_1);
void FUN_100212d0(void);
void __thiscall FUN_10021340(void *this,uint param_1);
void __thiscall FUN_100213e0(void *this,uint param_1);
void FUN_10021480(void);
void * __cdecl FUN_100214f0(void *param_1,void *param_2,int param_3);
void __cdecl FUN_10021590(char *param_1);
void * __cdecl FUN_10021610(void *param_1,undefined4 *param_2);
void __fastcall FUN_10021710(undefined4 param_1,undefined4 *param_2);
uint * __thiscall FUN_10021860(void *this,void *param_1);
int __thiscall FUN_10021920(void *this,undefined4 param_1,void *param_2);
void * __fastcall FUN_100219a0(void *param_1);
void FUN_10021ae0(undefined4 param_1,undefined4 param_2);
undefined4 * __thiscall FUN_10021df0(void *this,undefined4 *param_1,undefined4 *param_2);
int __thiscall FUN_10021e20(void *this,uint param_1);
undefined4 * FUN_10021e60(undefined4 param_1,undefined4 param_2,void *param_3);
void Catch@10021edc(void);
undefined4 * __thiscall FUN_10021f00(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,undefined param_5);
void __thiscall FUN_10021f50(void *this,int *param_1,int *param_2);
undefined4 __thiscall FUN_10021f90(void *this,uint *param_1,void *param_2);
uint * __thiscall FUN_10022040(void *this,uint *param_1,void *param_2,int param_3);
uint * __thiscall FUN_100223c0(void *this,int param_1,int param_2);
undefined4 __thiscall FUN_10022600(void *this,int param_1,uint *param_2);
void * FUN_10022770(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,undefined param_5);
void Catch@100227e2(void);
undefined4 * __thiscall FUN_10022800(void *this,undefined4 *param_1,undefined4 param_2);
void Catch@10022891(void);
void FUN_100228b0(int param_1,undefined4 *param_2,undefined4 *param_3);
void Catch@10022915(void);
int __thiscall FUN_10022960(void *this,uint param_1);
void __thiscall FUN_10022b60(void *this,int **param_1,char param_2,int **param_3,undefined4 *param_4);
void __thiscall FUN_10022d40(void *this,int param_1);
undefined4 __thiscall FUN_10022dc0(void *this,byte *param_1);
int __thiscall FUN_10023020(void *this,int param_1);
void Catch@10023089(void);
void __thiscall FUN_100230a0(void *this,int **param_1,int **param_2);
void * __thiscall FUN_100231a0(void *this,int param_1);
void Catch@10023211(void);
void * __cdecl FUN_10023230(void *param_1,undefined4 *param_2);
undefined4 __thiscall FUN_100233d0(void *this,undefined4 *param_1,int param_2);
void FUN_100238a0(undefined4 *param_1);
void * __thiscall FUN_10023ff0(void *this,void *param_1);
void * __thiscall FUN_100240c0(void *this,int *param_1);
void * __cdecl FUN_10024170(int *param_1,int *param_2,void *param_3);
void * __cdecl FUN_100241b0(int *param_1,int *param_2,void *param_3);
void __cdecl FUN_100241f0(void *param_1,void *param_2,int *param_3);
undefined4 __thiscall FUN_10024220(void *this,undefined4 *param_1);
undefined4 * __thiscall FUN_100242f0(void *this,int param_1,undefined4 param_2,undefined4 param_3);
void __fastcall FUN_100243f0(int param_1);
void * __cdecl FUN_10024590(void *param_1,void *param_2,void *param_3);
int Catch@100245ec(void);
void __cdecl FUN_10024630(void *param_1,int param_2,void *param_3);
void Catch@1002468b(void);
void FUN_100246c0(int param_1,int param_2);
void __fastcall FUN_100246f0(int param_1);
void * FUN_10024740(void *param_1,int param_2,void *param_3);
void __thiscall FUN_10024770(void *this,int *param_1,uint param_2,void *param_3);
void Catch@10024940(void);
void Catch@10024a00(void);
void __thiscall FUN_10024aa0(void *this,void **param_1,void *param_2);
void __thiscall FUN_10024b00(void *this,int *param_1,int *param_2,void *param_3);
undefined4 FUN_10024b70(HWND param_1,int param_2,uint param_3,HWND param_4);
void __thiscall FUN_10024ef0(void *this,void *param_1);
undefined4 FUN_10024f80(HINSTANCE param_1,HWND param_2,undefined4 *param_3,byte *param_4,void *param_5);
uint __fastcall FUN_10025280(int param_1);
void __fastcall FUN_100252d0(char *param_1);
void __thiscall FUN_100255a0(void *this,uint *param_1);
uint __thiscall FUN_10025650(void *this,float param_1);
uint __thiscall FUN_100256e0(void *this,float param_1);
void __thiscall FUN_10025770(void *this,int param_1,int param_2,uint param_3,uint param_4,ushort *param_5);
uint __thiscall FUN_10025c20(void *this,void *param_1);
void __thiscall FUN_10025fd0(void *this,int param_1,uint param_2,uint param_3);
void __thiscall FUN_10026080(void *this,int param_1,uint param_2,uint param_3);
void __thiscall FUN_10026120(void *this,int param_1,int param_2,int param_3,uint param_4,uint param_5);
void __thiscall FUN_10026250(void *this,int param_1,int param_2,int param_3);
void __thiscall FUN_10026290(void *this,int param_1,int param_2,uint param_3,uint param_4,int param_5,int param_6);
void __thiscall FUN_10026330(void *this,int param_1,int param_2,int param_3,uint param_4,uint param_5,int param_6,int param_7,int param_8);
void __thiscall FUN_10026430(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6);
uint __cdecl FUN_10026500(uint param_1,uint param_2,uint param_3,uint *param_4);
void FUN_10026560(int param_1,int param_2,ulonglong *param_3,undefined8 *param_4);
void FUN_10026630(int param_1,int param_2,ulonglong *param_3,undefined8 *param_4);
void FUN_100266f0(int param_1,int param_2,ulonglong *param_3,undefined8 *param_4);
void __thiscall FUN_100267f0(void *this,uint param_1,ulonglong *param_2,undefined8 *param_3);
void FUN_10026870(int param_1,int param_2,int param_3,ulonglong *param_4,int param_5,int param_6,int param_7);
void FUN_10026960(int param_1,int param_2,ulonglong *param_3,int param_4,int param_5,int param_6);
void __thiscall FUN_10026a40(void *this,int param_1,uint param_2,int param_3);
void __thiscall FUN_10026ad0(void *this,int param_1,int param_2,float param_3,float param_4,ushort *param_5);
uint __thiscall FUN_10026b20(void *this,int param_1);
uint __thiscall FUN_10026ba0(void *this,int param_1,int param_2,char param_3);
void __thiscall FUN_10027000(void *this,short *param_1);
void __fastcall FUN_10027440(undefined4 param_1,uint param_2);
void FUN_100274e0(void);
void __fastcall FUN_100278b0(undefined4 param_1,int param_2);
void * __thiscall FUN_10027ed0(void *this,uint param_1,undefined param_2);
void FUN_10027fa0(void);
void FUN_100281b0(void);
void __thiscall FUN_10028330(void *this,undefined4 *param_1);
void FUN_10028350(void);
void ViStatusChanged(void);
void FUN_10028c10(void);
void FUN_10028c80(void);
void FUN_10028d30(void);
void FUN_10028da0(void);
void FUN_10028e50(void);
void FUN_10028f40(void);
void FUN_10029150(void);
void FUN_10029580(void);
void FUN_10029b30(void);
void FUN_1002a4e0(void);
void FUN_1002a690(void);
void FUN_1002a890(void);
void __cdecl FUN_1002b870(int *param_1);
void __thiscall FUN_1002bb10(void *this,float param_1);
void FUN_1002c0c0(void);
void __thiscall FUN_1002c650(void *this,undefined4 *param_1);
void __thiscall FUN_1002c670(void *this,int param_1,float *param_2);
void __thiscall FUN_1002c6f0(void *this,int param_1,undefined8 *param_2);
void __thiscall FUN_1002c8a0(void *this,undefined (*param_1) [16],int param_2,float *param_3,int param_4,int param_5);
void __thiscall FUN_1002c920(void *this,undefined8 *param_1,int param_2,undefined8 *param_3,int param_4,int param_5);
void __thiscall FUN_1002cc90(void *this,float *param_1,int param_2,float *param_3,int param_4,int param_5);
void __thiscall FUN_1002cea0(void *this,undefined8 *param_1,int param_2,float *param_3,int param_4,int param_5);
void __thiscall FUN_1002cf80(void *this,float *param_1);
void __thiscall FUN_1002d020(void *this,float *param_1);
void __thiscall FUN_1002d090(void *this,undefined4 *param_1);
void __fastcall FUN_1002d0d0(undefined4 *param_1);
void __thiscall FUN_1002d0f0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3);
void __fastcall FUN_1002d120(int *param_1);
void __fastcall FUN_1002d150(int param_1);
void __fastcall FUN_1002d170(int *param_1);
void __fastcall FUN_1002d260(int param_1);
void __thiscall FUN_1002d280(void *this,int param_1);
void __cdecl FUN_1002d2e0(int param_1);
void * __thiscall FUN_1002d370(void *this,int param_1);
void __cdecl FUN_1002d390(int param_1,uint param_2,char param_3,float *param_4);
void __cdecl FUN_1002d520(float *param_1,float *param_2,float *param_3);
void __cdecl FUN_1002d5c0(int param_1,int param_2,int param_3,float param_4);
int __cdecl FUN_1002d660(float *param_1,float *param_2,undefined4 *param_3,undefined4 *param_4,char param_5,char param_6,float *param_7);
undefined4 * __thiscall FUN_1002e240(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void __fastcall FUN_1002e2f0(int param_1);
void __thiscall FUN_1002e360(void *this,uint *param_1,int param_2,int param_3);
void __thiscall FUN_1002e4d0(void *this,float *param_1,int param_2,int param_3);
void __thiscall FUN_1002e990(void *this,int param_1,int param_2,int param_3,int param_4,int param_5);
void __fastcall FUN_1002ea50(int param_1);
void __fastcall FUN_1002ebb0(void **param_1);
void __fastcall FUN_1002ed90(void **param_1);
int __thiscall FUN_1002ef40(void *this,int param_1,uint param_2);
void FUN_1002f490(float *param_1,float *param_2,float *param_3);
void __thiscall FUN_1002f5c0(void *this,int param_1,uint param_2);
void __thiscall FUN_1002f6b0(void *this,int param_1,uint param_2);
void __thiscall FUN_1002fb90(void *this,int param_1,uint param_2);
void __thiscall FUN_1002fd80(void *this,int param_1,uint *param_2,int param_3,float *param_4,uint param_5);
void __thiscall FUN_10030300(void *this,int *param_1,int param_2,float param_3);
void __thiscall FUN_10030ab0(void *this,int *param_1,int param_2,float param_3);
void __thiscall FUN_100317e0(void *this,short *param_1,int param_2,float param_3);
void __fastcall FUN_10032280(int *param_1);
void __fastcall FUN_100323d0(undefined4 *param_1);
void FUN_10032400(float *param_1,short *param_2);
int __fastcall FUN_10032620(int param_1);
void __fastcall FUN_10032700(undefined4 *param_1);
void __thiscall FUN_10032760(void *this,int param_1,short *param_2);
void __thiscall FUN_100327c0(void *this,int param_1,byte param_2);
void __thiscall FUN_100327f0(void *this,int param_1,byte param_2,byte param_3,byte param_4);
void __thiscall FUN_10032850(void *this,int param_1,uint param_2);
void __thiscall FUN_100328e0(void *this,int param_1,uint param_2,undefined4 param_3);
void __thiscall FUN_10032970(void *this,undefined *param_1,int param_2,float *param_3,float param_4);
undefined4 * __thiscall FUN_10032c80(void *this,int param_1);
void __thiscall FUN_10032cb0(void *this,undefined4 *param_1,int param_2,float *param_3,int param_4);
void __thiscall FUN_10032db0(void *this,undefined *param_1,float *param_2,float *param_3,undefined4 *param_4,float param_5);
void __thiscall FUN_10033090(void *this,undefined *param_1,int param_2,short *param_3,int param_4,float *param_5,float param_6,float *param_7);
void __thiscall FUN_100334e0(void *this,undefined4 *param_1,int param_2,float *param_3,float param_4,undefined4 *param_5);
void __fastcall FUN_10033570(void **param_1);
void __fastcall FUN_100335b0(undefined4 *param_1);
int __fastcall FUN_100335e0(int *param_1);
void __thiscall FUN_10033660(void *this,int param_1);
undefined4 __fastcall FUN_10033680(int param_1);
undefined4 * __thiscall FUN_10033690(void *this,int param_1,uint param_2);
void __fastcall FUN_100336f0(int param_1);
void __thiscall FUN_10033710(void *this,undefined4 *param_1);
void __thiscall FUN_100337a0(void *this,int param_1);
void __thiscall FUN_10033860(void *this,uint param_1);
void __thiscall FUN_10033a10(void *this,int param_1,int param_2,uint param_3,uint param_4,uint param_5,int param_6);
undefined4 __cdecl FUN_10033b80(undefined4 param_1,undefined4 param_2,uint *param_3);
undefined4 FUN_10033c40(undefined4 param_1,undefined4 param_2);
undefined4 FUN_10033e20(char *param_1);
void __cdecl FUN_10034080(undefined4 param_1,undefined4 param_2);
undefined4 __cdecl FUN_100340d0(undefined4 param_1,undefined4 param_2,undefined4 *param_3);
undefined4 FUN_10034180(undefined4 param_1,undefined4 param_2);
undefined4 __thiscall FUN_100342f0(void *this,char *param_1,int param_2);
undefined4 FUN_100344e0(char *param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4);
void * __thiscall FUN_100345a0(void *this,undefined4 *param_1);
void __fastcall FUN_100345c0(int param_1);
void __thiscall FUN_100347c0(void *this,int param_1);
void __fastcall FUN_10034c20(int param_1);
void __thiscall FUN_10034c80(void *this,uint param_1,int param_2);
undefined4 __thiscall FUN_10034cd0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
void __thiscall FUN_10034d70(void *this,int param_1,int param_2,int param_3,uint param_4);
undefined4 __thiscall FUN_10034e50(void *this,char *param_1,undefined4 *param_2,uint param_3,int param_4);
undefined4 __thiscall FUN_10034fd0(void *this,undefined4 param_1,char *param_2,int param_3);
undefined4 __thiscall FUN_10035110(void *this,char *param_1,int param_2);
void * __thiscall FUN_100351f0(void *this,int param_1,int param_2,int param_3);
undefined4 __cdecl FUN_10035220(int param_1);
void __cdecl FUN_10035420(uint *param_1,uint param_2,int param_3,uint *param_4,uint param_5,int param_6,int param_7);
void __cdecl FUN_10035b60(int param_1);
void __cdecl FUN_10036480(undefined4 *param_1);
void __cdecl FUN_100364b0(uint *param_1,uint *param_2,uint param_3);
void __cdecl FUN_10036590(uint *param_1,int param_2);
void __cdecl SetSettingInfo(undefined4 *param_1);
void __cdecl SetSettingInfo2(undefined4 *param_1);
undefined FUN_10036680(void);
void __cdecl FUN_10036690(undefined4 param_1);
void __cdecl FUN_100366b0(short param_1,undefined4 param_2,undefined4 param_3,char *param_4,int param_5,char *param_6);
undefined4 __cdecl FUN_10036850(undefined4 param_1);
void __cdecl FUN_10036880(short param_1);
void __cdecl FUN_100368a0(short param_1);
void __cdecl FUN_100368c0(short param_1,undefined4 param_2,undefined4 param_3);
void __cdecl FUN_100368f0(short param_1,undefined4 param_2);
void __cdecl FUN_10036920(short param_1,undefined4 param_2);
void __cdecl FUN_10036950(undefined4 *param_1);
undefined4 FUN_100369f0(void);
undefined4 FUN_10036a10(void);
undefined2 FUN_10036a30(void);
void FUN_10036a40(undefined2 param_1);
int __cdecl FUN_10036a50(float param_1);
void Direct3DCreate8(void);
undefined ** __thiscall FUN_10036a64(void *this,byte param_1);
undefined ** __thiscall FUN_10036a80(void *this,byte param_1);
uint FUN_10036a9c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,undefined4 *param_5,undefined4 *param_6);
undefined4 FUN_10036b00(char *param_1,char *param_2,size_t param_3);
int FUN_10036d6f(int *param_1,LOGFONTA *param_2,void **param_3);
int FUN_10036dde(int *param_1,void **param_2);
int * __cdecl FUN_10036e4a(int param_1);
uint __fastcall FUN_10036e6e(int param_1,int param_2);
int __cdecl FUN_10036ee3(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
int __cdecl FUN_10036fc5(int param_1);
int FUN_10036ff6(int *param_1,undefined4 param_2,uint *param_3,int param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8,undefined *param_9,undefined4 param_10);
int FUN_100370d8(int *param_1,undefined4 param_2,uint *param_3,int param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 *param_9,undefined *param_10,undefined4 param_11);
undefined4 __fastcall FUN_100371ab(undefined4 param_1,uint param_2,int *param_3,uint *param_4,uint *param_5,uint *param_6,uint *param_7,int *param_8,int param_9,int param_10);
void __thiscall FUN_100374d5(void *this,int *param_1,uint *param_2,uint *param_3,uint *param_4,uint param_5,int *param_6,int param_7);
int __thiscall FUN_100374fd(void *this,int *param_1,uint param_2,uint param_3,uint param_4,uint param_5,int param_6,int param_7,int param_8);
int FUN_10037563(int *param_1,int *param_2,uint *param_3,int *param_4,int *param_5,uint *param_6,undefined *param_7,int param_8);
int FUN_10037709(int *param_1,undefined4 param_2,uint *param_3,int *param_4,undefined4 param_5,uint *param_6,undefined *param_7,undefined4 param_8);
undefined * FUN_1003778f(int *param_1,int *param_2,uint param_3,undefined *param_4);
undefined * FUN_10037a73(void);
void FUN_100380e6(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,undefined4 param_14,undefined4 param_15);
void __fastcall FUN_10038126(undefined **param_1);
int __thiscall FUN_1003816d(void *this,int *param_1,LOGFONTA *param_2);
undefined4 FUN_100381f1(int param_1,undefined4 *param_2);
void FUN_10038233(int param_1,uint *param_2,uint param_3,int *param_4,UINT param_5,undefined4 param_6);
void FUN_10038259(int param_1,uint *param_2,uint param_3,int *param_4,UINT param_5,undefined4 param_6);
undefined4 FUN_1003829d(int *param_1,int *param_2,int **param_3);
void __fastcall FUN_100382f9(undefined **param_1);
void __fastcall FUN_10038314(undefined **param_1);
undefined4 __thiscall FUN_10038354(void *this,int *param_1);
undefined4 FUN_100383ef(int param_1);
undefined4 FUN_1003841a(int param_1);
undefined4 FUN_1003845e(int *param_1,int *param_2,int **param_3);
undefined4 FUN_100384ba(uint param_1);
void FUN_100388f6(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,undefined4 *param_5,float param_6,undefined4 *param_7,undefined4 param_8);
void __fastcall FUN_10038da0(undefined **param_1);
undefined4 * FUN_10038dbe(void);
void FUN_10038e67(void);
void __cdecl FUN_10038ef6(int param_1,char *param_2);
undefined4 __fastcall FUN_1003902c(int param_1);
uint __thiscall FUN_10039743(void *this,char *param_1);
uint __thiscall FUN_100397ec(void *this,char *param_1);
uint __thiscall FUN_1003988d(void *this,char *param_1,uint param_2,int param_3);
void __thiscall FUN_10039c2e(void *this,uint param_1,undefined4 *param_2);
void __fastcall FUN_10039cd7(uint param_1);
void __fastcall FUN_10039dad(undefined4 *param_1);
undefined4 * __fastcall FUN_10039f24(int param_1);
void __thiscall FUN_1003a43c(void *this,float param_1);
undefined4 FUN_1003ad73(void);
uint FUN_1003b22c(void);
void __cdecl FUN_1003b6ef(undefined4 param_1);
void __fastcall FUN_1003b77f(undefined4 *param_1);
void __fastcall FUN_1003b798(int param_1);
void * __thiscall FUN_1003b7f1(void *this,byte param_1);
undefined4 __thiscall FUN_1003b80d(void *this,uint *param_1,uint param_2);
void __cdecl FUN_1003bf23(int *param_1);
undefined4 FUN_1003bf82(undefined4 param_1,undefined4 param_2);
undefined4 __thiscall FUN_1003c1f2(void *this,uint *param_1,uint param_2);
uint __thiscall FUN_1003c699(void *this,uint *param_1,uint param_2);
undefined4 FUN_1003c96e(int param_1,uint param_2);
undefined4 __thiscall FUN_1003cf04(void *this,int *param_1,int *param_2);
undefined4 __thiscall FUN_1003d245(void *this,short *param_1,uint param_2);
undefined4 __thiscall FUN_1003d275(void *this,uint *param_1,int *param_2,int *param_3,int param_4);
void __fastcall FUN_1003d44a(undefined4 *param_1);
void __fastcall FUN_1003d454(undefined **param_1);
int * __cdecl FUN_1003d488(uint param_1,int param_2,int param_3);
void ** __thiscall FUN_1003d745(void *this,byte param_1);
undefined4 FUN_1003d791(void);
undefined4 __fastcall FUN_1003dc05(int *param_1);
undefined4 __cdecl FUN_1003dd93(uint *param_1,uint param_2,int param_3,uint param_4,int param_5,int param_6);
void __fastcall FUN_1003deb9(int *param_1);
undefined4 __cdecl FUN_1003deea(uint *param_1,uint param_2,int param_3,uint param_4,int param_5,int param_6);
undefined4 __cdecl FUN_1003dfd2(undefined8 *param_1,undefined8 *param_2,uint param_3,uint param_4,int param_5,int param_6);
void FUN_1003e0e8(void);
void FUN_1003e120(void);
void __fastcall FUN_1003e14f(int *param_1);
undefined4 __fastcall FUN_1003e180(int *param_1);
undefined4 __fastcall FUN_1003e2d0(int *param_1);
undefined4 __fastcall FUN_1003e3f4(int *param_1);
undefined4 __fastcall FUN_1003e543(int *param_1);
undefined4 __fastcall FUN_1003e696(int *param_1);
undefined4 __fastcall FUN_1003e7d5(int *param_1);
undefined4 __fastcall FUN_1003e870(int *param_1);
undefined4 __fastcall FUN_1003e9bc(int *param_1);
undefined4 __fastcall FUN_1003eadd(int *param_1);
undefined4 __fastcall FUN_1003ec29(int *param_1);
undefined4 __fastcall FUN_1003ed68(int *param_1);
undefined4 FUN_1003eea0(void);
undefined4 FUN_1003ef91(void);
undefined4 FUN_1003f193(void);
undefined4 FUN_1003f397(void);
undefined4 FUN_1003f7ba(void);
uint * __cdecl FUN_1003fc4c(int param_1);
undefined4 FUN_1003fd4c(void);
undefined4 FUN_10040132(void);
undefined4 FUN_10040863(void);
int __thiscall FUN_10040c05(void *this,int param_1,undefined4 param_2,undefined *param_3);
undefined4 __fastcall FUN_10040d1f(byte *param_1);
void __fastcall FUN_10040d88(undefined4 *param_1);
undefined4 __fastcall FUN_10040d8e(int **param_1);
undefined4 __fastcall thunk_FUN_10040d1f(byte *param_1);
int __thiscall FUN_10040da9(void *this,undefined4 *param_1,int *param_2,undefined4 param_3,uint *param_4,undefined4 param_5,uint param_6);
undefined4 __fastcall thunk_FUN_10040d8e(int **param_1);
int __thiscall FUN_100411c1(void *this,undefined4 *param_1,int *param_2,undefined4 param_3,uint *param_4,undefined4 param_5,uint param_6);
void __fastcall FUN_1004151c(undefined **param_1);
undefined4 __thiscall FUN_10041532(void *this,int param_1);
void FUN_10041829(void);
void FUN_100418c9(void);
void FUN_10041cc3(void);
undefined ** __thiscall FUN_10041ce6(void *this,undefined4 *param_1,uint param_2,undefined *param_3);
undefined ** __thiscall FUN_10041f32(void *this,byte param_1);
undefined4 FUN_10041f4e(void);
void __fastcall FUN_10041fc9(int *param_1);
void __thiscall FUN_10042095(void *this,uint param_1);
void __thiscall FUN_10042105(void *this,uint param_1,uint param_2,int param_3);
void __thiscall FUN_100421f1(void *this,uint param_1,uint param_2,int param_3);
void __thiscall FUN_10042314(void *this,uint param_1,uint param_2,int param_3);
void __thiscall FUN_10042415(void *this,uint param_1,uint param_2,int param_3);
void __thiscall FUN_10042516(void *this,uint param_1,uint param_2,int param_3);
void __thiscall FUN_10042617(void *this,uint param_1,uint param_2,int param_3);
void __thiscall FUN_10042734(void *this,uint param_1,uint param_2,int param_3);
void __thiscall FUN_10042857(void *this,uint param_1,uint param_2,int param_3);
void __thiscall FUN_10042955(void *this,uint param_1,uint param_2,int param_3);
void __thiscall FUN_100429fe(void *this,uint param_1,uint param_2,int param_3);
void __thiscall FUN_10042b21(void *this,uint param_1,uint param_2,int param_3);
void __thiscall FUN_10042c22(void *this,uint param_1,uint param_2,int param_3);
void __thiscall FUN_10042d45(void *this,uint param_1,uint param_2,int param_3);
void __thiscall FUN_10042e15(void *this,uint param_1,uint param_2,float *param_3);
void __thiscall FUN_10042f2d(void *this,uint param_1,float param_2,uint param_3);
void __thiscall FUN_10042ff2(void *this,uint param_1,uint param_2,int param_3);
void __thiscall FUN_100430b7(void *this,uint param_1,uint param_2,int param_3);
void __thiscall FUN_100431ad(void *this,uint param_1,uint param_2,int param_3);
void __thiscall FUN_10043298(void *this,uint param_1,uint param_2,int param_3);
void __thiscall FUN_1004336d(void *this,uint param_1,uint param_2,int param_3);
void __thiscall FUN_10043472(void *this,uint param_1,uint param_2,int param_3);
void __thiscall FUN_1004357d(void *this,uint param_1,uint param_2,int param_3);
void __thiscall FUN_100436b7(void *this,uint param_1,uint param_2,int param_3);
void __thiscall FUN_1004378d(void *this,uint param_1,uint param_2,int param_3);
void __thiscall FUN_10043897(void *this,uint param_1,uint param_2,int param_3);
void __thiscall FUN_100439cd(void *this,uint param_1,uint param_2,int param_3);
void __thiscall FUN_10043a94(void *this,uint param_1,uint param_2,int param_3);
void __thiscall FUN_10043b82(void *this,uint param_1,uint param_2,int param_3);
void __thiscall FUN_10043c71(void *this,uint param_1,uint param_2,int param_3);
void __thiscall FUN_10043dcd(void *this,int param_1,int param_2,float *param_3);
void __thiscall FUN_10043e59(void *this,int param_1,int param_2,float *param_3);
void __thiscall FUN_10043eff(void *this,int param_1,int param_2,float *param_3);
void __thiscall FUN_10043f9b(void *this,int param_1,int param_2,float *param_3);
void __thiscall FUN_10044040(void *this,int param_1,int param_2,float *param_3);
void __thiscall FUN_100440e2(void *this,int param_1,int param_2,float *param_3);
void __thiscall FUN_10044192(void *this,int param_1,int param_2,float *param_3);
void __thiscall FUN_10044241(void *this,int param_1,int param_2,float *param_3);
void __thiscall FUN_10044317(void *this,int param_1,int param_2,float *param_3);
void __thiscall FUN_100443a9(void *this,int param_1,int param_2,float *param_3);
void __thiscall FUN_1004444b(void *this,int param_1,int param_2,undefined4 *param_3);
void __thiscall FUN_100444bd(void *this,int param_1,int param_2,float *param_3);
void __thiscall FUN_1004456f(void *this,int param_1,int param_2,float *param_3);
void __thiscall FUN_1004460e(void *this,int param_1,int param_2,undefined4 *param_3);
void __thiscall FUN_100446f9(void *this,int param_1,int param_2,float *param_3);
void __thiscall FUN_10044767(void *this,int param_1,int param_2,float *param_3);
void __thiscall FUN_100447f0(void *this,int param_1,int param_2,float *param_3);
void __thiscall FUN_10044879(void *this,int param_1,int param_2,float *param_3);
void __thiscall FUN_100448fb(void *this,int param_1,int param_2,float *param_3);
void __thiscall FUN_100449ac(void *this,int param_1,int param_2,float *param_3);
void __thiscall FUN_10044a3d(void *this,int param_1,int param_2,float *param_3);
void __thiscall FUN_10044ad4(void *this,int param_1,int param_2,float *param_3);
void __thiscall FUN_10044b57(void *this,int param_1,int param_2,float *param_3);
void __thiscall FUN_10044c11(void *this,int param_1,int param_2,float *param_3);
void __thiscall FUN_10044ce4(void *this,int param_1,int param_2,float *param_3);
void __thiscall FUN_10044d54(void *this,int param_1,int param_2,float *param_3);
void __thiscall FUN_10044de2(void *this,int param_1,int param_2,float *param_3);
void __thiscall FUN_10044e6e(void *this,int param_1,int param_2,float *param_3);
undefined ** __thiscall FUN_10044f4e(void *this,undefined4 *param_1);
undefined ** FUN_10044f6a(void);
undefined ** __thiscall FUN_10045062(void *this,undefined4 *param_1);
undefined ** __thiscall FUN_1004507e(void *this,undefined4 *param_1);
undefined ** __thiscall FUN_1004509a(void *this,undefined4 *param_1);
undefined4 __fastcall FUN_100450b6(int param_1);
undefined ** __thiscall FUN_100452a2(void *this,undefined4 *param_1);
undefined ** __thiscall FUN_100452be(void *this,undefined4 *param_1);
int __thiscall FUN_100452da(void *this,uint param_1,uint param_2,uint param_3);
undefined ** __thiscall FUN_100455ab(void *this,undefined4 *param_1);
undefined ** __thiscall FUN_100455c7(void *this,undefined4 *param_1);
undefined ** __thiscall FUN_100455e3(void *this,undefined4 *param_1);
undefined ** __thiscall FUN_100455ff(void *this,undefined4 *param_1);
undefined ** __thiscall FUN_1004561b(void *this,undefined4 *param_1);
void __thiscall FUN_10045637(void *this,int param_1,int param_2,undefined4 *param_3);
undefined ** __thiscall FUN_100456c4(void *this,undefined4 *param_1);
undefined ** __thiscall FUN_1004574f(void *this,undefined4 *param_1);
undefined ** __thiscall FUN_1004576b(void *this,undefined4 *param_1);
undefined ** __thiscall FUN_1004595d(void *this,undefined4 *param_1);
undefined ** __thiscall FUN_10045979(void *this,undefined4 *param_1);
undefined ** __thiscall FUN_10045995(void *this,undefined4 *param_1);
undefined ** __thiscall FUN_100459b1(void *this,undefined4 *param_1);
void * __thiscall FUN_100459cd(void *this,byte param_1);
undefined ** __thiscall FUN_100459e9(void *this,undefined4 *param_1);
void __fastcall FUN_10045a05(int param_1);
undefined ** __thiscall FUN_10045b06(void *this,undefined4 *param_1);
undefined ** __thiscall FUN_10045b22(void *this,undefined4 *param_1);
undefined ** __thiscall FUN_10045b3e(void *this,byte param_1);
undefined ** __thiscall FUN_10045b5a(void *this,undefined4 *param_1);
undefined ** __thiscall FUN_10045b76(void *this,undefined4 *param_1);
undefined ** __thiscall FUN_10045b92(void *this,undefined4 *param_1);
undefined ** __thiscall FUN_10045bae(void *this,undefined4 *param_1);
undefined ** __thiscall FUN_10045bca(void *this,undefined4 *param_1);
undefined ** __thiscall FUN_10045be6(void *this,undefined4 *param_1);
void __fastcall FUN_10045c02(undefined **param_1);
void FUN_10045c07(void);
undefined ** __thiscall FUN_10045eb0(void *this,undefined4 *param_1);
undefined ** __thiscall FUN_10045ecc(void *this,undefined4 *param_1);
undefined ** __thiscall FUN_10045ee8(void *this,undefined4 *param_1);
void thunk_FUN_10041829(void);
void * __thiscall FUN_10045f09(void *this,byte param_1);
undefined ** __thiscall FUN_10045f25(void *this,undefined4 *param_1);
void FUN_10045f3d(void);
undefined ** __fastcall FUN_10045f86(undefined **param_1,undefined param_2,undefined4 param_3);
undefined ** FUN_10045f9e(void);
void * __thiscall FUN_10046716(void *this,byte param_1);
void thunk_FUN_10045f3d(void);
undefined4 __cdecl FUN_10046737(float param_1,float param_2);
void FUN_10046771(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
void FUN_1004679b(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,float param_6);
void FUN_10046829(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
void FUN_10046853(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,float param_6);
void FUN_10046902(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
void FUN_10046931(float *param_1,float *param_2,float *param_3,float *param_4,float param_5,float param_6);
void FUN_1004699b(void);
void thunk_FUN_1004699b(void);
void FUN_100469d8(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,float param_6);
void FUN_10046a86(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
void FUN_10046ab0(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,float param_6);
void FUN_10046b81(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
void FUN_10046bb0(float *param_1,float *param_2,float *param_3,float *param_4,float param_5,float param_6);
void FUN_10046ca5(void);
void thunk_FUN_10046ca5(void);
void FUN_10046d2b(void);
void FUN_10046e81(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,float param_6);
void FUN_10046f52(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
void FUN_10046f7c(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,float param_6);
void FUN_1004706f(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
void FUN_1004709e(float *param_1,float *param_2,float *param_3,float *param_4,float param_5,float param_6);
void FUN_10047298(void);
void thunk_FUN_10047298(void);
void FUN_100474e1(void);
void thunk_FUN_100474e1(void);
void FUN_100477a4(void);
void thunk_FUN_100477a4(void);
void FUN_10047b44(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_10047bce(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_10047c58(undefined4 param_1,undefined4 param_2);
void FUN_10047c74(undefined4 *param_1,float param_2);
void FUN_10047cee(undefined4 param_1,undefined4 param_2);
void FUN_10047d0a(float *param_1,float param_2);
void FUN_10047d85(undefined4 param_1,undefined4 param_2);
void FUN_10047da1(float *param_1,float param_2);
void FUN_10047e1d(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_10047e3d(float *param_1,float *param_2,float param_3);
void FUN_10047f3f(void);
void thunk_FUN_10047f3f(void);
void FUN_10048034(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_10048062(void);
void thunk_FUN_10048062(void);
void FUN_10048079(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
undefined4 *FUN_100480a0(undefined4 *param_1,undefined4 param_2,float *param_3,int param_4,float *param_5);
void FUN_1004838b(undefined4 param_1,undefined4 param_2,undefined4 param_3);
float * FUN_100483ab(float *param_1,undefined4 param_2,float param_3);
void FUN_10048407(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void thunk_FUN_10048407(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_10048514(void);
void thunk_FUN_10048514(void);
void FUN_100485ca(void);
void thunk_FUN_100485ca(void);
void FUN_10048691(void);
void FUN_10048715(void);
void FUN_100487b6(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void thunk_FUN_100487b6(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_100488c3(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
undefined4 FUN_100488ed(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,float param_6);
void FUN_10048944(void);
undefined4 *FUN_10048984(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,float param_5,float param_6);
void FUN_10048a0f(void);
void thunk_FUN_10048a0f(void);
void FUN_10048d15(float *param_1,float *param_2);
void FUN_10048da2(float *param_1,float *param_2,float *param_3);
void FUN_10048e0d(float *param_1,float *param_2,float *param_3);
void FUN_10048e8d(float *param_1,float *param_2,float *param_3);
void FUN_10048ec9(float *param_1,float *param_2);
void FUN_10048f69(float *param_1,float *param_2,float *param_3);
float * FUN_10049028(float *param_1,undefined4 param_2,int *param_3,int param_4,int param_5,int param_6);
float * FUN_100491b5(float *param_1,float *param_2,int *param_3,int param_4,int param_5,int param_6);
void FUN_1004935b(float *param_1,float *param_2);
undefined4 FUN_10049414(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 *FUN_1004944d(undefined4 *param_1,float *param_2,int param_3,undefined4 *param_4,float *param_5,int param_6,float *param_7);
void FUN_10049701(float *param_1,float *param_2);
void FUN_100497db(float *param_1);
void __fastcall FUN_10049c74(undefined4 *param_1);
void __fastcall FUN_10049cbf(int param_1);
void * __thiscall FUN_10049db8(void *this,byte param_1);
undefined4 __fastcall FUN_10049dd4(int param_1);
undefined4 __fastcall FUN_10049e61(int param_1);
undefined4 __fastcall FUN_10049e91(int param_1);
int __fastcall FUN_10049f0c(int param_1);
undefined4 __fastcall FUN_10049fc6(int param_1);
void __fastcall FUN_10049fe9(int *param_1);
int __thiscall FUN_10049ff5(void *this,int *param_1);
uint * __thiscall FUN_1004a136(void *this,uint *param_1,uint *param_2,uint param_3,int *param_4,UINT param_5,undefined4 param_6,LPCWSTR param_7);
int __cdecl FUN_1004a649(int *param_1,int **param_2);
void __fastcall FUN_1004a6be(undefined4 *param_1);
void __fastcall FUN_1004a6ce(void **param_1);
undefined4 __thiscall FUN_1004a6dc(void *this,undefined4 param_1);
undefined4 __fastcall FUN_1004a74a(int param_1);
void __fastcall FUN_1004a752(undefined4 *param_1);
void __fastcall FUN_1004a765(void **param_1);
undefined4 __thiscall FUN_1004a796(void *this,undefined4 *param_1);
undefined4 __thiscall FUN_1004a849(void *this,undefined4 *param_1);
undefined4 FUN_1004a87d(void);
void __fastcall FUN_1004a965(undefined **param_1);
undefined ** __thiscall FUN_1004a9d4(void *this,byte param_1);
undefined4 FUN_1004a9f0(int *param_1,int *param_2,int **param_3);
void __fastcall FUN_1004aa37(undefined **param_1);
void __cdecl FUN_1004aa4f(undefined **param_1,int param_2,int param_3);
void __cdecl thunk_FUN_10051c1e(int param_1);
void FUN_1004ab14(void);
int __cdecl FUN_1004ac87(undefined **param_1);
undefined4 __cdecl FUN_1004ad21(undefined **param_1);
int __cdecl FUN_1004adc8(undefined **param_1,char param_2);
uint FUN_1004ae2b(void);
undefined ** __cdecl FUN_1004aed4(undefined **param_1,undefined4 param_2,undefined4 param_3);
uint __cdecl FUN_1004af58(undefined **param_1);
undefined4 __cdecl FUN_1004b019(DWORD param_1,LPCSTR param_2,LPBYTE param_3);
undefined8 __fastcall FUN_1004b075(undefined4 param_1,undefined4 param_2);
int FUN_1004b09a(void);
undefined8 __fastcall FUN_1004b133(undefined4 param_1,undefined4 param_2);
undefined4 FUN_1004b16b(void);
undefined * Catch@1004b1a5(void);
uint __cdecl FUN_1004b210(DWORD param_1);
int FUN_1004b2c4(int param_1);
undefined4 FUN_1004b3a1(void);
uint __thiscall FUN_1004b42f(undefined param_1,undefined4 param_2);
uint FUN_1004b72a(void);
uint __cdecl FUN_1004b9dc(int *param_1);
uint __cdecl FUN_1004bc18(int *param_1);
uint FUN_1004bd92(void);
uint FUN_1004bee9(void);
uint FUN_1004c17d(void);
uint __cdecl FUN_1004c3a6(undefined **param_1);
uint __cdecl FUN_1004c47d(int *param_1);
uint __cdecl FUN_1004c519(int *param_1);
uint __cdecl FUN_1004c5f0(undefined **param_1);
uint __cdecl FUN_1004c874(int *param_1);
void __cdecl FUN_1004c9e1(int param_1);
void __cdecl FUN_1004ca0b(int param_1);
void __cdecl FUN_1004ca88(int *param_1);
void __cdecl FUN_1004cb7c(undefined **param_1);
void __thiscall FUN_1004cbc8(void *this,int param_1,undefined4 *param_2);
void __cdecl FUN_1004cc4f(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_1004cc69(int *param_1,undefined4 param_2);
void __cdecl FUN_1004cc87(int param_1,undefined4 param_2);
void __cdecl FUN_1004cc9c(int *param_1,undefined4 *param_2);
void __cdecl FUN_1004ccc1(int param_1,undefined4 *param_2);
int * __cdecl FUN_1004cce6(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void __cdecl FUN_1004cde9(int *param_1,uint *param_2);
void __cdecl FUN_1004cf5c(int *param_1,int *param_2);
void __thiscall FUN_1004cf7c(void *this,int *param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_1004d323(int *param_1,undefined4 *param_2);
void __cdecl FUN_1004d370(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_1004d493(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
uint __cdecl FUN_1004d514(int param_1,int param_2,uint param_3);
undefined4 __cdecl FUN_1004d52e(int param_1,int param_2);
uint __cdecl FUN_1004d544(int param_1,uint param_2);
undefined4 __cdecl FUN_1004d55a(int param_1,int param_2,double *param_3);
undefined4 __cdecl FUN_1004d583(int param_1,int param_2,uint *param_3);
undefined4 __cdecl FUN_1004d5ae(int param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,uint *param_6,uint *param_7,uint *param_8,uint *param_9);
undefined4 __cdecl FUN_1004d67f(int param_1,int param_2,undefined4 *param_3,uint *param_4);
undefined4 __cdecl FUN_1004d6b2(int param_1,int param_2,undefined4 *param_3,uint *param_4,int *param_5);
void __cdecl FUN_1004d719(int param_1);
void __cdecl FUN_1004d722(int param_1);
void __cdecl FUN_1004d734(int param_1);
undefined4 __cdecl FUN_1004d74d(int param_1);
void __cdecl FUN_1004d766(int param_1,byte param_2,int param_3);
void __cdecl FUN_1004d7b3(int *param_1,undefined *param_2);
void __cdecl FUN_1004d7e0(int *param_1,undefined *param_2);
void __cdecl FUN_1004d89f(int param_1,double param_2,double param_3);
void __cdecl FUN_1004d8d5(int param_1);
void __cdecl FUN_1004d8de(int param_1,int *param_2);
void __cdecl FUN_1004d9c9(int *param_1,int param_2);
int ** __cdecl FUN_1004dad9(int **param_1,int **param_2,int **param_3);
void __cdecl FUN_1004dc50(int *param_1,undefined *param_2);
void __cdecl FUN_1004dc94(uint *param_1,int param_2,uint param_3,byte param_4);
void __cdecl FUN_1004decc(int *param_1,byte *param_2,int param_3,int param_4,byte param_5);
void __cdecl FUN_1004e21a(uint *param_1,int param_2,int param_3,int param_4,int param_5);
void __cdecl FUN_1004e422(int *param_1,int param_2,int param_3);
void __cdecl FUN_1004e774(int *param_1,byte *param_2,int param_3,int param_4);
void __cdecl FUN_1004e882(int *param_1);
void __cdecl FUN_1004eb8b(int *param_1);
void __cdecl FUN_1004ec9e(int *param_1);
void __cdecl FUN_1004ee56(int param_1,int param_2,double param_3);
void __cdecl FUN_1004ee71(int param_1,uint *param_2,uint param_3,uint param_4,char param_5,byte param_6,undefined param_7,undefined param_8,undefined param_9);
void __cdecl FUN_1004ef12(int param_1,int param_2,undefined4 param_3,undefined2 param_4);
void __cdecl FUN_1004ef36(int param_1,int param_2,undefined param_3);
void __cdecl FUN_1004ef51(int param_1,int param_2,undefined param_3);
void __cdecl FUN_1004ef8a(int param_1,int param_2,int param_3,int param_4,undefined4 *param_5);
void __cdecl FUN_1004efd1(int *param_1,undefined4 param_2,undefined4 param_3);
void __cdecl FUN_1004eff9(int param_1,undefined4 param_2,undefined4 param_3);
int __cdecl FUN_1004f038(int param_1,uint param_2,uint param_3);
undefined4 * __cdecl FUN_1004f080(int *param_1,int param_2,int param_3);
void __cdecl thunk_FUN_10053188(int param_1,void *param_2);
void __cdecl FUN_1004f0d8(int param_1);
void __cdecl FUN_1004f12f(undefined4 param_1,undefined4 *param_2);
undefined4 * __cdecl FUN_1004f13d(int param_1);
void __fastcall FUN_1004f163(uint param_1);
undefined4 __fastcall FUN_1004f1af(float *param_1);
undefined4 __fastcall FUN_1004f22d(float *param_1);
void FUN_1004f25d(void);
uint __fastcall FUN_1004f280(float *param_1);
void __cdecl FUN_1004f37a(float *param_1,float *param_2,int param_3,uint param_4);
void __cdecl FUN_1004f67f(float *param_1,float *param_2,int param_3,float param_4);
undefined4 __cdecl FUN_1004fbea(ushort *param_1,float param_2);
undefined4 __cdecl FUN_100503ee(float *param_1,ushort *param_2);
int __cdecl FUN_1005052c(float *param_1,uint *param_2);
int __cdecl FUN_100505af(float *param_1,byte *param_2);
void __cdecl FUN_10050703(undefined4 *param_1,int param_2);
int __cdecl FUN_10050817(char *param_1,int param_2);
int __cdecl FUN_10050caf(undefined4 *param_1);
int __cdecl FUN_10050ce3(char *param_1);
void __cdecl FUN_10050d17(int param_1,int param_2,int param_3,int param_4,int param_5,uint param_6);
void __cdecl FUN_10050d5e(undefined4 *param_1,undefined4 *param_2,int param_3);
void __cdecl FUN_10050d80(undefined4 *param_1,uint param_2);
uint FUN_10050d9b(void);
void FUN_10050dcd(void);
undefined * FUN_10050f88(void);
void FUN_100510fe(void);
void __cdecl FUN_10051190(int param_1);
void __cdecl FUN_1005125d(int *param_1);
void __cdecl FUN_100512a5(int param_1);
void __fastcall FUN_100512e6(undefined4 param_1,undefined4 param_2);
int __thiscall FUN_100512fb(void *this,undefined **param_1,int param_2,undefined4 *param_3);
undefined4 * __thiscall FUN_100513f7(void *this,undefined **param_1,int param_2,uint param_3);
int __cdecl FUN_10051485(undefined **param_1,int param_2,uint param_3,void *param_4);
int __cdecl FUN_10051517(undefined **param_1,int param_2,int param_3,void *param_4);
void __thiscall FUN_100515b5(void *this,undefined **param_1,int param_2,undefined param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
void __thiscall FUN_10051616(void *this,undefined **param_1,int param_2,undefined param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
void __cdecl FUN_10051677(undefined **param_1);
int __cdecl FUN_100517f6(undefined **param_1,int *param_2,uint param_3,uint param_4,char param_5);
int __cdecl FUN_10051914(undefined **param_1,int *param_2,uint param_3,uint param_4,char param_5);
void __cdecl FUN_10051a37(undefined **param_1,int param_2);
void __cdecl FUN_10051b18(undefined **param_1);
void __cdecl FUN_10051b48(undefined **param_1);
void __cdecl FUN_10051bfc(int param_1);
void __cdecl FUN_10051c1e(int param_1);
void __cdecl FUN_10051c39(int param_1);
void __cdecl FUN_10051c55(int param_1);
uint __fastcall FUN_10051c71(undefined4 param_1,int param_2);
void __cdecl FUN_10051ce2(undefined **param_1);
void FUN_10051ed1(void);
void FUN_10051f40(void);
void __cdecl FUN_1005223b(int param_1);
void __cdecl FUN_10052270(undefined **param_1);
void __cdecl FUN_10052380(undefined **param_1);
undefined8 FUN_10052490(void);
void __cdecl FUN_10052565(undefined4 *param_1);
float * FUN_100529ac(float *param_1,float *param_2);
void FUN_10052a76(float *param_1,float *param_2,float *param_3);
void FUN_10052b59(float *param_1,float *param_2,float *param_3);
void __cdecl FUN_10052be7(undefined4 *param_1);
undefined4 __cdecl FUN_10052c23(int param_1);
undefined4 __cdecl FUN_10052c62(int param_1);
undefined4 __cdecl FUN_10052ca0(int param_1,int param_2,char *param_3,int param_4);
void __cdecl FUN_10052d85(int param_1,char *param_2,int param_3);
undefined4 * __cdecl FUN_10052d9c(byte **param_1,int param_2);
undefined4 * __cdecl FUN_10053103(int param_1);
void __cdecl FUN_10053145(void *param_1);
void * __cdecl FUN_10053152(int *param_1,size_t param_2);
void __cdecl FUN_10053188(int param_1,void *param_2);
undefined4 * __cdecl FUN_100531a1(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,uint param_4);
undefined4 * __cdecl FUN_100531c4(undefined4 param_1,undefined4 *param_2,undefined param_3,uint param_4);
undefined4 __cdecl FUN_100531f5(undefined *param_1);
void __cdecl FUN_10053218(int *param_1,byte *param_2,uint param_3);
bool __cdecl FUN_10053232(int *param_1);
void __cdecl FUN_10053290(int *param_1,byte *param_2);
void __cdecl FUN_100532f2(int param_1,undefined4 *param_2,uint param_3);
void __cdecl FUN_10053508(uint *param_1,int *param_2,int param_3);
void __cdecl FUN_100537d1(int param_1,int param_2,byte *param_3,byte *param_4,int param_5);
void __cdecl FUN_1005394c(int *param_1);
undefined4 __cdecl FUN_10053ae8(int *param_1,uint param_2);
void __cdecl FUN_10053b74(int *param_1,uint *param_2,int param_3);
void __thiscall FUN_10053d6a(void *this,int *param_1,int param_2,uint param_3);
void __cdecl FUN_10053e94(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,uint param_5);
void __cdecl FUN_10053ede(int *param_1,int param_2,uint param_3);
void __cdecl FUN_10053fe9(int *param_1,int param_2,uint param_3);
void __cdecl FUN_100540d8(int *param_1,int param_2,uint param_3);
void __cdecl FUN_1005428f(int *param_1,int param_2,uint param_3);
void __thiscall FUN_100542d9(void *this,int *param_1);
uint __cdecl FUN_100544fd(uint param_1,byte *param_2,uint param_3);
void __cdecl FUN_10054606(undefined4 param_1,size_t param_2);
void __cdecl FUN_10054611(undefined4 param_1,void *param_2);
undefined4 __cdecl FUN_1005461c(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void __cdecl FUN_10054621(undefined **param_1);
void FUN_10054635(void);
void FUN_100546dd(void);
void FUN_1005480e(void);
void FUN_100548e2(void);
void __cdecl FUN_10054978(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void __cdecl FUN_100549e0(int param_1,undefined4 param_2,uint *param_3,uint param_4);
void __cdecl FUN_10054b73(undefined **param_1,char param_2);
void __fastcall FUN_10054c46(int param_1);
undefined4 __cdecl FUN_10054c95(int param_1,int param_2);
undefined4 __cdecl FUN_10054e6f(int param_1);
int __cdecl FUN_1005500e(uint param_1,int param_2);
uint FUN_10055174(void);
void __cdecl FUN_10055774(int param_1);
void __cdecl FUN_100557af(int param_1,char param_2);
void __cdecl FUN_100558a7(int param_1,int param_2,int *param_3);
uint __cdecl FUN_10055a51(byte **param_1,byte *param_2,byte *param_3,int param_4);
uint __cdecl FUN_10055b3b(byte **param_1,byte *param_2,byte *param_3,int param_4,int *param_5);
undefined4 __cdecl FUN_10055c25(int param_1);
uint __cdecl FUN_10055c83(int param_1,int param_2);
void __cdecl FUN_10056050(undefined **param_1);
void __cdecl FUN_1005617f(int param_1);
undefined4 FUN_100561b9(void);
uint __cdecl FUN_10056214(byte *param_1,int param_2);
uint __cdecl FUN_10056411(uint param_1,int *param_2);
uint __cdecl FUN_1005663a(int param_1,int param_2);
uint __cdecl FUN_1005671c(int *param_1,int *param_2);
void __cdecl FUN_10056a8a(undefined **param_1);
void __cdecl FUN_10056d2d(int param_1);
void __cdecl FUN_10056d8e(undefined *param_1);
void __cdecl FUN_10056f45(undefined4 *param_1);
void __cdecl FUN_10056fb9(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,int *param_6,int param_7);
void __cdecl FUN_1005701e(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,int *param_6);
void __cdecl FUN_100570ae(int param_1);
void __cdecl FUN_100571e0(int param_1,char param_2);
void __cdecl FUN_1005727d(int param_1,int param_2,int *param_3,undefined4 param_4,int param_5,int *param_6,int param_7);
void __cdecl FUN_1005734e(int param_1,undefined4 *param_2,undefined4 *param_3,int *param_4);
void __cdecl FUN_1005742b(int param_1,undefined4 param_2,int param_3,undefined4 *param_4);
void __cdecl FUN_10057482(int param_1,undefined4 param_2,undefined4 *param_3,int *param_4);
void __cdecl FUN_100574ec(int param_1,int param_2,int param_3,byte **param_4);
void __cdecl FUN_10057590(int param_1,int param_2,byte **param_3,int *param_4);
void __cdecl FUN_10057697(undefined **param_1);
void FUN_10057858(void);
void __cdecl FUN_10057908(int param_1,int param_2,int param_3,int *param_4,int param_5);
void __cdecl FUN_10057973(int param_1,int *param_2,int param_3,int param_4,int param_5);
void __cdecl FUN_10057996(int param_1,int *param_2,int param_3,undefined4 *param_4,int param_5);
void __cdecl FUN_10057ac8(uint param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5);
void __cdecl FUN_10057c04(int param_1,int *param_2,int param_3,uint **param_4,int param_5);
void __cdecl FUN_10057e22(undefined **param_1);
void __cdecl FUN_10058008(int param_1,undefined4 param_2,int *param_3,undefined4 param_4,int param_5,int *param_6,int param_7);
void __cdecl FUN_100580ae(int param_1,undefined4 param_2,int *param_3,undefined4 param_4,int param_5,int *param_6);
void __cdecl FUN_100580df(int param_1,int *param_2,int param_3,undefined4 *param_4);
void __cdecl FUN_10058235(int param_1,int *param_2,int param_3,undefined4 *param_4);
void __cdecl FUN_1005841b(int param_1);
void __cdecl FUN_10058490(int param_1,int param_2,undefined4 param_3,int param_4);
void FUN_100584fc(void);
void __cdecl FUN_10058834(undefined4 param_1,int param_2,int param_3,int param_4);
void __cdecl FUN_10058987(int param_1);
void __cdecl FUN_10058abf(int param_1);
void __cdecl FUN_10058b4c(int param_1,int param_2,int param_3);
void __cdecl FUN_10058ccc(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,byte *param_7);
void __cdecl FUN_10058de6(int param_1,int param_2,int param_3);
void __cdecl FUN_10058eb6(int param_1,int param_2,char **param_3,int param_4);
void __cdecl FUN_10058f5f(int param_1,int param_2,int *param_3,int param_4);
void FUN_100591cd(void);
void __cdecl FUN_1005927f(undefined **param_1,char param_2);
void __cdecl FUN_10059390(undefined **param_1);
int __cdecl FUN_100594a3(undefined **param_1,int *param_2);
void FUN_1005956e(void);
void __cdecl FUN_1005969b(int param_1);
void FUN_100597c6(void);
void __cdecl FUN_1005988b(int param_1,int param_2,char **param_3,int param_4);
void __cdecl FUN_10059913(int param_1,int param_2,char **param_3,int param_4);
void __cdecl FUN_100599a0(int param_1,int param_2,char **param_3,uint param_4);
void __cdecl FUN_10059a8b(uint param_1,int param_2,char **param_3,int param_4);
void __cdecl FUN_10059b8a(int param_1,int param_2,char **param_3,char **param_4);
void FUN_10059d0e(void);
void __cdecl FUN_10059d44(undefined **param_1);
void __cdecl FUN_10059e22(undefined **param_1);
undefined (*) [16] FUN_10059eb0(undefined (*param_1) [16],float *param_2,float *param_3);
undefined8 * FUN_10059ef0(undefined8 *param_1,float *param_2,float *param_3);
void FUN_1005c276(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3);
void FUN_1005c81f(undefined8 *param_1,ulonglong *param_2,uint param_3);
void FUN_1005c88b(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,uint param_4);
undefined8 *FUN_1005c9c2(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,uint param_5,uint param_6);
void FUN_1005ca4f(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,undefined8 *param_5,uint param_6);
void FUN_1005cb45(undefined8 *param_1,undefined8 *param_2);
void FUN_1005cc91(undefined8 *param_1,undefined8 *param_2,ulonglong *param_3,ulonglong *param_4,ulonglong *param_5,ulonglong *param_6,ulonglong *param_7);
void __cdecl FUN_1005ddd2(undefined8 *param_1);
void FUN_1005df92(ulonglong *param_1,undefined8 *param_2,ulonglong *param_3,ulonglong *param_4,undefined8 *param_5,ulonglong *param_6,undefined8 *param_7);
void FUN_1005f12a(undefined8 *param_1,undefined8 param_2,undefined8 param_3);
void FUN_1005f803(ulonglong *param_1,ulonglong *param_2,uint param_3);
void FUN_1005f91c(ulonglong *param_1,undefined8 *param_2,ulonglong *param_3,ulonglong *param_4,undefined8 *param_5,ulonglong *param_6,undefined8 *param_7);
void FUN_10060a70(ulonglong *param_1,undefined4 *param_2,ulonglong *param_3);
ulonglong * FUN_1006114a(ulonglong *param_1,undefined4 *param_2,ulonglong *param_3);
void FUN_10061572(undefined8 *param_1,ulonglong *param_2);
undefined8 * FUN_10061800(undefined8 *param_1,ulonglong *param_2,undefined8 *param_3);
undefined8 * FUN_1006188b(undefined8 *param_1,ulonglong *param_2,undefined8 *param_3);
ulonglong *FUN_10061a57(ulonglong *param_1,ulonglong *param_2,undefined8 *param_3,ulonglong *param_4,ulonglong *param_5,ulonglong *param_6);
ulonglong *FUN_10061bdf(ulonglong *param_1,ulonglong *param_2,undefined8 *param_3,ulonglong *param_4,ulonglong *param_5,ulonglong *param_6);
ulonglong *FUN_10061e05(ulonglong *param_1,ulonglong *param_2,undefined8 *param_3,ulonglong *param_4,ulonglong *param_5,ulonglong *param_6);
void FUN_10062828(undefined8 *param_1,ulonglong *param_2);
void __cdecl FUN_1006290a(int *param_1,int param_2,int *param_3);
int * __cdecl FUN_10062975(int param_1,int param_2,int param_3);
void __cdecl FUN_10062a02(uint *param_1,byte **param_2,undefined4 *param_3);
undefined4 __cdecl FUN_1006319d(int *param_1,int param_2);
uint __cdecl FUN_100631d1(uint param_1,byte *param_2,uint param_3);
void __cdecl FUN_100632fa(int param_1,int param_2,int param_3,int param_4,int param_5);
void __cdecl FUN_1006360f(int param_1,int param_2,int param_3,int param_4,int param_5);
void __cdecl FUN_100637cd(int param_1,int param_2,short *param_3,int *param_4,int param_5);
void __cdecl FUN_1006380a(int param_1,int param_2,undefined8 *param_3,int param_4,int param_5);
void __cdecl FUN_10063856(int param_1,int param_2,undefined8 *param_3,int *param_4,int param_5);
void __cdecl FUN_100638a2(int param_1,int param_2,short *param_3,int param_4,int param_5);
void __cdecl FUN_10063c90(uint *param_1,uint *param_2,uint *param_3);
void FUN_10063e80(void);
void __cdecl FUN_10063f70(uint *param_1,uint *param_2,uint *param_3);
void FUN_10064180(void);
void FUN_10064280(void);
void FUN_10064860(void);
void FUN_10064980(void);
void __cdecl FUN_10064d78(undefined param_1,undefined param_2,undefined4 param_3,undefined4 param_4,int param_5);
void __cdecl FUN_10064dac(uint param_1,byte **param_2,int param_3);
void __cdecl FUN_10065310(undefined4 param_1,int param_2);
undefined4 __cdecl FUN_10065321(uint *param_1,uint param_2,uint param_3,int param_4,int param_5,int *param_6,int param_7,uint *param_8,uint *param_9);
int __cdecl FUN_100656a6(uint *param_1,int *param_2,int *param_3,int param_4,int param_5);
int __cdecl FUN_10065725(uint param_1,uint param_2,uint *param_3,int *param_4,int *param_5,int *param_6,int *param_7,int param_8,int param_9);
undefined4 __cdecl FUN_10065828(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4);
int __cdecl FUN_10065857(int param_1,int param_2,int param_3);
void __cdecl FUN_1006596c(short *param_1,short *param_2,int *param_3,int param_4,int param_5,int param_6);
void __cdecl FUN_10065dce(undefined8 *param_1,undefined8 *param_2,ulonglong *param_3,int param_4,int param_5,int param_6);
void __cdecl FUN_10066486(short *param_1,short *param_2,short *param_3,int param_4,int param_5,int param_6);
void __cdecl FUN_100667e1(undefined8 *param_1,ulonglong *param_2,undefined8 *param_3,int *param_4,int param_5,int param_6);
byte * __cdecl FUN_100675b4(uint param_1,byte *param_2,int param_3,int param_4,int param_5,byte **param_6);
undefined4 FUN_10067869(void);
uint __thiscall FUN_10067905(undefined param_1,undefined4 param_2);
uint FUN_10067c00(void);
uint FUN_10067eb2(void);
uint FUN_1006814e(void);
uint __cdecl FUN_1006838c(undefined **param_1);
void __fastcall FUN_10068463(int param_1);
void __thiscall FUN_10068644(void *this,int param_1);
undefined __cdecl FUN_100686f4(undefined **param_1);
uint __cdecl FUN_10068830(int *param_1);
uint __cdecl FUN_100688d3(int *param_1);
uint __cdecl FUN_100689aa(undefined **param_1);
undefined4 __cdecl FUN_10068a41(undefined **param_1);
uint __cdecl FUN_10068c2c(int *param_1);
void __cdecl FUN_10068d99(int param_1);
void __cdecl FUN_10068dc4(int param_1);
void __cdecl FUN_10068e27(undefined **param_1,int param_2,int param_3);
void FUN_10068ee7(void);
int __cdecl FUN_1006905a(undefined **param_1);
undefined4 __cdecl FUN_100690f4(undefined **param_1);
int __cdecl FUN_1006919b(undefined **param_1,char param_2);
void __cdecl FUN_100691fe(int *param_1);
void __cdecl FUN_1006924d(undefined **param_1);
uint FUN_10069299(void);
undefined ** __cdecl FUN_10069342(undefined **param_1,undefined4 param_2,undefined4 param_3);
uint __cdecl FUN_100693c6(undefined **param_1);
void __cdecl FUN_10069485(undefined **param_1,int param_2,int param_3);
void __cdecl thunk_FUN_10069e4d(int param_1);
void __cdecl FUN_1006953e(int param_1,undefined param_2);
void __cdecl FUN_10069588(undefined **param_1);
void __cdecl FUN_10069674(undefined **param_1,char param_2);
void __cdecl FUN_100696e0(undefined **param_1,undefined4 param_2,undefined *param_3);
void __cdecl FUN_1006978b(undefined **param_1,int param_2,int *param_3,int param_4,char param_5);
void __cdecl FUN_1006983b(undefined **param_1,int param_2,char param_3);
int __cdecl FUN_1006986d(int param_1);
void __cdecl FUN_10069894(undefined **param_1,int param_2,char param_3);
void __cdecl FUN_100698b0(undefined **param_1,void *param_2);
void __cdecl FUN_1006991d(undefined **param_1,undefined *param_2);
void __cdecl FUN_10069ba8(undefined **param_1);
void __cdecl FUN_10069bee(undefined **param_1);
undefined4 __cdecl FUN_10069d43(undefined **param_1);
void __cdecl FUN_10069d84(undefined **param_1);
void __cdecl FUN_10069dde(int param_1,undefined4 param_2);
void __cdecl FUN_10069e1a(int param_1);
void __cdecl FUN_10069e4d(int param_1);
void __cdecl FUN_10069e68(int param_1);
void __cdecl FUN_10069e84(int param_1);
int __cdecl FUN_10069ea0(int param_1,int param_2);
int __cdecl FUN_10069eb0(int param_1,int param_2);
void __cdecl FUN_10069ec8(int param_1,int param_2,int param_3,int param_4,int param_5,size_t param_6);
void __cdecl FUN_10069f06(void *param_1,void *param_2,int param_3);
void __cdecl FUN_10069f1f(void *param_1,size_t param_2);
void FUN_10069f32(void);
undefined * FUN_1006a0ed(void);
void FUN_1006a263(void);
void __cdecl FUN_1006a2f7(int param_1);
void __cdecl FUN_1006a3c0(int *param_1);
void __cdecl FUN_1006a408(int param_1);
void __fastcall FUN_1006a449(undefined4 param_1,undefined4 param_2);
int __thiscall FUN_1006a45e(void *this,undefined **param_1,int param_2,undefined4 *param_3);
undefined4 * __thiscall FUN_1006a55a(void *this,undefined **param_1,int param_2,uint param_3);
int __cdecl FUN_1006a5e8(undefined **param_1,int param_2,uint param_3,void *param_4);
int __cdecl FUN_1006a67a(undefined **param_1,int param_2,int param_3,void *param_4);
void __thiscall FUN_1006a718(void *this,undefined **param_1,int param_2,undefined param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
void __thiscall FUN_1006a779(void *this,undefined **param_1,int param_2,undefined param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
void __cdecl FUN_1006a7da(undefined **param_1);
void __cdecl FUN_1006a959(undefined4 param_1,char param_2);
void __cdecl FUN_1006a9e1(undefined4 param_1,char param_2);
int __cdecl FUN_1006aa6c(undefined **param_1,int *param_2,uint param_3,uint param_4,char param_5);
int __cdecl FUN_1006ab8a(undefined **param_1,int *param_2,uint param_3,uint param_4,char param_5);
void __cdecl FUN_1006acad(undefined **param_1,int param_2);
void __cdecl FUN_1006ad8e(undefined **param_1);
void __cdecl FUN_1006adbe(undefined **param_1);
uint __fastcall FUN_1006aed1(undefined4 param_1,int param_2);
void __cdecl FUN_1006af42(undefined **param_1);
void FUN_1006b131(void);
void FUN_1006b1b1(void);
void __cdecl FUN_1006b4ac(int param_1);
void __cdecl FUN_1006b4dc(undefined param_1);
void __cdecl FUN_1006b507(undefined4 param_1);
void FUN_1006b521(void);
char __fastcall FUN_1006b541(undefined **param_1);
void __cdecl FUN_1006b607(int param_1,char param_2);
void __cdecl FUN_1006b6c4(undefined4 param_1);
void FUN_1006b762(void);
void FUN_1006b82d(void);
void __cdecl FUN_1006b934(undefined **param_1,undefined param_2,uint param_3);
void __cdecl FUN_1006b97e(int param_1);
void __cdecl FUN_1006b9bf(undefined **param_1);
void __cdecl FUN_1006ba88(int *param_1);
void __cdecl FUN_1006bb70(undefined **param_1);
void __cdecl FUN_1006bbea(int param_1);
void __cdecl FUN_1006bc38(undefined **param_1);
void __cdecl FUN_1006bcde(undefined **param_1);
void FUN_1006bcf2(void);
void FUN_1006bcf3(void);
void FUN_1006bd9b(void);
void FUN_1006becc(void);
void FUN_1006bfa0(void);
void __cdecl FUN_1006c036(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void __cdecl FUN_1006c09e(int param_1,undefined4 param_2,uint *param_3,uint param_4);
void __cdecl FUN_1006c231(undefined **param_1,char param_2);
void __fastcall FUN_1006c304(int param_1);
undefined4 __cdecl FUN_1006c353(int param_1,int param_2);
undefined4 __cdecl FUN_1006c52d(int param_1);
int __cdecl FUN_1006c6cc(uint param_1,int param_2);
uint FUN_1006c832(void);
void __cdecl FUN_1006ce2f(int param_1);
void __cdecl FUN_1006ce6a(int param_1,char param_2);
void __cdecl FUN_1006cf62(undefined **param_1,char param_2,int param_3,int *param_4);
uint __cdecl FUN_1006d1ec(byte **param_1,byte *param_2,byte *param_3,int param_4);
uint __cdecl FUN_1006d2ea(byte **param_1,byte *param_2,byte *param_3,int param_4,int param_5);
undefined4 FUN_1006d3bf(void);
byte * __cdecl FUN_1006d41f(int param_1,int param_2);
void __cdecl FUN_1006d7c1(undefined **param_1);
void __cdecl FUN_1006d8f8(int param_1);
undefined4 FUN_1006d935(void);
uint __cdecl FUN_1006d998(byte *param_1,int param_2);
uint __cdecl FUN_1006db87(uint param_1,int *param_2);
uint __cdecl FUN_1006dda2(int param_1,int param_2);
uint __cdecl FUN_1006de6c(int *param_1,int *param_2);
void __cdecl FUN_1006e1cc(undefined **param_1);
void __cdecl FUN_1006e401(int param_1);
void __cdecl FUN_1006e462(undefined **param_1);
void __cdecl FUN_1006e61f(void **param_1);
void __cdecl FUN_1006e694(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,int *param_6,int param_7);
void __cdecl FUN_1006e6f9(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,int *param_6);
void __cdecl FUN_1006e789(int param_1);
void __cdecl FUN_1006e8bb(int param_1,char param_2);
void __cdecl FUN_1006e958(int param_1,int param_2,int *param_3,undefined4 param_4,int param_5,int *param_6,int param_7);
void __cdecl FUN_1006ea26(int param_1,undefined4 *param_2,undefined4 *param_3,int *param_4);
void __cdecl FUN_1006eb03(int param_1,undefined4 param_2,int param_3,undefined4 *param_4);
void __cdecl FUN_1006eb5a(int param_1,undefined4 param_2,undefined4 *param_3,int *param_4);
void __cdecl FUN_1006ebc4(int param_1,int param_2,int param_3,byte **param_4);
void __cdecl FUN_1006ec68(int param_1,int param_2,byte **param_3,int *param_4);
void __cdecl FUN_1006ed6f(undefined **param_1);
void FUN_1006ef2e(void);
void __cdecl FUN_1006efde(int param_1,int *param_2,int param_3,undefined4 *param_4,int param_5);
void __cdecl FUN_1006f0ea(int param_1,int param_2,int param_3,int *param_4,int param_5);
void __cdecl FUN_1006f155(int param_1,int *param_2,int param_3,int param_4,int param_5);
void __cdecl FUN_1006f178(int param_1,int *param_2,int param_3,undefined4 *param_4,int param_5);
void __cdecl FUN_1006f1cf(int param_1,int *param_2,int param_3,undefined4 *param_4,int param_5);
void __cdecl FUN_1006f301(undefined **param_1);
void __cdecl FUN_1006f4f8(int param_1,undefined4 param_2,int *param_3,undefined4 param_4,int param_5,int *param_6,int param_7);
void __cdecl FUN_1006f59e(int param_1,undefined4 param_2,int *param_3,undefined4 param_4,int param_5,int *param_6);
void __cdecl FUN_1006f5cf(int param_1,int *param_2,int param_3,undefined4 *param_4);
void __cdecl FUN_1006f725(int param_1,int *param_2,int param_3,undefined4 *param_4);
void __cdecl FUN_1006f90b(int param_1);
void __cdecl FUN_1006f980(int param_1,int param_2,undefined4 param_3,int param_4);
void FUN_1006f9ec(void);
void __cdecl FUN_1006fd24(undefined4 param_1,int param_2,int param_3,int param_4);
void __cdecl FUN_1006fe77(int param_1);
void __cdecl FUN_1006ffaf(int param_1);
void __cdecl FUN_1007003c(int param_1,int param_2,int param_3);
void __cdecl FUN_1007010c(int param_1,int param_2,char **param_3,int param_4);
void __cdecl FUN_100701b5(int param_1,int param_2,int *param_3,int param_4);
void FUN_10070423(void);
void __cdecl FUN_100704d5(undefined **param_1,char param_2);
void __cdecl FUN_100705e6(undefined **param_1);
int __cdecl FUN_100706f9(undefined **param_1,int *param_2);
void FUN_100707c4(void);
void __cdecl FUN_100708f1(int param_1);
void FUN_10070a1c(void);
void __cdecl FUN_10070ae1(int param_1,int param_2,char **param_3,int param_4);
void __cdecl FUN_10070b69(int param_1,int param_2,char **param_3,int param_4);
void __cdecl FUN_10070bf6(int param_1,int param_2,char **param_3,uint param_4);
void __cdecl FUN_10070ce1(uint param_1,int param_2,char **param_3,int param_4);
void __cdecl FUN_10070de0(int param_1,int param_2,char **param_3,char **param_4);
void FUN_10070f62(void);
void __cdecl FUN_10070f98(undefined **param_1);
void __cdecl FUN_10071076(undefined **param_1);
void __cdecl FUN_100710fd(int param_1,undefined4 param_2,int *param_3,undefined4 param_4);
void __cdecl FUN_100711cd(undefined **param_1,char param_2);
void __fastcall FUN_10071251(int param_1);
uint __cdecl FUN_1007128d(int param_1,int param_2);
uint __cdecl FUN_10071476(int param_1);
void __cdecl FUN_100715e7(uint param_1,undefined4 *param_2);
void __cdecl FUN_100717c3(undefined **param_1,int param_2);
void __cdecl FUN_10071855(int param_1,char param_2);
void __cdecl FUN_10071906(undefined **param_1,char param_2,int param_3,int *param_4);
undefined4 FUN_10071af0(void);
uint __cdecl FUN_10071b10(uint param_1,int param_2);
undefined4 FUN_10071ba8(void);
uint __cdecl FUN_10071bc5(short *param_1,int param_2,int *param_3,uint *param_4);
uint __cdecl FUN_10071d2b(char param_1);
uint __cdecl FUN_10071d97(int param_1,int param_2);
void __cdecl FUN_10071ea9(undefined **param_1);
void __cdecl FUN_10071f16(undefined **param_1,short *param_2,int *param_3,int param_4);
undefined4 __cdecl FUN_10071fdd(undefined **param_1,int param_2);
void __cdecl FUN_10072097(undefined **param_1,void *param_2,int param_3);
void __cdecl FUN_1007224c(undefined **param_1);
void __cdecl FUN_1007232b(undefined **param_1,char param_2);
void __cdecl FUN_10072493(int param_1);
void FUN_100724cc(void);
void __cdecl FUN_100724fe(uint param_1,int param_2);
void __fastcall FUN_100725a2(int param_1,int param_2);
void __fastcall FUN_100725cc(char *param_1);
void FUN_100725f2(void);
void __cdecl FUN_10072658(char param_1);
undefined4 __cdecl FUN_100726e2(undefined **param_1,int param_2);
undefined4 __cdecl FUN_1007280a(undefined **param_1,int *param_2);
undefined4 __cdecl FUN_10072995(int param_1,int param_2);
undefined4 __cdecl FUN_10072a42(int param_1,int *param_2);
void __cdecl FUN_10072c6c(undefined **param_1);
void __cdecl FUN_10072d29(undefined **param_1,char param_2);
void __cdecl FUN_10072e90(int param_1);
void __cdecl FUN_10072ec6(undefined **param_1);
void __cdecl FUN_10073052(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7);
void __cdecl FUN_1007316c(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7);
void __cdecl FUN_100732a8(undefined **param_1);
void __cdecl FUN_10073366(int param_1,size_t param_2,int param_3);
void __cdecl FUN_10073394(int param_1,int param_2,uint *param_3,uint param_4,int param_5,uint *param_6,uint param_7);
void __cdecl FUN_100734dc(int param_1,int param_2,uint *param_3,uint param_4,undefined4 param_5,uint *param_6,uint param_7);
void FUN_10073666(void);
void __cdecl FUN_10073769(undefined **param_1,char param_2);
void __cdecl FUN_1007380d(int param_1,int param_2,int param_3);
void __cdecl FUN_10073859(int param_1,int *param_2,int param_3,int param_4,int param_5);
void __cdecl FUN_100738cf(int param_1,int param_2,int *param_3,int param_4);
void __cdecl FUN_100739bc(int param_1,undefined4 param_2,int param_3,int param_4);
void __cdecl FUN_100739fb(uint param_1,int param_2,byte **param_3,int param_4);
void __cdecl FUN_10073a81(int param_1,int param_2,byte **param_3,int param_4);
void __cdecl FUN_10073b23(int param_1,int param_2,int param_3,int param_4);
void __cdecl FUN_10073d8b(int param_1,int param_2,int param_3,int param_4);
void __cdecl FUN_10073ed9(undefined **param_1);
void __cdecl FUN_1007403c(int param_1);
void __cdecl FUN_10074100(int param_1,byte **param_2,int *param_3,int param_4,int param_5);
void __cdecl FUN_100741ff(int param_1,byte **param_2,int *param_3,int param_4,int param_5);
void __cdecl FUN_10074285(int param_1,byte **param_2,int *param_3,int param_4,int param_5);
void __cdecl FUN_100743bd(int param_1,undefined4 *param_2,int *param_3,int param_4,int param_5);
void __cdecl FUN_10074415(int param_1,int *param_2,int param_3,int param_4,int param_5);
void __cdecl FUN_1007447f(undefined **param_1);
void FUN_10074616(void);
void FUN_100747b6(void);
void FUN_10074ada(void);
undefined * FUN_10074baf(void);
void __cdecl FUN_10074eb6(int param_1);
void __cdecl FUN_10074f35(int param_1,char param_2);
void __cdecl FUN_10074fd4(int param_1,int param_2,int param_3,int param_4,int param_5);
void __cdecl FUN_100752af(int param_1,int param_2,int param_3,int param_4,int param_5);
void __cdecl FUN_1007545e(int param_1,int param_2,short *param_3,int *param_4,int param_5);
void __cdecl FUN_10075499(int param_1,int param_2,short *param_3,int param_4,int param_5);
void __cdecl FUN_10075972(int param_1,int param_2,short *param_3,int param_4,int param_5);
void __cdecl FUN_10075d2c(int param_1,int param_2,short *param_3,int param_4,int param_5);
void __cdecl FUN_10076198(int param_1);
void __cdecl FUN_10076490(int param_1);
void __cdecl FUN_1007666e(int param_1);
uint __thiscall FUN_100768ef(void *this,uint param_1);
int __cdecl FUN_10076933(undefined4 param_1,uint *param_2);
void __cdecl FUN_1007696c(undefined4 param_1);
void __cdecl FUN_100769ae(int *param_1);
int __cdecl FUN_10076a60(char *param_1,char *param_2,int param_3);
void * __cdecl FUN_10076a91(undefined4 param_1);
int __cdecl FUN_10076b98(undefined4 *param_1,int *param_2,int param_3,uint param_4,int param_5,uint param_6,int param_7,uint param_8);
void __cdecl FUN_10076ece(undefined4 param_1,undefined4 *param_2,int param_3,uint param_4,int param_5,uint param_6,int param_7,uint param_8);
int __cdecl FUN_10076ef5(int param_1);
int __cdecl FUN_10076f37(int param_1);
int __cdecl FUN_10076f9e(int param_1,char *param_2,int param_3);
int __cdecl FUN_1007706a(int *param_1,int *param_2,int **param_3);
int __cdecl FUN_10077251(int param_1,int param_2,uint param_3);
undefined4 __cdecl FUN_10077479(int param_1);
undefined ** __cdecl FUN_100774ea(undefined4 param_1,undefined **param_2);
void __cdecl FUN_10077696(undefined4 param_1);
undefined4 __cdecl FUN_100776a4(void *param_1);
int __cdecl FUN_100776d8(void **param_1,void **param_2,undefined4 *param_3,void *param_4,char *param_5);
void __cdecl FUN_1007794e(void **param_1);
void __cdecl FUN_10077961(undefined4 param_1,char *param_2,byte param_3);
void __cdecl FUN_10077a2a(undefined **param_1);
int __cdecl FUN_10077a70(int param_1,uint param_2,uint param_3);
void __cdecl thunk_FUN_1007c4b0(int param_1,void *param_2);
void __cdecl FUN_10077b50(int param_1);
void __cdecl FUN_10077b70(int param_1,uint *param_2,uint param_3);
void __cdecl FUN_10077bc0(int param_1,int param_2,uint param_3,int param_4);
void __cdecl FUN_10077fa0(int param_1,undefined4 *param_2);
int __cdecl FUN_10078000(int param_1);
void __cdecl FUN_10078010(int param_1,undefined4 param_2);
char * FUN_10078020(void);
undefined __cdecl FUN_10078030(int param_1,int *param_2);
undefined4 * __cdecl FUN_10078080(undefined4 *param_1);
int * __cdecl FUN_100780c0(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined *param_6,undefined *param_7);
void __cdecl FUN_10078380(int *param_1,uint *param_2);
void __cdecl FUN_10078950(int *param_1,int *param_2);
void __cdecl FUN_100789a0(int *param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_10078e60(int *param_1,undefined4 *param_2);
void __cdecl FUN_10078ec0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __cdecl FUN_10079160(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void __cdecl FUN_10079190(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 __cdecl FUN_10079260(int param_1);
void __cdecl FUN_10079290(int param_1,byte *param_2);
void __cdecl FUN_10079310(int *param_1,undefined *param_2);
void __cdecl FUN_10079350(int param_1,byte *param_2);
void __cdecl FUN_100793a0(uint *param_1,undefined *param_2,uint param_3);
void __cdecl FUN_100795d0(int *param_1,undefined *param_2);
void __cdecl FUN_100796a0(int *param_1);
void __cdecl FUN_100796c0(int *param_1,void *param_2,size_t param_3);
void __cdecl FUN_10079700(int param_1,undefined4 param_2,int param_3);
void __cdecl FUN_10079760(int *param_1,int *param_2);
void __cdecl FUN_10079950(int *param_1,int *param_2);
void __cdecl FUN_10079c50(int *param_1,int param_2);
void __cdecl FUN_10079dd0(int *param_1,undefined4 *param_2);
void __cdecl FUN_1007a020(int *param_1);
void __cdecl FUN_1007a100(undefined4 *param_1);
void __cdecl FUN_1007a220(int *param_1,int param_2,size_t param_3,int param_4,double *param_5);
int * __cdecl FUN_1007a4a0(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined *param_6,undefined4 param_7);
void __cdecl FUN_1007a6a0(int *param_1,undefined4 *param_2);
void __cdecl FUN_1007a700(int *param_1,void **param_2);
void __cdecl FUN_1007a7b0(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void __cdecl FUN_1007a7e0(int param_1,int param_2,undefined4 *param_3);
void __cdecl FUN_1007a810(int param_1,int param_2,double param_3,double param_4,double param_5,double param_6,double param_7,double param_8,double param_9,double param_10);
void __cdecl FUN_1007ab80(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10);
void __cdecl FUN_1007ada0(int param_1,int param_2,double param_3);
void __cdecl FUN_1007ae30(int param_1,int param_2,int param_3);
void __cdecl FUN_1007aeb0(int *param_1,int param_2,int param_3);
void __cdecl FUN_1007af70(int *param_1,uint *param_2,uint param_3,uint param_4,int param_5,uint param_6,int param_7,int param_8,int param_9);
void __cdecl FUN_1007b1a0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined param_5);
void __cdecl FUN_1007b1e0(int *param_1,int param_2,undefined4 *param_3,undefined4 param_4,undefined4 param_5,undefined param_6,int param_7,undefined4 *param_8,int param_9);
void __cdecl FUN_1007b3b0(int param_1,int param_2,undefined param_3,undefined8 param_4,undefined8 param_5);
void __cdecl FUN_1007b3f0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined param_5);
void __cdecl FUN_1007b430(int *param_1,int param_2,undefined4 *param_3,int param_4);
void __cdecl FUN_1007b500(int param_1,int param_2,undefined4 *param_3);
void __cdecl FUN_1007b530(int param_1,int param_2,undefined param_3);
void __cdecl FUN_1007b610(int *param_1,int param_2,undefined4 *param_3,undefined param_4,undefined4 *param_5,uint param_6);
undefined4 __cdecl FUN_1007b740(int *param_1,int param_2,int param_3,int param_4);
void __cdecl FUN_1007b950(int param_1,int param_2,undefined4 *param_3);
void __cdecl FUN_1007b990(int *param_1,int param_2,undefined4 *param_3,uint param_4,undefined4 *param_5);
void __cdecl FUN_1007baa0(int *param_1,int param_2,int param_3,int param_4);
void __cdecl FUN_1007bc80(int *param_1,int param_2,int param_3,int param_4);
void __fastcall FUN_1007be20(int param_1,undefined4 *param_2);
void __cdecl FUN_1007beb0(int *param_1);
void __cdecl FUN_1007c0f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void __cdecl FUN_1007c110(int *param_1,undefined4 *param_2);
void __cdecl FUN_1007c1c0(int param_1,char *param_2);
void __cdecl FUN_1007c220(int *param_1,undefined4 *param_2);
void __cdecl FUN_1007c270(int param_1,undefined4 *param_2);
undefined4 * __cdecl FUN_1007c2c0(int param_1,undefined *param_2,undefined4 param_3);
void __cdecl FUN_1007c340(void *param_1,undefined *param_2,undefined4 param_3);
undefined4 * __cdecl FUN_1007c390(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,uint param_4);
undefined4 * __cdecl FUN_1007c3c0(undefined4 param_1,undefined4 *param_2,undefined param_3,uint param_4);
void __cdecl FUN_1007c400(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void __cdecl FUN_1007c430(void *param_1);
void * __cdecl FUN_1007c450(int *param_1,size_t param_2);
void __cdecl FUN_1007c4b0(int param_1,void *param_2);
void * __cdecl FUN_1007c4e0(int *param_1,size_t param_2);
undefined4 __cdecl FUN_1007c510(undefined *param_1);
void __cdecl FUN_1007c540(int *param_1,uint *param_2,uint param_3);
bool __cdecl FUN_1007c570(int *param_1);
void __cdecl FUN_1007c5f0(int *param_1,size_t param_2,int param_3,uint param_4,uint *param_5);
void __cdecl FUN_1007c9f0(int *param_1,byte *param_2);
void __cdecl FUN_1007ca50(int param_1,undefined4 *param_2,uint param_3);
void __cdecl FUN_1007cd70(uint param_1);
void __cdecl FUN_1007d1f0(int param_1,int param_2,byte *param_3,byte *param_4,byte *param_5);
void __cdecl FUN_1007d3d0(int *param_1);
uint __cdecl FUN_1007d700(int *param_1);
undefined4 __cdecl FUN_1007d790(int *param_1,uint param_2);
void __cdecl FUN_1007d860(int *param_1,uint *param_2,int param_3);
void __cdecl FUN_1007da30(int *param_1,int param_2,uint param_3);
void __cdecl FUN_1007dbd0(int *param_1,undefined4 param_2,uint param_3);
void __cdecl FUN_1007dc20(int *param_1,int param_2,uint param_3);
void __cdecl FUN_1007dda0(int *param_1,int param_2,uint param_3);
void __cdecl FUN_1007df20(int *param_1,int param_2,uint param_3);
void __cdecl FUN_1007e360(int *param_1,int param_2,uint param_3);
void __cdecl FUN_1007e560(int *param_1,int param_2,uint param_3);
void __cdecl FUN_1007e760(int *param_1,int param_2,uint param_3);
void __cdecl FUN_1007e9f0(int *param_1,int param_2,uint param_3);
void __cdecl FUN_1007ec60(int *param_1,int param_2,uint param_3);
void __cdecl FUN_1007ee80(int *param_1,int param_2,uint param_3);
void __cdecl FUN_1007eff0(int *param_1,int param_2,uint param_3);
void __cdecl FUN_1007f110(int *param_1,int param_2,uint param_3);
void __cdecl FUN_1007f230(int *param_1,int param_2,uint param_3);
void __cdecl FUN_1007f550(int *param_1,int param_2,uint param_3);
void __cdecl FUN_1007f770(int *param_1,int param_2,uint param_3);
void __cdecl FUN_1007f870(int *param_1,int param_2,uint param_3);
void __cdecl FUN_1007f9a0(int *param_1,int param_2,uint param_3);
void __cdecl FUN_1007fb60(int *param_1,int param_2,size_t param_3);
void __cdecl FUN_1007fcf0(int *param_1);
void __cdecl FUN_10080080(int param_1,int *param_2);
void __cdecl FUN_10080220(int *param_1,int param_2);
void __cdecl FUN_10080350(int *param_1,byte *param_2,byte *param_3);
void __cdecl FUN_10080520(int *param_1,undefined *param_2);
void __cdecl FUN_10080570(int *param_1,int param_2);
void __cdecl FUN_10080680(int *param_1,int param_2);
void __cdecl FUN_10080760(uint *param_1,int param_2,uint param_3,char param_4);
void __cdecl FUN_100809f0(int *param_1,int param_2);
undefined4 __cdecl FUN_10080b50(int param_1,int *param_2,byte *param_3);
void __cdecl FUN_100811f0(int *param_1,undefined2 *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,byte param_12);
void __cdecl FUN_100821a0(int *param_1,byte *param_2,int param_3,int param_4,byte param_5);
void __cdecl FUN_10082530(uint *param_1,int param_2,int param_3,int param_4,int param_5);
void __cdecl FUN_10082750(int *param_1,int param_2,int param_3);
void __cdecl FUN_10082b30(int *param_1,byte *param_2,int param_3,int param_4);
void __cdecl FUN_10082c90(int *param_1);
void __cdecl FUN_100832c0(int *param_1,int param_2);
void __cdecl FUN_10083390(int *param_1);
void __cdecl FUN_10083f20(int *param_1);
void __cdecl FUN_100843b0(undefined *param_1,undefined4 param_2);
void __cdecl FUN_100843e0(int *param_1);
void __cdecl FUN_10084450(int *param_1,uint *param_2);
void __cdecl FUN_100844c0(int *param_1,uint *param_2,uint param_3);
void __cdecl FUN_10084500(int *param_1);
int __fastcall FUN_10084540(int param_1,int param_2,int *param_3,int *param_4);
void FUN_100847e0(void);
void __cdecl FUN_100848e0(int *param_1,int param_2,uint param_3);
void __cdecl FUN_10084a00(int *param_1,int param_2,int param_3);
byte * __cdecl FUN_10084ae0(int *param_1,byte *param_2,byte **param_3);
void __cdecl FUN_10084cc0(int *param_1,uint *param_2,uint *param_3);
void __cdecl FUN_10084da0(int *param_1,byte *param_2,uint *param_3,undefined4 param_4,uint param_5);
void __cdecl FUN_10084ef0(int *param_1,byte *param_2,undefined4 param_3,undefined4 param_4,int param_5,int param_6,uint *param_7,uint **param_8);
void __cdecl FUN_100851a0(int *param_1);
void __cdecl FUN_10085340(uint *param_1,undefined4 *param_2,uint param_3);
void __cdecl FUN_10085600(int *param_1,uint *param_2,uint *param_3,uint param_4);
void __cdecl FUN_10085680(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8);
void __cdecl FUN_10085ad0(int *param_1,uint *param_2,uint param_3);
void __cdecl FUN_10085c10(int *param_1);
void __cdecl FUN_10085c80(int *param_1,undefined param_2);
void __cdecl FUN_10085d40(int *param_1,uint param_2);
void __cdecl FUN_10085df0(int *param_1,uint *param_2,int param_3,undefined *param_4,int param_5);
void __cdecl FUN_10085f40(int *param_1,byte **param_2);
void __cdecl FUN_10086140(int *param_1,byte *param_2,uint param_3);
void __cdecl FUN_10086220(int *param_1,double param_2,double param_3,double param_4,double param_5,double param_6,double param_7,double param_8,double param_9);
void __cdecl FUN_10086510(int *param_1,uint *param_2,int param_3,uint param_4,int param_5);
void __cdecl FUN_10086670(int *param_1,byte *param_2,uint param_3);
void __cdecl FUN_100867d0(int *param_1,undefined4 param_2,undefined4 param_3,int param_4);
void __cdecl FUN_100868c0(int *param_1,undefined param_2,undefined8 param_3);
void __cdecl FUN_10086970(int *param_1,undefined4 param_2,undefined4 param_3,int param_4);
void __cdecl FUN_10086a60(int *param_1,undefined2 *param_2);
void __cdecl FUN_10086b10(int *param_1);
void __cdecl FUN_10086d70(int *param_1,int param_2);
void __cdecl FUN_10086e50(int *param_1,int param_2);
void __cdecl FUN_10087a00(int *param_1,byte *param_2,int param_3);
void __cdecl FUN_10087b30(int *param_1,byte *param_2,uint *param_3);
void __cdecl FUN_10087db0(int *param_1,undefined *param_2);
void __cdecl FUN_10087ec0(int *param_1,undefined *param_2);
void __cdecl FUN_10087f80(int *param_1,int param_2);
void __cdecl FUN_10088050(int param_1);
void __cdecl FUN_100881b0(int *param_1);
void __cdecl FUN_100881d0(int *param_1,void *param_2,size_t param_3);
void __cdecl FUN_10088210(int param_1);
void __cdecl FUN_10088250(int param_1,undefined4 param_2,int param_3,int param_4);
void __thiscall FUN_100882c0(void *this,uint param_1);
uint ** __thiscall FUN_10088370(void *this,uint *param_1,uint param_2);
uint ** __thiscall FUN_10088450(void *this,void *param_1,size_t param_2);
void __thiscall FUN_100884a0(void *this,uint *param_1);
void __thiscall FUN_100884d0(void *this,char *param_1);
void __thiscall FUN_10088530(void *this,uint *param_1);
void __cdecl FUN_10088560(int **param_1,void *param_2);
int __thiscall FUN_100886a0(void *this,byte *param_1);
int __thiscall FUN_10088710(void *this,byte *param_1);
undefined4 __fastcall FUN_10088780(int *param_1);
int __fastcall FUN_10088810(int param_1);
void __thiscall FUN_10088980(void *this,int param_1);
int __thiscall FUN_100889a0(void *this,byte *param_1);
undefined ** __thiscall FUN_10088a00(void *this,uint *param_1,uint *param_2);
void __fastcall FUN_10088ac0(undefined **param_1);
void __fastcall FUN_10088b30(undefined **param_1);
undefined ** __thiscall FUN_10088bb0(void *this,undefined **param_1);
void __fastcall FUN_10088c50(int param_1);
void __thiscall FUN_10088cd0(void *this,uint *param_1,uint *param_2);
void __thiscall FUN_10088f40(void *this,void *param_1);
undefined ** __fastcall FUN_10088fd0(undefined **param_1);
void __thiscall FUN_10089070(void *this,void *param_1);
undefined ** __fastcall FUN_10089100(void *param_1);
void __thiscall FUN_10089180(void *this,FILE *param_1,undefined4 param_2,void *param_3);
void __thiscall FUN_100895a0(void *this,int param_1);
uint ** __thiscall FUN_10089620(void *this,uint *param_1);
undefined ** __thiscall FUN_100896b0(void *this,byte param_1);
void __fastcall FUN_100896d0(undefined **param_1);
undefined ** __thiscall FUN_10089710(void *this,byte param_1);
void __fastcall FUN_10089730(undefined **param_1);
undefined ** __thiscall FUN_10089740(void *this,uint *param_1);
undefined ** __thiscall FUN_100897d0(void *this,byte param_1);
void __fastcall FUN_100897f0(undefined **param_1);
void __fastcall FUN_10089800(undefined **param_1);
undefined ** __thiscall FUN_10089840(void *this,byte param_1);
void __fastcall FUN_10089860(undefined **param_1);
void __fastcall FUN_100898f0(undefined **param_1);
undefined ** __thiscall FUN_10089930(void *this,byte param_1);
void __fastcall FUN_10089950(undefined **param_1);
undefined ** __thiscall FUN_10089960(void *this,byte param_1);
undefined ** __thiscall FUN_10089980(void *this,uint *param_1);
void __fastcall FUN_10089a30(undefined **param_1);
undefined ** __fastcall FUN_10089a90(void *param_1);
undefined ** __fastcall FUN_10089bb0(int param_1);
undefined ** __thiscall FUN_10089d60(void *this,byte param_1);
undefined4 __cdecl FUN_10089d80(byte param_1);
void __cdecl FUN_10089db0(uint param_1,int param_2,int *param_3);
int __cdecl FUN_10089eb0(byte param_1);
void __thiscall FUN_10089ed0(void *this,byte *param_1,int param_2);
byte * __cdecl FUN_1008a0d0(byte *param_1,int param_2);
uint * __cdecl FUN_1008a190(uint *param_1,void *param_2);
uint __cdecl FUN_1008a220(byte *param_1,byte *param_2,char param_3,int param_4);
void __thiscall FUN_1008a2d0(void *this,int param_1,byte *param_2,void *param_3,int param_4);
byte * __thiscall FUN_1008a340(void *this,byte *param_1,int *param_2,uint param_3);
undefined4 __fastcall FUN_1008a540(int param_1);
char * __cdecl FUN_1008a590(char *param_1,char *param_2,int *param_3,int param_4);
undefined ** __thiscall FUN_1008a7b0(void *this,byte *param_1,int param_2);
byte * __thiscall FUN_1008aa40(void *this,byte *param_1,undefined4 param_2,int param_3);
byte * __cdecl FUN_1008ac40(byte *param_1,byte *param_2,int *param_3,int param_4);
byte * __cdecl FUN_1008acd0(byte *param_1,void *param_2,uint param_3,byte *param_4,undefined4 param_5,int param_6);
byte * __thiscall FUN_1008aea0(void *this,byte *param_1,undefined4 *param_2,int param_3);
uint * __thiscall FUN_1008b150(void *this,byte *param_1,int *param_2,int *param_3);
uint * __thiscall FUN_1008b560(void *this,byte *param_1,undefined4 *param_2,uint param_3);
byte * __thiscall FUN_1008b700(void *this,undefined4 *param_1,int *param_2,int param_3);
byte * __thiscall FUN_1008b8f0(void *this,byte *param_1,undefined4 *param_2,uint param_3);
void * __cdecl operator_new(uint param_1);
void FUN_1008bcb1(void);
void FUN_1008bcf1(void);
void * __cdecl operator_new(uint param_1);
void __fastcall FUN_1008bd36(undefined **param_1);
undefined ** __thiscall FUN_1008bd41(void *this,byte param_1);
void __cdecl std::_Nomemory(void);
void FUN_1008bdd6(void);
void __cdecl __fpmath(int param_1);
void * __cdecl _memmove(void *_Dst,void *_Src,size_t _Size);
int __cdecl FUN_1008c16d(uint param_1,uint param_2,uint param_3);
void __cdecl FUN_1008c1fe(uint param_1);
void __cdecl FUN_1008c213(uint param_1,uint param_2);
void __cdecl _free(void *_Memory);
void FUN_1008c279(void);
int __cdecl __fclose_lk(FILE *param_1);
int __cdecl _fclose(FILE *_File);
void FUN_1008c32c(void);
void * __cdecl __heap_alloc(size_t _Size);
void FUN_1008c3a6(void);
void * __cdecl __nh_malloc(size_t _Size,int _NhFlag);
void * __cdecl _malloc(size_t _Size);
uint __cdecl __fread_lk(undefined *param_1,uint param_2,uint param_3,FILE *param_4);
size_t __cdecl _fread(void *_DstBuf,size_t _ElementSize,size_t _Count,FILE *_File);
void FUN_1008c518(void);
FILE * __cdecl __fsopen(char *_Filename,char *_Mode,int _ShFlag);
void FUN_1008c574(void);
void __cdecl FUN_1008c57e(char *param_1,char *param_2);
void _JumpToContinuation(void *param_1,EHRegistrationNode *param_2);
void FID_conflict:_CallMemberFunction1(undefined4 param_1,undefined *UNRECOVERED_JUMPTABLE);
void _UnwindNestedFrames(EHRegistrationNode *param_1,EHExceptionRecord *param_2);
undefined4 __cdecl ___CxxFrameHandler(int *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4);
int __cdecl _CallSETranslator(EHExceptionRecord *param_1,EHRegistrationNode *param_2,void *param_3,void *param_4,_s_FuncInfo *param_5,int param_6,EHRegistrationNode *param_7);
_EXCEPTION_DISPOSITION __cdecl TranslatorGuardHandler(EHExceptionRecord *param_1,TranslatorGuardRN *param_2,void *param_3,void *param_4);
_s_TryBlockMapEntry * __cdecl _GetRangeOfTrysToCheck(_s_FuncInfo *param_1,int param_2,int param_3,uint *param_4,uint *param_5);
FrameInfo * __cdecl _CreateFrameInfo(FrameInfo *param_1,void *param_2);
int __cdecl IsExceptionObjectToBeDestroyed(void *param_1);
void __cdecl _FindAndUnlinkFrame(FrameInfo *param_1);
void * __cdecl _CallCatchBlock2(EHRegistrationNode *param_1,_s_FuncInfo *param_2,void *param_3,int param_4,ulong param_5);
void __cdecl __global_unwind2(PVOID param_1);
void __cdecl __local_unwind2(int param_1,int param_2);
int __cdecl __abnormal_termination(void);
void __fastcall __NLG_Notify1(undefined4 param_1);
void FUN_1008ca42(void);
void __cdecl _free(void *_Memory);
void __CxxThrowException@8(undefined4 param_1,undefined4 param_2);
int __cdecl _sprintf(char *_Dest,char *_Format,...);
tm * __cdecl __localtime64(__time64_t *_Time);
__time64_t __cdecl __time64(__time64_t *_Time);
void __fastcall FUN_1008cd3b(undefined **param_1);
undefined ** __thiscall FUN_1008cd4c(void *this,char **param_1);
undefined ** __thiscall FUN_1008cd94(void *this,int param_1);
void __fastcall ~exception(undefined **param_1);
undefined ** __thiscall FUN_1008ce09(void *this,byte param_1);
void __thiscall type_info::~type_info(type_info *this);
void FUN_1008ce62(void);
void * __thiscall type_info::`scalar_deleting_destructor'(type_info *this,uint param_1);
void __cdecl FUN_1008ce87(ulong param_1);
int __cdecl _rand(void);
tm * __cdecl _localtime(time_t *_Time);
__time32_t __cdecl FID_conflict:__time32(__time32_t *_Time);
int __cdecl _vsprintf(char *_Dest,char *_Format,va_list _Args);
void __cdecl __splitpath(char *_FullPath,char *_Drive,char *_Dir,char *_Filename,char *_Ext);
int __cdecl FID_conflict:_fwprintf(FILE *_File,wchar_t *_Format,...);
void FUN_1008d262(void);
undefined4 __cdecl FUN_1008d26c(LPCSTR param_1,LPCSTR param_2);
undefined4 __cdecl FUN_1008d29a(LPCSTR param_1);
undefined4 __cdecl thunk_FUN_1008d29a(LPCSTR param_1);
undefined4 __cdecl FUN_1008d2c9(LPCSTR param_1,byte param_2);
void __onexit_lk(void);
_onexit_t __cdecl __onexit(_onexit_t _Func);
void FUN_1008d3e9(void);
int __cdecl _atexit(void *param_1);
int * __cdecl FUN_1008d401(uint param_1,uint param_2);
void FUN_1008d4c7(void);
uchar * __cdecl __mbsstr(uchar *_Str,uchar *_Substr);
int __cdecl __mbscmp(uchar *_Str1,uchar *_Str2);
int __cdecl __mbsnbcmp(uchar *_Str1,uchar *_Str2,size_t _MaxCount);
int __cdecl __vsnprintf(char *_Dest,size_t _Count,char *_Format,va_list _Args);
float10 __cdecl FUN_1008d750(double param_1,undefined2 param_2);
float10 __cdecl FUN_1008d870(double param_1,undefined2 param_2);
void * __cdecl _memchr(void *_Buf,int _Val,size_t _MaxCount);
undefined8 __ftol2(void);
void __fastcall FUN_1008dada(undefined4 param_1);
void FUN_1008dbf2(int param_1);
char * __cdecl _strncpy(char *_Dest,char *_Source,size_t _Count);
uint * __cdecl FUN_1008dd60(uint *param_1,char *param_2);
void __cdecl _free(void *_Memory);
int __cdecl __mbsicmp(uchar *_Str1,uchar *_Str2);
uint __cdecl _strtoxl(byte *param_1,byte **param_2,uint param_3,uint param_4);
long __cdecl _strtol(char *_Str,char **_EndPtr,int _Radix);
undefined4 __cdecl FUN_1008e10c(HANDLE param_1);
int __cdecl ___timet_from_ft(FILETIME *param_1);
void __cdecl FUN_1008e190(LPCSTR param_1,uint *param_2);
void __cdecl FUN_1008e272(HANDLE param_1,uint *param_2);
int __cdecl __stricmp(char *_Str1,char *_Str2);
void __chkstk(undefined1 param_1);
undefined4 __cdecl __setjmp3(undefined4 *param_1,int param_2,int param_3,undefined4 param_4);
void __cdecl _longjmp(int *_Buf,int _Value);
int __cdecl _strncmp(char *_Str1,char *_Str2,size_t _MaxCount);
int __cdecl __fseek_lk(FILE *param_1,char *param_2,int param_3);
int __cdecl _fseek(FILE *_File,long _Offset,int _Origin);
void FUN_1008e607(void);
char * __cdecl _strrchr(char *_Str,int _Ch);
long __cdecl __filelength(int _FileHandle);
void FUN_1008e6fd(void);
void __cdecl __lock_file(FILE *_File);
void __cdecl __lock_file2(int _Index,void *_File);
void __cdecl __unlock_file(FILE *_File);
void __cdecl __unlock_file2(int _Index,void *_File);
int __cdecl __snprintf(char *_Dest,size_t _Count,char *_Format,...);
undefined4 __CRT_INIT@12(undefined4 param_1,int param_2);
int entry(undefined4 param_1,int param_2,undefined4 param_3);
void __cdecl __amsg_exit(int param_1);
void FUN_1008eb74(void);
void __ArrayUnwind(void *param_1,uint param_2,int param_3,FuncDef5 *param_4);
void `eh_vector_destructor_iterator'(void *param_1,uint param_2,int param_3,FuncDef6 *param_4);
void FUN_1008ec39(void);
void `eh_vector_constructor_iterator'(void *param_1,uint param_2,int param_3,FuncDef7 *param_4,FuncDef8 *param_5);
void FUN_1008ec9b(void);
long __cdecl _atol(char *_Str);
long __cdecl _atol(char *_Str);
int __cdecl _isalpha(int _C);
int __cdecl _isdigit(int _C);
int __cdecl _isxdigit(int _C);
int __cdecl _isspace(int _C);
int __cdecl _isalnum(int _C);
int __cdecl _sscanf(char *_Src,char *_Format,...);
char * __cdecl __strdup(char *_Src);
void __cdecl ___freetlocinfo(void *param_1);
int ___updatetlocinfo_lk(void);
void __cdecl __strcats(char *param_1,char *param_2);
undefined4 __cdecl ___lc_strtolc(char *param_1,char *param_2);
void __cdecl ___lc_lctostr(char *param_1,char *param_2);
pthreadlocinfo __cdecl ___updatetlocinfo(void);
void FUN_1008f1e1(void);
char * FUN_1008f1ea(void);
void __cdecl FUN_1008f2c4(char *param_1,char *param_2,undefined2 *param_3,undefined4 *param_4);
void __cdecl FUN_1008f424(char *param_1);
void __fastcall FUN_1008f6b8(int param_1,char *param_2);
int __cdecl FUN_1008f895(int param_1,char *param_2);
void FUN_1008f9de(void);
longlong __ftol(void);
void FUN_1008fa60(void);
void _test_whether_TOS_is_int(void);
ulonglong __fastcall __aullshr(byte param_1,uint param_2);
void FUN_1008fcd0(void);
float10 __cdecl FUN_1008fced(uint param_1,uint param_2);
bool __cdecl FUN_1008fd9b(undefined4 param_1,undefined4 param_2);
int __cdecl __fpclass(double _X);
void FUN_1008fe4c(UINT param_1);
void FUN_1008fe7c(void);
void FUN_1008fe85(void);
void __cdecl __initterm(undefined **param_1);
int __cdecl __cinit(int param_1);
void __cdecl _doexit(UINT param_1,int param_2,int param_3);
void FUN_1008ffbf(void);
void __cdecl _exit(int _Code);
void __cdecl __exit(UINT param_1);
void __cdecl __cexit(void);
void * __cdecl _memcpy(void *_Dst,void *_Src,size_t _Size);
void * __cdecl _memset(void *_Dst,int _Val,size_t _Size);
uint __cdecl __fwrite_lk(char *param_1,uint param_2,uint param_3,FILE *param_4);
size_t __cdecl _fwrite(void *_Str,size_t _Size,size_t _Count,FILE *_File);
void FUN_100904f9(void);
int __cdecl __flush(FILE *_File);
int __cdecl __fflush_lk(FILE *param_1);
int __cdecl _flsall(int param_1);
void FUN_1009062e(void);
void FUN_1009065a(void);
int __cdecl _fflush(FILE *_File);
void FUN_100906a9(void);
uchar * __cdecl __getenv_lk(uchar *param_1);
char * __cdecl _getenv(char *_VarName);
void FUN_10090773(void);
int __cdecl _strcmp(char *_Str1,char *_Str2);
size_t __cdecl _strlen(char *_Str);
char * __cdecl __ftell_lk(char **param_1);
long __cdecl _ftell(FILE *_File);
void FUN_10090a34(void);
tm * __cdecl _gmtime(time_t *_Time);
double __cdecl _strtod(char *_Str,char **_EndPtr);
uint __thiscall ___tolower_mt(void *this,uint param_1,uint param_2);
int __cdecl _tolower(int _C);
uint * __cdecl FUN_10090cf0(uint *param_1,char param_2);
int __cdecl __callnewh(size_t _Size);
void __cdecl __forcdecpt(char *_Buf);
void __cdecl __fassign(int flag,char *argument,char *number);
void __shift(void);
void __cdecl __cftoe2(int param_1,int param_2,char param_3);
void __cdecl FUN_10090f73(STRFLT *param_1,int param_2,int param_3,int param_4);
undefined * __cdecl __cftof2(undefined *param_1,size_t param_2,char param_3);
void __cdecl FUN_1009107f(STRFLT *param_1,undefined *param_2,size_t param_3);
void __cdecl FUN_100910e6(STRFLT *param_1,undefined *param_2,size_t param_3,int param_4);
errno_t __cdecl __cfltcvt(double *arg,char *buffer,size_t sizeInBytes,int format,int precision,int caps);
void __setdefaultprecision(void);
undefined4 __ms_p5_test_fdiv(void);
void __ms_p5_mp_test_fdiv(void);
int * FUN_10091251(void);
ulong * FUN_1009125a(void);
void __cdecl __dosmaperr(ulong param_1);
size_t __cdecl __msize(void *_Memory);
void FUN_10091343(void);
undefined4 ___heap_select(void);
int __cdecl __heap_init(void);
void __cdecl __heap_term(void);
int __cdecl __mtinitlocks(void);
void __cdecl FUN_100914d4(int param_1);
int __cdecl __mtinitlocknum(int _LockNum);
void FUN_10091580(void);
void __cdecl __lock(int _File);
undefined4 __cdecl ___sbh_heap_init(undefined4 param_1);
uint __cdecl ___sbh_find_block(int param_1);
void __cdecl ___sbh_free_block(uint *param_1,int param_2);
undefined4 * ___sbh_alloc_new_region(void);
int __cdecl ___sbh_alloc_new_group(int param_1);
undefined4 __cdecl ___sbh_resize_block(uint *param_1,int param_2,int param_3);
int * __cdecl ___sbh_alloc_block(uint *param_1);
void __cdecl __SEH_prolog(undefined4 param_1,int param_2);
void __SEH_epilog(void);
undefined4 __cdecl __close_lk(uint param_1);
int __cdecl __close(int _FileHandle);
void FUN_10092226(void);
void __cdecl __freebuf(FILE *_File);
int __cdecl __filbuf(FILE *_File);
char * __cdecl FUN_10092356(uint param_1,char *param_2,char *param_3);
int __cdecl __read(int _FileHandle,void *_DstBuf,uint _MaxCharCount);
void FUN_100925ba(void);
FILE * __cdecl __openfile(char *_Filename,char *_Mode,int _ShFlag,FILE *_File);
FILE * __cdecl __getstream(void);
void FUN_1009285f(void);
int __cdecl TypeMatch(_s_HandlerType *param_1,_s_CatchableType *param_2,_s_ThrowInfo *param_3);
void __cdecl ___FrameUnwindToState(int param_1,undefined4 param_2,int param_3,int param_4);
void FUN_10092988(void);
void __cdecl ___DestructExceptionObject(int param_1);
void * __cdecl AdjustPointer(void *param_1,PMD *param_2);
void * __cdecl CallCatchBlock(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,_s_FuncInfo *param_4,void *param_5,int param_6,ulong param_7);
void FUN_10092b5c(void);
void __cdecl BuildCatchObject(EHExceptionRecord *param_1,void *param_2,_s_HandlerType *param_3,_s_CatchableType *param_4);
void __cdecl CatchIt(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,_s_FuncInfo *param_5,_s_HandlerType *param_6,_s_CatchableType *param_7,_s_TryBlockMapEntry *param_8,int param_9,EHRegistrationNode *param_10,uchar param_11);
void __cdecl FindHandlerForForeignException(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,_s_FuncInfo *param_5,int param_6,int param_7,EHRegistrationNode *param_8);
void __cdecl FindHandler(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,_s_FuncInfo *param_5,uchar param_6,int param_7,EHRegistrationNode *param_8);
undefined4 __cdecl ___InternalCxxFrameHandler(int *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,_s_FuncInfo *param_5,int param_6,EHRegistrationNode *param_7,uchar param_8);
void FUN_10093112(void);
void FUN_1009311b(void);
void __cdecl __initptd(_ptiddata _Ptd,pthreadlocinfo _Locale);
_ptiddata __cdecl __getptd(void);
void __freefls@4(void *param_1);
void FUN_100932ee(void);
void FUN_100932fa(void);
void __cdecl __freeptd(_ptiddata _Ptd);
int __cdecl __mtinit(void);
void __cdecl terminate(void);
void __cdecl _inconsistency(void);
void __CallSettingFrame@12(undefined4 param_1,undefined4 param_2,int param_3);
int FUN_100934dc(int **param_1);
int __cdecl __flsbuf(int _Ch,FILE *_File);
void __fastcall _write_char(FILE *param_1);
void __cdecl _write_multi_char(undefined4 param_1,int param_2,FILE *param_3);
void __cdecl _write_string(int param_1);
void __cdecl FUN_100936f1(FILE *param_1,byte *param_2,int **param_3);
void __tzset_lk(void);
void FUN_100940c8(void);
int __thiscall _cvtdate(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9);
bool __isindst_lk(void);
void __cdecl ___tzset(void);
void FUN_100944d7(void);
int __cdecl __isindst(tm *_Time);
void FUN_10094515(void);
tm * __cdecl __gmtime64(__time64_t *_Time);
undefined8 __alldiv(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 __allrem(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 __aulldiv(uint param_1,uint param_2,uint param_3,uint param_4);
char * __cdecl _strcpy(char *_Dest,char *_Source);
char * __cdecl _strcat(char *_Dest,char *_Source);
undefined4 FUN_10094a28(void);
void _setSBCS(void);
void FUN_10094a80(void);
pthreadmbcinfo __cdecl ___updatetmbcinfo(void);
void FUN_10094c81(void);
void __cdecl FUN_10094c8a(UINT param_1);
int __cdecl __setmbcp(int _CodePage);
void FUN_10094f65(void);
undefined4 ___initmbctable(void);
uchar * __cdecl __mbsnbcpy(uchar *_Dest,uchar *_Source,size_t _Count);
int __cdecl __stbuf(FILE *_File);
void __cdecl __ftbuf(int _Flag,FILE *_File);
int * __cdecl FUN_100950d1(int *param_1,uint *param_2);
void FUN_10095239(void);
void __cdecl FUN_10095283(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,int param_4);
undefined4 _has_osfxsr_set(void);
void FUN_1009552f(void);
void __fastcall __cintrindisp1(undefined4 param_1,int param_2);
void __cdecl __ctrandisp2(uint param_1,int param_2,uint param_3,int param_4);
void FUN_10095873(void);
void cintrinexit(void);
void __cdecl __ctrandisp1(uint param_1,int param_2);
float10 __cdecl __fload(uint param_1,int param_2);
void __fastcall __trandisp1(undefined4 param_1,int param_2);
void __fastcall __trandisp2(undefined4 param_1,int param_2);
undefined4 __cdecl FUN_10096406(undefined4 param_1,uint param_2,ushort param_3);
float10 FUN_1009660c(void);
undefined4 __cdecl __ValidateEH3RN(uint *param_1);
uint __cdecl FUN_10096bb4(LCID param_1,uint param_2,LPCSTR param_3,uint param_4,int *param_5,int param_6,UINT param_7,int param_8);
uint __thiscall ___isctype_mt(void *this,int param_1,uint param_2,uint param_3);
int __cdecl ___loctotime_t(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7);
void __fastcall FUN_10097140(int param_1);
int __cdecl ___ascii_stricmp(char *_Str1,char *_Str2);
void __rt_probe_read4@4(undefined4 param_1);
DWORD __cdecl __lseek_lk(uint param_1,LONG param_2,DWORD param_3);
long __cdecl __lseek(int _FileHandle,long _Offset,int _Origin);
void FUN_100972db(void);
int __cdecl __free_osfhnd(int param_1);
intptr_t __cdecl __get_osfhandle(int _FileHandle);
int __cdecl __lock_fhandle(int _Filehandle);
void FUN_100974d2(void);
void __cdecl __unlock_fhandle(int _Filehandle);
int __cdecl __alloc_osfhnd(void);
void FUN_100975d6(void);
void FUN_10097670(void);
int __cdecl __ioinit(void);
void __cdecl __ioterm(void);
int __cdecl __setenvp(void);
void __thiscall _parse_cmdline(void *this,byte **param_1,int *param_2);
int __cdecl __setargv(void);
LPVOID __cdecl ___crtGetEnvironmentStringsA(void);
void __RTC_Initialize(void);
int __cdecl __XcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr);
void __cdecl FUN_10097f5c(int param_1);
void __cdecl __FF_MSGBANNER(void);
ulonglong __allmul(uint param_1,uint param_2,uint param_3,uint param_4);
uint __fastcall __inc(undefined4 param_1,FILE *param_2);
void __cdecl FUN_1009815a(FILE *param_1,byte *param_2,int **param_3);
uint __get_lc_time(void);
void __cdecl ___free_lc_time(void **param_1);
void __cdecl ___free_lconv_num(void **param_1);
int __cdecl ___init_numeric(threadlocinfo *_LocInfo);
void __cdecl ___free_lconv_mon(int param_1);
int __cdecl ___init_monetary(threadlocinfo *_LocInfo);
void FUN_10099a1f(void);
undefined4 FUN_10099c0d(void);
size_t __cdecl _strcspn(char *_Str,char *_Control);
bool __cdecl _TranslateName(int param_1,int param_2,char **param_3);
void _GetLcidFromDefault(void);
void __fastcall FUN_10099cd0(char *param_1);
undefined4 __cdecl FUN_10099d4a(short param_1);
int _crtGetLocaleInfoA@16(uint param_1,LCTYPE param_2,char *param_3,int param_4);
int __fastcall _LcidFromHexString(undefined4 param_1,char *param_2);
int __fastcall _GetPrimaryLen(undefined4 param_1,char *param_2);
void __thiscall FUN_10099e9d(void *this,char *param_1);
void __cdecl FUN_10099f35(uint param_1,int param_2);
void __thiscall FUN_10099faa(void *this,char *param_1);
void __thiscall FUN_1009a1c8(void *this,char *param_1);
void _GetLcidFromCountry(void);
void _GetLcidFromLangCountry(void);
void _GetLcidFromLanguage(void);
BOOL __cdecl ___get_qualified_locale(LPLC_STRINGS _LpInStr,UINT *_LpCodePage,LPLC_STRINGS _LpOutStr);
int __cdecl _memcmp(void *_Buf1,void *_Buf2,size_t _Size);
BOOL __cdecl ___crtGetStringTypeA(_locale_t _Plocinfo,DWORD _DWInfoType,LPCSTR _LpSrcStr,int _CchSrc,LPWORD _LpCharType,int _Code_page,BOOL _BError);
char * __cdecl _strpbrk(char *_Str,char *_Control);
float10 __cdecl __pow_pentium4(double param_1,uint param_2,uint param_3);
float10 __fastcall FUN_1009b580(undefined4 param_1,int param_2,ushort param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8);
float10 __fastcall FUN_1009b597(undefined4 param_1,int param_2,ushort param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
undefined1 (*) [10] __cdecl FUN_1009b5e0(undefined1 (*__return_storage_ptr__) [10]);
void FUN_1009b5f5(undefined4 param_1);
undefined4 FUN_1009b60c(void);
uint __fastcall __fload_withFB(undefined4 param_1,int param_2);
uint __cdecl FUN_1009b668(undefined4 param_1,uint param_2);
undefined4 __cdecl __d_inttype(double param_1);
undefined4 __cdecl __powhlp(int param_1,int param_2,double param_3,double *param_4);
float10 __cdecl __set_exp(ulonglong param_1,short param_2);
undefined4 __cdecl __sptype(int param_1,uint param_2);
float10 __cdecl __decomp(uint param_1,uint param_2,int *param_3);
void __cdecl __raise_exc(uint *param_1,uint *param_2,uint param_3,int param_4,undefined8 *param_5,undefined8 *param_6);
bool __cdecl __handle_exc(uint param_1,double *param_2,uint param_3);
errno_t __cdecl FID_conflict:__set_errno_from_matherr(int _Value);
int __cdecl __errcode(byte param_1);
float10 __cdecl __umatherr(int param_1,int param_2);
float10 __cdecl __handle_qnan1(int param_1,double param_2);
void __cdecl FUN_1009c08c(uint param_1,int param_2,undefined8 param_3,double param_4,uint param_5);
int __statfp(void);
int __clrfp(void);
int __ctrlfp(undefined4 param_1,undefined4 param_2);
void __set_statfp(undefined4 param_1);
void __cdecl FUN_1009c1d9(uint param_1,char *param_2,char *param_3);
int __cdecl __write(int _FileHandle,void *_Buf,uint _MaxCharCount);
void FUN_1009c41c(void);
int __cdecl __commit(int _FileHandle);
void FUN_1009c4e0(void);
int __cdecl __mbsnbicoll(uchar *_Str1,uchar *_Str2,size_t _MaxCount);
int __cdecl ___wtomb_environ(void);
uint __fastcall _siglookup(undefined4 param_1,uint param_2);
int __cdecl _raise(int _SigNum);
void __fastcall FUN_1009c743(int param_1);
void __cdecl FUN_1009c784(uint *param_1,byte *param_2);
undefined4 __cdecl __ZeroTail(int param_1,int param_2);
void __cdecl __IncMan(int param_1,int param_2);
undefined4 __cdecl __RoundMan(int param_1,int param_2);
void __cdecl __CopyMan(int param_1,undefined4 *param_2);
undefined4 __cdecl __IsZeroMan(int param_1);
void __cdecl __ShrMan(int param_1,int param_2);
undefined4 __cdecl __ld12cvt(ushort *param_1,uint *param_2,int *param_3);
INTRNCVT_STATUS __cdecl FID_conflict:__ld12tod(_LDBL12 *_Ifp,_CRT_DOUBLE *_D);
INTRNCVT_STATUS __cdecl FID_conflict:__ld12tod(_LDBL12 *_Ifp,_CRT_DOUBLE *_D);
void __cdecl FUN_1009cb49(_CRT_DOUBLE *param_1,byte *param_2);
void __cdecl FUN_1009cb8e(_CRT_DOUBLE *param_1,byte *param_2);
errno_t __cdecl __fptostr(char *_Buf,size_t _SizeInBytes,int _Digits,STRFLT _PtFlt);
void __cdecl ___dtold(uint *param_1,uint *param_2);
void __cdecl FUN_1009cd04(uint param_1,undefined4 param_2,int *param_3,char *param_4);
void __cdecl __fptrap(void);
uint __abstract_cw(void);
uint __hw_cw(void);
uint __cdecl __control87(uint _NewValue,uint _Mask);
uint __cdecl __controlfp(uint _NewValue,uint _Mask);
undefined4 ___crtInitCritSecNoSpinCount@8(LPCRITICAL_SECTION param_1);
void __cdecl ___crtInitCritSecAndSpinCount(undefined4 param_1,undefined4 param_2);
void __cdecl __getbuf(FILE *_File);
undefined8 __cdecl __lseeki64_lk(uint param_1,LONG param_2,LONG param_3,DWORD param_4);
undefined4 __thiscall FUN_1009d04f(void *this,undefined param_1,undefined param_2,undefined param_3,uint param_4,undefined4 param_5);
int __cdecl __sopen(char *_Filename,int _OpenFlag,int _ShareFlag,...);
void FUN_1009d37b(void);
int __cdecl _ValidateRead(void *param_1,uint param_2);
int __cdecl _ValidateWrite(void *param_1,uint param_2);
int __cdecl _ValidateExecute(FuncDef9 *param_1);
int __cdecl __isatty(int _FileHandle);
int __cdecl ___wctomb_mt(int param_1,LPSTR param_2,ushort param_3);
int __cdecl _wctomb(char *_MbCh,wchar_t _WCh);
undefined8 __aulldvrm(uint param_1,uint param_2,uint param_3,uint param_4);
float10 __cdecl __frnd(double param_1);
void __cdecl FUN_1009d536(int param_1,int *param_2,ushort *param_3);
void __cdecl FUN_1009d632(LCID param_1);
void __cdecl FUN_1009d679(UINT param_1,UINT param_2,char *param_3,uint *param_4,int *param_5,int param_6);
int __cdecl __resetstkoflw(void);
void __cdecl ___security_init_cookie(void);
void FUN_1009d99c(int param_1);
int __cdecl ___crtMessageBoxA(LPCSTR _LpText,LPCSTR _LpCaption,UINT _UType);
int __cdecl FID_conflict:_ungetc(int _Ch,FILE *_File);
undefined4 __cdecl ___mbtowc_mt(int param_1,ushort *param_2,byte *param_3,uint param_4);
int __cdecl _mbtowc(wchar_t *_DstCh,char *_SrcCh,size_t _SrcSizeInBytes);
void __cdecl FUN_1009dd37(int param_1,_locale_t param_2,LPCWSTR param_3,char **param_4);
int __cdecl __strnicmp(char *_Str1,char *_Str2,size_t _MaxCount);
void __thiscall _xtoa(void *this,uint param_1,int param_2);
char * __cdecl __itoa(int _Value,char *_Dest,int _Radix);
size_t __cdecl _strncnt(char *_String,size_t _Cnt);
void __cdecl FUN_1009df6a(LCID param_1,DWORD param_2,byte *param_3,char *param_4,byte *param_5,char *param_6,UINT param_7);
int __cdecl _findenv(uchar *param_1);
char ** _copy_environ(void);
undefined4 __cdecl FUN_1009e3a2(uchar **param_1,int param_2);
void __cdecl FUN_1009e578(undefined2 *param_1,byte **param_2,byte *param_3,int param_4,int param_5,int param_6,int param_7);
undefined4 __cdecl ___addl(uint param_1,uint param_2,uint *param_3);
void __cdecl ___add_12(uint *param_1,uint *param_2);
void __cdecl ___shl_12(uint *param_1);
void __cdecl ___shr_12(uint *param_1);
void __cdecl FUN_1009ea92(char *param_1,int param_2,uint *param_3);
void __cdecl FUN_1009eb7a(uint param_1,uint param_2,ushort param_3,int param_4,byte param_5,short *param_6);
void __cdecl FUN_1009ee16(uint param_1,int param_2);
int __cdecl ___crtGetLocaleInfoW(LCID param_1,LCTYPE param_2,LPWSTR param_3,int param_4,int param_5);
int __cdecl ___crtGetLocaleInfoA(_locale_t _Plocinfo,LPCWSTR _LocaleName,LCTYPE _LCType,LPSTR _LpLCData,int _CchData);
int __cdecl ___ascii_strnicmp(char *_Str1,char *_Str2,size_t _MaxCount);
uchar * __cdecl __mbschr(uchar *_Str,uint _Ch);
void __cdecl FUN_1009f2ac(int *param_1,int *param_2);
void __cdecl FUN_1009f4e2(int *param_1,uint param_2,int param_3);
int __cdecl __setmode_lk(uint param_1,int param_2);
void RtlUnwind(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue);
undefined * FUN_1009f5f0(void);
uint __cdecl FUN_1009f8e0(uint param_1,uint *param_2,uint param_3);
undefined4 __cdecl FUN_1009f900(int param_1);
undefined4 __cdecl FUN_1009f960(int param_1,uint param_2,char *param_3,int param_4);
void __cdecl FUN_1009fa30(int param_1,char *param_2,int param_3);
undefined4 __cdecl FUN_1009fa50(int param_1);
int __cdecl FUN_1009fb70(uint **param_1,int param_2);
undefined4 __cdecl FUN_100a11a0(int param_1);
void __fastcall FUN_100a11f0(undefined4 param_1);
void FUN_100a1220(void);
uint __cdecl FUN_100a1290(int *param_1,int *param_2);
uint __cdecl FUN_100a1b00(int param_1);
uint * __thiscall FUN_100a1bd0(void *this,uint *param_1);
void __fastcall FUN_100a1c50(undefined4 param_1,int param_2);
char * FUN_100a1ce0(void);
uint __cdecl FUN_100a1e50(int param_1);
void __cdecl FUN_100a1f10(int *param_1);
byte __cdecl FUN_100a25e0(int *param_1,int param_2);
undefined4 __cdecl FUN_100a2a00(int param_1);
undefined4 __cdecl FUN_100a2aa0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,char *param_7,int param_8);
void __cdecl FUN_100a2d10(int *param_1,undefined *param_2);
undefined4 __cdecl FUN_100a3180(int param_1,int param_2,uint param_3,int *param_4,uint *param_5,ushort *param_6);
uint __cdecl FUN_100a3670(uint param_1,byte *param_2,uint param_3);
void __fastcall FUN_100a38c0(undefined4 param_1,int param_2);
void __cdecl FUN_100a3930(int param_1);
void __fastcall FUN_100a3a00(int *param_1);
void __thiscall FUN_100a3c40(void *this,int param_1);
void __thiscall FUN_100a3d20(void *this,int param_1);
void __cdecl FUN_100a4230(int param_1,int param_2,int param_3);
void __cdecl FUN_100a44a0(int param_1,int param_2);
void __fastcall FUN_100a48c0(undefined4 param_1,int *param_2);
void FUN_100a4990(void);
void FUN_100a4a10(void);
void __fastcall FUN_100a4a80(int param_1,undefined *param_2,int param_3);
void __cdecl FUN_100a4b10(int param_1);
void __fastcall FUN_100a4b80(undefined4 param_1,int param_2);
void __cdecl FUN_100a4c00(int *param_1);
void FUN_100a4e00(void);
void __cdecl FUN_100a4e70(int param_1,undefined *param_2,int param_3,int param_4);
void __cdecl FUN_100a4f10(int param_1);
void __cdecl FUN_100a5110(int *param_1,undefined *param_2,int param_3,int param_4);
void Unwind@100a5320(void);
void Unwind@100a5350(void);
void Unwind@100a535b(void);
void Unwind@100a5370(void);
void Unwind@100a5390(void);
void Unwind@100a53d0(void);
void Unwind@100a53de(void);
void Unwind@100a53ec(void);
void Unwind@100a53fa(void);
void Unwind@100a5408(void);
void Unwind@100a5416(void);
void Unwind@100a5430(void);
void Unwind@100a5450(void);
void Unwind@100a545b(void);
void Unwind@100a5490(void);
void Unwind@100a54b0(void);
void Unwind@100a54d0(void);
void Unwind@100a54d8(void);
void Unwind@100a54f0(void);
void Unwind@100a54fb(void);
void Unwind@100a5506(void);
void Unwind@100a5511(void);
void Unwind@100a5530(void);
void Unwind@100a5538(void);
void Unwind@100a5540(void);
void Unwind@100a5548(void);
void Unwind@100a5560(void);
void Unwind@100a556b(void);
void Unwind@100a5580(void);
void Unwind@100a55a2(void);
void Unwind@100a55c4(void);
void Unwind@100a55e6(void);
void Unwind@100a560a(void);
void Unwind@100a5615(void);
void Unwind@100a5637(void);
void Unwind@100a5659(void);
void Unwind@100a567b(void);
void Unwind@100a56b0(void);
void Unwind@100a56bb(void);
void Unwind@100a56d0(void);
void Unwind@100a56f0(void);
void Unwind@100a5709(void);
void Unwind@100a5730(void);
void Unwind@100a573b(void);
void Unwind@100a5746(void);
void Unwind@100a5754(void);
void Unwind@100a5770(void);
void Unwind@100a5778(void);
void Unwind@100a5786(void);
void Unwind@100a5794(void);
void Unwind@100a57b0(void);
void Unwind@100a57b8(void);
void Unwind@100a57c6(void);
void Unwind@100a57d4(void);
void Unwind@100a57e2(void);
void Unwind@100a57f0(void);
void Unwind@100a57fe(void);
void Unwind@100a580c(void);
void Unwind@100a5830(void);
void Unwind@100a5849(void);
void Unwind@100a5862(void);
void Unwind@100a5880(void);
void Unwind@100a5888(void);
void Unwind@100a5893(void);
void Unwind@100a589e(void);
void Unwind@100a58a9(void);
void Unwind@100a58c0(void);
void Unwind@100a58c8(void);
void Unwind@100a58d3(void);
void Unwind@100a58de(void);
void Unwind@100a58e9(void);
void Unwind@100a5900(void);
void Unwind@100a5920(void);
void Unwind@100a5940(void);
void Unwind@100a5960(void);
void Unwind@100a5980(void);
void Unwind@100a59a0(void);
void Unwind@100a59d0(void);
void Unwind@100a59d8(void);
void Unwind@100a59e0(void);
void Unwind@100a59e8(void);
void Unwind@100a5a00(void);
void Unwind@100a5a08(void);
void Unwind@100a5a20(void);
void Unwind@100a5a40(void);
void Unwind@100a5a4b(void);
void Unwind@100a5a56(void);
void Unwind@100a5a64(void);
void Unwind@100a5a80(void);
void Unwind@100a5a88(void);
void Unwind@100a5ab0(void);
void Unwind@100a5ab8(void);
void Unwind@100a5ae0(void);
void Unwind@100a5b00(void);
void Unwind@100a5b20(void);
void Unwind@100a5b28(void);
void Unwind@100a5b40(void);
void Unwind@100a5b48(void);
void Unwind@100a5b50(void);
void Unwind@100a5b70(void);
void Unwind@100a5b78(void);
void Unwind@100a5b90(void);
void Unwind@100a5b9b(void);
void Unwind@100a5ba6(void);
void Unwind@100a5bb1(void);
void Unwind@100a5bbc(void);
void Unwind@100a5bc7(void);
void Unwind@100a5bd2(void);
void Unwind@100a5bf0(void);
void Unwind@100a5c10(void);
void Unwind@100a5c1b(void);
void Unwind@100a5c30(void);
void Unwind@100a5c50(void);
void Unwind@100a5c90(void);
void Unwind@100a5cb0(void);
void Unwind@100a5cb8(void);
void Unwind@100a5cf0(void);
void Unwind@100a5cfb(void);
void Unwind@100a5d06(void);
void Unwind@100a5d20(void);
void Unwind@100a5d2b(void);
void Unwind@100a5d36(void);
void Unwind@100a5d41(void);
void Unwind@100a5d4c(void);
void Unwind@100a5d57(void);
void Unwind@100a5d62(void);
void Unwind@100a5d6d(void);
void Unwind@100a5d90(void);
void Unwind@100a5d9b(void);
void Unwind@100a5da6(void);
void Unwind@100a5db1(void);
void Unwind@100a5dbc(void);
void Unwind@100a5dc7(void);
void Unwind@100a5dd2(void);
void Unwind@100a5ddd(void);
void Unwind@100a5de8(void);
void Unwind@100a5df3(void);
void Unwind@100a5dfe(void);
void Unwind@100a5e09(void);
void Unwind@100a5e14(void);
void Unwind@100a5e1f(void);
void Unwind@100a5e40(void);
void Unwind@100a5e48(void);
void Unwind@100a5e53(void);
void Unwind@100a5e5e(void);
void Unwind@100a5e69(void);
void Unwind@100a5e80(void);
void Unwind@100a5ea0(void);
void Unwind@100a5eab(void);
void Unwind@100a5eb6(void);
void Unwind@100a5ec1(void);
void Unwind@100a5ee0(void);
void Unwind@100a5eeb(void);
void Unwind@100a5f00(void);
void Unwind@100a5f20(void);
void Unwind@100a5f40(void);
void Unwind@100a5f60(void);
void Unwind@100a5f80(void);
void Unwind@100a5f8b(void);
void Unwind@100a5f96(void);
void Unwind@100a5fa1(void);
void Unwind@100a5fac(void);
void Unwind@100a5fd0(void);
void Unwind@100a5ff0(void);
void Unwind@100a6010(void);
void Unwind@100a6030(void);
void Unwind@100a6042(void);
void Unwind@100a6057(void);
void Unwind@100a605f(void);
void Unwind@100a606a(void);
void Unwind@100a6075(void);
void Unwind@100a6080(void);
void Unwind@100a608b(void);
void Unwind@100a6096(void);
void Unwind@100a60a1(void);
void Unwind@100a60b6(void);
void Unwind@100a60c0(void);
void Unwind@100a60d4(void);
void Unwind@100a60de(void);
void Unwind@100a60e8(void);
void Unwind@100a60fc(void);
void Unwind@100a6110(void);
void Unwind@100a611a(void);
void Unwind@100a612e(void);
void Unwind@100a6138(void);
void Unwind@100a614c(void);
void Unwind@100a6156(void);
void Unwind@100a6160(void);
void Unwind@100a6174(void);
void Unwind@100a617e(void);
void Unwind@100a6188(void);
void Unwind@100a619c(void);
void Unwind@100a61a6(void);
void Unwind@100a61ba(void);
void Unwind@100a61c4(void);
void Unwind@100a61d8(void);
void Unwind@100a61e2(void);
void Unwind@100a61ec(void);
void Unwind@100a6200(void);
void Unwind@100a6212(void);
void Unwind@100a6226(void);
void Unwind@100a623a(void);
void Unwind@100a6242(void);
void Unwind@100a6256(void);
void Unwind@100a626a(void);
void Unwind@100a627c(void);
void Unwind@100a6286(void);
void Unwind@100a6290(void);
void Unwind@100a629a(void);
void Unwind@100a62a4(void);
void Unwind@100a62ae(void);
void Unwind@100a62b8(void);
void Unwind@100a62c2(void);
void Unwind@100a62cc(void);
void Unwind@100a62d6(void);
void Unwind@100a62e0(void);
void Unwind@100a62ea(void);
void Unwind@100a62f4(void);
void Unwind@100a62fe(void);
void Unwind@100a6308(void);
void Unwind@100a6312(void);
void Unwind@100a631c(void);
void Unwind@100a6326(void);
void Unwind@100a6330(void);
void Unwind@100a633a(void);
void Unwind@100a6344(void);
void Unwind@100a634e(void);
void Unwind@100a6358(void);
void Unwind@100a6362(void);
void Unwind@100a636c(void);
void Unwind@100a6376(void);
void Unwind@100a6380(void);
void Unwind@100a638a(void);
void Unwind@100a6394(void);
void Unwind@100a639e(void);
void Unwind@100a63a8(void);
void Unwind@100a63b2(void);
void Unwind@100a63bc(void);
void Unwind@100a63c6(void);
void Unwind@100a63d0(void);
void Unwind@100a63da(void);
void Unwind@100a63e4(void);
void Unwind@100a63f8(void);
void Unwind@100a6420(void);
void Unwind@100a6440(void);
void Unwind@100a6460(void);
void Unwind@100a6468(void);
void Unwind@100a6473(void);
void Unwind@100a6490(void);
void Unwind@100a6498(void);
void Unwind@100a64b0(void);
void Unwind@100a64b8(void);
void Unwind@100a64d0(void);
void Unwind@100a64f0(void);
void Unwind@100a64f8(void);
void Unwind@100a6510(void);
void Unwind@100a6530(void);
void Unwind@100a6538(void);
void Unwind@100a6550(void);
void Unwind@100a6570(void);
void Unwind@100a6590(void);
void Unwind@100a6598(void);
void Unwind@100a65a3(void);
void Unwind@100a65c0(void);
void Unwind@100a65c8(void);
void Unwind@100a65e0(void);
void Unwind@100a6600(void);
void Unwind@100a660b(void);
void Unwind@100a6616(void);
void Unwind@100a6621(void);
void Unwind@100a662c(void);
void Unwind@100a6637(void);
void Unwind@100a6650(void);
void Unwind@100a6670(void);
void Unwind@100a6690(void);
void Unwind@100a66b0(void);
void Unwind@100a66b8(void);
void Unwind@100a66c0(void);
void Unwind@100a66d2(void);

