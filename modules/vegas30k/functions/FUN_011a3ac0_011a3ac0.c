/* Module: vegas30k.dll
   Function: FUN_011a3ac0
   Address: 011a3ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_011a3ac0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_LAB_011eae2c;
  if (param_1[2] != 0) {
    param_1[4] = 0;
    if (param_1[3] != 0) {
      do {
        piVar1 = *(int **)(param_1[2] + param_1[4] * 4);
        (**(code **)(*piVar1 + 8))(piVar1);
        iVar2 = param_1[4];
        param_1[4] = iVar2 + 1U;
      } while (iVar2 + 1U < (uint)param_1[3]);
    }
    free((void *)param_1[2]);
    param_1[2] = 0;
  }
  return;
}


