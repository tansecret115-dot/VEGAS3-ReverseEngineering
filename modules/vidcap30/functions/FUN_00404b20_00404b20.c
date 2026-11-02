/* Module: vidcap30.exe
   Function: FUN_00404b20
   Address: 00404b20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00404b20(LPCVOID param_1)

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


