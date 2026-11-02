/* Module: erv23260.dll
   Function: FUN_637f7da0
   Address: 637f7da0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_637f7da0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x90);
    *(int *)(param_2 + 0x8c) = iVar1;
    *(int *)(param_2 + 0x90) = iVar2;
    *(int *)(iVar2 + 0x8c) = param_2;
    *(int *)(iVar1 + 0x90) = param_2;
    return;
  }
  *param_1 = param_2;
  return;
}


