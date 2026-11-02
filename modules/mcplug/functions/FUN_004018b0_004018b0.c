/* Module: mcplug.dll
   Function: FUN_004018b0
   Address: 004018b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_004018b0(LPCVOID param_1)

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


