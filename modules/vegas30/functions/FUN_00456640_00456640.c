/* Module: vegas30.exe
   Function: FUN_00456640
   Address: 00456640
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00456640(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  HGDIOBJ ho;
  int iVar4;
  HWND pHVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  if (((param_3 != 0) || (param_4 != 0)) && (param_2 != 1)) {
    iVar3 = 0;
    iVar6 = 0;
    *(int *)(param_1 + 0x10) = param_3;
    *(int *)(param_1 + 0x14) = param_4;
    local_10 = 0;
    *(undefined4 *)(param_1 + 0xaf4) = 0;
    local_c = 0;
    local_8 = param_3;
    local_4 = param_4;
    *(undefined4 *)(param_1 + 0xaf8) = 0;
    piVar8 = &DAT_00612820;
    *(int *)(param_1 + 0xafc) = param_3;
    *(int *)(param_1 + 0xb00) = param_4;
    *(undefined4 *)(param_1 + 0xb04) = 0;
    *(undefined4 *)(param_1 + 0xb08) = 0;
    *(int *)(param_1 + 0xb0c) = param_3;
    *(int *)(param_1 + 0xb10) = param_4;
    do {
      piVar1 = *(int **)(param_1 + 0x50 + *piVar8 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))(param_1,piVar1,&local_10);
        piVar1[4] = piVar1[6] + piVar1[2];
        piVar1[5] = piVar1[7] + piVar1[3];
        iVar3 = local_10;
        param_3 = local_8;
        iVar6 = local_c;
        param_4 = local_4;
      }
      piVar8 = piVar8 + 1;
    } while (piVar8 < &DAT_00612860);
    if (*(HDC *)(param_1 + 0xc58) != (HDC)0x0) {
      ho = SelectObject(*(HDC *)(param_1 + 0xc58),*(HGDIOBJ *)(param_1 + 0xc5c));
      DeleteObject(ho);
      DeleteDC(*(HDC *)(param_1 + 0xc58));
      *(undefined4 *)(param_1 + 0xc58) = 0;
      *(undefined4 *)(param_1 + 0xc5c) = 0;
      iVar3 = local_10;
      param_3 = local_8;
      iVar6 = local_c;
      param_4 = local_4;
    }
    *(int *)(param_1 + 0xac0) = iVar3;
    *(int *)(param_1 + 0xac4) = iVar6;
    *(int *)(param_1 + 0xac8) = param_3;
    *(int *)(param_1 + 0xacc) = param_4;
    iVar4 = 1;
    if (0 < param_3 - iVar3) {
      iVar4 = param_3 - iVar3;
    }
    *(int *)(param_1 + 0xad0) = iVar4;
    iVar3 = 1;
    if (0 < param_4 - iVar6) {
      iVar3 = param_4 - iVar6;
    }
    iVar6 = *(int *)(param_1 + 0xb98);
    iVar7 = *(int *)(param_1 + 0xbb0);
    iVar4 = iVar4 - *(int *)(param_1 + 0xb9c);
    *(int *)(param_1 + 0xad4) = iVar3;
    if (iVar4 < 1) {
      iVar4 = 1;
    }
    iVar3 = iVar3 - *(int *)(param_1 + 0xbb4);
    *(int *)(param_1 + 0xb98) = iVar4;
    if (iVar3 < 1) {
      iVar3 = 1;
    }
    *(int *)(param_1 + 0xbb0) = iVar3;
    if ((iVar6 != 0) && (iVar4 != iVar6)) {
      uVar9 = *(undefined8 *)(param_1 + 0xb90);
      if ((*(int *)(param_1 + 0x600) == *(int *)(param_1 + 0xb90)) &&
         (*(int *)(param_1 + 0x604) == *(int *)(param_1 + 0xb94))) {
        uVar10 = 1;
      }
      else {
        uVar10 = 1;
        uVar9 = ftol(1);
      }
      FUN_004543c0(param_1,*(undefined4 *)(param_1 + 0xb88),*(undefined4 *)(param_1 + 0xb8c),uVar9,
                   uVar10);
      uVar10 = FUN_00454170(param_1,*(undefined4 *)(param_1 + 0x600),
                            *(undefined4 *)(param_1 + 0x604));
      *(undefined4 *)(param_1 + 0x60c) = uVar10;
      uVar10 = FUN_00454170(param_1,*(undefined4 *)(param_1 + 0xb90),
                            *(undefined4 *)(param_1 + 0xb94));
      *(undefined4 *)(param_1 + 0x608) = uVar10;
    }
    if ((((*(uint *)(param_1 + 0x654) & 0x100) == 0) && (iVar7 != 0)) &&
       (iVar3 = *(int *)(param_1 + 0xbb0), iVar3 != iVar7)) {
      if ((*(uint *)(param_1 + 0x654) & 0x40) == 0) {
        *(uint *)(param_1 + 0x67c) = iVar7 - 0x15U & ((int)(iVar7 - 0x15U) < 0) - 1;
        if ((*(uint *)(param_1 + 0x18) & 0x80000) == 0) {
          iVar3 = FUN_004542b0(param_1,*(undefined4 *)(param_1 + 0x678));
          iVar6 = *(int *)(param_1 + 0xba8);
        }
        else {
          iVar6 = *(int *)(param_1 + 0xbc0) * iVar3;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x67c) = 0x18;
        if ((*(uint *)(param_1 + 0x18) & 0x80000) == 0) {
          iVar6 = *(int *)(param_1 + 0xba8);
        }
        else {
          iVar6 = *(int *)(param_1 + 0xbc0) * iVar3;
        }
      }
      FUN_004549b0(param_1,iVar6,iVar3,5);
    }
    *(double *)(param_1 + 0xba0) =
         (double)*(longlong *)(param_1 + 0xb90) / (double)*(int *)(param_1 + 0xb98);
    *(double *)(param_1 + 3000) =
         (double)*(int *)(param_1 + 0xbac) / (double)*(int *)(param_1 + 0xbb0);
    if ((((*(byte *)(param_1 + 0x1c) & 0x10) != 0) && (*(int *)(param_1 + 0xbc8) != 0)) &&
       (iVar3 = FUN_005b87b0(*(int *)(param_1 + 0xbc8)), iVar3 != 0)) {
      if (*(int *)(param_1 + 0xbc8) == 0) {
        piVar8 = (int *)0x0;
      }
      else {
        piVar8 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
      }
      iVar3 = *piVar8;
      if (0 < iVar3) {
        if (*(int *)(param_1 + 0xbc8) == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = FUN_005b87b0(*(int *)(param_1 + 0xbc8));
        }
        iVar4 = *(int *)(param_1 + 0xbac) / iVar3;
        if ((iVar4 != 0) && (iVar7 = 0, 0 < iVar3)) {
          do {
            iVar2 = *(int *)(*(int *)(iVar6 + 8) + iVar7 * 4);
            if (iVar4 < 0x19) {
              *(byte *)(iVar2 + 0x12) = *(byte *)(iVar2 + 0x12) | 1;
            }
            else {
              *(uint *)(iVar2 + 0x10) = *(uint *)(iVar2 + 0x10) & 0xfffeffff;
              *(int *)(iVar2 + 0x694) = iVar4;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < iVar3);
        }
      }
    }
    pHVar5 = GetFocus();
    if (pHVar5 == *(HWND *)(param_1 + 4)) {
      iVar3 = FUN_00452e00(param_1);
      DestroyCaret();
      FUN_00452e30(param_1);
      if (iVar3 != 0) {
        FUN_00452ea0(param_1);
      }
    }
  }
  return;
}


