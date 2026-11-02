/* Module: vegas30.exe
   Function: FUN_0052b580
   Address: 0052b580
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0052b580(LPCVOID param_1)

{
  HGLOBAL pvVar1;
  
  pvVar1 = GlobalHandle(param_1);
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle(param_1);
  GlobalFree(pvVar1);
  return;
}


