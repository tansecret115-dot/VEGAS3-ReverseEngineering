/* Module: wavplug.dll
   Function: FUN_5f3c4540
   Address: 5f3c4540
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f3c4540(void)

{
  uint uVar1;
  DWORD local_4;
  
  local_4 = 0;
  if (DAT_5f3e18c4 != 0) {
    return DAT_5f3e18c0;
  }
  FUN_5f3c45b0(&local_4);
  uVar1 = FUN_5f3c3890(local_4,0);
  DAT_5f3e18c0 = FUN_5f3c38d0(0,uVar1);
  DAT_5f3e18c4 = 1;
  return DAT_5f3e18c0;
}


