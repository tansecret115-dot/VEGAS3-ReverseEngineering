/* Module: pncrt.dll
   Function: FUN_7800d530
   Address: 7800d530
   Source: Ghidra pseudocode (Stage 10 batch) */


size_t __cdecl
FUN_7800d530(LCID param_1,uint param_2,LPCWSTR param_3,char *param_4,LPWSTR param_5,size_t param_6,
            UINT param_7)

{
  int iVar1;
  char *cchWideChar;
  size_t sVar2;
  LPCSTR lpMultiByteStr;
  size_t _Size;
  
  if (DAT_7804244c == 0) {
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        return 0;
      }
      DAT_7804244c = 2;
    }
    else {
      DAT_7804244c = 1;
    }
  }
  cchWideChar = param_4;
  if (0 < (int)param_4) {
    cchWideChar = (char *)FUN_780126d0(param_3,(int)param_4);
  }
  if (DAT_7804244c == 1) {
    sVar2 = LCMapStringW(param_1,param_2,param_3,(int)cchWideChar,param_5,param_6);
    return sVar2;
  }
  if (DAT_7804244c != 2) {
    return DAT_7804244c;
  }
  param_4 = (char *)0x0;
  if (param_7 == 0) {
    param_7 = __lc_codepage;
  }
  sVar2 = WideCharToMultiByte(param_7,0x220,param_3,(int)cchWideChar,(LPSTR)0x0,0,(LPCSTR)0x0,
                              (LPBOOL)0x0);
  if (sVar2 == 0) {
    return 0;
  }
  lpMultiByteStr = malloc(sVar2);
  if (lpMultiByteStr == (LPCSTR)0x0) {
    return 0;
  }
  iVar1 = WideCharToMultiByte(param_7,0x220,param_3,(int)cchWideChar,lpMultiByteStr,sVar2,
                              (LPCSTR)0x0,(LPBOOL)0x0);
  if ((((iVar1 != 0) &&
       (_Size = LCMapStringA(param_1,param_2,lpMultiByteStr,sVar2,(LPSTR)0x0,0), _Size != 0)) &&
      (param_4 = malloc(_Size), param_4 != (char *)0x0)) &&
     (iVar1 = LCMapStringA(param_1,param_2,lpMultiByteStr,sVar2,param_4,_Size), iVar1 != 0)) {
    if ((param_2 & 0x400) == 0) {
      if (param_6 == 0) {
        _Size = MultiByteToWideChar(param_7,1,param_4,_Size,(LPWSTR)0x0,0);
      }
      else {
        _Size = MultiByteToWideChar(param_7,1,param_4,_Size,param_5,param_6);
      }
      if (_Size == 0) goto LAB_7800d71a;
    }
    else if (param_6 != 0) {
      if ((int)_Size <= (int)param_6) {
        param_6 = _Size;
      }
      strncpy((char *)param_5,param_4,param_6);
    }
    free(lpMultiByteStr);
    free(param_4);
    return _Size;
  }
LAB_7800d71a:
  free(lpMultiByteStr);
  free(param_4);
  return 0;
}


