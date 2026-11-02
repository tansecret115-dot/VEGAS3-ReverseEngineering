/* Module: vegas30.exe
   Function: FUN_00522d40
   Address: 00522d40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */

int FUN_00522d40(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint *_Memory;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBP;
  int *piVar7;
  int unaff_ESI;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined4 unaff_retaddr;
  int iVar11;
  int local_b4 [4];
  int iStack_a4;
  int local_a0 [4];
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 local_84 [23];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  int *piStack_c;
  int iStack_4;
  
  iVar2 = 0;
  puVar8 = local_84;
  for (iVar3 = 0x21; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  local_a0[2] = 0;
  local_90 = 0;
  local_b4[2] = 0;
  local_a0[1] = 0;
  local_a0[0] = 0;
  local_84[0] = 0x84;
  uVar4 = 0;
  do {
    if (iVar2 == 0) {
      uVar6 = 0x7c;
    }
    else if ((iVar2 < 1) || (2 < iVar2)) {
      uVar6 = 0;
    }
    else {
      uVar6 = 0x84;
    }
    if (uVar4 <= uVar6) {
      if (iVar2 == 0) {
        uVar4 = 0x7c;
      }
      else if ((iVar2 < 1) || (2 < iVar2)) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0x84;
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  if (uVar4 < 0x7c) {
    uVar4 = 0x7c;
  }
  _Memory = calloc(1,uVar4 + 8);
  if (_Memory == (uint *)0x0) {
    return 0;
  }
  iVar2 = (**(code **)(*param_1 + 0xc))(param_1,local_a0 + 3,4,local_b4);
  if (iVar2 < 0) goto LAB_005232d7;
  if (unaff_EBP == 4) {
    local_a0[3] = iStack_a4;
    iStack_a4 = iStack_a4 + -4;
    iVar2 = (**(code **)(*param_1 + 0xc))(param_1,&local_90,iStack_a4,&stack0xffffff3c);
    iVar3 = iStack_4;
    if (iVar2 < 0) goto LAB_005232d7;
    if (iStack_a4 == unaff_EBP) {
      FUN_00522050(iStack_4,0);
      *(undefined4 *)(iVar3 + 0x1c) = uStack_8c;
      *(undefined4 *)(iVar3 + 4) = local_90;
      *(undefined4 *)(iVar3 + 0x20) = uStack_88;
      puVar8 = local_84;
      puVar9 = (undefined4 *)(iVar3 + 0x24);
      for (iVar2 = 0x17; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      *(undefined4 *)(iStack_4 + 0x80) = uStack_28;
      *(undefined4 *)(iStack_4 + 0x84) = uStack_24;
      *(undefined4 *)(iStack_4 + 0x88) = uStack_20;
      *(undefined4 *)(iStack_4 + 0x8c) = uStack_1c;
      *(undefined4 *)(iStack_4 + 0x90) = unaff_retaddr;
      *(undefined4 *)(iStack_4 + 0x9c) = uStack_18;
      *(int *)(iStack_4 + 0xa0) = iStack_14;
      if (iStack_14 == 0) {
        *(undefined4 *)(iStack_4 + 0xa0) = 1;
      }
      iVar2 = (**(code **)(*param_1 + 0xc))(param_1,&stack0xffffff44,4,&stack0xffffff3c);
      if (iVar2 < 0) goto LAB_005232d7;
      if (unaff_EBP == 4) {
        iVar11 = 0;
        iVar3 = 4;
        if (0 < unaff_ESI) {
          do {
            iVar2 = (**(code **)(*param_1 + 0xc))(param_1,local_a0 + 1,8,&stack0xffffff3c);
            if (iVar2 < 0) goto LAB_005232d7;
            if (iVar3 != 8) goto LAB_005232d2;
            puVar8 = (undefined4 *)(iStack_4 + 0x94);
            if (((*(int *)(iStack_4 + 0x94) == 0) &&
                (iVar2 = _SfList_CreateExZ_32(puVar8,8,0xffffffff,0xffffffff,0x40000004,0,0,0),
                iVar2 < 0)) ||
               (iVar2 = _SfList_InsertList_16(*puVar8,0xffffffff,local_a0 + 1,1), iVar2 < 0))
            goto LAB_005232d7;
            iVar11 = iVar11 + 1;
          } while (iVar11 < unaff_ESI);
        }
        iVar2 = (**(code **)(*param_1 + 0xc))(param_1,&stack0xffffff44,4,&stack0xffffff3c);
        if (iVar2 < 0) goto LAB_005232d7;
        if (iVar3 == 4) {
          iVar11 = 0;
          iVar3 = 4;
          if (0 < unaff_ESI) {
            do {
              iVar2 = (**(code **)(*param_1 + 0xc))(param_1,local_a0 + 1,8,&stack0xffffff3c);
              if (iVar2 < 0) goto LAB_005232d7;
              if (iVar3 != 8) goto LAB_005232d2;
              puVar8 = (undefined4 *)(iStack_4 + 0x98);
              if (((*(int *)(iStack_4 + 0x98) == 0) &&
                  (iVar2 = _SfList_CreateExZ_32(puVar8,8,0xffffffff,0xffffffff,0x40000004,0,0,0),
                  iVar2 < 0)) ||
                 (iVar2 = _SfList_InsertList_16(*puVar8,0xffffffff,local_a0 + 1,1), iVar2 < 0))
              goto LAB_005232d7;
              iVar11 = iVar11 + 1;
            } while (iVar11 < unaff_ESI);
          }
          iVar2 = (**(code **)(*param_1 + 0xc))(param_1,local_b4 + 3,4,&stack0xffffff3c);
          if (iVar2 < 0) goto LAB_005232d7;
          if (iVar3 == 4) {
            if ((((local_b4[3] == 0) || (*(int *)(iStack_4 + 0xa4) != 0)) ||
                (iVar2 = _SfList_CreateExZ_32
                                   (iStack_4 + 0xa4,4,0xffffffff,0xffffffff,0x40000004,0,0,0),
                -1 < iVar2)) && (local_b4[0] = 0, 0 < local_b4[3])) {
              while( true ) {
                iVar11 = local_b4[0];
                if (local_b4[0] == 0) {
                  uVar4 = 0x7c;
                }
                else if ((local_b4[0] < 1) || (2 < local_b4[0])) {
                  uVar4 = 0;
                }
                else {
                  uVar4 = 0x84;
                }
                iVar2 = (**(code **)(*param_1 + 0xc))(param_1,local_a0,4,&stack0xffffff3c);
                if (iVar2 < 0) break;
                if (iVar3 != 4) goto LAB_005232d2;
                piVar7 = *(int **)(iStack_4 + 0xa4);
                if (piVar7 == (int *)0x0) {
                  iVar5 = 0;
                }
                else {
                  iVar5 = *piVar7;
                }
                if (((iVar11 < 0) || (iVar5 + -1 < iVar11)) ||
                   (piVar7 = (int *)(piVar7[1] * local_b4[0] + piVar7[2]), piVar7 == (int *)0x0)) {
                  local_b4[1] = 0;
                  iVar2 = _SfList_CreateExZ_32
                                    (local_b4 + 1,uVar4 + 8,0xffffffff,0xffffffff,0x40000004,0,0,0);
                  if ((iVar2 < 0) ||
                     (iVar2 = _SfList_InsertList_16
                                        (*(undefined4 *)(iStack_4 + 0xa4),0xffffffff,local_b4 + 1,1)
                     , iVar2 < 0)) break;
                  piVar7 = local_b4 + 1;
                }
                iVar11 = 0;
                if (0 < local_a0[0]) {
                  do {
                    piVar1 = piStack_c;
                    if (local_b4[0] == 0) {
                      puVar10 = _Memory;
                      for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 + -1) {
                        *puVar10 = 0;
                        puVar10 = puVar10 + 1;
                      }
                    }
                    iVar2 = (**(code **)(*piStack_c + 0xc))
                                      (piStack_c,local_b4 + 2,4,&stack0xffffff3c);
                    if (iVar2 < 0) goto LAB_005232d7;
                    if (iVar3 != 4) goto LAB_005232d2;
                    *_Memory = local_b4[2];
                    local_b4[2] = local_b4[2] - 4;
                    uVar6 = local_b4[2];
                    if (uVar4 - 4 <= (uint)local_b4[2]) {
                      uVar6 = uVar4 - 4;
                    }
                    iVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,_Memory + 1,uVar6,&stack0xffffff3c);
                    if (iVar2 < 0) goto LAB_005232d7;
                    *_Memory = uVar4;
                    _Memory[5] = _Memory[5] & 0xfffffff9;
                    iVar2 = _SfList_InsertList_16(*piVar7,0xffffffff,_Memory,1);
                    if (iVar2 < 0) goto LAB_005232d7;
                    iVar11 = iVar11 + 1;
                  } while (iVar11 < local_a0[0]);
                }
                local_b4[0] = local_b4[0] + 1;
                param_1 = piStack_c;
                if (local_b4[3] <= local_b4[0]) {
                  free(_Memory);
                  return iVar2;
                }
              }
            }
            goto LAB_005232d7;
          }
        }
      }
    }
  }
LAB_005232d2:
  iVar2 = -0x7ffb1ff8;
LAB_005232d7:
  free(_Memory);
  return iVar2;
}


