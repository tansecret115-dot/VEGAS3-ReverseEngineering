/* Module: pncrt.dll
   Function: __crtGetLocaleInfoW
   Address: 78012a10
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl __crtGetLocaleInfoW(LCID param_1,LCTYPE param_2,LPWSTR param_3,int param_4,UINT param_5)

{
  int iVar1;
  size_t _Size;
  LPSTR lpLCData;
  
                    /* 0x12a10  96  __crtGetLocaleInfoW */
  if (DAT_78042494 == 0) {
    iVar1 = GetLocaleInfoW(0,1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = GetLocaleInfoA(0,1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        return 0;
      }
      DAT_78042494 = 2;
    }
    else {
      DAT_78042494 = 1;
    }
  }
  if (DAT_78042494 == 1) {
    iVar1 = GetLocaleInfoW(param_1,param_2,param_3,param_4);
    return iVar1;
  }
  if (DAT_78042494 != 2) {
    return DAT_78042494;
  }
  if (param_5 == 0) {
    param_5 = __lc_codepage;
  }
  _Size = GetLocaleInfoA(param_1,param_2,(LPSTR)0x0,0);
  if (_Size != 0) {
    lpLCData = malloc(_Size);
    if (lpLCData == (LPSTR)0x0) {
      return 0;
    }
    iVar1 = GetLocaleInfoA(param_1,param_2,lpLCData,_Size);
    if (iVar1 != 0) {
      if (param_4 == 0) {
        iVar1 = MultiByteToWideChar(param_5,1,lpLCData,-1,(LPWSTR)0x0,0);
        if (iVar1 != 0) {
          free(lpLCData);
          return iVar1;
        }
      }
      else {
        iVar1 = MultiByteToWideChar(param_5,1,lpLCData,-1,param_3,param_4);
        if (iVar1 != 0) {
          free(lpLCData);
          return iVar1;
        }
      }
    }
    free(lpLCData);
    return 0;
  }
  return 0;
}


