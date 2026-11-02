/* Module: sfppack1.dll
   Function: FUN_5ce0b870
   Address: 5ce0b870
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5ce0b870(void)

{
  uint uVar1;
  DWORD local_4;
  
  local_4 = 0;
  if (DAT_5ce2a0c0 != 0) {
    return DAT_5ce2a0bc;
  }
  FUN_5ce0b8e0(&local_4);
  uVar1 = FUN_5ce0abc0(local_4,0);
  DAT_5ce2a0bc = FUN_5ce0ac00(0,uVar1);
  DAT_5ce2a0c0 = 1;
  return DAT_5ce2a0bc;
}


