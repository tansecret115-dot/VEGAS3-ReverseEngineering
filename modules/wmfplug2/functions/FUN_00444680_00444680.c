/* Module: wmfplug2.dll
   Function: FUN_00444680
   Address: 00444680
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00444680(undefined4 param_1,LPCVOID param_2)

{
  HGLOBAL pvVar1;
  
  pvVar1 = GlobalHandle(param_2);
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle(param_2);
  GlobalFree(pvVar1);
  return;
}


