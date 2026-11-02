/* Module: vegas30.exe
   Function: FUN_004754d0
   Address: 004754d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004754d0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (4 < *(int *)(param_3 + 0x2c) - *(int *)(param_3 + 0x24)) {
    uVar1 = FUN_00475180(param_1,param_2,param_3,param_4,0,*(undefined4 *)(param_3 + 0x38),
                         *(uint *)(param_3 + 0x4c) >> 7 & 1,*(uint *)(param_3 + 0x4c) >> 8 & 1);
  }
  if ((*(byte *)(param_3 + 0x4c) & 8) != 0) {
    FUN_00475530(param_1,param_3 + 0x20);
  }
  return uVar1;
}


