/* Module: sftrans1.dll
   Function: FUN_004c2c90
   Address: 004c2c90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004c2c90(int param_1,undefined4 param_2,undefined4 param_3,byte param_4)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc0) != -1) {
    if (*(int *)(param_1 + 0xc0) == 5) {
      *(uint *)(param_1 + 0xc) =
           (uint)((param_4 & 10) != 0) << 0x10 | *(uint *)(param_1 + 0xc) & 0xfffeffff;
      FUN_004c2700(param_1,param_2,param_3,5);
      return;
    }
    uVar1 = FUN_004c2540(param_1,param_2,param_3);
    FUN_004c2630(param_1,uVar1,0);
  }
  return;
}


