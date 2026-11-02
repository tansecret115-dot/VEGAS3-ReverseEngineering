/* Module: aviplug.dll
   Function: FUN_5f93e950
   Address: 5f93e950
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f93e950(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = **(int **)(param_1 + 0x40);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    piVar2 = (int *)(*(int *)(*(int *)(param_1 + 0x40) + 4) * iVar1 +
                    *(int *)(*(int *)(param_1 + 0x40) + 8));
    *piVar2 = *piVar2 + (param_3 - param_2);
    if (*(int *)(param_1 + 8) != 0) {
      piVar2[3] = piVar2[3] + (param_3 - param_2);
    }
    piVar2[1] = piVar2[1] + (param_3 - param_2);
  }
  return;
}


