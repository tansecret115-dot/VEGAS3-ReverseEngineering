/* Module: sfcdi.dll
   Function: FUN_5bf3b800
   Address: 5bf3b800
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf3b800(undefined4 *param_1,uint *param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  uint local_8;
  uint local_4;
  
  puVar4 = param_1;
  for (iVar7 = 0x764; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *param_1 = 1;
  iVar7 = FUN_5bf3b790((int *)param_2);
  param_1[1] = iVar7;
  param_1[3] = iVar7;
  iVar7 = FUN_5bf2bd00(param_1 + 3);
  if (iVar7 == 0) {
    uVar3 = FUN_5bf2bb90((int)param_1);
    uVar9 = 0;
    if (uVar3 != 0) {
      do {
        puVar4 = (undefined4 *)FUN_5bf2bbb0((int)param_1,uVar9);
        uVar9 = uVar9 + 1;
        for (iVar7 = 0x13; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
      } while (uVar9 < uVar3);
    }
    if (param_2 == (uint *)0x0) {
      local_4 = 0;
    }
    else {
      local_4 = *param_2;
    }
    local_8 = 0;
    puVar8 = param_2;
    if (local_4 != 0) {
      do {
        piVar2 = *(int **)(param_2[2] + local_8 * 4);
        if (*piVar2 == 3) {
          iVar7 = piVar2[1];
          iVar5 = FUN_5bf3b730(param_2,iVar7);
          piVar6 = (int *)FUN_5bf2bbb0((int)param_1,iVar7 - 1);
          piVar6[4] = iVar5;
          piVar6[5] = piVar2[2];
          piVar6[6] = piVar2[3];
          piVar1 = piVar6 + 0x10;
          *piVar6 = iVar7;
          *piVar1 = 0;
          piVar6[0x11] = 0;
          piVar6[2] = 0;
          if ((piVar2[4] & 1U) != 0) {
            piVar6[2] = 2;
          }
          if ((piVar2[4] & 2U) != 0) {
            piVar6[2] = piVar6[2] | 1;
          }
          if ((piVar2[4] & 8U) != 0) {
            piVar6[7] = 1;
            piVar6[8] = piVar2[6];
            piVar6[9] = piVar2[7];
            piVar6[10] = piVar2[8];
          }
          if (iVar7 == param_1[1]) {
            param_1[0x763] = piVar6[5] + piVar6[6];
          }
          iVar7 = FUN_5bf3b7c0(param_2,local_8);
          *piVar1 = iVar7 + 1;
          iVar7 = FUN_5bf2bdc0(piVar1);
          if (iVar7 != 0) {
            return iVar7;
          }
          piVar2 = (int *)piVar6[0x11];
          *piVar2 = piVar6[5];
          puVar8 = (uint *)(piVar2 + 1);
        }
        else if (*piVar2 == 4) {
          *puVar8 = piVar2[2];
          puVar8 = puVar8 + 1;
        }
        local_8 = local_8 + 1;
      } while (local_8 < local_4);
    }
    iVar7 = 0;
  }
  return iVar7;
}


