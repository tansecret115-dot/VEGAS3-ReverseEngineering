/* Module: oggplug.dll
   Function: FUN_0043a490
   Address: 0043a490
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl
FUN_0043a490(int param_1,int *param_2,int param_3,int param_4,int param_5,int *param_6,
            undefined *param_7)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int local_434;
  int *local_430;
  int local_42c;
  int local_418;
  int local_404;
  int local_400 [128];
  int local_200 [128];
  
  piVar1 = (int *)*param_2;
  iVar2 = piVar1[3];
  iVar3 = *(int *)param_2[5];
  iVar4 = piVar1[2];
  iVar6 = (piVar1[1] - *piVar1) / iVar4;
  piVar10 = local_200;
  for (iVar8 = 0x80; iVar8 != 0; iVar8 = iVar8 + -1) {
    *piVar10 = 0;
    piVar10 = piVar10 + 1;
  }
  piVar10 = local_400;
  for (iVar8 = 0x80; iVar8 != 0; iVar8 = iVar8 + -1) {
    *piVar10 = 0;
    piVar10 = piVar10 + 1;
  }
  if (param_5 == 0) {
    local_434 = param_5;
  }
  else {
    local_434 = piVar1[param_5 + 0x244];
  }
  if (local_434 < piVar1[param_5 + 0x245]) {
    do {
      iVar8 = 0;
      local_418 = 0;
      if (0 < iVar6) {
        do {
          if ((local_434 == 0) && (0 < param_4)) {
            local_42c = param_4;
            local_430 = param_6;
            do {
              iVar9 = 1;
              iVar7 = *(int *)(*local_430 + iVar8 * 4);
              if (1 < iVar3) {
                piVar10 = (int *)(*local_430 + 4 + iVar8 * 4);
                do {
                  iVar7 = iVar7 * iVar2;
                  if (iVar9 + iVar8 < iVar6) {
                    iVar7 = iVar7 + *piVar10;
                  }
                  iVar9 = iVar9 + 1;
                  piVar10 = piVar10 + 1;
                } while (iVar9 < iVar3);
              }
              if (iVar7 < *(int *)(param_2[5] + 4)) {
                local_404 = FUN_004363f0(param_2[5],iVar7,(int *)(param_1 + 4));
              }
              local_430 = local_430 + 1;
              local_42c = local_42c + -1;
              param_2[10] = param_2[10] + local_404;
            } while (local_42c != 0);
          }
          local_430 = (int *)0x0;
          if (0 < iVar3) {
            iVar7 = iVar8 * 4;
            iVar9 = iVar8 * iVar4;
            do {
              if (iVar6 <= iVar8) goto LAB_0043a714;
              iVar5 = *piVar1;
              if (0 < param_4) {
                local_42c = param_4;
                piVar10 = param_6;
                do {
                  if (local_434 == 0) {
                    local_400[*(int *)(iVar7 + *piVar10)] =
                         local_400[*(int *)(iVar7 + *piVar10)] + iVar4;
                  }
                  if (((piVar1[*(int *)(iVar7 + *piVar10) + 5] & 1 << ((byte)local_434 & 0x1f)) != 0
                      ) && (iVar8 = *(int *)(*(int *)(param_2[6] + *(int *)(iVar7 + *piVar10) * 4) +
                                            local_434 * 4), iVar8 != 0)) {
                    iVar8 = (*(code *)param_7)(param_1 + 4,
                                               *(int *)((param_3 - (int)param_6) + (int)piVar10) +
                                               (iVar9 + iVar5) * 4,iVar4,iVar8,param_2);
                    param_2[9] = param_2[9] + iVar8;
                    local_200[*(int *)(iVar7 + *piVar10)] =
                         local_200[*(int *)(iVar7 + *piVar10)] + iVar8;
                  }
                  piVar10 = piVar10 + 1;
                  local_42c = local_42c + -1;
                  iVar8 = local_418;
                } while (local_42c != 0);
              }
              local_430 = (int *)((int)local_430 + 1);
              iVar8 = iVar8 + 1;
              iVar9 = iVar9 + iVar4;
              iVar7 = iVar7 + 4;
              local_418 = iVar8;
            } while ((int)local_430 < iVar3);
          }
        } while (iVar8 < iVar6);
      }
LAB_0043a714:
      local_434 = local_434 + 1;
    } while (local_434 < piVar1[param_5 + 0x245]);
  }
  return 0;
}


