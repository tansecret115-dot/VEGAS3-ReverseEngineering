/* Module: vegas30k.dll
   Function: FUN_011b6070
   Address: 011b6070
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_011b6070(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  
  *param_1 = &PTR_LAB_011eb748;
  if (param_1[6] != 0) {
    uVar2 = 0;
    if (param_1[6] != 0) {
      do {
        piVar1 = *(int **)(param_1[7] + uVar2 * 4);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
          *(undefined4 *)(param_1[7] + uVar2 * 4) = 0;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < (uint)param_1[6]);
    }
    if ((void *)param_1[7] != (void *)0x0) {
      free((void *)param_1[7]);
      param_1[7] = 0;
    }
  }
  if (param_1[8] != 0) {
    uVar2 = 0;
    if (param_1[8] != 0) {
      do {
        piVar1 = *(int **)(param_1[9] + uVar2 * 4);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
          *(undefined4 *)(param_1[9] + uVar2 * 4) = 0;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < (uint)param_1[8]);
    }
    if ((void *)param_1[9] != (void *)0x0) {
      free((void *)param_1[9]);
      param_1[9] = 0;
    }
  }
  piVar1 = (int *)param_1[5];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  param_1[5] = 0;
  return;
}


