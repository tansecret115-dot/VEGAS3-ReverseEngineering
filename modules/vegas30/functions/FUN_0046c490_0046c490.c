/* Module: vegas30.exe
   Function: FUN_0046c490
   Address: 0046c490
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046c490(int param_1,uint param_2,int param_3,uint param_4,int param_5,int param_6,
                 int param_7,int param_8)

{
  undefined4 uVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int local_20;
  int local_18;
  int local_10;
  int local_4;
  
  piVar3 = *(int **)(param_1 + 0xcd0);
  uVar1 = *(undefined4 *)(param_1 + 0xbc8);
  local_20 = *piVar3;
  if (local_20 == 0) {
    FUN_005b83b0(uVar1,1);
    FUN_00543290();
    local_20 = 0;
    FUN_004e9f70(uVar1,param_8,0);
    FUN_004ea880(uVar1);
    if (*(int *)(param_1 + 0xbc8) == 0) {
      local_10 = 0;
    }
    else {
      local_10 = FUN_005b87b0(*(int *)(param_1 + 0xbc8));
    }
    if ((*(int *)(param_1 + 0xbc8) == 0) ||
       (iVar6 = FUN_005b87b0(*(int *)(param_1 + 0xbc8)), iVar6 == 0)) {
      iVar6 = 0;
    }
    else {
      iVar6 = _DAT_00000000;
      if (*(int *)(param_1 + 0xbc8) != 0) {
        piVar3 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
        iVar6 = *piVar3;
      }
    }
    local_18 = 0;
    if (0 < iVar6) {
      do {
        iVar5 = *(int *)(*(int *)(local_10 + 8) + local_18 * 4);
        bVar2 = false;
        local_4 = 0;
        param_8 = FUN_005cade0(uVar1,iVar5,0,param_2,param_3,param_4,param_5,0);
        if (-1 < param_8) {
          do {
            iVar9 = *(int *)(*(int *)(*(int *)(iVar5 + 0x24) + 8) + param_8 * 4);
            if (((*(uint *)(iVar9 + 0x10) & 8) == 0) && ((*(uint *)(iVar9 + 0x10) & 0x100000) == 0))
            {
              if (!bVar2) {
                FUN_004ea250(uVar1,iVar5,1,0);
                bVar2 = true;
              }
              iVar4 = *(int *)(iVar9 + 0x1c);
              uVar11 = *(uint *)(iVar9 + 0x20) + *(uint *)(iVar9 + 0x18);
              iVar7 = *(int *)(iVar9 + 0x24) + iVar4 +
                      (uint)CARRY4(*(uint *)(iVar9 + 0x20),*(uint *)(iVar9 + 0x18));
              uVar8 = param_2 + param_4;
              iVar10 = param_3 + param_5 + (uint)CARRY4(param_2,param_4);
              if (iVar10 < iVar7) {
LAB_0046c857:
                if ((*(int *)(iVar9 + 0x1c) <= param_3) &&
                   ((*(int *)(iVar9 + 0x1c) < param_3 || (*(uint *)(iVar9 + 0x18) < param_2)))) {
                  FUN_005ca440(uVar1,iVar9,uVar8,iVar10,0,0,0,0,0,1);
                }
LAB_0046c884:
                FUN_005ca250(uVar1,iVar9,param_2,param_3);
                FUN_005c9ef0(uVar1,iVar9,uVar8,iVar10);
                local_4 = 1;
              }
              else {
                if ((((iVar10 <= iVar7) && (uVar8 < uVar11)) || (iVar4 < param_3)) ||
                   ((iVar4 <= param_3 && (*(uint *)(iVar9 + 0x18) < param_2)))) {
                  if ((iVar10 <= iVar7) && ((iVar10 < iVar7 || (uVar8 < uVar11))))
                  goto LAB_0046c857;
                  goto LAB_0046c884;
                }
                FUN_005c8d80(uVar1,iVar9,0);
                param_8 = param_8 + -1;
              }
              local_20 = local_20 + 1;
            }
            param_8 = FUN_005cade0(uVar1,iVar5,param_8 + 1,param_2,param_3,param_4,param_5,0);
          } while (-1 < param_8);
          if (local_4 != 0) {
            FUN_005c8a20(iVar5);
          }
        }
        if ((param_6 != 0) && (iVar9 = FUN_005c8bb0(iVar5,param_2,param_3), -1 < iVar9)) {
          if (!bVar2) {
            FUN_004ea250(uVar1,iVar5,1,0);
          }
          FUN_005c9930(uVar1,iVar5,iVar9,-param_4,-(param_5 + (uint)(param_4 != 0)));
          local_20 = local_20 + 1;
        }
        if (DAT_0064778c != 0) {
          FUN_004ea250(uVar1,iVar5,0xf,0);
          FUN_0046bfc0(uVar1,iVar5 + 0x638,param_2,param_3,param_4,param_5,0xffffffff,param_6);
          FUN_0046c030(uVar1,iVar5,param_2,param_3,param_4,param_5,param_6,0);
        }
        local_18 = local_18 + 1;
      } while (local_18 < iVar6);
    }
    FUN_0046c030(uVar1,0,param_2,param_3,param_4,param_5,param_6,1);
    if (param_7 != 0) {
      FUN_004bbe90(param_1,param_2,param_3,param_4,param_5,0,1);
      local_20 = local_20 + 1;
    }
    FUN_005432d0();
    FUN_005b84d0(uVar1,1);
    if (local_20 < 1) goto LAB_0046ca09;
  }
  else {
    if (DAT_00649e0c == 0) {
      piVar3 = (int *)FUN_00469040(param_1,piVar3);
      if (piVar3 == (int *)0x0) {
        return;
      }
      local_20 = *piVar3;
    }
    FUN_004e9f70(uVar1,param_8,0);
    FUN_0046ba30(param_1,piVar3);
    FUN_0046bad0(param_1);
    FUN_005b83b0(uVar1,1);
    FUN_00543290();
    FUN_004ea880(uVar1);
    param_8 = 0;
    if (0 < local_20) {
      do {
        iVar6 = *(int *)(piVar3[2] + param_8 * 4);
        if (((*(uint *)(iVar6 + 0x10) & 8) == 0) && ((*(uint *)(iVar6 + 0x10) & 0x100000) == 0)) {
          iVar5 = *(int *)(iVar6 + 0x1c);
          uVar11 = *(uint *)(iVar6 + 0x20) + *(uint *)(iVar6 + 0x18);
          iVar9 = *(int *)(iVar6 + 0x24) + iVar5 +
                  (uint)CARRY4(*(uint *)(iVar6 + 0x20),*(uint *)(iVar6 + 0x18));
          if ((param_3 <= iVar9) && ((param_3 < iVar9 || (param_2 < uVar11)))) {
            uVar8 = param_2 + param_4;
            iVar4 = param_3 + param_5 + (uint)CARRY4(param_2,param_4);
            if ((iVar5 <= iVar4) && ((iVar5 < iVar4 || (*(uint *)(iVar6 + 0x18) < uVar8)))) {
              if (((iVar4 < iVar9) ||
                  (((iVar4 <= iVar9 && (uVar8 < uVar11)) || (*(int *)(iVar6 + 0x1c) < param_3)))) ||
                 ((*(int *)(iVar6 + 0x1c) <= param_3 && (*(uint *)(iVar6 + 0x18) < param_2)))) {
                if ((iVar9 < iVar4) ||
                   (((iVar9 <= iVar4 && (uVar11 <= uVar8)) ||
                    ((param_3 < *(int *)(iVar6 + 0x1c) ||
                     ((param_3 <= *(int *)(iVar6 + 0x1c) && (param_2 <= *(uint *)(iVar6 + 0x18))))))
                    ))) {
                  FUN_005c9ef0(uVar1,iVar6,uVar8,iVar4);
                }
                else {
                  iVar5 = FUN_005ca440(uVar1,iVar6,uVar8,iVar4,0,0,0,&local_4,0,1);
                  if ((-1 < iVar5) && (local_4 != 0)) {
                    *(uint *)(local_4 + 0x10) = *(uint *)(local_4 + 0x10) | 0x10;
                  }
                }
                FUN_005ca250(uVar1,iVar6,param_2,param_3);
              }
              else {
                FUN_005c8d80(uVar1,iVar6,0);
                _SfList_DeleteList_16(piVar3,param_8,1,0);
                param_8 = param_8 + -1;
                local_20 = local_20 + -1;
              }
            }
          }
        }
        param_8 = param_8 + 1;
      } while (param_8 < local_20);
    }
    if (DAT_0064778c != 0) {
      FUN_0046c0f0(param_1,param_2,param_3,param_4,param_5,1,param_6);
    }
    FUN_0046c3f0(param_1);
    FUN_005432d0();
    FUN_005b84d0(uVar1,1);
    if (param_6 != 0) {
      FUN_0046c310(param_1,param_2,param_3,-param_4,-(param_5 + (uint)(param_4 != 0)));
    }
    if (piVar3 != *(int **)(param_1 + 0xcd0)) {
      _SfList_Destroy_4(piVar3);
    }
    FUN_00469280(param_1);
  }
  FUN_0046ee50(param_1);
  FUN_004eb2b0(uVar1);
LAB_0046ca09:
  FUN_004ea040(uVar1,0);
  FUN_00456c20(param_1);
  FUN_004530a0(param_1,0);
  DAT_0064767c = DAT_0064767c | 4;
  return;
}


