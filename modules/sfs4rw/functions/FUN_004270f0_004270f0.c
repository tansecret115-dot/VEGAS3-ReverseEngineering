/* Module: sfs4rw.dll
   Function: FUN_004270f0
   Address: 004270f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004270f0(LPCVOID param_1)

{
  HGLOBAL pvVar1;
  
  pvVar1 = GlobalHandle(param_1);
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle(param_1);
  GlobalFree(pvVar1);
  return 1;
}


