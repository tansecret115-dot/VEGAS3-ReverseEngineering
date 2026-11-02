/* Module: vegas30.exe
   Function: FUN_00593be0
   Address: 00593be0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00593be0(void)

{
  HGLOBAL pvVar1;
  
  if (DAT_0065ab98 != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(DAT_0065ab98);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(DAT_0065ab98);
    GlobalFree(pvVar1);
  }
  DAT_0065ab98 = (LPCVOID)0x0;
  if (DAT_0065ab9c != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(DAT_0065ab9c);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(DAT_0065ab9c);
    GlobalFree(pvVar1);
  }
  DAT_0065ab9c = (LPCVOID)0x0;
  return 0;
}


