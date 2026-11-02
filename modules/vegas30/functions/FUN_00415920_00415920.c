/* Module: vegas30.exe
   Function: FUN_00415920
   Address: 00415920
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00415920(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_8;
  
  local_8 = 0;
  iVar1 = **(int **)(param_1 + 0x8c);
  if (0 < iVar1) {
    do {
      iVar4 = *(int *)(*(int *)(param_1 + 0x8c) + 8);
      iVar5 = *(int *)(*(int *)(param_1 + 0x8c) + 4) * local_8;
      piVar2 = *(int **)(iVar5 + 0x2c + iVar4);
      iVar5 = iVar5 + iVar4;
      if (piVar2 == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *piVar2;
      }
      if (((param_5 == 0) && (1 < iVar4)) ||
         (puVar3 = *(undefined4 **)(iVar5 + 0x28), puVar3 == (undefined4 *)0x0)) {
        iVar6 = 0;
        if (0 < iVar4) {
          do {
            puVar3 = *(undefined4 **)(*(int *)(*(int *)(iVar5 + 0x2c) + 8) + iVar6 * 4);
            (**(code **)*puVar3)(puVar3,param_2,param_3,param_4);
            iVar6 = iVar6 + 1;
          } while (iVar6 < iVar4);
        }
      }
      else {
        (**(code **)*puVar3)(puVar3,param_2,param_3,param_4);
      }
      local_8 = local_8 + 1;
    } while (local_8 < iVar1);
  }
  return;
}


