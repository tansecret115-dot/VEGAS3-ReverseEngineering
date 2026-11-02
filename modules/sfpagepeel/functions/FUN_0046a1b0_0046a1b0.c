/* Module: sfpagepeel.dll
   Function: FUN_0046a1b0
   Address: 0046a1b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0046a1b0(void)

{
  uint uVar1;
  DWORD local_4;
  
  local_4 = 0;
  if (DAT_004a41c0 != 0) {
    return DAT_004a41bc;
  }
  FUN_0046a220(&local_4);
  uVar1 = FUN_00469500(local_4,0);
  DAT_004a41bc = FUN_00469540(0,uVar1);
  DAT_004a41c0 = 1;
  return DAT_004a41bc;
}


