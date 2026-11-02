/* Module: vegas30.exe
   Function: FUN_004c68b0
   Address: 004c68b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004c68b0(int param_1,int param_2,undefined4 param_3,int param_4)

{
  ushort uVar1;
  HDC hdc;
  BITMAPINFO *lpbmi;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  DWORD DVar7;
  COLORREF color;
  COLORREF color_00;
  int iVar8;
  BYTE *lpBits;
  int nIndex;
  int local_14;
  RECT local_10;
  
  uVar2 = 0;
  iVar8 = *(int *)(param_1 + 0x5d0);
  if (param_2 == 0x2b) {
    hdc = *(HDC *)(param_4 + 0x18);
    local_10.left = *(int *)(param_4 + 0x1c);
    local_10.top = *(int *)(param_4 + 0x20);
    local_10.right = *(LONG *)(param_4 + 0x24);
    local_10.bottom = *(int *)(param_4 + 0x28);
    iVar4 = local_10.bottom - local_10.top;
    iVar5 = GetSystemMetrics(0x47);
    uVar6 = *(uint *)(param_4 + 0x10) & 1;
    nIndex = (-(uint)(uVar6 != 0) & 7) + 7;
    if ((*(uint *)(param_4 + 0x10) & 2) != 0) {
      nIndex = 0x11;
    }
    DVar7 = GetSysColor((-(uint)(uVar6 != 0) & 9) + 4);
    color = SetBkColor(hdc,DVar7);
    DVar7 = GetSysColor(nIndex);
    color_00 = SetTextColor(hdc,DVar7);
    ExtTextOutA(hdc,0,0,2,&local_10,"",0,(INT *)0x0);
    uVar6 = *(int *)(param_4 + 8) - 0x1b73;
    if (uVar6 < *(uint *)(iVar8 + 0x44)) {
      local_14 = iVar4;
      if (*(int *)(iVar8 + 0x50) <= iVar4) {
        local_14 = *(int *)(iVar8 + 0x50);
      }
      lpbmi = *(BITMAPINFO **)(iVar8 + 0x48);
      if (lpbmi == (BITMAPINFO *)0x0) {
        lpBits = (BYTE *)0x0;
      }
      else {
        DVar7 = (lpbmi->bmiHeader).biClrUsed;
        if (DVar7 == 0) {
          uVar1 = (lpbmi->bmiHeader).biBitCount;
          if (uVar1 < 9) {
            DVar7 = 1 << ((byte)uVar1 & 0x1f);
          }
        }
        lpBits = &lpbmi->bmiColors[DVar7 - 10].rgbBlue + (lpbmi->bmiHeader).biSize;
      }
      StretchDIBits(hdc,local_10.left + iVar5,local_10.top + 1,iVar4 * 2,iVar4 + -2,
                    *(int *)(iVar8 + 0x4c) * uVar6,0,*(int *)(iVar8 + 0x4c),local_14,lpBits,lpbmi,0,
                    0xcc0020);
    }
    if ((*(byte *)(param_4 + 0x10) & 8) != 0) {
      FUN_004c6800(hdc,&local_10,2);
    }
    SetBkColor(hdc,color);
    SetTextColor(hdc,color_00);
    uVar2 = 1;
  }
  else if (param_2 == 0x2c) {
    piVar3 = (int *)_SfGetUIFontSize_4(100);
    iVar8 = piVar3[1];
    if (iVar8 < 0xd) {
      iVar8 = 0xc;
    }
    *(int *)(param_4 + 0x10) = iVar8 + 4;
    *(int *)(param_4 + 0xc) = *piVar3 * 7 + 2;
    return 1;
  }
  return uVar2;
}


