/* Module: qt4plug.dll
   Function: FUN_5f5110a0
   Address: 5f5110a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f5110a0(void)

{
  if (DAT_5f5a3e5c != (int *)0x0) {
    FUN_5f527d60(DAT_5f5a3e5c);
  }
  FUN_5f529640();
  DAT_5f5a3e50 = 0;
  if (DAT_5f5a3e60 != (HANDLE)0x0) {
    CloseHandle(DAT_5f5a3e60);
    DAT_5f5a3e60 = (HANDLE)0x0;
  }
  return 1;
}


