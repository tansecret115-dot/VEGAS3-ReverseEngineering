/* Module: qt4plug.dll
   Function: FUN_5f513950
   Address: 5f513950
   Source: Ghidra pseudocode (Stage 10 batch) */


LPVOID FUN_5f513950(LPCSTR param_1,undefined4 *param_2)

{
  HGLOBAL hResData;
  LPVOID pvVar1;
  
  hResData = FUN_5f527090(DAT_5f5a4158,param_1,(LPCSTR)0x2,(DWORD *)0x0);
  if (hResData == (HGLOBAL)0x0) {
    if (param_2 != (undefined4 *)0x0) {
      param_2[1] = 0;
      *param_2 = 0;
    }
    pvVar1 = (LPVOID)0x0;
  }
  else {
    pvVar1 = LockResource(hResData);
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *(undefined4 *)((int)pvVar1 + 4);
      param_2[1] = *(undefined4 *)((int)pvVar1 + 8);
      return pvVar1;
    }
  }
  return pvVar1;
}


