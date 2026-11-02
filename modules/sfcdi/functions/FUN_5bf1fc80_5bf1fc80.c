/* Module: sfcdi.dll
   Function: FUN_5bf1fc80
   Address: 5bf1fc80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf1fc80(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint local_10;
  uint local_c;
  int local_4;
  
  puVar9 = param_1;
  for (iVar5 = 0x764; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  iVar5 = param_2[0x13];
  if (*(int *)(iVar5 + 0x28) == 0) {
    local_4 = FUN_5bf3e580(*param_2,"MPEGAV");
    iVar3 = 0;
    if (*(int **)(local_4 + 0x214) != (int *)0x0) {
      iVar3 = **(int **)(local_4 + 0x214);
    }
    iVar3 = iVar3 + 1;
  }
  else {
    iVar3 = 0;
    if (*(int **)(*param_2 + 0x214) != (int *)0x0) {
      iVar3 = **(int **)(*param_2 + 0x214);
    }
  }
  param_1[1] = iVar3;
  *param_1 = 1;
  param_1[3] = param_1[1];
  iVar3 = FUN_5bf2bd00(param_1 + 3);
  if (iVar3 == 0) {
    uVar6 = 0;
    uVar7 = 0;
    local_c = 0;
    if (param_1[1] != 0) {
      do {
        if (*(int *)(iVar5 + 0x28) == 0) {
          local_10 = local_c + uVar6 + 0x96;
          if (uVar7 == 0) {
            uVar8 = param_2[3];
          }
          else {
            piVar2 = *(int **)(local_4 + 0x214);
            if (piVar2 == (int *)0x0) {
              iVar3 = 0;
            }
            else {
              iVar3 = *piVar2;
            }
            if (((int)(uVar7 - 1) < 0) || (iVar3 + -1 < (int)(uVar7 - 1))) {
              iVar3 = 0;
            }
            else {
              iVar3 = *(int *)(piVar2[2] + -4 + uVar7 * 4);
            }
            uVar8 = *(int *)(*(int *)(iVar3 + 0x350) + 4) + 0x4b;
          }
        }
        else {
          local_10 = local_c + uVar6;
          if (uVar7 == 0) {
            local_10 = local_10 + 0x96;
          }
          piVar2 = *(int **)(*param_2 + 0x214);
          if (piVar2 == (int *)0x0) {
            iVar3 = 0;
          }
          else {
            iVar3 = *piVar2;
          }
          if (((int)uVar7 < 0) || (iVar3 + -1 < (int)uVar7)) {
            iVar3 = 0;
          }
          else {
            iVar3 = *(int *)(piVar2[2] + uVar7 * 4);
          }
          uVar11 = __aulldiv(*(uint *)(iVar3 + 0x330),*(uint *)(iVar3 + 0x334),0x930,0);
          uVar8 = (uint)uVar11;
        }
        local_c = local_c + uVar6;
        puVar4 = (uint *)FUN_5bf2bbb0((int)param_1,uVar7);
        puVar10 = puVar4;
        for (iVar3 = 0x13; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar10 = 0;
          puVar10 = puVar10 + 1;
        }
        puVar4[4] = local_c;
        puVar10 = puVar4 + 0x10;
        puVar4[3] = (-(uint)(uVar7 != 0) & 4) + 4;
        uVar1 = uVar7 + 1;
        puVar4[5] = local_10;
        puVar4[6] = uVar8;
        *puVar4 = uVar1;
        *puVar10 = 0;
        puVar4[0x11] = 0;
        puVar4[2] = 4;
        if (uVar7 == param_1[1] - 1) {
          param_1[0x763] = local_10 + 0x96 + uVar8;
        }
        *puVar10 = 1;
        iVar3 = FUN_5bf2bdc0((int *)puVar10);
      } while ((iVar3 == 0) &&
              (*(uint *)puVar4[0x11] = puVar4[5], uVar6 = local_10, uVar7 = uVar1, local_c = uVar8,
              uVar1 < (uint)param_1[1]));
    }
  }
  return;
}


