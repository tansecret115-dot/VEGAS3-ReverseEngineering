/* Module: vegas30.exe
   Function: FUN_004f88d0
   Address: 004f88d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004f88d0(void)

{
  HGLOBAL pvVar1;
  
  if (DAT_0064dd10 != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(DAT_0064dd10);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(DAT_0064dd10);
    GlobalFree(pvVar1);
  }
  return;
}


