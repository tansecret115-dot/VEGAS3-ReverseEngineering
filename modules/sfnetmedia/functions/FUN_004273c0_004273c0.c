/* Module: sfnetmedia.dll
   Function: FUN_004273c0
   Address: 004273c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004273c0(LPCVOID param_1)

{
  HGLOBAL pvVar1;
  
  pvVar1 = GlobalHandle(param_1);
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle(param_1);
  GlobalFree(pvVar1);
  return 1;
}


