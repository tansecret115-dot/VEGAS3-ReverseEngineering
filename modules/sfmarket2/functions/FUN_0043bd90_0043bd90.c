/* Module: sfmarket2.dll
   Function: FUN_0043bd90
   Address: 0043bd90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0043bd90(LPCVOID param_1)

{
  HGLOBAL pvVar1;
  
  pvVar1 = GlobalHandle(param_1);
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle(param_1);
  GlobalFree(pvVar1);
  return 1;
}


