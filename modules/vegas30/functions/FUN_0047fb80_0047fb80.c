/* Module: vegas30.exe
   Function: FUN_0047fb80
   Address: 0047fb80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0047fe65) */
/* WARNING: Removing unreachable block (ram,0x00480045) */
/* WARNING: Removing unreachable block (ram,0x0047fdb9) */
/* WARNING: Removing unreachable block (ram,0x0047fdc7) */
/* WARNING: Removing unreachable block (ram,0x0047ffe1) */
/* WARNING: Removing unreachable block (ram,0x0047ff0b) */

void FUN_0047fb80(HDC param_1,int param_2,int param_3,undefined4 param_4,int param_5,uint param_6,
                 int param_7,uint param_8,int param_9)

{
  int *piVar1;
  uint *puVar2;
  bool bVar3;
  bool bVar4;
  ulonglong uVar5;
  COLORREF CVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  undefined4 uVar15;
  int local_50;
  int local_4c;
  int local_48;
  int iStack_44;
  uint local_40;
  int local_3c;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  uint local_28;
  double local_20;
  double local_18;
  RECT local_10;
  
  iVar12 = param_3;
  iVar8 = *(int *)(param_3 + 0x218);
  local_40 = *(uint *)(param_3 + 0x40);
  local_3c = *(int *)(param_3 + 0x44);
  if (*(int *)(iVar8 + 0x1c) < 0) {
    return;
  }
  if ((*(int *)(iVar8 + 0x1c) < 1) && (*(int *)(iVar8 + 0x18) == 0)) {
    return;
  }
  iVar10 = *(int *)(iVar8 + 0x2c) - *(int *)(iVar8 + 0x24);
  local_50 = FUN_0047f900(param_2,param_3,local_40,local_3c);
  local_4c = *(int *)(iVar8 + 0x2c);
  if (((*(byte *)(param_3 + 0x10) & 2) != 0) ||
     (piVar1 = (int *)(param_3 + 8), param_3 = 0, (*(uint *)(*piVar1 + 0x10) & 0x20000) != 0)) {
    param_3 = 1;
  }
  if ((-1 < local_3c) && ((0 < local_3c || (local_40 != 0)))) {
    CVar6 = -(uint)(param_5 != 0) & 0xffffff;
    if (param_3 != 0) {
      CVar6 = FUN_00460550(CVar6,7);
    }
    CVar6 = SetBkColor(param_1,CVar6);
    local_10.top = local_4c - iVar10;
    local_10.left = local_50;
    local_10.right = local_50 + 1;
    local_10.bottom = local_10.top + iVar10;
    ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
    SetBkColor(param_1,CVar6);
  }
  local_48 = *(int *)(param_2 + 0xb90);
  iStack_44 = *(int *)(param_2 + 0xb94);
  iVar8 = *(int *)(param_2 + 0xac0);
  local_18 = (double)*(longlong *)(param_2 + 0xb90);
  puVar2 = (uint *)(iVar12 + 0x18);
  uVar9 = *puVar2;
  iVar12 = *(int *)(iVar12 + 0x1c);
  lVar14 = *(longlong *)puVar2;
  local_20 = (double)*(int *)(param_2 + 0xb98);
  uVar15 = *(undefined4 *)(param_2 + 0xb88);
  uStack_2c = *(undefined4 *)(param_2 + 0xb8c);
  local_30 = uVar15;
  local_10.top = iVar12;
  lVar13 = ftol();
  lVar14 = ((lVar13 - lVar14) - CONCAT44(local_3c,local_40)) + CONCAT44(uStack_2c,uVar15);
  local_28 = uVar9 + local_40;
  iVar10 = iVar12 + local_3c + (uint)CARRY4(uVar9,local_40);
  local_38 = param_6 - (uint)lVar14;
  iVar11 = (param_7 - (int)((ulonglong)lVar14 >> 0x20)) - (uint)(param_6 < (uint)lVar14);
  if ((iVar11 <= iVar10) && ((iVar11 < iVar10 || (iVar12 = local_10.top, local_38 <= local_28)))) {
    local_38 = param_6 + param_8;
    iStack_34 = param_7 + param_9 + (uint)CARRY4(param_6,param_8);
    if ((iVar10 <= iStack_34) &&
       ((iVar10 < iStack_34 || (iVar12 = local_10.top, local_28 < local_38)))) {
      if ((iVar10 < param_7) || ((iVar10 <= param_7 && (local_28 < param_6)))) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      lVar14 = lVar14 + CONCAT44(iVar12,uVar9) + CONCAT44(local_3c,local_40);
      if ((lVar14 < CONCAT44(param_7,param_6)) || (CONCAT44(iStack_34,local_38) <= lVar14)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar3) {
        if (!bVar4) {
          if (local_48 == 0 && iStack_44 == 0) {
            uVar9 = 0xffffffff;
          }
          else {
            lVar14 = ftol();
            uVar5 = lVar14 + iVar8;
            uVar9 = (uint)uVar5;
            if ((uVar5 < 0x8000000000000000) ||
               ((-0x100000001 < (longlong)uVar5 && (0xffffbfff < uVar9)))) {
              if (0x3fff < (longlong)uVar5) {
                uVar9 = 0x3fff;
              }
            }
            else {
              uVar9 = 0xffffc000;
            }
          }
          FUN_0047f9e0(param_1,&local_50,param_3,1,0,uVar9 - local_50);
          FUN_0047f9e0(param_1,&local_50,param_3,0,uVar9 - local_50,6);
          return;
        }
        FUN_0047f9e0(param_1,&local_50,param_3,1,0,6);
        return;
      }
      if (bVar4) {
        if (local_48 == 0 && iStack_44 == 0) {
          uVar9 = 0xffffffff;
        }
        else {
          lVar14 = ftol();
          uVar5 = lVar14 + iVar8;
          uVar9 = (uint)uVar5;
          if ((uVar5 < 0x8000000000000000) ||
             ((-0x100000001 < (longlong)uVar5 && (0xffffbfff < uVar9)))) {
            if (0x3fff < (longlong)uVar5) {
              uVar9 = 0x3fff;
            }
          }
          else {
            uVar9 = 0xffffc000;
          }
        }
        FUN_0047f9e0(param_1,&local_50,param_3,0,0,uVar9 - local_50);
        FUN_0047f9e0(param_1,&local_50,param_3,1,uVar9 - local_50,6);
        return;
      }
      FUN_0047f9e0(param_1,&local_50,param_3,0,0,6);
      iVar8 = *(int *)(param_2 + 0xb90);
      iVar12 = *(int *)(param_2 + 0xb94);
      local_48 = iVar8;
      iStack_44 = iVar12;
      if (iVar8 == 0 && iVar12 == 0) {
        uVar9 = 0xffffffff;
      }
      else {
        lVar14 = ftol();
        uVar5 = lVar14 + *(int *)(param_2 + 0xac0);
        uVar9 = (uint)uVar5;
        if ((uVar5 < 0x8000000000000000) ||
           ((-0x100000001 < (longlong)uVar5 && (0xffffbfff < uVar9)))) {
          if (0x3fff < (longlong)uVar5) {
            uVar9 = 0x3fff;
          }
        }
        else {
          uVar9 = 0xffffc000;
        }
      }
      if (iVar8 == 0 && iVar12 == 0) {
        uVar7 = 0xffffffff;
      }
      else {
        lVar14 = ftol();
        uVar5 = lVar14 + *(int *)(param_2 + 0xac0);
        uVar7 = (uint)uVar5;
        if ((uVar5 < 0x8000000000000000) ||
           ((-0x100000001 < (longlong)uVar5 && (0xffffbfff < uVar7)))) {
          if (0x3fff < (longlong)uVar5) {
            uVar7 = 0x3fff;
          }
        }
        else {
          uVar7 = 0xffffc000;
        }
      }
      if (uVar9 == uVar7) {
        return;
      }
      iVar8 = uVar7 - local_50;
      iVar12 = uVar9 - local_50;
      uVar15 = 1;
      goto LAB_0048006e;
    }
  }
  iVar8 = 6;
  iVar12 = 0;
  uVar15 = 0;
LAB_0048006e:
  FUN_0047f9e0(param_1,&local_50,param_3,uVar15,iVar12,iVar8);
  return;
}


