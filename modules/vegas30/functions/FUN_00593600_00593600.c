/* Module: vegas30.exe
   Function: FUN_00593600
   Address: 00593600
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00593600(void)

{
  HGLOBAL pvVar1;
  
  if (DAT_0065ab80 != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(DAT_0065ab80);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(DAT_0065ab80);
    GlobalFree(pvVar1);
    DAT_0065ab80 = (LPCVOID)0x0;
    return 0;
  }
  DAT_0065ab80 = (LPCVOID)0x0;
  return 0;
}


