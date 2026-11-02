/* Module: vidcap30.exe
   Function: FUN_00518870
   Address: 00518870
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00518870(int param_1,HDC param_2,int *param_3)

{
  BITMAPINFO *lpbmi;
  int iVar1;
  HBRUSH hbr;
  HGDIOBJ pvVar2;
  HGDIOBJ h;
  tagRECT local_20;
  tagRECT local_10;
  
  local_20.left = *(int *)(param_1 + 0x58);
  local_20.top = *(int *)(param_1 + 0x5c);
  local_20.right = *(int *)(param_1 + 0x60);
  local_20.bottom = *(int *)(param_1 + 100);
  OffsetRect(&local_20,*param_3 - *(int *)(param_1 + 0x58),param_3[1] - *(int *)(param_1 + 0x5c));
  if ((*(int *)(param_1 + 0x100) == 0) || (*(int *)(param_1 + 0x104) == 0)) {
    hbr = (HBRUSH)_SfGetUIBrush_4(0xf);
    FillRect(param_2,&local_20,hbr);
  }
  else {
    iVar1 = SetStretchBltMode(param_2,3);
    lpbmi = *(BITMAPINFO **)(param_1 + 0x100);
    StretchDIBits(param_2,local_20.left,local_20.top,local_20.right - local_20.left,
                  local_20.bottom - local_20.top,0,0,(lpbmi->bmiHeader).biWidth,
                  (lpbmi->bmiHeader).biHeight,*(void **)(param_1 + 0x104),lpbmi,0,0xcc0020);
    SetStretchBltMode(param_2,iVar1);
  }
  pvVar2 = (HGDIOBJ)_SfGetUIBrush_4(0x10);
  pvVar2 = SelectObject(param_2,pvVar2);
  if (((*(int *)(param_1 + 0x100) == 0) || (*(int *)(param_1 + 0x104) == 0)) ||
     ((*(byte *)(param_1 + 4) & 0x80) != 0)) {
    local_10.left = *(int *)(param_1 + 0xb8);
    local_10.top = *(int *)(param_1 + 0xbc);
    local_10.right = *(int *)(param_1 + 0xc0);
    local_10.bottom = *(int *)(param_1 + 0xc4);
    local_20.left = *(int *)(param_1 + 0xd8);
    local_20.top = *(int *)(param_1 + 0xdc);
    local_20.right = *(int *)(param_1 + 0xe0);
    local_20.bottom = *(int *)(param_1 + 0xe4);
    OffsetRect(&local_20,*param_3 - *(int *)(param_1 + 0x58),param_3[1] - *(int *)(param_1 + 0x5c));
    OffsetRect(&local_10,*param_3 - *(int *)(param_1 + 0x58),param_3[1] - *(int *)(param_1 + 0x5c));
    if (*(int *)(param_1 + 0xa8) != *(int *)(param_1 + 200)) {
      PatBlt(param_2,local_20.left,local_10.top,1,local_10.bottom - local_10.top,0xf00021);
    }
    if (*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0xd0)) {
      PatBlt(param_2,local_20.right,local_10.top,1,local_10.bottom - local_10.top,0xf00021);
    }
    if (*(int *)(param_1 + 0xac) != *(int *)(param_1 + 0xcc)) {
      PatBlt(param_2,local_10.left,local_20.top,local_10.right - local_10.left,1,0xf00021);
    }
    if (*(int *)(param_1 + 0xb4) != *(int *)(param_1 + 0xd4)) {
      PatBlt(param_2,local_10.left,local_20.bottom,local_10.right - local_10.left,1,0xf00021);
    }
    local_20.left = *(int *)(param_1 + 0xe8);
    local_20.top = *(int *)(param_1 + 0xec);
    local_20.right = *(int *)(param_1 + 0xf0);
    local_20.bottom = *(int *)(param_1 + 0xf4);
    OffsetRect(&local_20,*param_3 - *(int *)(param_1 + 0x58),param_3[1] - *(int *)(param_1 + 0x5c));
    if (*(int *)(param_1 + 0x48) != *(int *)(param_1 + 200)) {
      PatBlt(param_2,local_20.left,local_10.top,1,local_10.bottom - local_10.top,0xf00021);
    }
    if (*(int *)(param_1 + 0x50) != *(int *)(param_1 + 0xd0)) {
      PatBlt(param_2,local_20.right,local_10.top,1,local_10.bottom - local_10.top,0xf00021);
    }
    if (*(int *)(param_1 + 0x4c) != *(int *)(param_1 + 0xcc)) {
      PatBlt(param_2,local_10.left,local_20.top,local_10.right - local_10.left,1,0xf00021);
    }
    if (*(int *)(param_1 + 0x54) != *(int *)(param_1 + 0xd4)) {
      PatBlt(param_2,local_10.left,local_20.bottom,local_10.right - local_10.left,1,0xf00021);
    }
  }
  if (((*(uint *)(param_1 + 4) & 0x10) != 0) &&
     (((*(int *)(param_1 + 0x100) == 0 || (*(int *)(param_1 + 0x104) == 0)) ||
      ((*(uint *)(param_1 + 4) & 0x40) != 0)))) {
    PatBlt(param_2,*param_3,param_3[1],1,(param_3[3] - param_3[1]) + -1,0xf00021);
    PatBlt(param_2,*param_3,param_3[1],(param_3[2] - *param_3) + -1,1,0xf00021);
    PatBlt(param_2,param_3[2] + -2,param_3[1],1,(param_3[3] - param_3[1]) + -1,0xf00021);
    PatBlt(param_2,*param_3,param_3[3] + -2,(param_3[2] - *param_3) + -1,1,0xf00021);
  }
  h = (HGDIOBJ)_SfGetUIBrush_4(0x14);
  SelectObject(param_2,h);
  if (((*(int *)(param_1 + 0x100) == 0) || (*(int *)(param_1 + 0x104) == 0)) ||
     ((*(byte *)(param_1 + 4) & 0x80) != 0)) {
    local_20.left = *(int *)(param_1 + 0xd8);
    local_20.top = *(int *)(param_1 + 0xdc);
    local_20.right = *(int *)(param_1 + 0xe0);
    local_20.bottom = *(int *)(param_1 + 0xe4);
    OffsetRect(&local_20,*param_3 - *(int *)(param_1 + 0x58),param_3[1] - *(int *)(param_1 + 0x5c));
    if (*(int *)(param_1 + 0xa8) != *(int *)(param_1 + 200)) {
      PatBlt(param_2,local_20.left + 1,local_10.top,1,local_10.bottom - local_10.top,0xf00021);
    }
    if (*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0xd0)) {
      PatBlt(param_2,local_20.right + 1,local_10.top,1,local_10.bottom - local_10.top,0xf00021);
    }
    if (*(int *)(param_1 + 0xac) != *(int *)(param_1 + 0xcc)) {
      PatBlt(param_2,local_10.left,local_20.top + 1,local_10.right - local_10.left,1,0xf00021);
    }
    if (*(int *)(param_1 + 0xb4) != *(int *)(param_1 + 0xd4)) {
      PatBlt(param_2,local_10.left,local_20.bottom + 1,local_10.right - local_10.left,1,0xf00021);
    }
    local_20.left = *(int *)(param_1 + 0xe8);
    local_20.top = *(int *)(param_1 + 0xec);
    local_20.right = *(int *)(param_1 + 0xf0);
    local_20.bottom = *(int *)(param_1 + 0xf4);
    OffsetRect(&local_20,*param_3 - *(int *)(param_1 + 0x58),param_3[1] - *(int *)(param_1 + 0x5c));
    iVar1 = FUN_00517620(param_1,5);
    if (iVar1 != 0) {
      PatBlt(param_2,local_20.left + 1,local_10.top,1,local_10.bottom - local_10.top,0xf00021);
    }
    iVar1 = FUN_00517620(param_1,6);
    if (iVar1 != 0) {
      PatBlt(param_2,local_20.right + 1,local_10.top,1,local_10.bottom - local_10.top,0xf00021);
    }
    iVar1 = FUN_00517620(param_1,7);
    if (iVar1 != 0) {
      PatBlt(param_2,local_10.left,local_20.top + 1,local_10.right - local_10.left,1,0xf00021);
    }
    iVar1 = FUN_00517620(param_1,8);
    if (iVar1 != 0) {
      PatBlt(param_2,local_10.left,local_20.bottom + 1,local_10.right - local_10.left,1,0xf00021);
    }
  }
  if (((*(uint *)(param_1 + 4) & 0x10) != 0) &&
     (((*(int *)(param_1 + 0x100) == 0 || (*(int *)(param_1 + 0x104) == 0)) ||
      ((*(uint *)(param_1 + 4) & 0x40) != 0)))) {
    PatBlt(param_2,*param_3 + 1,param_3[1] + 1,1,(param_3[3] - param_3[1]) + -3,0xf00021);
    PatBlt(param_2,*param_3 + 1,param_3[1] + 1,(param_3[2] - *param_3) + -3,1,0xf00021);
    PatBlt(param_2,param_3[2] + -1,param_3[1],1,param_3[3] - param_3[1],0xf00021);
    PatBlt(param_2,*param_3,param_3[3] + -1,param_3[2] - *param_3,1,0xf00021);
  }
  SelectObject(param_2,pvVar2);
  return;
}


