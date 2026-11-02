/* Module: vegas30.exe
   Function: FUN_004543c0
   Address: 004543c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0045444d) */
/* WARNING: Removing unreachable block (ram,0x00454487) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004543c0(int param_1,uint param_2,int param_3,uint param_4,int param_5,uint param_6)

{
  uint *puVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  undefined8 uVar14;
  
  iVar6 = param_1;
  if ((param_3 < 1) && ((param_3 < 0 || (param_2 == 0)))) {
    param_2 = 0;
    param_3 = 0;
  }
  if ((param_5 < 1) && ((param_5 < 0 || (param_4 == 0)))) {
    param_5 = 0;
    param_4 = 0;
  }
  uVar11 = param_4;
  iVar9 = *(int *)(param_1 + 0x604);
  puVar1 = (uint *)(param_1 + 0x600);
  uVar12 = *puVar1;
  lVar5 = *(longlong *)puVar1;
  lVar4 = *(longlong *)puVar1;
  if ((iVar9 < 0) || ((iVar9 < 1 && (uVar12 == 0)))) {
    lVar3 = 0;
    param_4 = 0;
    param_2 = 0;
    param_3 = 0;
  }
  else {
    lVar13 = __allmul(*(int *)(param_1 + 0xb98),*(int *)(param_1 + 0xb98) >> 0x1f,DAT_0063df78,
                      DAT_0063df7c);
    if ((CONCAT44(param_5,uVar11) < lVar13) ||
       ((lVar3 = CONCAT44(param_5,uVar11), iVar9 <= param_5 &&
        ((lVar13 = lVar4, iVar9 < param_5 ||
         (lVar13 = lVar5, lVar3 = CONCAT44(param_5,uVar11), uVar12 < uVar11)))))) {
      param_4 = (uint)lVar13;
      lVar3 = lVar13;
    }
    param_5 = (int)((ulonglong)lVar3 >> 0x20);
    if (lVar5 < lVar3 + CONCAT44(param_3,param_2)) {
      param_2 = uVar12 - (uint)lVar3;
      uVar12 = (uint)(uVar12 < (uint)lVar3);
      param_3 = (iVar9 - param_5) - uVar12;
      if ((param_3 < 0) ||
         ((param_3 == 0 || SBORROW4(iVar9,param_5) != SBORROW4(iVar9 - param_5,uVar12) &&
          (param_2 == 0)))) {
        param_2 = 0;
        param_3 = 0;
      }
    }
  }
  uVar12 = param_6;
  param_5 = (int)((ulonglong)lVar3 >> 0x20);
  if ((param_6 & 1) == 0) {
    FUN_00453000();
    lVar3 = CONCAT44(param_5,param_4);
  }
  else if ((*(int *)(param_1 + 0xb90) != (int)lVar3) || (*(int *)(param_1 + 0xb94) != param_5)) {
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xffffffdf;
  }
  param_5 = (int)((ulonglong)lVar3 >> 0x20);
  if (((((uVar12 & 2) != 0) && (*(uint *)(param_1 + 0xb88) == param_2)) &&
      (*(int *)(param_1 + 0xb8c) == param_3)) &&
     ((*(int *)(param_1 + 0xb90) == (int)lVar3 && (*(int *)(param_1 + 0xb94) == param_5)))) {
    FUN_00452ea0();
    return;
  }
  pcVar2 = *(code **)(*(int *)(param_1 + 0xab4) + 0x28);
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(param_1,&param_2);
  }
  uVar7 = FUN_00454170(param_1,*(undefined4 *)(param_1 + 0x600),*(undefined4 *)(param_1 + 0x604));
  *(undefined4 *)(param_1 + 0x60c) = uVar7;
  uVar7 = FUN_00454170(param_1,param_4,param_5);
  iVar9 = param_5;
  uVar12 = param_4;
  *(undefined4 *)(param_1 + 0x608) = uVar7;
  puVar1 = (uint *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0xd38) = 1;
  param_1 = 0x43ff;
  if ((((*puVar1 & 0x10000000) == 0) && ((*(byte *)(iVar6 + 0x148) & 4) == 0)) &&
     ((DAT_0064788c != 0 &&
      (((*(uint *)(iVar6 + 0xb90) == param_4 && (*(int *)(iVar6 + 0xb94) == param_5)) &&
       (param_4 != 0 || param_5 != 0)))))) {
    uVar11 = param_2 - *(uint *)(iVar6 + 0xb88);
    iVar10 = (param_3 - *(int *)(iVar6 + 0xb8c)) - (uint)(param_2 < *(uint *)(iVar6 + 0xb88));
    iVar8 = -(param_5 + (uint)(param_4 != 0));
    if (((iVar8 <= iVar10) && ((iVar8 < iVar10 || (-param_4 <= uVar11)))) &&
       ((iVar10 <= param_5 && ((iVar10 < param_5 || (uVar11 <= param_4)))))) {
      iVar8 = ftol();
      iVar10 = ftol();
      iVar8 = iVar8 - iVar10;
      if ((iVar8 != 0) &&
         ((uVar12 = param_4, iVar8 < (*(int *)(iVar6 + 0xad0) * 9) / 10 &&
          ((*(int *)(iVar6 + 0xad0) * -9) / 10 < iVar8)))) {
        ScrollWindowEx(*(HWND *)(iVar6 + 4),iVar8,0,(RECT *)(iVar6 + 0xaf4),(RECT *)(iVar6 + 0xaf4),
                       (HRGN)0x0,(LPRECT)0x0,2);
        param_1 = 0xc3ff;
        *(uint *)(iVar6 + 0xb14) = *(int *)(iVar6 + 0xb14) + iVar8 & 0xfff;
        if (-1 < *(int *)(iVar6 + 0xb28)) {
          iVar9 = *(int *)(iVar6 + 0xb28) + iVar8;
          *(int *)(iVar6 + 0xb28) = iVar9;
          if ((iVar9 < *(int *)(iVar6 + 0xac0)) || (*(int *)(iVar6 + 0xac8) <= iVar9)) {
            *(undefined4 *)(iVar6 + 0xb28) = 0xffff8001;
          }
        }
        *(int *)(iVar6 + 0xb80) = *(int *)(iVar6 + 0xb80) + iVar8;
        uVar12 = param_4;
        iVar9 = param_5;
      }
    }
  }
  *(uint *)(iVar6 + 0xb88) = param_2;
  *(uint *)(iVar6 + 0xb90) = uVar12;
  *(int *)(iVar6 + 0xb8c) = param_3;
  *(int *)(iVar6 + 0xb94) = iVar9;
  *(double *)(iVar6 + 0xba0) = (double)CONCAT44(param_5,param_4) / (double)*(int *)(iVar6 + 0xb98);
  param_6 = DAT_006477bc;
  floor(((double)DAT_006477bc * (double)CONCAT44(param_5,param_4)) / (double)*(int *)(iVar6 + 0xb98)
        + _DAT_00610560);
  uVar14 = ftol();
  *(undefined8 *)(iVar6 + 400) = uVar14;
  FUN_00452ea0();
  FUN_004530a0(iVar6,param_1);
  return;
}


