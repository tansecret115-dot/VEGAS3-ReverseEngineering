/* Module: vegas30.exe
   Function: FUN_0046ee50
   Address: 0046ee50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0046ee50(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  undefined4 *puVar13;
  int local_38 [4];
  int local_28;
  int local_24;
  int *local_20;
  int *local_14;
  int local_c;
  int local_8;
  
  uVar1 = *(undefined4 *)(param_1 + 0xbc8);
  piVar7 = (int *)FUN_005b87b0(uVar1);
  iVar2 = *piVar7;
  FUN_005b83b0(uVar1,1);
  local_8 = 0;
  iVar8 = FUN_005d97c0(uVar1);
  FUN_0060ac30();
  local_28 = 0;
  if (0 < iVar2) {
    do {
      iVar3 = *(int *)(piVar7[2] + local_28 * 4);
      iVar4 = **(int **)(iVar3 + 0x24);
      local_24 = 0;
      if (0 < iVar4) {
        do {
          iVar5 = *(int *)(*(int *)(*(int *)(iVar3 + 0x24) + 8) + local_24 * 4);
          if (*(int *)(*(int *)(iVar5 + 0x218) + 0xa0) != 0) {
            local_c = 0;
            iVar9 = FUN_005d9be0(uVar1,&local_c,iVar5);
            if (iVar9 != 0) {
              puVar13 = (undefined4 *)(&stack0xffffffc4 + local_8 * 0x10);
              do {
                iVar10 = 0;
                piVar12 = (int *)&stack0xffffffbc;
                if (0 < local_8) {
                  do {
                    if ((iVar9 == *piVar12) &&
                       (*(int *)(*(int *)(iVar5 + 0x218) + 0xa0) == piVar12[1])) {
                      if (&stack0xffffffbc + iVar10 * 0x10 != (undefined1 *)0x0) goto LAB_0046ef70;
                      break;
                    }
                    iVar10 = iVar10 + 1;
                    piVar12 = piVar12 + 4;
                  } while (iVar10 < local_8);
                }
                puVar13[-2] = iVar9;
                puVar13[-1] = *(undefined4 *)(*(int *)(iVar5 + 0x218) + 0xa0);
                *puVar13 = 0;
                puVar13[1] = iVar5;
                puVar13 = puVar13 + 4;
                local_8 = local_8 + 1;
LAB_0046ef70:
                iVar9 = FUN_005d9be0(uVar1,&local_c,iVar5);
              } while (iVar9 != 0);
            }
            uVar6 = *(uint *)(iVar5 + 0x38);
            FUN_0060ac30();
            puVar13 = (undefined4 *)&stack0xffffffbc;
            for (uVar11 = uVar6 & 0x3fffffff; uVar11 != 0; uVar11 = uVar11 - 1) {
              *puVar13 = 0;
              puVar13 = puVar13 + 1;
            }
            for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
              *(undefined1 *)puVar13 = 0;
              puVar13 = (undefined4 *)((int)puVar13 + 1);
            }
            iVar9 = 0;
            local_c = 0;
            local_14 = (int *)&stack0xffffffbc;
            if (0 < iVar8) {
              do {
                iVar10 = FUN_005d9be0(uVar1,&local_c,iVar5);
                if (iVar10 == 0) break;
                if (iVar9 < (int)uVar6) {
                  *local_14 = iVar10;
                }
                iVar9 = iVar9 + 1;
                local_14 = local_14 + 1;
              } while (local_c < iVar8);
            }
            local_14 = (int *)0x0;
            local_20 = (int *)&stack0xffffffbc;
            if (0 < (int)uVar6) {
              do {
                iVar9 = *local_20;
                if (iVar9 == 0) break;
                iVar10 = 0;
                piVar12 = (int *)&stack0xffffffbc;
                if (0 < local_8) {
                  do {
                    if ((iVar9 == *piVar12) &&
                       (*(int *)(*(int *)(iVar5 + 0x218) + 0xa0) == piVar12[1])) {
                      FUN_005d9c70(uVar1,iVar9,iVar5,1);
                      if (local_38[iVar10 * 4] != iVar5) {
                        piVar12 = (int *)(&stack0xffffffc4 + iVar10 * 0x10);
                        if ((*(int *)(&stack0xffffffc4 + iVar10 * 0x10) == 0) &&
                           (iVar9 = FUN_005d9840(uVar1,DAT_0064a580,piVar12,0), -1 < iVar9)) {
                          FUN_005d9da0(uVar1,*piVar12,local_38[iVar10 * 4]);
                          local_38[iVar10 * 4] = 0;
                        }
                        if (*piVar12 != 0) {
                          FUN_005d9da0(uVar1,*piVar12,iVar5);
                        }
                      }
                      break;
                    }
                    iVar10 = iVar10 + 1;
                    piVar12 = piVar12 + 4;
                  } while (iVar10 < local_8);
                }
                local_14 = (int *)((int)local_14 + 1);
                local_20 = local_20 + 1;
              } while ((int)local_14 < (int)uVar6);
            }
            *(undefined4 *)(*(int *)(iVar5 + 0x218) + 0xa0) = 0;
          }
          local_24 = local_24 + 1;
        } while (local_24 < iVar4);
      }
      local_28 = local_28 + 1;
    } while (local_28 < iVar2);
  }
  FUN_005b84d0(uVar1,1);
  return;
}


