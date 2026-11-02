/* Module: Setup.exe
   Function: FUN_00403420
   Address: 00403420
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_00403420(LPCVOID param_1)

{
  HGLOBAL pvVar1;
  
  pvVar1 = GlobalHandle(param_1);
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle(param_1);
  GlobalFree(pvVar1);
  return;
}


