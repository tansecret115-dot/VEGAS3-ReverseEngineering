/* Module: vegas30.exe
   Function: FUN_00455e60
   Address: 00455e60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00456038) */
/* WARNING: Removing unreachable block (ram,0x00455f64) */
/* WARNING: Removing unreachable block (ram,0x004560bf) */

void FUN_00455e60(int param_1,HDC param_2,RECT *param_3,int param_4)

{
  RECT *lprect;
  int iVar1;
  ulonglong uVar2;
  BOOL BVar3;
  uint uVar4;
  DWORD color;
  HGDIOBJ ho;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  HDC local_460;
  tagRECT local_45c;
  tagRECT local_44c;
  RECT local_43c;
  HBITMAP local_42c;
  BITMAPINFO local_428 [24];
  
  local_42c = (HBITMAP)0x0;
  if (*(int *)(param_1 + 0xb90) == 0 && *(int *)(param_1 + 0xb94) == 0) {
    return;
  }
  if ((param_3 == (RECT *)0x0) || (BVar3 = IsRectEmpty(param_3), BVar3 != 0)) {
    GetClipBox(param_2,&local_44c);
  }
  else {
    GetClipBox(param_2,&local_45c);
    IntersectRect(&local_44c,&local_45c,param_3);
  }
  BVar3 = IsRectEmpty(&local_44c);
  if (BVar3 != 0) {
    return;
  }
  local_45c.top = *(uint *)(param_1 + 0xb94);
  *(undefined4 *)(param_1 + 0xb84) = 0;
  local_45c.left = *(uint *)(param_1 + 0xb90);
  if (local_45c.left == 0 && local_45c.top == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    lVar8 = ftol();
    uVar2 = lVar8 + *(int *)(param_1 + 0xac0);
    uVar5 = (uint)uVar2;
    if ((uVar2 < 0x8000000000000000) || ((-0x100000001 < (longlong)uVar2 && (0xffffbfff < uVar5))))
    {
      if (0x3fff < (longlong)uVar2) {
        uVar5 = 0x3fff;
      }
    }
    else {
      uVar5 = 0xffffc000;
    }
  }
  uVar7 = *(uint *)(param_1 + 0xb78);
  *(uint *)(param_1 + 0xb80) = uVar5;
  if (uVar7 != 0 || *(int *)(param_1 + 0xb7c) != 0) {
    uVar5 = *(uint *)(param_1 + 0xb70);
    iVar1 = *(int *)(param_1 + 0xb74);
    uVar4 = uVar7 + uVar5;
    iVar6 = *(int *)(param_1 + 0xb7c) + iVar1 + (uint)CARRY4(uVar7,uVar5);
    local_43c.left = uVar4;
    local_43c.top = iVar6;
    if ((iVar1 <= iVar6) && ((iVar1 < iVar6 || (uVar5 < uVar4)))) {
      local_43c.left = uVar5;
      local_43c.top = iVar1;
    }
    if ((iVar6 <= iVar1) && ((iVar6 < iVar1 || (uVar4 < uVar5)))) {
      iVar6 = iVar1;
      uVar4 = uVar5;
    }
    if (local_45c.left == 0 && local_45c.top == 0) {
      local_43c.left = 0xffffffff;
    }
    else {
      lVar8 = ftol();
      local_43c.top = (LONG)((ulonglong)lVar8 >> 0x20);
      uVar2 = lVar8 + *(int *)(param_1 + 0xac0);
      local_43c.left = (LONG)uVar2;
      if ((uVar2 < 0x8000000000000000) ||
         ((-0x100000001 < (longlong)uVar2 && (0xffffbfff < (uint)local_43c.left)))) {
        if (0x3fff < (longlong)uVar2) {
          local_43c.left = 0x3fff;
        }
      }
      else {
        local_43c.left = 0xffffc000;
      }
    }
    if (local_45c.left == 0 && local_45c.top == 0) {
      uVar5 = 0xffffffff;
    }
    else {
      local_45c.left = uVar4 + 1;
      local_45c.top = iVar6 + (uint)(0xfffffffe < uVar4);
      lVar8 = ftol();
      uVar2 = lVar8 + *(int *)(param_1 + 0xac0);
      uVar5 = (uint)uVar2;
      if ((uVar2 < 0x8000000000000000) || ((-0x100000001 < (longlong)uVar2 && (0xffffbfff < uVar5)))
         ) {
        if (0x3fff < (longlong)uVar2) {
          uVar5 = 0x3fff;
        }
      }
      else {
        uVar5 = 0xffffc000;
      }
    }
    uVar7 = *(uint *)(param_1 + 0xac0);
    if ((int)*(uint *)(param_1 + 0xac0) < local_43c.left) {
      uVar7 = local_43c.left;
    }
    *(uint *)(param_1 + 0xb80) = uVar7;
    uVar4 = *(uint *)(param_1 + 0xac8);
    if ((int)uVar5 < (int)*(uint *)(param_1 + 0xac8)) {
      uVar4 = uVar5;
    }
    *(uint *)(param_1 + 0xb84) = uVar4 - uVar7;
  }
  local_460 = (HDC)0x0;
  lprect = (RECT *)(param_1 + 0xac0);
  local_43c.left = RectVisible(param_2,lprect);
  if ((*(uint *)(param_1 + 0x18) & 0x200) != 0) {
    if (*(HDC *)(param_1 + 0xd1c) == (HDC)0x0) {
      return;
    }
    BitBlt(param_2,local_44c.left,local_44c.top,local_44c.right - local_44c.left,
           local_44c.bottom - local_44c.top,*(HDC *)(param_1 + 0xd1c),local_44c.left,local_44c.top,
           0xcc0020);
    if (local_43c.left == 0) {
      return;
    }
    FUN_00455bd0(param_1,param_2,&local_44c);
    return;
  }
  if ((*(HDC *)(param_1 + 0xd1c) != (HDC)0x0) && (*(int *)(param_1 + 0xd3c) == 5)) {
    IntersectClipRect(*(HDC *)(param_1 + 0xd1c),lprect->left,*(int *)(param_1 + 0xac4),
                      *(int *)(param_1 + 0xac8),*(int *)(param_1 + 0xacc));
    FUN_00455bd0(param_1,*(undefined4 *)(param_1 + 0xd1c),lprect);
    SelectClipRgn(*(HDC *)(param_1 + 0xd1c),(HRGN)0x0);
    local_45c.right = *(LONG *)(param_1 + 0x10);
    local_45c.bottom = *(LONG *)(param_1 + 0x14);
    local_45c.left = 0;
    local_45c.top = 0;
    FUN_00455420(param_1,*(undefined4 *)(param_1 + 0xd1c),&local_45c);
    BitBlt(param_2,local_44c.left,local_44c.top,local_44c.right - local_44c.left,
           local_44c.bottom - local_44c.top,*(HDC *)(param_1 + 0xd1c),local_44c.left,local_44c.top,
           0xcc0020);
    color = GetSysColor(0xf);
    SetBkColor(param_2,color);
    local_43c.left = *(int *)(param_1 + 0xd20);
    if (local_43c.left < local_44c.right) {
      local_43c.right = local_44c.right;
      local_43c.top = local_44c.top;
      local_43c.bottom = local_44c.bottom;
      ExtTextOutA(param_2,0,0,2,&local_43c,(LPCSTR)0x0,0,(INT *)0x0);
    }
    local_43c.top = *(int *)(param_1 + 0xd24);
    if (local_44c.bottom <= local_43c.top) {
      return;
    }
    local_43c.bottom = local_44c.bottom;
    local_43c.left = local_44c.left;
    ExtTextOutA(param_2,0,0,2,&local_43c,(LPCSTR)0x0,0,(INT *)0x0);
    return;
  }
  if ((param_4 == 0) || (local_460 = CreateCompatibleDC(param_2), local_460 == (HDC)0x0))
  goto LAB_004563b6;
  local_45c.left = local_44c.left & 0xfffffff8;
  local_45c.top = local_44c.top & 0xfffffff8;
  local_45c.right = local_44c.right;
  local_45c.bottom = local_44c.bottom;
  if ((DAT_006471f4 == 0) || ((*(uint *)(param_1 + 0xabc) & 0x2000000) == 0)) {
    local_42c = CreateCompatibleBitmap
                          (param_2,local_44c.right - local_45c.left,local_44c.bottom - local_45c.top
                          );
LAB_0045636f:
    if (local_42c != (HBITMAP)0x0) {
      local_42c = SelectObject(local_460,local_42c);
      SetWindowOrgEx(local_460,local_45c.left,local_45c.top,(LPPOINT)0x0);
      FUN_004aabe0(param_1,local_460);
      goto LAB_004563b6;
    }
  }
  else {
    _SfVideo_InitBitmapInfo_28
              (local_428,0x1b,local_44c.right - local_45c.left,local_44c.bottom - local_45c.top,0,0,
               0);
    local_42c = CreateDIBSection(param_2,local_428,0,(void **)(param_1 + 0xd4c),(HANDLE)0x0,0);
    if (local_42c != (HBITMAP)0x0) {
      *(BITMAPINFO **)(param_1 + 0xd44) = local_428;
      *(tagRECT **)(param_1 + 0xd48) = &local_45c;
      goto LAB_0045636f;
    }
  }
  DeleteDC(local_460);
  local_460 = (HDC)0x0;
LAB_004563b6:
  if (local_43c.left != 0) {
    IntersectClipRect(param_2,*(int *)(param_1 + 0xac0),*(int *)(param_1 + 0xac4),
                      *(int *)(param_1 + 0xac8),*(int *)(param_1 + 0xacc));
    GetClipBox(param_2,&local_45c);
    if (local_460 == (HDC)0x0) {
      FUN_00455bd0(param_1,param_2,&local_45c);
    }
    else {
      IntersectClipRect(local_460,local_45c.left,local_45c.top,local_45c.right,local_45c.bottom);
      FUN_00455bd0(param_1,local_460,&local_45c);
      SelectClipRgn(local_460,(HRGN)0x0);
    }
    SelectClipRgn(param_2,(HRGN)0x0);
  }
  if (local_460 == (HDC)0x0) {
    FUN_00455420(param_1,param_2,&local_44c);
    if (*(int *)(param_1 + 0x5cc) != 0) {
      if (*(int *)(param_1 + 0x16c) != 0) {
        IntersectClipRect(param_2,*(int *)(param_1 + 0xac0),*(int *)(param_1 + 0xac4),
                          *(int *)(param_1 + 0xac8),*(int *)(param_1 + 0xacc));
        FUN_004add50(param_1);
        SelectClipRgn(param_2,(HRGN)0x0);
      }
      *(undefined4 *)(param_1 + 0x5cc) = 0;
    }
  }
  else {
    FUN_00455420(param_1,local_460,&local_44c);
    if (*(int *)(param_1 + 0x5cc) != 0) {
      if (*(int *)(param_1 + 0x16c) != 0) {
        IntersectClipRect(local_460,*(int *)(param_1 + 0xac0),*(int *)(param_1 + 0xac4),
                          *(int *)(param_1 + 0xac8),*(int *)(param_1 + 0xacc));
        FUN_004add50(param_1);
        SelectClipRgn(local_460,(HRGN)0x0);
      }
      *(undefined4 *)(param_1 + 0x5cc) = 0;
    }
    FUN_004aabe0(param_1,0);
    BitBlt(param_2,local_44c.left,local_44c.top,local_44c.right - local_44c.left,
           local_44c.bottom - local_44c.top,local_460,local_44c.left,local_44c.top,0xcc0020);
    ho = SelectObject(local_460,local_42c);
    DeleteObject(ho);
    DeleteDC(local_460);
  }
  *(undefined4 *)(param_1 + 0xd44) = 0;
  *(undefined4 *)(param_1 + 0xd4c) = 0;
  *(undefined4 *)(param_1 + 0xd48) = 0;
  return;
}


