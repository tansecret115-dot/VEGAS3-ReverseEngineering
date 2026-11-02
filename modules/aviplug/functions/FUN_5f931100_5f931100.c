/* Module: aviplug.dll
   Function: FUN_5f931100
   Address: 5f931100
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f931100(void)

{
  if (DAT_5f9f410c != (HANDLE)0x0) {
    if (DAT_5f9f4110 != (int *)0x0) {
      WaitForSingleObject(DAT_5f9f410c,0xffffffff);
      FUN_5f953a70(DAT_5f9f4110,0,0);
      FUN_5f9796e0(DAT_5f9f4110);
      DAT_5f9f4110 = (int *)0x0;
      DAT_5f9f4134 = 0;
      DAT_5f9f4138 = 0;
      ReleaseMutex(DAT_5f9f410c);
    }
    CloseHandle(DAT_5f9f410c);
    DAT_5f9f410c = (HANDLE)0x0;
  }
  if (DAT_5f9f40fc != (int *)0x0) {
    FUN_5f981490(DAT_5f9f40fc);
    DAT_5f9f40fc = (int *)0x0;
  }
  if (DAT_5f9f4130 != (int *)0x0) {
    (**(code **)(*DAT_5f9f4130 + 8))(DAT_5f9f4130);
    DAT_5f9f4130 = (int *)0x0;
  }
  FUN_5f982d70();
  DAT_5f9f40f0 = 0;
  return 1;
}


