/* Module: vegas30k.dll
   Function: FUN_011a2f90
   Address: 011a2f90
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_011a2f90(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  *param_1 = &PTR_LAB_011ead9c;
  if (param_1[3] != 0) {
    do {
      piVar1 = *(int **)(param_1[4] + uVar2 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      uVar2 = uVar2 + 1;
      *(undefined4 *)(param_1[4] + -4 + uVar2 * 4) = 0;
    } while (uVar2 < (uint)param_1[3]);
  }
  if ((void *)param_1[4] != (void *)0x0) {
    free((void *)param_1[4]);
  }
  param_1[4] = 0;
  return;
}


