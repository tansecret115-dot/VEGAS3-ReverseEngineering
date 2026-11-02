/* Module: sftrans1.dll
   Function: FUN_0047a110
   Address: 0047a110
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0047a110(undefined4 *param_1,int param_2,RECT *param_3,int *param_4,int *param_5,
                 undefined4 *param_6)

{
  int iVar1;
  undefined4 uVar2;
  BOOL BVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int local_2c;
  RECT local_20;
  tagRECT local_10;
  
  local_20.left = param_4[2] + *param_5;
  local_20.right = param_4[4] + *param_5;
  local_20.top = param_4[3] + param_5[1];
  uVar9 = param_4[4] - param_4[2];
  iVar1 = param_4[6];
  local_20.bottom = param_4[5] + param_5[1];
  puVar8 = (undefined4 *)*param_4;
  BVar3 = IntersectRect(&local_10,param_3,&local_20);
  if (BVar3 != 0) {
    uVar2 = *param_6;
    local_20.left = param_3->left - local_20.left;
    local_20.top = param_3->top - local_20.top;
    if (local_20.top < 0) {
      param_1 = param_1 + -(local_20.top * param_2);
    }
    else if (0 < local_20.top) {
      do {
        uVar4 = uVar9;
        puVar10 = puVar8;
        if (0 < (int)uVar9) {
          for (; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar10 = uVar2;
            puVar10 = puVar10 + 1;
          }
        }
        puVar8 = puVar8 + iVar1 + uVar9;
        local_20.top = local_20.top + -1;
      } while (local_20.top != 0);
    }
    uVar4 = param_3->right;
    if ((int)uVar9 < param_3->right) {
      uVar4 = uVar9;
    }
    if (local_20.left < 0) {
      param_1 = param_1 + -local_20.left;
    }
    else {
      uVar4 = uVar4 - local_20.left;
    }
    local_2c = param_3->top;
    if (local_2c < param_3->bottom) {
      do {
        iVar7 = 0;
        iVar6 = local_20.left;
        puVar10 = puVar8;
        if (0 < local_20.left) {
          for (; iVar7 = local_20.left, iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar10 = uVar2;
            puVar10 = puVar10 + 1;
          }
        }
        puVar10 = param_1;
        puVar11 = puVar8 + local_20.left;
        for (uVar5 = uVar4 & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar11 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar11 = puVar11 + 1;
        }
        for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
          *(undefined1 *)puVar11 = *(undefined1 *)puVar10;
          puVar10 = (undefined4 *)((int)puVar10 + 1);
          puVar11 = (undefined4 *)((int)puVar11 + 1);
        }
        puVar8 = puVar8 + local_20.left + uVar4;
        if ((int)(iVar7 + uVar4) < (int)uVar9) {
          iVar6 = uVar9 - (iVar7 + uVar4);
          puVar10 = puVar8;
          for (iVar7 = iVar6; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar10 = uVar2;
            puVar10 = puVar10 + 1;
          }
          puVar8 = puVar8 + iVar6;
        }
        param_1 = param_1 + param_2;
        puVar8 = puVar8 + param_4[6];
        local_2c = local_2c + 1;
      } while (local_2c < param_3->bottom);
    }
    for (iVar7 = param_3->bottom; iVar7 < local_20.bottom; iVar7 = iVar7 + 1) {
      uVar4 = uVar9;
      puVar10 = puVar8;
      if (0 < (int)uVar9) {
        for (; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar10 = uVar2;
          puVar10 = puVar10 + 1;
        }
      }
      puVar8 = puVar8 + iVar1 + uVar9;
    }
    return;
  }
  FUN_0047a330(param_4,param_6);
  return;
}


