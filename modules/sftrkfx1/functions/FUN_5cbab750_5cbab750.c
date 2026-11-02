/* Module: sftrkfx1.dll
   Function: FUN_5cbab750
   Address: 5cbab750
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbab750(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  
  uVar4 = 0;
  uVar2 = 0;
  if (param_1[0x20] != 0) {
    piVar5 = param_1 + 0x21;
    piVar7 = piVar5;
    do {
      if (*piVar7 != 0) {
        *piVar5 = *piVar7;
        uVar2 = uVar2 + 1;
        piVar5 = piVar5 + 1;
      }
      uVar4 = uVar4 + 1;
      piVar7 = piVar7 + 1;
    } while (uVar4 < (uint)param_1[0x20]);
  }
  param_1[0x20] = uVar2;
  param_1[8] = 0;
  param_1[7] = 0;
  if (uVar2 != 0) {
    iVar8 = *(int *)(param_1[0x21] + 8);
    iVar3 = *(int *)(param_1[0x21] + 0x10);
    if (1 < uVar2) {
      piVar5 = param_1 + 0x22;
      iVar6 = uVar2 - 1;
      do {
        iVar1 = *(int *)(*piVar5 + 8);
        if (iVar1 <= iVar8) {
          iVar8 = iVar1;
        }
        iVar1 = *(int *)(*piVar5 + 0x10);
        if (iVar3 <= iVar1) {
          iVar3 = iVar1;
        }
        piVar5 = piVar5 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    param_1[7] = iVar8;
    param_1[8] = iVar3 - iVar8;
    InvalidateRect((HWND)*param_1,(RECT *)0x0,1);
  }
  return;
}


