/* Module: vegas30k.dll
   Function: _SfGetWideFromPrintString@8
   Address: 010c48f0
   Source: Ghidra pseudocode (Stage 10 batch) */


LPWSTR _SfGetWideFromPrintString_8(undefined4 param_1,LPCSTR param_2)

{
  int iVar1;
  LPWSTR lpWideCharStr;
  int iVar2;
  
                    /* 0xc48f0  996  _SfGetWideFromPrintString@8 */
  iVar1 = lstrlenA(param_2);
  lpWideCharStr = (LPWSTR)_SfGetStringBuffer_8(param_1,(iVar1 + 1) * 2);
  if (lpWideCharStr == (LPWSTR)0x0) {
    return (LPWSTR)&DAT_0128eb78;
  }
  iVar2 = MultiByteToWideChar(0,1,param_2,-1,lpWideCharStr,iVar1 + 1);
  lpWideCharStr[iVar1] = L'\0';
  if ((iVar2 < 1) || (iVar2 == 1)) {
    *lpWideCharStr = L'\0';
  }
  return lpWideCharStr;
}


