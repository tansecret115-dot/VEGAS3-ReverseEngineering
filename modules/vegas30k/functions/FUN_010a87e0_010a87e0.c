/* Module: vegas30k.dll
   Function: FUN_010a87e0
   Address: 010a87e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010a87e0(int param_1,HDC param_2,RECT *param_3)

{
  int *piVar1;
  uint uVar2;
  HDC hdcSrc;
  HWND hWnd;
  HBRUSH hbr;
  HGDIOBJ h;
  int iVar3;
  DWORD color;
  int iVar4;
  int x1;
  int iVar5;
  int local_8;
  int local_4;
  
  hWnd = *(HWND *)(param_1 + 0x38);
  if (hWnd == (HWND)0x0) {
    hWnd = GetParent(*(HWND *)(param_1 + 0x30));
  }
  hbr = (HBRUSH)SendMessageA(hWnd,0x136,(WPARAM)param_2,*(LPARAM *)(param_1 + 0x30));
  FillRect(param_2,(RECT *)(param_1 + 0x50),hbr);
  hdcSrc = DAT_0128e92c;
  if ((*(uint *)(param_1 + 0xc) & 0x200) == 0) {
    color = GetSysColor(5);
    SetBkColor(param_2,color);
    if ((*(uint *)(param_1 + 0xc) & 0x100) == 0) {
      FillRect(param_2,param_3,hbr);
    }
    FUN_010aa420(param_1,param_2,param_1 + 0x60,param_3,hbr);
    FUN_010a9890(param_1,param_2,param_1 + 0x60);
    FUN_010a8ce0(param_1,param_2);
    return;
  }
  if (*(HGDIOBJ *)(param_1 + 0x110) == (HGDIOBJ)0x0) {
    FillRect(param_2,(RECT *)(param_1 + 0x3c),hbr);
    return;
  }
  h = SelectObject(DAT_0128e92c,*(HGDIOBJ *)(param_1 + 0x110));
  uVar2 = *(uint *)(param_1 + 0xc);
  if ((uVar2 & 0x800) != 0) {
    FUN_010aa420(param_1,param_2,param_1 + 0x60,param_3,hbr);
    FUN_010a9890(param_1,param_2,param_1 + 0x60);
    FUN_010a8ce0(param_1,param_2);
    goto LAB_010a8c75;
  }
  if (((uVar2 & 0x60) == 0) && ((uVar2 & 0x80) != 0)) {
    BitBlt(param_2,param_3->left,param_3->top,param_3->right - param_3->left,
           param_3->bottom - param_3->top,hdcSrc,0,0,0xcc0020);
  }
  uVar2 = *(uint *)(param_1 + 0xc);
  if ((uVar2 & 0x80) != 0) goto LAB_010a8c75;
  if ((uVar2 & 0x60) == 0) {
    iVar5 = *(int *)(param_1 + 0x44);
    iVar3 = *(int *)(param_1 + 0x48);
    if ((uVar2 & 8) == 0) {
      iVar3 = *(int *)(param_1 + 0xbc);
    }
    else {
      iVar5 = *(int *)(param_1 + 0xb8);
    }
    BitBlt(param_2,*(int *)(param_1 + 0x3c),*(int *)(param_1 + 0x40),
           iVar5 - *(int *)(param_1 + 0x3c),iVar3 - *(int *)(param_1 + 0x40),hdcSrc,0,0,0xcc0020);
    iVar5 = *(int *)(param_1 + 0x3c);
    iVar3 = *(int *)(param_1 + 0x40);
    if ((*(byte *)(param_1 + 0xc) & 8) == 0) {
      iVar3 = *(int *)(param_1 + 0xa0 + *(int *)(param_1 + 0x24) * 0x24);
    }
    else {
      iVar5 = *(int *)(param_1 + 0x9c + *(int *)(param_1 + 0x24) * 0x24);
    }
    BitBlt(param_2,iVar5,iVar3,*(int *)(param_1 + 0x44) - iVar5,*(int *)(param_1 + 0x48) - iVar3,
           hdcSrc,iVar5 - *(int *)(param_1 + 0x3c),iVar3 - *(int *)(param_1 + 0x40),0xcc0020);
  }
  param_3 = (RECT *)0x0;
  if (*(int *)(param_1 + 0x24) != 0) {
    do {
      iVar3 = param_1 + (int)param_3 * 0x24;
      piVar1 = (int *)(iVar3 + 0xb8);
      BitBlt(param_2,*piVar1,*(int *)(iVar3 + 0xbc),*(int *)(iVar3 + 0xc0) - *piVar1,
             *(int *)(iVar3 + 0xc4) - *(int *)(iVar3 + 0xbc),hdcSrc,*(int *)(iVar3 + 0xcc),
             *(int *)(param_1 + 0xd0 + (int)param_3 * 0x24),0xcc0020);
      uVar2 = *(uint *)(param_1 + 0xc);
      if ((uVar2 & 0x60) == 0) {
        iVar5 = *piVar1;
        iVar4 = *(int *)(iVar3 + 0xbc);
        local_8 = *(int *)(iVar3 + 0xc0);
        local_4 = *(int *)(iVar3 + 0xc4);
        if ((uVar2 & 8) == 0) {
          local_8 = *piVar1;
          iVar5 = *(int *)(param_1 + 0x3c);
          if (((uVar2 & 0x10) != 0) && (param_3 == (RECT *)0x0)) {
            local_4 = local_4 + -1;
          }
          if (((uVar2 & 0x10) != 0) && (param_3 == (RECT *)0x1)) {
            iVar4 = iVar4 + 1;
          }
        }
        else {
          local_4 = *(int *)(iVar3 + 0xbc);
          iVar4 = *(int *)(param_1 + 0x40);
          if (((uVar2 & 0x10) != 0) && (param_3 == (RECT *)0x0)) {
            local_8 = local_8 + -1;
          }
          if (((uVar2 & 0x10) != 0) && (param_3 == (RECT *)0x1)) {
            iVar5 = iVar5 + 1;
          }
        }
        BitBlt(param_2,iVar5,iVar4,local_8 - iVar5,local_4 - iVar4,hdcSrc,
               iVar5 - *(int *)(param_1 + 0x3c),iVar4 - *(int *)(param_1 + 0x40),0xcc0020);
        if ((*(byte *)(param_1 + 0xc) & 8) == 0) {
          local_8 = *(int *)(param_1 + 0x44);
          iVar5 = *(int *)(iVar3 + 0xc0);
        }
        else {
          local_4 = *(int *)(param_1 + 0x48);
          iVar4 = *(int *)(iVar3 + 0xc4);
        }
        BitBlt(param_2,iVar5,iVar4,local_8 - iVar5,local_4 - iVar4,hdcSrc,
               iVar5 - *(int *)(param_1 + 0x3c),iVar4 - *(int *)(param_1 + 0x40),0xcc0020);
      }
      param_3 = (RECT *)((int)param_3 + 1);
    } while (param_3 < *(uint *)(param_1 + 0x24));
  }
  uVar2 = *(uint *)(param_1 + 0xc);
  if (((uVar2 & 0x10) == 0) || ((uVar2 & 0x60) != 0)) goto LAB_010a8c75;
  if ((uVar2 & 8) == 0) {
    local_8 = *(int *)(param_1 + 0xb8);
    iVar4 = *(int *)(param_1 + 0xdc);
    local_4 = *(int *)(param_1 + 0xe0);
    iVar3 = *(int *)(param_1 + 0xc4);
    iVar5 = *(int *)(param_1 + 0x3c);
    if (iVar4 <= local_8) goto LAB_010a8b32;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x40);
    local_4 = *(int *)(param_1 + 0xbc);
    if (*(int *)(param_1 + 0xe0) <= *(int *)(param_1 + 0xbc)) {
      local_4 = *(int *)(param_1 + 0xe0);
    }
    iVar5 = *(int *)(param_1 + 0xc0);
    iVar4 = *(int *)(param_1 + 0xb8);
LAB_010a8b32:
    local_8 = iVar4;
  }
  BitBlt(param_2,iVar5,iVar3,local_8 - iVar5,local_4 - iVar3,hdcSrc,iVar5 - *(int *)(param_1 + 0x3c)
         ,iVar3 - *(int *)(param_1 + 0x40),0xcc0020);
  if ((*(byte *)(param_1 + 0xc) & 8) == 0) {
    iVar5 = *(int *)(param_1 + 0xe4);
    if (*(int *)(param_1 + 0xe4) < *(int *)(param_1 + 0xc0)) {
      iVar5 = *(int *)(param_1 + 0xc0);
    }
    local_8 = *(int *)(param_1 + 0x44);
  }
  else {
    iVar3 = *(int *)(param_1 + 0xe8);
    if (*(int *)(param_1 + 0xe8) < *(int *)(param_1 + 0xc4)) {
      iVar3 = *(int *)(param_1 + 0xc4);
    }
    local_4 = *(int *)(param_1 + 0x48);
  }
  local_4 = local_4 - iVar3;
  local_8 = local_8 - iVar5;
  BitBlt(param_2,iVar5,iVar3,local_8,local_4,hdcSrc,iVar5 - *(int *)(param_1 + 0x3c),
         iVar3 - *(int *)(param_1 + 0x40),0xcc0020);
  if ((*(byte *)(param_1 + 0xc) & 8) == 0) {
    iVar5 = *(int *)(param_1 + 0xc0);
    if (*(int *)(param_1 + 0xe4) <= *(int *)(param_1 + 0xc0)) {
      iVar5 = *(int *)(param_1 + 0xe4);
    }
    local_8 = *(int *)(param_1 + 0xb8);
    if (*(int *)(param_1 + 0xb8) <= *(int *)(param_1 + 0xdc)) {
      local_8 = *(int *)(param_1 + 0xdc);
    }
    local_8 = local_8 - iVar5;
    if (local_8 < 1) goto LAB_010a8c75;
    iVar4 = iVar3 - *(int *)(param_1 + 0x40);
    x1 = iVar5 - *(int *)(param_1 + 0x3c);
  }
  else {
    iVar3 = *(int *)(param_1 + 0xc4);
    if (*(int *)(param_1 + 0xe8) <= *(int *)(param_1 + 0xc4)) {
      iVar3 = *(int *)(param_1 + 0xe8);
    }
    local_4 = *(int *)(param_1 + 0xbc);
    if (*(int *)(param_1 + 0xbc) <= *(int *)(param_1 + 0xe0)) {
      local_4 = *(int *)(param_1 + 0xe0);
    }
    local_4 = local_4 - iVar3;
    if (local_4 < 1) goto LAB_010a8c75;
    iVar4 = iVar3 - *(int *)(param_1 + 0x40);
    x1 = iVar5 - *(int *)(param_1 + 0x3c);
  }
  BitBlt(param_2,iVar5,iVar3,local_8,local_4,hdcSrc,x1,iVar4,0xcc0020);
LAB_010a8c75:
  SelectObject(hdcSrc,h);
  return;
}


