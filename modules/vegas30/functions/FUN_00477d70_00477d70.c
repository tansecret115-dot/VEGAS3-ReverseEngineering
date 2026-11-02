/* Module: vegas30.exe
   Function: FUN_00477d70
   Address: 00477d70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00477d70(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int local_8;
  int local_4;
  
  if (*(int **)(param_1 + 0x18) == (int *)0x0) {
    local_8 = 0;
  }
  else {
    local_8 = **(int **)(param_1 + 0x18);
  }
  local_4 = 0;
  if (0 < local_8) {
    do {
      iVar5 = 0;
      iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x18) + 8) + local_4 * 4);
      iVar2 = **(int **)(iVar1 + 0x30);
      if (0 < iVar2) {
        do {
          iVar4 = *(int *)(iVar1 + 0x30);
          iVar3 = *(int *)(iVar4 + 8);
          iVar4 = *(int *)(iVar4 + 4) * iVar5;
          uVar6 = ftol();
          iVar5 = iVar5 + 1;
          *(undefined8 *)(iVar4 + iVar3) = uVar6;
        } while (iVar5 < iVar2);
      }
      local_4 = local_4 + 1;
    } while (local_4 < local_8);
  }
  return;
}


