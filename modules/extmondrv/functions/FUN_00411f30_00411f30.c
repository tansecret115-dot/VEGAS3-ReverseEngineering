/* Module: extmondrv.dll
   Function: FUN_00411f30
   Address: 00411f30
   Source: Ghidra pseudocode (Stage 10 batch) */


LPWSTR FUN_00411f30(int param_1,LPCSTR param_2)

{
  int iVar1;
  LPWSTR lpWideCharStr;
  int iVar2;
  
  iVar1 = lstrlenA(param_2);
  lpWideCharStr = (LPWSTR)FUN_00411eb0(param_1,(iVar1 + 1) * 2);
  if (lpWideCharStr == (LPWSTR)0x0) {
    return (LPWSTR)&DAT_0045b160;
  }
  iVar2 = MultiByteToWideChar(0,1,param_2,-1,lpWideCharStr,iVar1 + 1);
  lpWideCharStr[iVar1] = L'\0';
  if ((iVar2 < 1) || (iVar2 == 1)) {
    *lpWideCharStr = L'\0';
  }
  return lpWideCharStr;
}


