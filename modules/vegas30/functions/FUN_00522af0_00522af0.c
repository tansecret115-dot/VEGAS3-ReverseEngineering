/* Module: vegas30.exe
   Function: FUN_00522af0
   Address: 00522af0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00522af0(int param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int **ppiVar11;
  int iStack_cc;
  int iStack_c8;
  int *piStack_c4;
  undefined1 *puStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  int *piStack_b4;
  undefined4 *puStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 local_84 [4];
  undefined4 local_74 [23];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  puVar7 = local_84;
  for (iVar8 = 0x21; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  local_84[2] = *(undefined4 *)(param_1 + 0x1c);
  local_84[1] = *(undefined4 *)(param_1 + 4);
  local_84[0] = 0x84;
  uVar2 = *(undefined4 *)(param_1 + 0x80);
  uVar3 = *(undefined4 *)(param_1 + 0x88);
  puVar7 = (undefined4 *)(param_1 + 0x24);
  puVar9 = local_74;
  for (iVar8 = 0x17; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  local_14 = *(undefined4 *)(param_1 + 0x84);
  local_8 = *(undefined4 *)(param_1 + 0x9c);
  local_c = *(undefined4 *)(param_1 + 0x8c);
  uStack_a8 = 0;
  puStack_b0 = local_84;
  local_4 = *(undefined4 *)(param_1 + 0xa0);
  uStack_ac = 0x84;
  piStack_b4 = param_2;
  uStack_b8 = 0x522ba8;
  local_84[3] = uVar1;
  local_18 = uVar2;
  local_10 = uVar3;
  iVar8 = (**(code **)(*param_2 + 0x10))();
  if (-1 < iVar8) {
    uStack_b8 = 0;
    puStack_c0 = &stack0xffffff5c;
    uStack_bc = 4;
    piStack_c4 = param_2;
    iStack_c8 = 0x522bd4;
    iVar8 = (**(code **)(*param_2 + 0x10))();
    if (-1 < iVar8) {
      iVar8 = 0;
      if (0 < (int)piStack_b4) {
        do {
          iStack_c8 = 0;
          iStack_cc = 8;
          iVar5 = (**(code **)(*param_2 + 0x10))
                            (param_2,*(int *)(*(int *)(param_1 + 0x94) + 4) * iVar8 +
                                     *(int *)(*(int *)(param_1 + 0x94) + 8));
          if (iVar5 < 0) {
            return;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < (int)piStack_b4);
      }
      if (*(undefined4 **)(param_1 + 0x98) == (undefined4 *)0x0) {
        piStack_b4 = (int *)0x0;
      }
      else {
        piStack_b4 = (int *)**(undefined4 **)(param_1 + 0x98);
      }
      iStack_c8 = 0;
      ppiVar11 = &piStack_b4;
      iStack_cc = 4;
      iVar8 = (**(code **)(*param_2 + 0x10))(param_2);
      if (-1 < iVar8) {
        iVar8 = 0;
        if (0 < (int)piStack_c4) {
          do {
            iVar5 = (**(code **)(*param_2 + 0x10))
                              (param_2,*(int *)(*(int *)(param_1 + 0x98) + 4) * iVar8 +
                                       *(int *)(*(int *)(param_1 + 0x98) + 8),8,0);
            if (iVar5 < 0) {
              return;
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < (int)piStack_c4);
        }
        if (*(undefined4 **)(param_1 + 0xa4) == (undefined4 *)0x0) {
          puStack_c0 = (undefined1 *)0x0;
        }
        else {
          puStack_c0 = (undefined1 *)**(undefined4 **)(param_1 + 0xa4);
        }
        iVar8 = (**(code **)(*param_2 + 0x10))(param_2,&puStack_c0,4,0);
        if ((-1 < iVar8) && (iStack_c8 = 0, 0 < (int)ppiVar11)) {
          do {
            iVar5 = 0;
            iVar8 = *(int *)(*(int *)(param_1 + 0xa4) + 8);
            iVar10 = *(int *)(*(int *)(param_1 + 0xa4) + 4) * iStack_c8;
            piVar4 = *(int **)(iVar10 + iVar8);
            if (piVar4 == (int *)0x0) {
              iStack_cc = 0;
            }
            else {
              iStack_cc = *piVar4;
            }
            iVar6 = (**(code **)(*param_2 + 0x10))(param_2,&iStack_cc,4,0);
            if (iVar6 < 0) {
              return;
            }
            if (0 < iStack_cc) {
              do {
                iVar6 = *(int *)(iVar10 + iVar8);
                puVar7 = (undefined4 *)(*(int *)(iVar6 + 4) * iVar5 + *(int *)(iVar6 + 8));
                iVar6 = (**(code **)(*param_2 + 0x10))(param_2,puVar7,*puVar7,0);
                if (iVar6 < 0) {
                  return;
                }
                iVar5 = iVar5 + 1;
              } while (iVar5 < iStack_cc);
            }
            iStack_c8 = iStack_c8 + 1;
          } while (iStack_c8 < (int)ppiVar11);
        }
      }
    }
  }
  return;
}


