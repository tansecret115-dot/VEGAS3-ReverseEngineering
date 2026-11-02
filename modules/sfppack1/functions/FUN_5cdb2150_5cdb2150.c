/* Module: sfppack1.dll
   Function: FUN_5cdb2150
   Address: 5cdb2150
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5cdb2150(LPCVOID param_1)

{
  HGLOBAL pvVar1;
  
  if (param_1 != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(param_1);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(param_1);
    GlobalFree(pvVar1);
  }
  return;
}


