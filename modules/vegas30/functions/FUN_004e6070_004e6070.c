/* Module: vegas30.exe
   Function: FUN_004e6070
   Address: 004e6070
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004e6070(HDC param_1,int param_2,undefined4 *param_3,undefined4 param_4,COLORREF param_5,
                 int param_6,int *param_7,int param_8)

{
  HDC hdc;
  COLORREF CVar1;
  COLORREF color;
  uint uVar2;
  HRGN hrgn;
  int *piVar3;
  int iVar4;
  HGDIOBJ pvVar5;
  undefined4 uVar6;
  HGDIOBJ pvVar7;
  int iVar8;
  uint color_00;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  HGDIOBJ h;
  uint local_28;
  RECT local_10;
  
  hdc = param_1;
  CVar1 = _SfGetUIColorAbsolute_4(param_3[6]);
  color = _SfGetUIColorAbsolute_4(param_3[7]);
  uVar2 = _SfGetUIColorAbsolute_4(param_3[4]);
  local_28 = _SfGetUIColorAbsolute_4(param_3[5]);
  if (param_8 == 1) {
    iVar9 = *(int *)(param_2 + 0xac4) + 1 + param_5;
  }
  else {
    iVar9 = *(int *)(param_2 + 0xac4);
  }
  hrgn = CreateRectRgn(*param_7,iVar9,param_7[5],iVar9 + param_5);
  SelectClipRgn(param_1,hrgn);
  DeleteObject(hrgn);
  if (uVar2 == local_28) {
    local_28 = uVar2 ^ 0x808080;
  }
  piVar11 = param_7 + 1;
  param_1 = (HDC)0x1;
  piVar3 = piVar11;
  do {
    iVar4 = *piVar3;
    iVar8 = piVar3[1];
    if (0 < iVar8 - iVar4) {
      color_00 = uVar2;
      if (((uint)param_1 & 1) == 0) {
        color_00 = local_28;
      }
      SetBkColor(hdc,color_00);
      local_10.right = (iVar8 - iVar4) + iVar4;
      local_10.bottom = param_5 + iVar9;
      local_10.left = iVar4;
      local_10.top = iVar9;
      ExtTextOutA(hdc,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
    }
    param_1 = (HDC)((int)param_1 + 1);
    piVar3 = piVar3 + 1;
  } while ((int)param_1 < 4);
  iVar4 = param_6 / ((int)param_5 / 2);
  iVar8 = ((int)((*(int *)(param_2 + 0xad4) - (uint)*(ushort *)(param_2 + 0xdaa)) + 1) /
          (int)(uint)*(ushort *)(param_2 + 0xdaa)) / 2;
  iVar9 = 1;
  if (0 < iVar4) {
    iVar9 = iVar4;
  }
  iVar10 = DAT_00613d3c / iVar9 + iVar8;
  iVar12 = DAT_00613d38 / iVar9 + iVar8;
  iVar4 = *param_7;
  iVar8 = DAT_00613d40 / iVar9 + iVar8;
  iVar9 = param_7[5];
  SetBkColor(hdc,CVar1);
  local_10.bottom = iVar12 + 1;
  iVar9 = (iVar9 - iVar4) + iVar4;
  local_10.left = iVar4;
  local_10.top = iVar12;
  local_10.right = iVar9;
  ExtTextOutA(hdc,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
  if (0x3fff < param_6) {
    SetBkColor(hdc,color);
    local_10.bottom = iVar10 + 1;
    local_10.left = iVar4;
    local_10.top = iVar10;
    local_10.right = iVar9;
    ExtTextOutA(hdc,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
    local_10.bottom = iVar8 + 1;
    local_10.left = iVar4;
    local_10.top = iVar8;
    local_10.right = iVar9;
    ExtTextOutA(hdc,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
  }
  if (param_8 == 1) {
    param_5 = _SfGetUIColorAbsolute_4(param_3[2]);
    param_7 = (int *)_SfGetUIColorAbsolute_4(param_3[3]);
  }
  else {
    param_5 = _SfGetUIColorAbsolute_4(*param_3);
    param_7 = (int *)_SfGetUIColorAbsolute_4(param_3[1]);
  }
  if ((*(int *)(param_2 + 0xb90) == *(int *)(param_2 + 0xb98)) &&
     (*(int *)(param_2 + 0xb94) == *(int *)(param_2 + 0xb98) >> 0x1f)) {
    if (param_8 == 1) {
      uVar6 = param_3[2];
    }
    else {
      uVar6 = *param_3;
    }
    pvVar5 = (HGDIOBJ)_SfGetUIPenWithStyle_8(uVar6,0);
    if (param_8 == 1) {
      uVar6 = param_3[3];
    }
    else {
      uVar6 = param_3[1];
    }
    pvVar7 = (HGDIOBJ)_SfGetUIPenWithStyle_8(uVar6,0);
    uVar2 = 1;
    do {
      if (*piVar11 < piVar11[1]) {
        h = pvVar7;
        if ((uVar2 & 1) != 0) {
          h = pvVar5;
        }
        SelectObject(hdc,h);
      }
      uVar2 = uVar2 + 1;
      piVar11 = piVar11 + 1;
    } while ((int)uVar2 < 4);
    pvVar5 = GetStockObject(7);
    SelectObject(hdc,pvVar5);
    SelectClipRgn(hdc,(HRGN)0x0);
    return;
  }
  uVar2 = 1;
  do {
    if (*piVar11 < piVar11[1]) {
      CVar1 = (COLORREF)param_7;
      if ((uVar2 & 1) != 0) {
        CVar1 = param_5;
      }
      SetBkColor(hdc,CVar1);
    }
    uVar2 = uVar2 + 1;
    piVar11 = piVar11 + 1;
  } while ((int)uVar2 < 4);
  SelectClipRgn(hdc,(HRGN)0x0);
  return;
}


