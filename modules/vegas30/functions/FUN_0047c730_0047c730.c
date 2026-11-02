/* Module: vegas30.exe
   Function: FUN_0047c730
   Address: 0047c730
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0047c730(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  int iVar1;
  int local_4;
  
  local_4 = 0;
  *(undefined4 *)(param_1 + 0x50) = param_2;
  *(undefined4 *)(param_1 + 8) = param_3;
  *(undefined4 *)(param_1 + 0xc) = param_4;
  *(undefined4 *)(param_1 + 0x10) = param_5;
  *(undefined4 *)(param_1 + 0x14) = param_6;
  iVar1 = FUN_0047c4b0(&local_4,param_7,param_8,param_9,param_10,param_11,param_12);
  if (-1 < iVar1) {
    iVar1 = FUN_0047c670(param_1,local_4,0xffffffff);
    if (iVar1 == 0) {
      *(int *)(param_1 + 0x40) = **(int **)(param_1 + 0x18) + -1;
      return 0;
    }
  }
  if (local_4 != 0) {
    FUN_0047c480(local_4);
  }
  return iVar1;
}


