/* Module: vegas30.exe
   Function: FUN_0047e330
   Address: 0047e330
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0047e330(int param_1,uint param_2,uint param_3,uint param_4,int param_5,int param_6)

{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  float10 fVar11;
  int local_20;
  int local_1c;
  int local_14;
  
  if ((param_5 < 1) && (param_5 < 0)) {
    param_4 = *(uint *)(param_1 + 0x10);
    param_5 = *(int *)(param_1 + 0x14);
    if ((param_5 < 1) && (param_5 < 0)) {
      param_4 = 0;
      param_5 = 0;
    }
  }
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    iVar1 = **(int **)(param_1 + 0x18);
    local_14 = 0;
    if (0 < iVar1) {
      do {
        piVar2 = *(int **)(param_1 + 0x18);
        if (piVar2 == (int *)0x0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *piVar2;
        }
        if ((local_14 < 0) || (iVar7 + -1 < local_14)) {
          local_20 = 0;
        }
        else {
          local_20 = *(int *)(piVar2[2] + local_14 * 4);
        }
        if ((local_20 != 0) && ((param_6 < 0 || (param_6 == *(int *)(local_20 + 0x10))))) {
          iVar7 = **(int **)(local_20 + 0x30);
          if (0 < iVar7) {
            puVar3 = (uint *)(*(int **)(local_20 + 0x30))[2];
            uVar5 = param_2 + param_4;
            uVar9 = param_3 + param_5 + (uint)CARRY4(param_2,param_4);
            if (((int)puVar3[1] <= (int)uVar9) &&
               (((int)puVar3[1] < (int)uVar9 || (*puVar3 <= uVar5)))) {
              if (((int)param_3 <= (int)puVar3[iVar7 * 4 + -3]) &&
                 (((int)param_3 < (int)puVar3[iVar7 * 4 + -3] || (param_2 <= puVar3[iVar7 * 4 + -4])
                  ))) {
                local_1c = 1;
                puVar4 = puVar3;
                if (1 < iVar7) {
                  while( true ) {
                    if ((int)param_3 < (int)puVar4[5]) break;
                    if ((((int)param_3 <= (int)puVar4[5]) && (param_2 <= puVar4[4])) ||
                       (local_1c = local_1c + 1, puVar4 = puVar4 + 4, iVar7 <= local_1c)) break;
                  }
                }
                iVar10 = 0;
                if (local_1c < iVar7) {
                  puVar4 = puVar3 + local_1c * 4;
                  iVar6 = local_1c;
                  puVar8 = puVar4;
                  do {
                    if (((int)uVar9 < (int)puVar8[1]) ||
                       (((int)uVar9 <= (int)puVar8[1] && (uVar5 < *puVar8)))) break;
                    iVar10 = iVar10 + 1;
                    iVar6 = iVar6 + 1;
                    puVar8 = puVar8 + 4;
                  } while (iVar6 < iVar7);
                  if (-1 < iVar10) {
                    if (DAT_00647790 == 0) {
                      if ((-1 < (int)param_3) && ((0 < (int)param_3 || (param_2 != 0)))) {
                        if (((int)param_3 <= (int)puVar4[1]) &&
                           (((int)param_3 < (int)puVar4[1] || (param_2 < *puVar4)))) {
                          fVar11 = (float10)FUN_0047e950(local_20,param_2,param_3,0xffffffff,
                                                         0xffffffff);
                          puVar4[2] = (uint)(float)fVar11;
                          *puVar4 = param_2;
                          puVar4[1] = param_3;
                        }
                        local_1c = local_1c + 1;
                        iVar10 = iVar10 + -1;
                      }
                      if (iVar10 < 1) goto LAB_0047e576;
                      iVar6 = local_1c + iVar10;
                      if (iVar6 + -1 < iVar7) {
                        if (((int)puVar3[iVar6 * 4 + -3] <= (int)uVar9) &&
                           (((int)puVar3[iVar6 * 4 + -3] < (int)uVar9 ||
                            (puVar3[iVar6 * 4 + -4] < uVar5)))) {
                          fVar11 = (float10)FUN_0047e950(local_20,uVar5,uVar9,0xffffffff,0xffffffff)
                          ;
                          puVar3[iVar6 * 4 + -2] = (uint)(float)fVar11;
                          iVar10 = iVar10 + -1;
                          puVar3[iVar6 * 4 + -4] = uVar5;
                          puVar3[iVar6 * 4 + -3] = uVar9;
                        }
                      }
                    }
                    if (0 < iVar10) {
                      _SfList_DeleteList_16(*(undefined4 *)(local_20 + 0x30),local_1c,iVar10,1);
                    }
                  }
                }
              }
            }
          }
        }
LAB_0047e576:
        local_14 = local_14 + 1;
      } while (local_14 < iVar1);
    }
  }
  return 0;
}


