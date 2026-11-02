/* Module: vegas30.exe
   Function: FUN_004e56d0
   Address: 004e56d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x004e59e0) */
/* WARNING: Removing unreachable block (ram,0x004e582c) */
/* WARNING: Removing unreachable block (ram,0x004e58a6) */
/* WARNING: Removing unreachable block (ram,0x004e5a6e) */

void FUN_004e56d0(int param_1,HDC param_2,int *param_3)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  HDC hdc;
  int iVar5;
  HGDIOBJ h;
  DWORD color;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  int local_68;
  HGDIOBJ local_54;
  int local_50;
  int iStack_4c;
  RECT local_48;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  undefined4 local_4;
  
  uVar9 = *param_3 - *(int *)(param_1 + 0xac0);
  uVar7 = param_3[2] - *(int *)(param_1 + 0xac0);
  local_68 = 0x8000 >> ((byte)((int)(*(uint *)(param_1 + 0x678) + 1) / 2) & 0x1f);
  if ((*(uint *)(param_1 + 0x678) & 1) != 0) {
    local_68 = local_68 + local_68 / 2;
  }
  local_48.top = *(int *)(param_1 + 0xad4);
  local_54 = (HGDIOBJ)0x0;
  if (1 < *(ushort *)(param_1 + 0xdaa)) {
    local_48.top = local_48.top / 2;
  }
  if (local_48.top < 2) {
    return;
  }
  uVar9 = ((int)uVar9 < 1) - 1 & uVar9;
  if ((int)*(uint *)(param_1 + 0xad0) <= (int)uVar7) {
    uVar7 = *(uint *)(param_1 + 0xad0);
  }
  if ((int)uVar7 < (int)uVar9) {
    return;
  }
  local_50 = *(int *)(param_1 + 0xdac);
  if (local_50 != 0) {
    iStack_4c = 0;
    ftol();
  }
  iVar5 = *(int *)(param_1 + 0xb90);
  iStack_4c = *(int *)(param_1 + 0xb94);
  local_50 = iVar5;
  if (iVar5 == 0 && iStack_4c == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    lVar11 = ftol();
    uVar1 = lVar11 + *(int *)(param_1 + 0xac0);
    uVar2 = (uint)uVar1;
    if ((uVar1 < 0x8000000000000000) || ((-0x100000001 < (longlong)uVar1 && (0xffffbfff < uVar2))))
    {
      if (0x3fff < (longlong)uVar1) {
        uVar2 = 0x3fff;
      }
    }
    else {
      uVar2 = 0xffffc000;
    }
  }
  iVar3 = *(int *)(param_1 + 0xac0);
  uVar2 = uVar2 - iVar3;
  if (iVar5 == 0 && iStack_4c == 0) {
    uVar8 = 0xffffffff;
  }
  else {
    lVar11 = ftol();
    uVar1 = lVar11 + iVar3;
    uVar8 = (uint)uVar1;
    if ((uVar1 < 0x8000000000000000) || ((-0x100000001 < (longlong)uVar1 && (0xffffbfff < uVar8))))
    {
      if (0x3fff < (longlong)uVar1) {
        uVar8 = 0x3fff;
      }
    }
    else {
      uVar8 = 0xffffc000;
    }
  }
  uVar8 = uVar8 - *(int *)(param_1 + 0xac0);
  local_38 = uVar9;
  local_34 = uVar9;
  local_30 = uVar9;
  local_2c = uVar9;
  local_28 = uVar9;
  local_24 = uVar7;
  if (((int)uVar9 < (int)uVar8) && ((int)uVar2 <= (int)uVar7)) {
    if ((int)uVar7 <= (int)uVar8) {
      uVar8 = uVar7;
    }
    if ((int)uVar2 <= (int)uVar9) {
      uVar2 = uVar9;
    }
    local_20 = 0xffffffff;
    local_4 = 0xffffffff;
    uVar4 = *(uint *)(param_1 + 0xb78);
    local_34 = uVar2;
    local_30 = uVar8;
    local_2c = uVar8;
    local_28 = uVar8;
    local_1c = uVar9;
    local_18 = uVar2;
    local_14 = uVar8;
    local_10 = uVar8;
    local_c = uVar8;
    local_8 = uVar7;
    if (uVar4 != 0 || *(int *)(param_1 + 0xb7c) != 0) {
      uVar10 = *(uint *)(param_1 + 0xb70);
      iVar5 = *(int *)(param_1 + 0xb74);
      uVar6 = uVar10 + uVar4;
      iVar3 = iVar5 + *(int *)(param_1 + 0xb7c) + (uint)CARRY4(uVar10,uVar4);
      if ((iVar3 <= iVar5) && ((iVar3 < iVar5 || (uVar6 < uVar10)))) {
        iVar3 = iVar5;
        uVar6 = uVar10;
      }
      if (local_50 == 0 && iStack_4c == 0) {
        uVar4 = 0xffffffff;
      }
      else {
        lVar11 = ftol();
        uVar1 = lVar11 + *(int *)(param_1 + 0xac0);
        uVar4 = (uint)uVar1;
        if ((uVar1 < 0x8000000000000000) ||
           ((-0x100000001 < (longlong)uVar1 && (0xffffbfff < uVar4)))) {
          if (0x3fff < (longlong)uVar1) {
            uVar4 = 0x3fff;
          }
        }
        else {
          uVar4 = 0xffffc000;
        }
      }
      uVar4 = uVar4 - *(int *)(param_1 + 0xac0);
      if (local_50 == 0 && iStack_4c == 0) {
        uVar10 = 0xffffffff;
      }
      else {
        local_50 = uVar6 + 1;
        iStack_4c = iVar3 + (uint)(0xfffffffe < uVar6);
        lVar11 = ftol();
        uVar1 = lVar11 + *(int *)(param_1 + 0xac0);
        uVar10 = (uint)uVar1;
        if ((uVar1 < 0x8000000000000000) ||
           ((-0x100000001 < (longlong)uVar1 && (0xffffbfff < uVar10)))) {
          if (0x3fff < (longlong)uVar1) {
            uVar10 = 0x3fff;
          }
        }
        else {
          uVar10 = 0xffffc000;
        }
      }
      uVar10 = uVar10 - *(int *)(param_1 + 0xac0);
      if (((int)uVar4 < (int)uVar7) || ((int)uVar9 < (int)uVar10)) {
        local_30 = uVar2;
        if (((int)uVar2 <= (int)uVar4) && (local_30 = uVar8, (int)uVar4 <= (int)uVar8)) {
          local_30 = uVar4;
        }
        local_2c = local_30;
        if (((int)local_30 <= (int)uVar10) && (local_2c = uVar8, (int)uVar10 <= (int)uVar8)) {
          local_2c = uVar10;
        }
        local_14 = uVar2;
        if (((int)uVar2 <= (int)uVar4) && (local_14 = uVar4, (int)uVar8 < (int)uVar4)) {
          local_14 = uVar8;
        }
        local_10 = local_14;
        if (((int)local_14 <= (int)uVar10) && (local_10 = uVar8, (int)uVar10 <= (int)uVar8)) {
          local_10 = uVar10;
        }
      }
    }
    hdc = CreateCompatibleDC(param_2);
    if (hdc != (HDC)0x0) {
      iVar5 = FUN_004e6980(param_1,*(undefined4 *)(param_1 + 0xad0),*(undefined4 *)(param_1 + 0xad4)
                           ,uVar9,uVar7,&local_54);
      if (local_54 != (HGDIOBJ)0x0) {
        h = SelectObject(hdc,local_54);
        if ((iVar5 == 0) && ((int)uVar9 < (int)uVar7)) {
          FUN_004e5d40(param_1,uVar9,uVar7);
          FUN_004e6400(param_1,hdc,uVar9,uVar7);
        }
        SetBkMode(param_2,2);
        iVar5 = local_48.top / 2;
        FUN_004e5060(param_1,param_2,hdc,&DAT_00613d68,iVar5,local_48.top,local_68,&local_38,0);
        if (1 < *(ushort *)(param_1 + 0xdaa)) {
          FUN_004e5060(param_1,param_2,hdc,&DAT_00613d68,iVar5,local_48.top,local_68,&local_1c,1);
        }
        SelectObject(hdc,h);
        DeleteDC(hdc);
        FUN_004e5690(param_1,0);
        goto LAB_004e5c8f;
      }
      FUN_004e5690(param_1,1);
      DeleteDC(hdc);
    }
    FUN_004e5d40(param_1,uVar2,uVar8);
    FUN_004e6070(param_2,param_1,&DAT_00613d68,0,local_48.top,local_68,&local_38,0);
    if (1 < *(ushort *)(param_1 + 0xdaa)) {
      FUN_004e6070(param_2,param_1,&DAT_00613d68,0,local_48.top,local_68,&local_1c,1);
    }
  }
LAB_004e5c8f:
  iVar5 = local_48.top / 2;
  FUN_004e5380(param_1,param_2,&DAT_00613d68,iVar5,local_48.top,local_68,&local_38,0);
  if (1 < *(ushort *)(param_1 + 0xdaa)) {
    FUN_004e5380(param_1,param_2,&DAT_00613d68,iVar5,local_48.top,local_68,&local_38,1);
    color = GetSysColor(6);
    SetBkColor(param_2,color);
    local_48.left = *(int *)(param_1 + 0xac0);
    local_48.top = *(int *)(param_1 + 0xac4) + local_48.top;
    local_48.right = local_48.left + uVar7;
    local_48.bottom = local_48.top + 1;
    ExtTextOutA(param_2,0,0,2,&local_48,(LPCSTR)0x0,0,(INT *)0x0);
  }
  return;
}


