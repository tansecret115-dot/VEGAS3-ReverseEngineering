/* Module: pncrt.dll
   Function: FUN_7800db00
   Address: 7800db00
   Source: Ghidra pseudocode (Stage 10 batch) */


BOOL __cdecl
FUN_7800db00(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,
            int param_7)

{
  BOOL BVar1;
  size_t _Size;
  int cchSrc;
  LPCWSTR lpWideCharStr;
  WORD local_2;
  
  lpWideCharStr = (LPCWSTR)0x0;
  if (DAT_78042458 == 0) {
    BVar1 = GetStringTypeW(1,L"",1,&local_2);
    if (BVar1 == 0) {
      BVar1 = GetStringTypeA(0,1,"",1,&local_2);
      if (BVar1 == 0) {
        return 0;
      }
      DAT_78042458 = 2;
    }
    else {
      DAT_78042458 = 1;
    }
  }
  if (DAT_78042458 == 2) {
    if (param_6 == 0) {
      param_6 = DAT_78042438;
    }
    BVar1 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
    return BVar1;
  }
  param_6 = DAT_78042458;
  if (DAT_78042458 == 1) {
    param_6 = 0;
    if (param_5 == 0) {
      param_5 = __lc_codepage;
    }
    _Size = MultiByteToWideChar(param_5,(-(uint)(param_7 != 0) & 8) + 1,param_2,param_3,(LPWSTR)0x0,
                                0);
    if (_Size != 0) {
      lpWideCharStr = calloc(2,_Size);
      if (lpWideCharStr != (LPCWSTR)0x0) {
        cchSrc = MultiByteToWideChar(param_5,1,param_2,param_3,lpWideCharStr,_Size);
        if (cchSrc != 0) {
          BVar1 = GetStringTypeW(param_1,lpWideCharStr,cchSrc,param_4);
          free(lpWideCharStr);
          return BVar1;
        }
      }
    }
    free(lpWideCharStr);
  }
  return param_6;
}


