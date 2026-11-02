/* Module: mcplugrw.dll
   Function: FUN_00401220
   Address: 00401220
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_00401220(LPCVOID param_1)

{
  HGLOBAL pvVar1;
  
  pvVar1 = GlobalHandle(param_1);
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle(param_1);
  GlobalFree(pvVar1);
  return;
}


