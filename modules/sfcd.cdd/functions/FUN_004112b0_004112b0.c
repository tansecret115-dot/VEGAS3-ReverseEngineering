/* Module: sfcd.cdd
   Function: FUN_004112b0
   Address: 004112b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004112b0(HSFCD__ *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0x160) + 0x40) >> 8 & 0xff;
  if (3 < uVar1) {
    if (uVar1 < 6) {
      uVar2 = FUN_00411210(param_1);
      uVar2 = FUN_004111b0(param_1,param_2,0x31,(char)uVar2);
      return uVar2;
    }
    if (uVar1 == 6) {
      uVar2 = FUN_00411210(param_1);
      uVar2 = FUN_004111b0(param_1,param_2,0x20,(char)uVar2);
      return uVar2;
    }
  }
  return 0x8004e0c1;
}


