/* Module: vidcap30.exe
   Function: FUN_00443e30
   Address: 00443e30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00443e30(int param_1,int param_2,uint param_3,int param_4)

{
  FUN_0042f4b0(param_1,1);
  if ((param_4 < 1) && (param_4 < 0)) {
    param_3 = 0;
    param_4 = 0;
  }
  if ((*(uint *)(param_2 + 0x28) != param_3) || (*(int *)(param_2 + 0x2c) != param_4)) {
    *(uint *)(param_2 + 0x28) = param_3;
    *(int *)(param_2 + 0x2c) = param_4;
    **(uint **)(param_1 + 4) = **(uint **)(param_1 + 4) | 0x400;
    if ((param_4 <= *(int *)(param_2 + 0x24)) &&
       ((param_4 < *(int *)(param_2 + 0x24) || (param_3 < *(uint *)(param_2 + 0x20))))) {
      *(uint *)(param_2 + 0x20) = param_3;
      *(int *)(param_2 + 0x24) = param_4;
      **(uint **)(param_1 + 4) = **(uint **)(param_1 + 4) | 0x400;
    }
  }
  FUN_00443f20(param_1,param_2,*(undefined4 *)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x34));
  FUN_0042f5d0(param_1,1);
  return;
}


