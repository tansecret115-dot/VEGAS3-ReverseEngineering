/* Module: sftrans1.dll
   Function: FUN_00530430
   Address: 00530430
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00530430(void)

{
  int iVar1;
  uint local_8;
  uint local_4;
  
  iVar1 = FUN_005371a0(&local_4);
  if (iVar1 < 0) {
    return 0x8004e131;
  }
  iVar1 = FUN_00530a60(&local_8);
  if (iVar1 < 0) {
    return 0x8004e12f;
  }
  if (local_4 < local_8) {
    return 0x8004e130;
  }
  FUN_00530c60(local_4 - local_8);
  FUN_00530a00();
  return 0;
}


