/* Module: vegas30k.dll
   Function: FUN_0111e850
   Address: 0111e850
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0111e850(int param_1,undefined4 param_2,undefined4 param_3,byte param_4)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc0) != -1) {
    if (*(int *)(param_1 + 0xc0) == 5) {
      *(uint *)(param_1 + 0xc) =
           (uint)((param_4 & 10) != 0) << 0x10 | *(uint *)(param_1 + 0xc) & 0xfffeffff;
      FUN_0111e2c0(param_1,param_2,param_3,5);
      return;
    }
    uVar1 = FUN_0111e100(param_1,param_2,param_3);
    FUN_0111e1f0(param_1,uVar1,0);
  }
  return;
}


