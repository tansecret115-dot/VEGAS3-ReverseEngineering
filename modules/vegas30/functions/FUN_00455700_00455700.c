/* Module: vegas30.exe
   Function: FUN_00455700
   Address: 00455700
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00455b36) */
/* WARNING: Removing unreachable block (ram,0x004558ac) */
/* WARNING: Removing unreachable block (ram,0x00455aa8) */
/* WARNING: Removing unreachable block (ram,0x00455b84) */
/* WARNING: Removing unreachable block (ram,0x00455aaa) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00455700(int param_1,HDC param_2,undefined4 param_3)

{
  ulonglong uVar1;
  DWORD DVar2;
  COLORREF CVar3;
  COLORREF CVar4;
  HGDIOBJ pvVar5;
  uint uVar6;
  DWORD color;
  int iVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  double local_28;
  int iStack_1c;
  
  if (0 < *(int *)(param_1 + 0xb98)) {
    if ((DAT_006476c8 == 0) && (DAT_006476cc == 0)) {
      FUN_004b6ad0(param_1,param_2,param_3);
      return;
    }
    if ((DAT_006476b8 == 0) || (DAT_006476bc == 0)) {
      DVar2 = GetSysColor(0xf);
      CVar3 = SetTextColor(param_2,DVar2);
      DVar2 = GetSysColor(0x14);
      CVar4 = SetBkColor(param_2,DVar2);
      pvVar5 = (HGDIOBJ)_SfGetUIBrush_4(0x2716);
      pvVar5 = SelectObject(param_2,pvVar5);
      lVar12 = *(longlong *)(param_1 + 0xb90);
      iVar8 = *(int *)(param_1 + 0xb98);
      fVar10 = (float10)FUN_00455690(param_1,DAT_006476c8,DAT_006476cc);
      if ((float10)_DAT_006476d4 <= fVar10 / (float10)((double)lVar12 / (double)iVar8)) {
        lVar11 = ftol();
        iVar8 = (int)((ulonglong)lVar11 >> 0x20);
        lVar12 = ftol();
        lVar12 = lVar11 + lVar12 + 3;
        iVar9 = (int)((ulonglong)lVar12 >> 0x20);
        if (iVar8 <= iVar9) {
          if (iVar8 < iVar9) goto LAB_00455826;
          do {
            if ((uint)lVar12 <= (uint)lVar11) break;
LAB_00455826:
            do {
              iStack_1c = (int)((ulonglong)lVar11 >> 0x20);
              if (*(int *)(param_1 + 0xb90) == 0 && *(int *)(param_1 + 0xb94) == 0) {
                uVar6 = 0xffffffff;
              }
              else {
                ftol();
                lVar13 = ftol();
                uVar1 = lVar13 + *(int *)(param_1 + 0xac0);
                uVar6 = (uint)uVar1;
                if ((uVar1 < 0x8000000000000000) ||
                   ((-0x100000001 < (longlong)uVar1 && (0xffffbfff < uVar6)))) {
                  if (0x3fff < (longlong)uVar1) {
                    uVar6 = 0x3fff;
                  }
                }
                else {
                  uVar6 = 0xffffc000;
                }
              }
              if (((int)uVar6 < *(int *)(param_1 + 0xb80)) ||
                 (DVar2 = 0xaf0229,
                 *(int *)(param_1 + 0xb84) + *(int *)(param_1 + 0xb80) < (int)uVar6)) {
                DVar2 = 0xa000c9;
              }
              PatBlt(param_2,uVar6,*(int *)(param_1 + 0xac4),1,*(int *)(param_1 + 0xad4),DVar2);
              iStack_1c = iStack_1c + (uint)(0xfffffffe < (uint)lVar11);
              lVar13 = lVar11 + 1;
              lVar11 = lVar11 + 1;
            } while (iStack_1c < iVar9);
            lVar11 = lVar13;
          } while (iStack_1c <= iVar9);
        }
      }
      SelectObject(param_2,pvVar5);
      SetTextColor(param_2,CVar3);
      SetBkColor(param_2,CVar4);
      return;
    }
    DVar2 = GetSysColor(0x10);
    iVar9 = SetBkMode(param_2,2);
    color = GetSysColor(0xf);
    CVar3 = SetTextColor(param_2,color);
    CVar4 = SetBkColor(param_2,DVar2);
    pvVar5 = (HGDIOBJ)_SfGetUIBrush_4(0x2711);
    pvVar5 = SelectObject(param_2,pvVar5);
    iVar8 = *(int *)(param_1 + 0xb98);
    local_28 = *(double *)(param_1 + 0x1c0);
    if (local_28 / ((double)*(longlong *)(param_1 + 0xb90) / (double)iVar8) < (double)_DAT_006476d4)
    {
      iVar7 = ftol();
      local_28 = (double)(iVar7 + 1) * *(double *)(param_1 + 0x1c0);
    }
    if (_DAT_006128d8 <= local_28) {
      lVar11 = ftol();
      __alldiv(iVar8,iVar8 >> 0x1f,2,0);
      ftol();
      lVar12 = ftol();
      lVar12 = lVar11 + lVar12;
      for (; lVar11 < lVar12 + 3; lVar11 = lVar11 + 1) {
        if (*(int *)(param_1 + 0xb90) == 0 && *(int *)(param_1 + 0xb94) == 0) {
          uVar6 = 0xffffffff;
        }
        else {
          ftol();
          lVar13 = ftol();
          uVar1 = lVar13 + *(int *)(param_1 + 0xac0);
          uVar6 = (uint)uVar1;
          if ((uVar1 < 0x8000000000000000) ||
             ((-0x100000001 < (longlong)uVar1 && (0xffffbfff < uVar6)))) {
            if (0x3fff < (longlong)uVar1) {
              uVar6 = 0x3fff;
            }
          }
          else {
            uVar6 = 0xffffc000;
          }
        }
        PatBlt(param_2,uVar6,*(int *)(param_1 + 0xac4),1,*(int *)(param_1 + 0xad4),0xf00021);
      }
    }
    SelectObject(param_2,pvVar5);
    SetTextColor(param_2,CVar3);
    SetBkColor(param_2,CVar4);
    SetBkMode(param_2,iVar9);
  }
  return;
}


