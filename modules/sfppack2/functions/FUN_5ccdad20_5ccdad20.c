/* Module: sfppack2.dll
   Function: FUN_5ccdad20
   Address: 5ccdad20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5ccdad20(int *param_1,int param_2,int param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  uVar3 = 0;
  uVar1 = *param_4;
  piVar4 = param_1;
  if (uVar1 != 0) {
    do {
      if (param_2 <= *piVar4) break;
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 < uVar1);
  }
  if (param_1[uVar3 * 2] != param_2) {
    if (uVar3 < uVar1) {
      piVar4 = param_1 + uVar1 * 2 + -1;
      iVar2 = uVar1 - uVar3;
      do {
        piVar4[1] = piVar4[-1];
        piVar4[2] = *piVar4;
        piVar4 = piVar4 + -2;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    param_1[uVar3 * 2] = param_2;
    param_1[uVar3 * 2 + 1] = param_3;
    *param_4 = *param_4 + 1;
    return;
  }
  param_1[uVar3 * 2 + 1] = param_3;
  return;
}


