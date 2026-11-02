/* Module: vegas30.exe
   Function: FUN_0058e380
   Address: 0058e380
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0058e380(int *param_1,int param_2,int param_3,int param_4,undefined4 param_5,int *param_6,
                undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10,
                undefined4 param_11,int *param_12)

{
  int *piVar1;
  int *piVar2;
  ushort uVar3;
  undefined4 uVar4;
  bool bVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  int local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  int *local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  piVar6 = param_12;
  local_24 = param_5;
  *param_12 = 0;
  local_1c = *(undefined4 *)(param_2 + 0x14);
  local_18 = param_6;
  local_28 = param_4;
  local_10 = param_8;
  local_c = param_9;
  local_14 = param_7;
  piVar1 = param_1 + 0xf;
  local_20 = param_2;
  local_8 = param_10;
  iVar7 = _SfQueueFindAndRemove_12(piVar1,&LAB_0058ebb0,&local_28);
  if (iVar7 != 0) goto LAB_0058e778;
  piVar2 = param_1 + 6;
  iVar7 = _SfQueueRemove_8(piVar2,0);
  if (iVar7 == 0) {
    iVar7 = _SfQueueFindAndRemoveRev_12(piVar1,&LAB_0058ec40,0);
    if (iVar7 == 0) {
      iVar7 = FUN_0058f230(param_1);
      if (iVar7 == 0) {
        *piVar6 = (-(uint)(*param_1 != 0) & 0x7ff8fff2) + 0x8007000e;
        return 0;
      }
      goto LAB_0058e455;
    }
  }
  else {
LAB_0058e455:
    InterlockedIncrement((LONG *)(iVar7 + 0x14));
  }
  *(int **)(iVar7 + 0x38) = param_6;
  *(undefined4 *)(iVar7 + 0x3c) = param_7;
  *(undefined4 *)(iVar7 + 0x40) = param_8;
  *(undefined4 *)(iVar7 + 0x44) = param_9;
  *(undefined4 *)(iVar7 + 0x4c) = param_10;
  *(undefined4 *)(iVar7 + 0x50) = param_11;
  *(undefined4 *)(iVar7 + 0x54) = 0;
  if (*(int *)(param_2 + 0x6c) == 0) {
    if (((double)CONCAT44(param_7,param_6) == _DAT_006106d0) &&
       ((double)CONCAT44(param_9,param_8) == _DAT_00610fd8)) {
      param_12 = (int *)0x0;
      iVar8 = FUN_005f6920(&param_12);
      *piVar6 = iVar8;
      if (param_12 == (int *)0x0) {
        puVar11 = (undefined4 *)(iVar7 + 0x14);
        for (iVar8 = 0x37; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar11 = 0;
          puVar11 = puVar11 + 1;
        }
        _SfQueueInsertHead_8(piVar2,iVar7);
        *piVar6 = -0x7ffb1f5d;
        return 0;
      }
      *(int *)(iVar7 + 0x18) = param_2;
      *(undefined4 *)(iVar7 + 0x1c) = *(undefined4 *)(param_2 + 0x14);
      *(int *)(iVar7 + 0x28) = param_4;
      *(undefined4 *)(iVar7 + 0x2c) = param_5;
      *(int *)(iVar7 + 0x30) = *(int *)(iVar7 + 0xc);
      uVar3 = *(ushort *)(*(int *)(param_2 + 0x2c) + 0xc);
      *(undefined4 *)(iVar7 + 0x48) = 0;
      *(undefined4 *)(iVar7 + 0x20) = *(undefined4 *)(iVar7 + 8);
      *(int *)(iVar7 + 0x34) = *(int *)(iVar7 + 0xc) / (int)(uint)uVar3;
      *piVar6 = -0x7fffbfff;
      if ((param_3 == 0) && (0 < param_1[0x21])) {
        iVar8 = (**(code **)(*param_12 + 0x40))(param_12,iVar7 + 200,iVar7 + 0xd0,iVar7 + 0xc0);
        *piVar6 = iVar8;
      }
      if ((*piVar6 < 0) || (*(int *)(iVar7 + 0xc0) == 0)) {
        if ((param_3 < 2) && ((param_1[0x22d] != 0 && (0 < param_1[0x21])))) {
          iVar8 = FUN_0058e790(param_1,iVar7,param_12);
          *piVar6 = iVar8;
          if (iVar8 < 0) {
            (**(code **)(*param_12 + 8))(param_12);
            param_12 = (int *)0x0;
          }
          else {
            iVar8 = *(int *)(iVar7 + 0xbc);
            *(undefined4 *)(iVar7 + 0xc0) = 0;
            *(undefined4 *)(iVar8 + 0x14) = 1;
            _SfQueueInsert_8(param_1 + 0x224,iVar8);
            *piVar6 = 1;
          }
        }
        else {
          iVar8 = (**(code **)(*param_12 + 0x3c))
                            (param_12,*(undefined4 *)(iVar7 + 0x28),*(undefined4 *)(iVar7 + 0x2c),
                             *(undefined4 *)(iVar7 + 0x20),*(undefined4 *)(iVar7 + 0x34),&param_10);
          *piVar6 = iVar8;
          if (((iVar8 == 1) || (iVar8 == -0x7ff5ffda)) && (*piVar6 = 0, param_4 == 0)) {
            uVar9 = (uint)*(ushort *)(*(int *)(*(int *)(iVar7 + 0x18) + 0x2c) + 0xc) *
                    *(int *)(iVar7 + 0x34);
            puVar11 = *(undefined4 **)(iVar7 + 0x20);
            for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
              *puVar11 = 0;
              puVar11 = puVar11 + 1;
            }
            for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
              *(undefined1 *)puVar11 = 0;
              puVar11 = (undefined4 *)((int)puVar11 + 1);
            }
            param_4 = *(int *)(iVar7 + 0x34);
          }
          *(int *)(iVar7 + 0x34) = param_4;
          uVar3 = *(ushort *)(*(int *)(param_2 + 0x2c) + 0xc);
          *(undefined4 *)(iVar7 + 0xbc) = 0;
          *(uint *)(iVar7 + 0x30) = (uint)uVar3 * param_4;
          *(int *)(iVar7 + 0x48) = *piVar6;
          (**(code **)(*param_6 + 8))(param_6);
          param_12 = (int *)0x0;
        }
      }
      else {
        iVar8 = FUN_0058e8a0(iVar7,param_12);
        *piVar6 = iVar8;
        param_12 = (int *)0x0;
      }
      if (*piVar6 < 0) {
        puVar11 = (undefined4 *)(iVar7 + 0x14);
        for (iVar8 = 0x37; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar11 = 0;
          puVar11 = puVar11 + 1;
        }
        _SfQueueInsertHead_8(piVar2,iVar7);
        return 0;
      }
    }
    else {
      *(int *)(iVar7 + 0x18) = param_2;
      uVar4 = *(undefined4 *)(param_2 + 0x14);
      *(int *)(iVar7 + 0x28) = param_4;
      *(undefined4 *)(iVar7 + 0x1c) = uVar4;
      *(int *)(iVar7 + 0x30) = *(int *)(iVar7 + 0xc);
      *(undefined4 *)(iVar7 + 0x2c) = param_5;
      *(undefined4 *)(iVar7 + 0x20) = *(undefined4 *)(iVar7 + 8);
      *(undefined4 *)(iVar7 + 0x48) = 0;
      *(int *)(iVar7 + 0x34) =
           *(int *)(iVar7 + 0xc) / (int)(uint)*(ushort *)(*(int *)(DAT_0065a06c + 0x6c) + 0xc);
      if (*(short *)(*(int *)(param_2 + 0x2c) + 2) == 1) {
        uVar10 = *(uint *)(iVar7 + 0x54) | 4;
      }
      else {
        uVar10 = *(uint *)(iVar7 + 0x54) | 2;
      }
      bVar5 = (double)CONCAT44(param_9,param_8) == _DAT_00610fd8;
      *(uint *)(iVar7 + 0x54) = uVar10;
      if (bVar5) {
        iVar8 = FUN_0058fe60(param_1,iVar7);
      }
      else {
        iVar8 = FUN_00590020(param_1,iVar7);
      }
      *piVar6 = iVar8;
    }
  }
  else {
    *(int *)(iVar7 + 0x18) = param_2;
    uVar4 = *(undefined4 *)(param_2 + 0x14);
    *(int *)(iVar7 + 0x28) = param_4;
    *(undefined4 *)(iVar7 + 0x1c) = uVar4;
    *(undefined4 *)(iVar7 + 0x30) = *(undefined4 *)(iVar7 + 0xc);
    *(undefined4 *)(iVar7 + 0x2c) = param_5;
    *(undefined4 *)(iVar7 + 0x20) = *(undefined4 *)(iVar7 + 8);
    *(undefined4 *)(iVar7 + 0x48) = 0;
  }
LAB_0058e778:
  _SfQueueInsertHead_8(piVar1,iVar7);
  return iVar7;
}


