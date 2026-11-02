/* Module: mp3rw.dll
   Function: FUN_00404af0
   Address: 00404af0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00404af0(undefined4 *param_1,undefined4 *param_2)

{
  HGLOBAL pvVar1;
  
  if ((param_1 != (undefined4 *)0x0) && ((LPCVOID)*param_1 != (LPCVOID)0x0)) {
    pvVar1 = GlobalHandle((LPCVOID)*param_1);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle((LPCVOID)*param_1);
    GlobalFree(pvVar1);
    *param_1 = 0;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  return;
}


