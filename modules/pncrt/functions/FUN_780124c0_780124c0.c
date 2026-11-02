/* Module: pncrt.dll
   Function: FUN_780124c0
   Address: 780124c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl
FUN_780124c0(LCID param_1,DWORD param_2,PCNZWCH param_3,LPSTR param_4,LPCWSTR param_5,int param_6,
            UINT param_7)

{
  int iVar1;
  LPSTR cchWideChar;
  size_t _Size;
  PCNZCH lpMultiByteStr;
  size_t _Size_00;
  
  if (DAT_7804248c == 0) {
    iVar1 = CompareStringW(0,0,L"",1,L"",1);
    if (iVar1 == 0) {
      iVar1 = CompareStringA(0,0,"",1,"",1);
      if (iVar1 == 0) {
        return 0;
      }
      DAT_7804248c = 2;
    }
    else {
      DAT_7804248c = 1;
    }
  }
  cchWideChar = param_4;
  if (0 < (int)param_4) {
    cchWideChar = (LPSTR)FUN_780126d0(param_3,(int)param_4);
  }
  if (0 < param_6) {
    param_6 = FUN_780126d0(param_5,param_6);
  }
  if ((cchWideChar == (LPSTR)0x0) || (param_6 == 0)) {
    if (cchWideChar == (LPSTR)param_6) {
      return 2;
    }
    param_6 = ((-1 < (int)cchWideChar - param_6) - 1 & 0xfffffffe) + 3;
  }
  else {
    if (DAT_7804248c == 1) {
      iVar1 = CompareStringW(param_1,param_2,param_3,(int)cchWideChar,param_5,param_6);
      return iVar1;
    }
    if (DAT_7804248c == 2) {
      param_4 = (LPSTR)0x0;
      if (param_7 == 0) {
        param_7 = __lc_codepage;
      }
      _Size = WideCharToMultiByte(param_7,0x220,param_3,(int)cchWideChar,(LPSTR)0x0,0,(LPCSTR)0x0,
                                  (LPBOOL)0x0);
      if (_Size == 0) {
        return 0;
      }
      lpMultiByteStr = malloc(_Size);
      if (lpMultiByteStr == (PCNZCH)0x0) {
        return 0;
      }
      iVar1 = WideCharToMultiByte(param_7,0x220,param_3,(int)cchWideChar,lpMultiByteStr,_Size,
                                  (LPCSTR)0x0,(LPBOOL)0x0);
      if ((((iVar1 != 0) &&
           (_Size_00 = WideCharToMultiByte(param_7,0x220,param_5,param_6,(LPSTR)0x0,0,(LPCSTR)0x0,
                                           (LPBOOL)0x0), _Size_00 != 0)) &&
          (param_4 = malloc(_Size_00), param_4 != (LPSTR)0x0)) &&
         (iVar1 = WideCharToMultiByte(param_7,0x220,param_5,param_6,param_4,_Size_00,(LPCSTR)0x0,
                                      (LPBOOL)0x0), iVar1 != 0)) {
        iVar1 = CompareStringA(param_1,param_2,lpMultiByteStr,_Size,param_4,_Size_00);
        free(lpMultiByteStr);
        free(param_4);
        return iVar1;
      }
      free(lpMultiByteStr);
      free(param_4);
      return 0;
    }
  }
  return param_6;
}


