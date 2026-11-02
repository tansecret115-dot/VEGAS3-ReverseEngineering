/* Module: vegas30.exe
   Function: FUN_00446020
   Address: 00446020
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00446157) */
/* WARNING: Removing unreachable block (ram,0x004460d2) */
/* WARNING: Type propagation algorithm not settling */

void FUN_00446020(int param_1,undefined4 *param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  tagRECT local_10;
  
  param_2[3] = 400;
  *(undefined4 *)(param_1 + 0xa8) = *param_2;
  *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xfffffffe;
  uVar4 = DAT_0064b138;
  switch(*param_2) {
  case 1:
    iVar6 = param_2[2];
    iVar5 = param_2[1];
    if (0 < iVar6) {
      piVar1 = *(int **)(iVar5 + 0x140);
      if (piVar1 == (int *)0x0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *piVar1;
      }
      if (iVar7 + -1 < iVar6) {
        iVar6 = 0;
        if (piVar1 != (int *)0x0) {
          iVar6 = *piVar1;
        }
        iVar6 = iVar6 + -1;
      }
      *(int *)(iVar5 + 0x1fc) = iVar6;
    }
    FUN_0044bfa0(param_1,iVar5);
    goto LAB_004462fa;
  case 2:
    iVar6 = param_2[1];
    if (*(int **)(iVar6 + 0x78) == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = **(int **)(iVar6 + 0x78);
    }
    iVar7 = param_2[2];
    if (iVar7 < 0) {
      iVar7 = 0;
    }
    else if (iVar5 + -1 < iVar7) {
      iVar7 = iVar5 + -1;
    }
    *(int *)(iVar6 + 0x138) = iVar7;
    FUN_0044c250(param_1,iVar6,1);
    if (DAT_0064a508 == 0) goto LAB_0044636a;
    uVar9 = FUN_005383a0(*(int *)(param_1 + 0x80) + 0xe80);
    uVar10 = FUN_004581e0(DAT_00647630);
    iVar6 = ((int)((ulonglong)uVar10 >> 0x20) - (int)((ulonglong)uVar9 >> 0x20)) -
            (uint)((uint)uVar10 < (uint)uVar9);
    goto joined_r0x00446143;
  case 3:
    iVar6 = param_2[2];
    iVar5 = param_2[1];
    if (0 < iVar6) {
      iVar7 = 0;
      if (*(int **)(iVar5 + 0x7c) != (int *)0x0) {
        iVar7 = **(int **)(iVar5 + 0x7c);
      }
      if (iVar7 + -1 < iVar6) {
        iVar6 = iVar7 + -1;
      }
      *(int *)(iVar5 + 0x138) = iVar6;
    }
    FUN_0044c250(param_1,iVar5,0);
    if (DAT_0064a508 == 0) goto LAB_0044636a;
    uVar9 = FUN_005383a0(*(int *)(param_1 + 0x80) + 0xe80);
    uVar10 = FUN_004581e0(DAT_00647630);
    iVar6 = ((int)((ulonglong)uVar10 >> 0x20) - (int)((ulonglong)uVar9 >> 0x20)) -
            (uint)((uint)uVar10 < (uint)uVar9);
    if (iVar6 < 1) goto joined_r0x00446149;
    goto LAB_0044633e;
  case 4:
    *(undefined4 *)(param_1 + 0x88) = DAT_0064b138;
    uVar4 = FUN_005ba4b0(uVar4,0);
    if (0 < (int)param_2[2]) {
      FUN_005ba990(*(undefined4 *)(param_1 + 0x88),param_2[2],uVar4,0);
    }
    FUN_0044c4d0(param_1,*(undefined4 *)(param_1 + 0x88),1);
LAB_004462fa:
    if (DAT_0064a508 == 0) {
LAB_0044636a:
      uVar4 = *(undefined4 *)(param_1 + 0x80);
      lVar12 = 0;
    }
    else {
      uVar9 = FUN_005383a0(*(int *)(param_1 + 0x80) + 0xe80);
      uVar10 = FUN_004581e0(DAT_00647630);
      iVar6 = ((int)((ulonglong)uVar10 >> 0x20) - (int)((ulonglong)uVar9 >> 0x20)) -
              (uint)((uint)uVar10 < (uint)uVar9);
joined_r0x00446143:
      if (iVar6 < 1) {
joined_r0x00446149:
        if (-1 < iVar6) goto LAB_0044633e;
        lVar12 = 0;
      }
      else {
LAB_0044633e:
        lVar11 = FUN_005383a0(*(int *)(param_1 + 0x80) + 0xe80);
        lVar12 = FUN_004581e0(DAT_00647630);
        lVar12 = lVar12 - lVar11;
      }
LAB_004463f7:
      uVar4 = *(undefined4 *)(param_1 + 0x80);
    }
    break;
  case 5:
    FUN_0044c390(param_1,param_2[1]);
LAB_004463f3:
    lVar12 = 0;
    goto LAB_004463f7;
  case 6:
    iVar6 = param_2[2];
    iVar5 = param_2[1];
    if (iVar6 < 0) {
      *(undefined4 *)(iVar5 + 0x13c) = 0;
      FUN_0044c2f0(param_1,iVar5,1);
    }
    else {
      piVar1 = *(int **)(iVar5 + 0x138);
      if (piVar1 == (int *)0x0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *piVar1;
      }
      if (iVar7 + -1 < iVar6) {
        if (piVar1 == (int *)0x0) {
          *(undefined4 *)(iVar5 + 0x13c) = 0xffffffff;
          FUN_0044c2f0(param_1,iVar5,1);
        }
        else {
          *(int *)(iVar5 + 0x13c) = *piVar1 + -1;
          FUN_0044c2f0(param_1,iVar5,1);
        }
      }
      else {
        *(int *)(iVar5 + 0x13c) = iVar6;
        FUN_0044c2f0(param_1,iVar5,1);
      }
    }
    goto LAB_00446403;
  case 7:
    FUN_0044c030(param_1,param_2[1]);
    if (DAT_0064a508 == 0) {
      uVar4 = *(undefined4 *)(param_1 + 0x80);
      lVar12 = 0;
    }
    else {
      uVar9 = FUN_005383a0(*(int *)(param_1 + 0x80) + 0xe80);
      uVar10 = FUN_004581e0(DAT_00647630);
      uVar2 = (uint)((uint)uVar10 < (uint)uVar9);
      uVar3 = (int)((ulonglong)uVar10 >> 0x20) - (int)((ulonglong)uVar9 >> 0x20);
      bVar8 = -1 < (int)(uVar3 - uVar2);
      if ((uVar3 != uVar2 && bVar8) || (bVar8)) {
        lVar11 = FUN_005383a0(*(int *)(param_1 + 0x80) + 0xe80);
        lVar12 = FUN_004581e0(DAT_00647630);
        lVar12 = lVar12 - lVar11;
        uVar4 = *(undefined4 *)(param_1 + 0x80);
      }
      else {
        lVar12 = 0;
        uVar4 = *(undefined4 *)(param_1 + 0x80);
      }
    }
    break;
  case 8:
    FUN_0044c140(param_1,param_2[1]);
    if (DAT_0064a508 == 0) goto LAB_004463f3;
    uVar9 = FUN_005383a0(*(int *)(param_1 + 0x80) + 0xe80);
    uVar10 = FUN_004581e0(DAT_00647630);
    uVar2 = (uint)((uint)uVar10 < (uint)uVar9);
    uVar3 = (int)((ulonglong)uVar10 >> 0x20) - (int)((ulonglong)uVar9 >> 0x20);
    bVar8 = -1 < (int)(uVar3 - uVar2);
    if ((uVar3 != uVar2 && bVar8) || (bVar8)) {
      lVar11 = FUN_005383a0(*(int *)(param_1 + 0x80) + 0xe80);
      lVar12 = FUN_004581e0(DAT_00647630);
      uVar4 = *(undefined4 *)(param_1 + 0x80);
      lVar12 = lVar12 - lVar11;
    }
    else {
      uVar4 = *(undefined4 *)(param_1 + 0x80);
      lVar12 = 0;
    }
    break;
  default:
    goto switchD_00446059_default;
  }
  FUN_00538410(uVar4,lVar12);
LAB_00446403:
  FUN_00538900(*(int *)(param_1 + 0x80) + 0xe80,0,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
  FUN_0053eb50(*(undefined4 *)(param_1 + 0x80),param_2);
  GetClientRect(*(HWND *)(param_1 + 0x84),&local_10);
  FUN_004475b0(param_1,local_10.right - local_10.left,local_10.bottom - local_10.top,0,0);
  InvalidateRect(*(HWND *)(param_1 + 8),(RECT *)0x0,0);
  FUN_004464a0(param_1);
switchD_00446059_default:
  return;
}


