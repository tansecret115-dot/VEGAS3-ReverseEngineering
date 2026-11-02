/* Module: vegas30.exe
   Function: FUN_004ba120
   Address: 004ba120
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004ba120(int param_1,uint *param_2,uint *param_3,undefined4 param_4,undefined4 param_5,
                 int param_6)

{
  uint uVar1;
  SHORT SVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  int local_c;
  uint local_4;
  
  SetCapture(*(HWND *)(param_1 + 4));
  *(undefined4 *)(param_1 + 0xa8) = param_4;
  *(uint **)(param_1 + 0xc40) = param_3;
  *(undefined4 *)(param_1 + 0xac) = param_5;
  *(uint *)(param_1 + 0x98) = *param_3;
  uVar9 = param_3[1];
  *(uint *)(param_1 + 0x9c) = uVar9;
  *(undefined4 *)(param_1 + 0xb0) = 400;
  *(undefined4 *)(param_1 + 0xb4) = 400;
  uVar7 = *(uint *)(param_1 + 0x98);
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(uint *)(param_1 + 0x1a8) = -uVar7;
  *(undefined4 *)(param_1 + 0xa4) = 1;
  *(uint *)(param_1 + 0x1b0) = *(uint *)(param_1 + 0x600) - uVar7;
  *(undefined4 *)(param_1 + 0x19c) = 0;
  *(uint *)(param_1 + 0x1ac) = -(uVar9 + (uVar7 != 0));
  *(uint *)(param_1 + 0x1b4) =
       (*(int *)(param_1 + 0x604) - uVar9) - (uint)(*(uint *)(param_1 + 0x600) < uVar7);
  uVar9 = param_3[8];
  uVar7 = uVar9 & 0xffe3ffff;
  param_3[8] = uVar7;
  if ((uVar9 & 1) == 0) {
    param_3[8] = uVar7 | 0x40000;
    if ((*(uint *)((int)param_2 + 0x20) >> 0x10 & 0xf) == 0xc) {
      piVar11 = *(int **)((int)param_2 + 0x3c);
      if (piVar11 == (int *)0x0) {
        piVar11 = *(int **)(param_1 + 0xc38);
      }
      iVar8 = _SfList_FindSpecificItemRange_16(piVar11,0,0xffffffff,param_3);
      iVar8 = iVar8 + -1;
      if (piVar11 == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *piVar11;
      }
      if ((iVar8 < 0) || (iVar3 + -1 < iVar8)) {
        puVar5 = (uint *)0x0;
      }
      else {
        puVar5 = *(uint **)(piVar11[2] + iVar8 * 4);
      }
      while (puVar5 != (uint *)0x0) {
        if (((byte *)puVar5[10] == (byte *)0x0) || ((*(byte *)puVar5[10] & 1) == 0)) {
          if (puVar5 != (uint *)0x0) {
            uVar9 = *puVar5;
            uVar7 = *param_3;
            uVar12 = puVar5[1];
            uVar1 = param_3[1];
            *(uint *)(param_1 + 0x1a8) = uVar9 - uVar7;
            *(uint *)(param_1 + 0x1ac) = (uVar12 - uVar1) - (uint)(uVar9 < uVar7);
            uVar9 = puVar5[2] - *param_3;
            iVar8 = ((puVar5[3] - param_3[1]) - (uint)(puVar5[2] < *param_3)) + puVar5[1] +
                    (uint)CARRY4(uVar9,*puVar5);
            *(uint *)(param_1 + 0x1b0) = uVar9 + *puVar5;
            goto LAB_004ba694;
          }
          break;
        }
        iVar8 = iVar8 + -1;
        if (piVar11 == (int *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *piVar11;
        }
        if ((iVar8 < 0) || (iVar3 + -1 < iVar8)) {
          puVar5 = (uint *)0x0;
        }
        else {
          puVar5 = *(uint **)(piVar11[2] + iVar8 * 4);
        }
      }
    }
  }
  else {
    if (param_6 == 0) {
      param_3[8] = uVar7 | 0x40000;
      SVar2 = GetKeyState(0x12);
      if (SVar2 < 0) {
        param_3[8] = param_3[8] | 0x100000;
      }
      else {
        *(uint *)(param_1 + 0x1b0) = param_3[2];
        *(uint *)(param_1 + 0x1b4) = param_3[3];
      }
    }
    else {
      uVar9 = *param_3;
      uVar7 = param_3[2];
      uVar12 = param_3[3];
      uVar1 = param_3[1];
      *(uint *)(param_1 + 0x98) = uVar9 + uVar7;
      *(uint *)(param_1 + 0x9c) = uVar1 + uVar12 + (uint)CARRY4(uVar9,uVar7);
      param_3[8] = param_3[8] | 0x80000;
      SVar2 = GetKeyState(0x12);
      if (SVar2 < 0) {
        param_3[8] = param_3[8] | 0x100000;
      }
      else {
        uVar9 = param_3[2];
        uVar7 = param_3[3];
        *(uint *)(param_1 + 0x1a8) = -uVar9;
        *(uint *)(param_1 + 0x1ac) = -(uVar7 + (uVar9 != 0));
      }
    }
    if ((*(uint *)((int)param_2 + 0x20) >> 0x10 & 0xf) == 0xc) {
      piVar11 = *(int **)((int)param_2 + 0x3c);
      if (piVar11 == (int *)0x0) {
        piVar11 = *(int **)(param_1 + 0xc38);
      }
      iVar3 = _SfList_FindSpecificItemRange_16(piVar11,0,0xffffffff,param_3);
      iVar4 = 0;
      local_10 = 0;
      local_c = 0;
      local_18 = 0;
      local_14 = 0;
      local_4 = 0;
      local_20 = 0;
      local_1c = 0;
      iVar8 = iVar3 + -1;
      if (piVar11 != (int *)0x0) {
        iVar4 = *piVar11;
      }
      if ((iVar8 < 0) || (iVar4 + -1 < iVar8)) {
        puVar5 = (uint *)0x0;
      }
      else {
        puVar5 = *(uint **)(piVar11[2] + iVar8 * 4);
      }
      while (puVar5 != (uint *)0x0) {
        if (((byte *)puVar5[10] == (byte *)0x0) || ((*(byte *)puVar5[10] & 1) == 0)) {
          if (puVar5 != (uint *)0x0) {
            local_10 = puVar5[2] + *puVar5;
            local_c = puVar5[3] + puVar5[1] + (uint)CARRY4(puVar5[2],*puVar5);
          }
          break;
        }
        iVar8 = iVar8 + -1;
        if (piVar11 == (int *)0x0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *piVar11;
        }
        if ((iVar8 < 0) || (iVar4 + -1 < iVar8)) {
          puVar5 = (uint *)0x0;
        }
        else {
          puVar5 = *(uint **)(piVar11[2] + iVar8 * 4);
        }
      }
      iVar3 = iVar3 + 1;
      if (piVar11 == (int *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *piVar11;
      }
      if ((iVar3 < 0) || (iVar8 + -1 < iVar3)) {
        puVar5 = (uint *)0x0;
      }
      else {
        puVar5 = *(uint **)(piVar11[2] + iVar3 * 4);
      }
      if (puVar5 == (uint *)0x0) {
        uVar9 = 0;
      }
      else {
        if (((byte *)puVar5[10] != (byte *)0x0) && ((*(byte *)puVar5[10] & 1) != 0)) {
          local_18 = *puVar5;
          local_14 = puVar5[1];
        }
        uVar9 = 0;
        do {
          if (((byte *)puVar5[10] == (byte *)0x0) || ((*(byte *)puVar5[10] & 1) == 0)) {
            if (puVar5 != (uint *)0x0) {
              local_20 = *puVar5;
              local_1c = puVar5[1];
            }
            break;
          }
          uVar9 = *puVar5;
          local_4 = puVar5[1];
          iVar3 = iVar3 + 1;
          if (piVar11 == (int *)0x0) {
            iVar8 = 0;
          }
          else {
            iVar8 = *piVar11;
          }
          if ((iVar3 < 0) || (iVar8 + -1 < iVar3)) {
            puVar5 = (uint *)0x0;
          }
          else {
            puVar5 = *(uint **)(piVar11[2] + iVar3 * 4);
          }
        } while (puVar5 != (uint *)0x0);
      }
      if (param_6 == 0) {
        if ((param_3[8] & 0x100000) != 0) {
          if ((uVar9 != 0) || (local_4 != 0)) {
            uVar7 = param_3[2];
            uVar13 = uVar9 - uVar7;
            uVar12 = param_3[3];
            uVar1 = *param_3;
            uVar10 = param_3[1];
            *(uint *)(param_1 + 0x1a8) = uVar13 - uVar1;
            *(uint *)(param_1 + 0x1ac) =
                 (((local_4 - uVar12) - (uint)(uVar9 < uVar7)) - uVar10) - (uint)(uVar13 < uVar1);
          }
          if ((local_20 != 0) || (local_1c != 0)) {
            uVar9 = param_3[2];
            uVar7 = param_3[3];
            uVar12 = *param_3;
            uVar10 = local_20 - uVar9;
            uVar1 = param_3[1];
            *(uint *)(param_1 + 0x1b0) = uVar10 - uVar12;
            *(uint *)(param_1 + 0x1b4) =
                 (((local_1c - uVar7) - (uint)(local_20 < uVar9)) - uVar1) - (uint)(uVar10 < uVar12)
            ;
          }
        }
        if ((local_18 != 0) || (local_14 != 0)) {
          uVar9 = local_18 - *param_3;
          iVar8 = (local_14 - param_3[1]) - (uint)(local_18 < *param_3);
          if ((iVar8 <= *(int *)(param_1 + 0x1b4)) &&
             ((iVar8 < *(int *)(param_1 + 0x1b4) || (uVar9 < *(uint *)(param_1 + 0x1b0))))) {
            *(uint *)(param_1 + 0x1b0) = uVar9;
            *(int *)(param_1 + 0x1b4) = iVar8;
          }
        }
        if ((local_10 != 0) || (local_c != 0)) {
          uVar9 = local_10 - *param_3;
          iVar8 = (local_c - param_3[1]) - (uint)(local_10 < *param_3);
          if ((*(int *)(param_1 + 0x1ac) <= iVar8) &&
             ((*(int *)(param_1 + 0x1ac) < iVar8 || (*(uint *)(param_1 + 0x1a8) < uVar9)))) {
            *(uint *)(param_1 + 0x1a8) = uVar9;
            *(int *)(param_1 + 0x1ac) = iVar8;
          }
        }
      }
      else {
        if ((param_3[8] & 0x100000) != 0) {
          if ((local_10 != 0) || (local_c != 0)) {
            uVar7 = *param_3;
            uVar12 = param_3[1];
            *(uint *)(param_1 + 0x1a8) = local_10 - *param_3;
            *(uint *)(param_1 + 0x1ac) = (local_c - uVar12) - (uint)(local_10 < uVar7);
          }
          if ((local_18 != 0) || (local_14 != 0)) {
            uVar7 = *param_3;
            uVar12 = param_3[1];
            *(uint *)(param_1 + 0x1b0) = local_18 - *param_3;
            *(uint *)(param_1 + 0x1b4) = (local_14 - uVar12) - (uint)(local_18 < uVar7);
          }
        }
        if ((uVar9 != 0) || (local_4 != 0)) {
          uVar7 = uVar9 - param_3[2];
          uVar12 = uVar7 - *param_3;
          iVar8 = (((local_4 - param_3[3]) - (uint)(uVar9 < param_3[2])) - param_3[1]) -
                  (uint)(uVar7 < *param_3);
          if ((*(int *)(param_1 + 0x1ac) <= iVar8) &&
             ((*(int *)(param_1 + 0x1ac) < iVar8 || (*(uint *)(param_1 + 0x1a8) < uVar12)))) {
            *(uint *)(param_1 + 0x1a8) = uVar12;
            *(int *)(param_1 + 0x1ac) = iVar8;
          }
        }
        if ((local_20 != 0) || (local_1c != 0)) {
          uVar9 = local_20 - param_3[2];
          uVar7 = uVar9 - *param_3;
          iVar8 = (((local_1c - param_3[3]) - (uint)(local_20 < param_3[2])) - param_3[1]) -
                  (uint)(uVar9 < *param_3);
          if ((iVar8 <= *(int *)(param_1 + 0x1b4)) &&
             ((iVar8 < *(int *)(param_1 + 0x1b4) || (uVar7 < *(uint *)(param_1 + 0x1b0))))) {
            *(uint *)(param_1 + 0x1b0) = uVar7;
LAB_004ba694:
            *(int *)(param_1 + 0x1b4) = iVar8;
          }
        }
      }
    }
  }
  param_2 = (uint *)((int)param_2 + 0x20);
  uVar14 = ftol();
  uVar9 = *(uint *)(param_1 + 0x98) - (uint)uVar14;
  *(uint *)(param_1 + 0x1a0) = uVar9 - *(uint *)(param_1 + 0xb88);
  iVar8 = *(int *)(param_1 + 0x1ac);
  *(uint *)(param_1 + 0x1a4) =
       (((*(int *)(param_1 + 0x9c) - (int)((ulonglong)uVar14 >> 0x20)) -
        (uint)(*(uint *)(param_1 + 0x98) < (uint)uVar14)) - *(int *)(param_1 + 0xb8c)) -
       (uint)(uVar9 < *(uint *)(param_1 + 0xb88));
  iVar3 = *(int *)(param_1 + 0x1a8);
  if ((-1 < iVar8) && ((0 < iVar8 || (iVar3 != 0)))) {
    iVar3 = 0;
    iVar8 = 0;
  }
  *(int *)(param_1 + 0x1a8) = iVar3;
  iVar3 = *(int *)(param_1 + 0x1b4);
  *(int *)(param_1 + 0x1ac) = iVar8;
  uVar6 = *(undefined4 *)(param_1 + 0x1b0);
  if ((iVar3 < 1) && (iVar3 < 0)) {
    uVar6 = 0;
    iVar3 = 0;
  }
  *(undefined4 *)(param_1 + 0x1b0) = uVar6;
  *(int *)(param_1 + 0x1b4) = iVar3;
  if (*(int *)(param_1 + 0xbc8) != 0) {
    uVar9 = *param_2 >> 0x10 & 0xf;
    if (uVar9 == 10) {
      DAT_0064cb90 = 5;
      DAT_0064cb8c = 0x40;
    }
    else if (uVar9 == 0xb) {
      DAT_0064cb90 = 7;
      DAT_0064cb8c = 0x46;
    }
    else if (uVar9 == 0xc) {
      DAT_0064cb90 = 9;
      DAT_0064cb8c = 0x24e;
    }
    else {
      DAT_0064cb90 = 3;
      DAT_0064cb8c = ((param_3[8] & 1) != 0) + 7;
      if (DAT_0064cb8c == 0) {
        DAT_0064cb90 = 3;
        return;
      }
    }
    FUN_004e9f70(*(undefined4 *)(param_1 + 0xbc8),DAT_0064cb8c,0);
    FUN_004ead60(*(undefined4 *)(param_1 + 0xbc8),0,DAT_0064cb90);
  }
  return;
}


