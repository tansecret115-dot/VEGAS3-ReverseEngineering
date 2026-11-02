/* Module: vidpcore.dll
   Function: FUN_5df12530
   Address: 5df12530
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5df12530(void)

{
  undefined4 uVar1;
  undefined4 local_4;
  
  local_4 = 0;
  if (DAT_5dff1ac4 != 0) {
    return DAT_5dff1ac0;
  }
  FUN_5df125a0(&local_4);
  uVar1 = FUN_5df11880(local_4,0);
  DAT_5dff1ac0 = FUN_5df118c0(0,uVar1);
  DAT_5dff1ac4 = 1;
  return DAT_5dff1ac0;
}


