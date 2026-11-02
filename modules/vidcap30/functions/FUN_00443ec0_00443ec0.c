/* Module: vidcap30.exe
   Function: FUN_00443ec0
   Address: 00443ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00443ec0(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  FUN_0042f4b0(param_1,1);
  iVar1 = *(uint *)(param_2 + 0x20) + param_3;
  iVar2 = *(int *)(param_2 + 0x24) + param_4 + (uint)CARRY4(*(uint *)(param_2 + 0x20),param_3);
  if ((*(int *)(param_2 + 0x28) != iVar1) || (*(int *)(param_2 + 0x2c) != iVar2)) {
    *(int *)(param_2 + 0x28) = iVar1;
    *(int *)(param_2 + 0x2c) = iVar2;
    **(uint **)(param_1 + 4) = **(uint **)(param_1 + 4) | 0x400;
  }
  FUN_00443f20(param_1,param_2,*(undefined4 *)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x34));
  FUN_0042f5d0(param_1,1);
  return;
}


