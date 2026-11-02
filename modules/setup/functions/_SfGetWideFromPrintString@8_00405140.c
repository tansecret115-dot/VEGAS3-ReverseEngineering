/* Module: Setup.exe
   Function: _SfGetWideFromPrintString@8
   Address: 00405140
   Source: Ghidra pseudocode (Stage 10 batch) */


LPWSTR _SfGetWideFromPrintString_8(int param_1,LPCSTR param_2)

{
  int iVar1;
  LPWSTR lpWideCharStr;
  int iVar2;
  
                    /* 0x5140  186  _SfGetWideFromPrintString@8 */
  iVar1 = lstrlenA(param_2);
  lpWideCharStr = (LPWSTR)_SfGetStringBuffer_8(param_1,(iVar1 + 1) * 2);
  if (lpWideCharStr == (LPWSTR)0x0) {
    return (LPWSTR)&DAT_004490ec;
  }
  iVar2 = MultiByteToWideChar(0,1,param_2,-1,lpWideCharStr,iVar1 + 1);
  lpWideCharStr[iVar1] = L'\0';
  if ((iVar2 < 1) || (iVar2 == 1)) {
    *lpWideCharStr = L'\0';
  }
  return lpWideCharStr;
}


