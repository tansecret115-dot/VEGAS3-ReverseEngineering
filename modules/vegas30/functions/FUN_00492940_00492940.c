/* Module: vegas30.exe
   Function: FUN_00492940
   Address: 00492940
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00492940(void)

{
  HGLOBAL pvVar1;
  
  if (DAT_0064c320 != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(DAT_0064c320);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(DAT_0064c320);
    GlobalFree(pvVar1);
  }
  return;
}


