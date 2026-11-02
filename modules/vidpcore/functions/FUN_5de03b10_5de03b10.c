/* Module: vidpcore.dll
   Function: FUN_5de03b10
   Address: 5de03b10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5de03b10(LPCVOID param_1)

{
  HGLOBAL pvVar1;
  
  pvVar1 = GlobalHandle(param_1);
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle(param_1);
  GlobalFree(pvVar1);
  return;
}


