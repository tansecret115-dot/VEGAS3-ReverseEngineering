/* Module: mcplugrw.dll
   Function: FUN_00427170
   Address: 00427170
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00427170(LPCVOID param_1)

{
  HGLOBAL pvVar1;
  
  pvVar1 = GlobalHandle(param_1);
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle(param_1);
  GlobalFree(pvVar1);
  return 1;
}


