/* Module: erv23260.dll
   Function: FUN_637f97a0
   Address: 637f97a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_637f97a0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x8c);
  *(int *)(*(int *)(param_1 + 0x90) + 0x8c) = param_2;
  *(int *)(iVar1 + 0x90) = param_2;
  *(undefined4 *)(param_2 + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(param_2 + 0x90) = *(undefined4 *)(param_1 + 0x90);
  iVar1 = *(int *)(param_1 + 0x88);
  *(int *)(param_2 + 0x88) = iVar1;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x84) = param_2;
  }
  iVar1 = *(int *)(param_1 + 0x84);
  *(int *)(param_2 + 0x84) = iVar1;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x88) = param_2;
  }
  return;
}


