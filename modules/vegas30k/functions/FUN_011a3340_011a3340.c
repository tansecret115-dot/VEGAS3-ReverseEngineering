/* Module: vegas30k.dll
   Function: FUN_011a3340
   Address: 011a3340
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_011a3340(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  
  *param_1 = &PTR_LAB_011eadc4;
  if (param_1[4] != 0) {
    uVar2 = 0;
    if (param_1[5] != 0) {
      do {
        piVar1 = *(int **)(param_1[4] + uVar2 * 4);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
        }
        uVar2 = uVar2 + 1;
        *(undefined4 *)(param_1[4] + -4 + uVar2 * 4) = 0;
      } while (uVar2 < (uint)param_1[5]);
    }
    free((void *)param_1[4]);
    param_1[5] = 0;
    param_1[4] = 0;
  }
  return;
}


