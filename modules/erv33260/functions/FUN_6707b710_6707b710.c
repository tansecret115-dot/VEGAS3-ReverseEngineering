/* Module: erv33260.dll
   Function: FUN_6707b710
   Address: 6707b710
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6707b710(int *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  iVar1 = 0;
  uVar2 = 0;
  if (param_1[1] != 0) {
    piVar3 = (int *)param_1[2];
    while (*piVar3 != 0) {
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 1;
      if ((uint)param_1[1] <= uVar2) {
        param_1[3] = 0;
        return;
      }
    }
    iVar1 = *(int *)(*param_1 + uVar2 * 4);
  }
  param_1[3] = iVar1;
  return;
}


