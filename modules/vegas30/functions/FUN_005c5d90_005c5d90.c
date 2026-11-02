/* Module: vegas30.exe
   Function: FUN_005c5d90
   Address: 005c5d90
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_005c5d90(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  
  if (param_1 != param_2) {
    if (param_1 + 2 != param_2 + 2) {
      puVar5 = param_2 + 2;
      puVar7 = param_1 + 2;
      for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
    }
    piVar8 = (int *)*param_1;
    if ((piVar8 != (int *)0x0) && (piVar6 = (int *)*param_2, piVar6 != (int *)0x0)) {
      if (piVar8[4] == 3) {
        iVar1 = 0xc;
      }
      else {
        iVar1 = piVar8[8] << 2;
      }
      if (piVar6[4] == 3) {
        iVar2 = 0xc;
      }
      else {
        iVar2 = piVar6[8] << 2;
      }
      if (*piVar8 + iVar1 == *piVar6 + iVar2) {
        if (piVar8[4] == 3) {
          iVar1 = 0xc;
        }
        else {
          iVar1 = piVar8[8] << 2;
        }
        uVar3 = iVar1 + *piVar8;
        for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *piVar8 = *piVar6;
          piVar6 = piVar6 + 1;
          piVar8 = piVar8 + 1;
        }
        for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(char *)piVar8 = (char)*piVar6;
          piVar6 = (int *)((int)piVar6 + 1);
          piVar8 = (int *)((int)piVar8 + 1);
        }
      }
    }
  }
  return;
}


