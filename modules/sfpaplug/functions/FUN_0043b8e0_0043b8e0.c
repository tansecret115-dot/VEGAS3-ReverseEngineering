/* Module: sfpaplug.dll
   Function: FUN_0043b8e0
   Address: 0043b8e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0043b8e0(undefined4 param_1,LPCVOID param_2)

{
  HGLOBAL pvVar1;
  
  pvVar1 = GlobalHandle(param_2);
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle(param_2);
  GlobalFree(pvVar1);
  return;
}


