/* Module: vegas30.exe
   Function: FUN_0040bfc0
   Address: 0040bfc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040bfc0(LPCVOID param_1)

{
  HGLOBAL pvVar1;
  
  pvVar1 = GlobalHandle(param_1);
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle(param_1);
  GlobalFree(pvVar1);
  return;
}


