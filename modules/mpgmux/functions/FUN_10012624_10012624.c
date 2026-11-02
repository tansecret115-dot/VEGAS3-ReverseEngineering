/* Module: mpgmux.dll
   Function: FUN_10012624
   Address: 10012624
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_10012624(LPSTR param_1,WCHAR param_2)

{
  LPSTR lpMultiByteStr;
  int iVar1;
  DWORD *pDVar2;
  
  lpMultiByteStr = param_1;
  if (param_1 == (LPSTR)0x0) {
    return 0;
  }
  if (DAT_1001b180 == 0) {
    if ((ushort)param_2 < 0x100) {
      *param_1 = (CHAR)param_2;
      return 1;
    }
  }
  else {
    param_1 = (LPSTR)0x0;
    iVar1 = WideCharToMultiByte(DAT_1001b190,0x220,&param_2,1,lpMultiByteStr,DAT_1001a3d4,
                                (LPCSTR)0x0,(LPBOOL)&param_1);
    if ((iVar1 != 0) && (param_1 == (LPSTR)0x0)) {
      return iVar1;
    }
  }
  pDVar2 = FUN_1000ff9f();
  *pDVar2 = 0x2a;
  return -1;
}


