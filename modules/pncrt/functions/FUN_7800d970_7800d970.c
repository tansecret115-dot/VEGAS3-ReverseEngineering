/* Module: pncrt.dll
   Function: FUN_7800d970
   Address: 7800d970
   Source: Ghidra pseudocode (Stage 10 batch) */


BOOL __cdecl
FUN_7800d970(DWORD param_1,LPCWSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6)

{
  BOOL BVar1;
  size_t _Size;
  LPCSTR lpMultiByteStr;
  int iVar2;
  LPWORD lpCharType;
  BOOL local_4;
  
  lpCharType = (LPWORD)0x0;
  if (DAT_78042454 == 0) {
    BVar1 = GetStringTypeW(1,L"",1,(LPWORD)&local_4);
    if (BVar1 == 0) {
      BVar1 = GetStringTypeA(0,1,"",1,(LPWORD)&local_4);
      if (BVar1 == 0) {
        return 0;
      }
      DAT_78042454 = 2;
    }
    else {
      DAT_78042454 = 1;
    }
  }
  if (DAT_78042454 != 1) {
    local_4 = DAT_78042454;
    if (DAT_78042454 == 2) {
      local_4 = 0;
      if (param_5 == 0) {
        param_5 = __lc_codepage;
      }
      _Size = WideCharToMultiByte(param_5,0x220,param_2,param_3,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0
                                 );
      if (_Size == 0) {
        return 0;
      }
      lpMultiByteStr = calloc(1,_Size);
      if (lpMultiByteStr == (LPCSTR)0x0) {
        return 0;
      }
      iVar2 = WideCharToMultiByte(param_5,0x220,param_2,param_3,lpMultiByteStr,_Size,(LPCSTR)0x0,
                                  (LPBOOL)0x0);
      if ((iVar2 != 0) && (lpCharType = malloc(_Size * 2 + 2), lpCharType != (LPWORD)0x0)) {
        if (param_6 == 0) {
          param_6 = DAT_78042438;
        }
        lpCharType[param_3] = 0xffff;
        lpCharType[param_3 + -1] = 0xffff;
        local_4 = GetStringTypeA(param_6,param_1,lpMultiByteStr,_Size,lpCharType);
        if ((lpCharType[param_3 + -1] == 0xffff) || (lpCharType[param_3] != 0xffff)) {
          local_4 = 0;
        }
        else {
          memmove(param_4,lpCharType,param_3 * 2);
        }
      }
      free(lpMultiByteStr);
      free(lpCharType);
    }
    return local_4;
  }
  BVar1 = GetStringTypeW(param_1,param_2,param_3,param_4);
  return BVar1;
}


