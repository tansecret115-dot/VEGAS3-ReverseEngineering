/* Module: vegas30.exe
   Function: FUN_00593b90
   Address: 00593b90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00593b90(int param_1)

{
  HGLOBAL pvVar1;
  
  pvVar1 = GlobalAlloc(0x42,*(int *)(param_1 + 4) << 6);
  DAT_0065ab98 = GlobalLock(pvVar1);
  pvVar1 = GlobalAlloc(0x42,*(int *)(param_1 + 4) << 6);
  DAT_0065ab9c = GlobalLock(pvVar1);
  return 0;
}


