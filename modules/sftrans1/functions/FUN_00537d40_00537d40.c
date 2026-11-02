/* Module: sftrans1.dll
   Function: FUN_00537d40
   Address: 00537d40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00537d40(void)

{
  undefined4 uVar1;
  undefined4 local_4;
  
  local_4 = 0;
  if (DAT_0062245c != 0) {
    return DAT_00622458;
  }
  FUN_00537db0(&local_4);
  uVar1 = FUN_00537090(local_4,0);
  DAT_00622458 = FUN_005370d0(0,uVar1);
  DAT_0062245c = 1;
  return DAT_00622458;
}


