/* Module: sfppack2.dll
   Function: FUN_5cd1a470
   Address: 5cd1a470
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cd1a470(uint *param_1,HDC param_2,RECT *param_3)

{
  uint *puVar1;
  HDC hdcSrc;
  HWND hWnd;
  HBRUSH hbr;
  HGDIOBJ h;
  int cy;
  uint uVar2;
  DWORD color;
  int cx;
  int y1;
  int x1;
  uint uVar3;
  uint uVar4;
  uint local_8;
  uint local_4;
  
  hWnd = (HWND)param_1[0xe];
  if (hWnd == (HWND)0x0) {
    hWnd = GetParent((HWND)param_1[0xc]);
  }
  hbr = (HBRUSH)SendMessageA(hWnd,0x136,(WPARAM)param_2,param_1[0xc]);
  FillRect(param_2,(RECT *)(param_1 + 0x14),hbr);
  hdcSrc = DAT_5cd67d84;
  if ((param_1[3] & 0x200) == 0) {
    color = GetSysColor(5);
    SetBkColor(param_2,color);
    if ((param_1[3] & 0x100) == 0) {
      FillRect(param_2,param_3,hbr);
    }
    FUN_5cd1c0b0(param_1,param_2,(int *)(param_1 + 0x18),&param_3->left,hbr);
    FUN_5cd1b520(param_1,param_2,(int *)(param_1 + 0x18));
    FUN_5cd1a970(param_1,param_2);
    return;
  }
  if ((HGDIOBJ)param_1[0x44] == (HGDIOBJ)0x0) {
    FillRect(param_2,(RECT *)(param_1 + 0xf),hbr);
    return;
  }
  h = SelectObject(DAT_5cd67d84,(HGDIOBJ)param_1[0x44]);
  uVar2 = param_1[3];
  if ((uVar2 & 0x800) != 0) {
    FUN_5cd1c0b0(param_1,param_2,(int *)(param_1 + 0x18),&param_3->left,hbr);
    FUN_5cd1b520(param_1,param_2,(int *)(param_1 + 0x18));
    FUN_5cd1a970(param_1,param_2);
    goto LAB_5cd1a905;
  }
  if (((uVar2 & 0x60) == 0) && ((uVar2 & 0x80) != 0)) {
    BitBlt(param_2,param_3->left,param_3->top,param_3->right - param_3->left,
           param_3->bottom - param_3->top,hdcSrc,0,0,0xcc0020);
  }
  uVar2 = param_1[3];
  if ((uVar2 & 0x80) != 0) goto LAB_5cd1a905;
  if ((uVar2 & 0x60) == 0) {
    uVar3 = param_1[0x11];
    uVar4 = param_1[0x12];
    if ((uVar2 & 8) == 0) {
      uVar4 = param_1[0x2f];
    }
    else {
      uVar3 = param_1[0x2e];
    }
    BitBlt(param_2,param_1[0xf],param_1[0x10],uVar3 - param_1[0xf],uVar4 - param_1[0x10],hdcSrc,0,0,
           0xcc0020);
    uVar4 = param_1[0xf];
    uVar2 = param_1[0x10];
    if ((param_1[3] & 8) == 0) {
      uVar2 = param_1[param_1[9] * 9 + 0x28];
    }
    else {
      uVar4 = param_1[param_1[9] * 9 + 0x27];
    }
    BitBlt(param_2,uVar4,uVar2,param_1[0x11] - uVar4,param_1[0x12] - uVar2,hdcSrc,
           uVar4 - param_1[0xf],uVar2 - param_1[0x10],0xcc0020);
  }
  param_3 = (RECT *)0x0;
  if (param_1[9] != 0) {
    do {
      puVar1 = param_1 + (int)param_3 * 9 + 0x2e;
      BitBlt(param_2,*puVar1,param_1[(int)param_3 * 9 + 0x2f],
             param_1[(int)param_3 * 9 + 0x30] - *puVar1,
             param_1[(int)param_3 * 9 + 0x31] - param_1[(int)param_3 * 9 + 0x2f],hdcSrc,
             param_1[(int)param_3 * 9 + 0x33],param_1[(int)param_3 * 9 + 0x34],0xcc0020);
      uVar2 = param_1[3];
      if ((uVar2 & 0x60) == 0) {
        uVar4 = *puVar1;
        uVar3 = param_1[(int)param_3 * 9 + 0x2f];
        local_8 = param_1[(int)param_3 * 9 + 0x30];
        local_4 = param_1[(int)param_3 * 9 + 0x31];
        if ((uVar2 & 8) == 0) {
          local_8 = *puVar1;
          uVar4 = param_1[0xf];
          if (((uVar2 & 0x10) != 0) && (param_3 == (RECT *)0x0)) {
            local_4 = local_4 - 1;
          }
          if (((uVar2 & 0x10) != 0) && (param_3 == (RECT *)0x1)) {
            uVar3 = uVar3 + 1;
          }
        }
        else {
          local_4 = param_1[(int)param_3 * 9 + 0x2f];
          uVar3 = param_1[0x10];
          if (((uVar2 & 0x10) != 0) && (param_3 == (RECT *)0x0)) {
            local_8 = local_8 - 1;
          }
          if (((uVar2 & 0x10) != 0) && (param_3 == (RECT *)0x1)) {
            uVar4 = uVar4 + 1;
          }
        }
        BitBlt(param_2,uVar4,uVar3,local_8 - uVar4,local_4 - uVar3,hdcSrc,uVar4 - param_1[0xf],
               uVar3 - param_1[0x10],0xcc0020);
        if ((param_1[3] & 8) == 0) {
          local_8 = param_1[0x11];
          uVar4 = param_1[(int)param_3 * 9 + 0x30];
        }
        else {
          local_4 = param_1[0x12];
          uVar3 = param_1[(int)param_3 * 9 + 0x31];
        }
        BitBlt(param_2,uVar4,uVar3,local_8 - uVar4,local_4 - uVar3,hdcSrc,uVar4 - param_1[0xf],
               uVar3 - param_1[0x10],0xcc0020);
      }
      param_3 = (RECT *)((int)&param_3->left + 1);
    } while (param_3 < (RECT *)param_1[9]);
  }
  uVar2 = param_1[3];
  if (((uVar2 & 0x10) == 0) || ((uVar2 & 0x60) != 0)) goto LAB_5cd1a905;
  if ((uVar2 & 8) == 0) {
    local_8 = param_1[0x2e];
    uVar3 = param_1[0x37];
    local_4 = param_1[0x38];
    uVar2 = param_1[0x31];
    uVar4 = param_1[0xf];
    if ((int)uVar3 <= (int)local_8) goto LAB_5cd1a7c2;
  }
  else {
    uVar2 = param_1[0x10];
    local_4 = param_1[0x2f];
    if ((int)param_1[0x38] <= (int)param_1[0x2f]) {
      local_4 = param_1[0x38];
    }
    uVar4 = param_1[0x30];
    uVar3 = param_1[0x2e];
LAB_5cd1a7c2:
    local_8 = uVar3;
  }
  BitBlt(param_2,uVar4,uVar2,local_8 - uVar4,local_4 - uVar2,hdcSrc,uVar4 - param_1[0xf],
         uVar2 - param_1[0x10],0xcc0020);
  if ((param_1[3] & 8) == 0) {
    uVar4 = param_1[0x39];
    if ((int)param_1[0x39] < (int)param_1[0x30]) {
      uVar4 = param_1[0x30];
    }
    local_8 = param_1[0x11];
  }
  else {
    uVar2 = param_1[0x3a];
    if ((int)param_1[0x3a] < (int)param_1[0x31]) {
      uVar2 = param_1[0x31];
    }
    local_4 = param_1[0x12];
  }
  cy = local_4 - uVar2;
  cx = local_8 - uVar4;
  BitBlt(param_2,uVar4,uVar2,cx,cy,hdcSrc,uVar4 - param_1[0xf],uVar2 - param_1[0x10],0xcc0020);
  if ((param_1[3] & 8) == 0) {
    uVar4 = param_1[0x30];
    if ((int)param_1[0x39] <= (int)param_1[0x30]) {
      uVar4 = param_1[0x39];
    }
    uVar3 = param_1[0x2e];
    if ((int)param_1[0x2e] <= (int)param_1[0x37]) {
      uVar3 = param_1[0x37];
    }
    cx = uVar3 - uVar4;
    if (cx < 1) goto LAB_5cd1a905;
    y1 = uVar2 - param_1[0x10];
    x1 = uVar4 - param_1[0xf];
  }
  else {
    uVar2 = param_1[0x31];
    if ((int)param_1[0x3a] <= (int)param_1[0x31]) {
      uVar2 = param_1[0x3a];
    }
    uVar3 = param_1[0x2f];
    if ((int)param_1[0x2f] <= (int)param_1[0x38]) {
      uVar3 = param_1[0x38];
    }
    cy = uVar3 - uVar2;
    if (cy < 1) goto LAB_5cd1a905;
    y1 = uVar2 - param_1[0x10];
    x1 = uVar4 - param_1[0xf];
  }
  BitBlt(param_2,uVar4,uVar2,cx,cy,hdcSrc,x1,y1,0xcc0020);
LAB_5cd1a905:
  SelectObject(hdcSrc,h);
  return;
}


