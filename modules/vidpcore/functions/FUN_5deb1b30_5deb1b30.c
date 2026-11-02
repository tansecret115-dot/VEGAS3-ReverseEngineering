/* Module: vidpcore.dll
   Function: FUN_5deb1b30
   Address: 5deb1b30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5deb1b30(int param_1,undefined4 param_2,undefined4 param_3,byte param_4)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc0) != -1) {
    if (*(int *)(param_1 + 0xc0) == 5) {
      *(uint *)(param_1 + 0xc) =
           (uint)((param_4 & 10) != 0) << 0x10 | *(uint *)(param_1 + 0xc) & 0xfffeffff;
      FUN_5deb15a0(param_1,param_2,param_3,5);
      return;
    }
    uVar1 = FUN_5deb13e0(param_1,param_2,param_3);
    FUN_5deb14d0(param_1,uVar1,0);
  }
  return;
}


