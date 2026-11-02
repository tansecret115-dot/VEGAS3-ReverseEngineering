/* Module: vegas30.exe
   Function: FUN_00426140
   Address: 00426140
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00426140(int param_1,HDC param_2,int param_3)

{
  LPRECT lprcDst;
  int iVar1;
  HGDIOBJ pvVar2;
  int iVar3;
  undefined4 uVar4;
  HDC hdc;
  int *piVar5;
  uint uVar6;
  LPCSTR lpString;
  bool bVar7;
  tagSIZE *lpsz;
  HDC local_74;
  int local_70;
  int local_6c;
  tagSIZE local_68;
  tagSIZE local_60;
  int local_54;
  tagRECT local_50;
  undefined1 local_40 [24];
  undefined4 local_28;
  undefined4 uStack_24;
  
  piVar5 = (int *)(param_1 + 0xa8);
  lprcDst = (LPRECT)(param_1 + 0xec);
  local_60.cy = 0;
  *piVar5 = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  lprcDst->left = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  local_54 = param_3;
  if (((DAT_006487d0 == 0) || ((int)param_2 < 0x79)) || (param_3 < 1)) {
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
  }
  *(int *)(param_1 + 0xa4) = iVar1;
  if (iVar1 != 0) {
    InvalidateRect(*(HWND *)(param_1 + 0xb8),(RECT *)0x0,1);
    InvalidateRect(*(HWND *)(param_1 + 0xd0),(RECT *)0x0,1);
    FUN_00412930(param_1,0,piVar5,0,0,0,0,0,0);
    local_60.cy = *(int *)(param_1 + 0xb4);
  }
  bVar7 = DAT_00649e04 != 0;
  *(int *)(param_1 + 0xbc) = DAT_00649e04;
  if (bVar7) {
    local_74 = GetDC(*(HWND *)(param_1 + 0xd0));
    pvVar2 = (HGDIOBJ)_SfGetUIFont_4(100);
    SelectObject(local_74,pvVar2);
    lpsz = &local_68;
    iVar1 = lstrlenA("Vegas.VideoPreviewStatus");
    GetTextExtentPointA(local_74,"Vegas.VideoPreviewStatus",iVar1,lpsz);
    ReleaseDC(*(HWND *)(param_1 + 0xd0),local_74);
    *(undefined4 *)(param_1 + 0xc0) = 0;
    *(int *)(param_1 + 0xcc) = param_3;
    local_54 = param_3 - (local_68.cy * 2 + 2);
    *(int *)(param_1 + 0xc4) = local_54;
    *(HDC *)(param_1 + 200) = param_2;
  }
  iVar1 = local_54 - local_60.cy;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if ((iVar1 < 1) || ((int)param_2 < 1)) {
    iVar3 = 0;
  }
  else {
    iVar3 = 1;
  }
  *(int *)(param_1 + 0xd4) = iVar3;
  if (iVar3 != 0) {
    *(undefined4 *)(param_1 + 0xd8) = 0;
    *(LONG *)(param_1 + 0xdc) = local_60.cy;
    *(HDC *)(param_1 + 0xe0) = param_2;
    *(int *)(param_1 + 0xe4) = local_54;
    if (*(int *)(param_1 + 0x98) != 0) {
      *(HDC *)(param_1 + 0x110) = param_2;
      local_74 = param_2;
      *(int *)(param_1 + 0x114) = iVar1;
      local_70 = iVar1;
      if (DAT_00647e48 == 0) {
        FUN_005ba670(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x90),&local_6c,
                     local_40,&local_68,0);
        if (DAT_00647e50 != 0) {
          local_68.cx = ftol();
        }
      }
      else {
        FUN_005ba670(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x90),&local_6c,
                     local_40,&local_68,0);
        FUN_00424050(&local_68,&local_74,local_28,uStack_24);
      }
      if ((local_68.cx < 1) || (local_68.cy < 1)) {
        iVar1 = 0;
      }
      else {
        iVar1 = 1;
      }
      *(int *)(param_1 + 0xe8) = iVar1;
      if (iVar1 != 0) {
        iVar1 = ((int)param_2 - local_68.cx) / 2;
        *(int *)(param_1 + 0x100) = iVar1;
        *(int *)(param_1 + 0x108) = iVar1 + local_68.cx;
        iVar1 = ((local_60.cy - local_68.cy) + local_54) / 2;
        *(int *)(param_1 + 0x104) = iVar1;
        *(int *)(param_1 + 0x10c) = iVar1 + local_68.cy;
      }
      IntersectRect(lprcDst,(RECT *)(param_1 + 0x100),(RECT *)(param_1 + 0xd8));
      OffsetRect((LPRECT)(param_1 + 0x100),-lprcDst->left,-*(int *)(param_1 + 0xf0));
    }
  }
  SetWindowPos(*(HWND *)(param_1 + 0xb8),(HWND)0x0,*piVar5,*(int *)(param_1 + 0xac),
               *(int *)(param_1 + 0xb0) - *piVar5,
               *(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0xac),
               (-(uint)(*(int *)(param_1 + 0xa4) != 0) & 0xffffffc0) + 0x80 | 0x14);
  SetWindowPos(*(HWND *)(param_1 + 0xd0),(HWND)0x0,*(int *)(param_1 + 0xc0),*(int *)(param_1 + 0xc4)
               ,*(int *)(param_1 + 200) - *(int *)(param_1 + 0xc0),
               *(int *)(param_1 + 0xcc) - *(int *)(param_1 + 0xc4),
               (-(uint)(*(int *)(param_1 + 0xbc) != 0) & 0xffffffc0) + 0x80 | 0x14);
  SetWindowPos(*(HWND *)(param_1 + 0xfc),(HWND)0x0,lprcDst->left,*(int *)(param_1 + 0xf0),
               *(int *)(param_1 + 0xf4) - lprcDst->left,
               *(int *)(param_1 + 0xf8) - *(int *)(param_1 + 0xf0),
               (-(uint)(*(int *)(param_1 + 0xe8) != 0) & 0xffffffc0) + 0x80 | 0x114);
  lpString = (LPCSTR)(param_1 + 0x130);
  piVar5 = (int *)(param_1 + 0x450);
  iVar1 = SfPrintF(lpString,"Project:");
  *piVar5 = iVar1;
  uVar4 = SfPrintF(param_1 + 0x194,"Preview:");
  *(undefined4 *)(param_1 + 0x454) = uVar4;
  uVar4 = SfPrintF(param_1 + 0x1f8,"Frame:");
  *(undefined4 *)(param_1 + 0x458) = uVar4;
  uVar4 = SfPrintF(param_1 + 0x25c,"Display:");
  *(undefined4 *)(param_1 + 0x45c) = uVar4;
  local_74 = (HDC)0x0;
  hdc = GetDC(*(HWND *)(param_1 + 0xd0));
  pvVar2 = (HGDIOBJ)_SfGetUIFont_4(100);
  local_68.cx = (LONG)SelectObject(hdc,pvVar2);
  local_6c = 4;
  do {
    GetTextExtentPointA(hdc,lpString,*piVar5,&local_60);
    if ((int)local_74 < local_60.cx) {
      local_74 = (HDC)local_60.cx;
    }
    piVar5 = piVar5 + 1;
    lpString = lpString + 100;
    local_6c = local_6c + -1;
  } while (local_6c != 0);
  SelectObject(hdc,(HGDIOBJ)local_68.cx);
  ReleaseDC(*(HWND *)(param_1 + 0xd0),hdc);
  GetClientRect(*(HWND *)(param_1 + 0xd0),&local_50);
  local_74 = local_74 + 1;
  iVar3 = (local_50.right - local_50.left) / 2;
  *(int *)(param_1 + 0x4f0) = (iVar3 - (int)local_74) + -8;
  piVar5 = (int *)(param_1 + 0x478);
  iVar1 = (local_50.bottom + local_50.top + 2) / 2;
  uVar6 = 0;
  do {
    if ((uVar6 & 4) == 0) {
      piVar5[-2] = 0;
      *piVar5 = (int)local_74;
    }
    else {
      piVar5[-2] = (int)local_74;
      *piVar5 = (int)&local_74->unused + *(int *)(param_1 + 0x4f0);
    }
    if ((uVar6 & 2) != 0) {
      piVar5[-2] = piVar5[-2] + iVar3;
      *piVar5 = *piVar5 + iVar3;
    }
    if ((uVar6 & 1) == 0) {
      piVar5[-1] = local_50.top + 2;
      piVar5[1] = iVar1;
    }
    else {
      piVar5[-1] = iVar1;
      piVar5[1] = local_50.bottom;
    }
    uVar6 = uVar6 + 1;
    piVar5 = piVar5 + 4;
  } while ((int)uVar6 < 8);
  return;
}


