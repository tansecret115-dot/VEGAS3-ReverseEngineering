/* Module: vegas30.exe
   Function: FUN_004da300
   Address: 004da300
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_004da300(int param_1,HDC param_2,int *param_3,int param_4,int param_5)

{
  LPRECT lprect;
  int iVar1;
  HIMAGELIST himl;
  HDC hdcDst;
  undefined4 uVar2;
  HGDIOBJ h;
  int *piVar3;
  int iVar4;
  DWORD color;
  UINT align;
  int iVar5;
  int iVar6;
  uint uVar7;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  tagSIZE local_8;
  
  uVar2 = param_5;
  hdcDst = param_2;
  iVar1 = *(int *)(*(int *)(param_4 + 0x69c) + 0x58);
  if (*(int *)(iVar1 + 0x88) == 0) {
    *(int *)(iVar1 + 0x88) = iVar1 + 0x8c;
    *(undefined4 *)(iVar1 + 100) = 0;
    *(undefined4 *)(iVar1 + 0x68) = 0;
    *(undefined4 *)(iVar1 + 0x6c) = 0;
    *(undefined4 *)(iVar1 + 0x70) = 0;
    _FaderInst_Init_28(*(undefined4 *)(iVar1 + 0x88),0x12c1,(undefined4 *)(iVar1 + 100),
                       *(undefined4 *)(param_1 + 0x24),param_5,&LAB_004d9e40,param_1);
    _FaderInst_Message_16(*(undefined4 *)(iVar1 + 0x88),0x611,0,0);
    *(int *)(iVar1 + 0x1b8) = iVar1 + 0x1bc;
    *(undefined4 *)(iVar1 + 0x74) = 0;
    *(undefined4 *)(iVar1 + 0x78) = 0;
    *(undefined4 *)(iVar1 + 0x7c) = 0;
    *(undefined4 *)(iVar1 + 0x80) = 0;
    _MeterInst_Init_20(*(undefined4 *)(iVar1 + 0x1b8),0x4000161d,(undefined4 *)(iVar1 + 0x74),
                       *(undefined4 *)(param_1 + 0x24),uVar2);
    _MeterInst_Message_16(*(undefined4 *)(iVar1 + 0x1b8),0x613,0x10000,2);
    _MeterInst_Message_16(*(undefined4 *)(iVar1 + 0x1b8),0x60d,0x10000,0x8000);
    _MeterInst_Message_16(*(undefined4 *)(iVar1 + 0x1b8),0x60f,0,0x1000);
    FUN_004d9a30(param_4);
  }
  h = (HGDIOBJ)_SfGetUIFont_4(100);
  SelectObject(param_2,h);
  piVar3 = (int *)_SfGetUIFontSize_4(100);
  local_18 = *piVar3;
  local_14 = piVar3[1];
  _SfLoadString_16(DAT_00647204,0x504a,&DAT_0064cc2c,0x50);
  iVar4 = *(int *)(param_1 + 0x284) + 4;
  iVar5 = param_3[2];
  iVar6 = param_3[1] + 1;
  *(int *)(iVar1 + 0x18) = iVar6;
  *(int *)(iVar1 + 0x20) = iVar6 + iVar4;
  *(int *)(iVar1 + 0x1c) = iVar5 + -3;
  param_5 = (iVar5 + -3) - iVar4;
  *(int *)(iVar1 + 0x14) = param_5;
  if (param_5 - iVar4 < *param_3 + 3) {
    param_5 = param_3[2] + -3;
    iVar6 = iVar6 + iVar4;
  }
  *(int *)(iVar1 + 8) = iVar6;
  *(int *)(iVar1 + 0x10) = iVar6 + iVar4;
  *(int *)(iVar1 + 0xc) = param_5;
  *(int *)(iVar1 + 4) = param_5 - iVar4;
  if (param_5 + iVar4 * -2 < *param_3 + 3) {
    iVar6 = iVar6 + iVar4;
  }
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  *(undefined4 *)(iVar1 + 0x30) = 0;
  *(undefined4 *)(iVar1 + 0x34) = 0;
  *(undefined4 *)(iVar1 + 0x38) = 0;
  *(undefined4 *)(iVar1 + 0x3c) = 0;
  *(undefined4 *)(iVar1 + 0x40) = 0;
  iVar6 = iVar6 + local_14 + iVar4;
  GetTextExtentPoint32A(param_2,&DAT_0064cc2c,0x4f,&local_8);
  iVar5 = *param_3;
  iVar4 = local_18 / 2;
  *(int *)(iVar1 + 0x54) = iVar5 + iVar4;
  param_5 = param_3[2] - iVar4;
  iVar5 = iVar5 + iVar4 + 8 + local_8.cx;
  if (param_5 < iVar5) {
    iVar5 = param_5;
  }
  *(int *)(iVar1 + 0x5c) = iVar5;
  iVar5 = param_3[3];
  *(int *)(iVar1 + 0x60) = iVar5 + -3;
  iVar5 = ((iVar5 + -3) - local_14) + -3;
  *(int *)(iVar1 + 0x58) = iVar5;
  if (iVar5 < iVar6 + 0x50) {
    *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(iVar1 + 0x60);
  }
  iVar5 = *param_3;
  *(int *)(iVar1 + 100) = iVar4 + iVar5;
  *(int *)(iVar1 + 0x6c) = iVar4 + iVar5 + local_18 * 6;
  iVar5 = *(int *)(iVar1 + 0x58) - local_14 / 2;
  *(int *)(iVar1 + 0x70) = iVar5;
  iVar5 = iVar5 + -300;
  if (iVar6 <= iVar5) {
    iVar6 = iVar5;
  }
  *(int *)(iVar1 + 0x68) = iVar6;
  _FaderInst_Move_8(*(undefined4 *)(iVar1 + 0x88),(int *)(iVar1 + 100));
  piVar3 = (int *)(iVar1 + 0x74);
  *piVar3 = *(int *)(iVar1 + 100);
  *(undefined4 *)(iVar1 + 0x78) = *(undefined4 *)(iVar1 + 0x68);
  *(undefined4 *)(iVar1 + 0x7c) = *(undefined4 *)(iVar1 + 0x6c);
  *(undefined4 *)(iVar1 + 0x80) = *(undefined4 *)(iVar1 + 0x70);
  *piVar3 = *(int *)(iVar1 + 0x6c) + iVar4;
  *(int *)(iVar1 + 0x7c) = param_3[2] - local_18;
  _MeterInst_Move_8(*(undefined4 *)(iVar1 + 0x1b8),piVar3);
  himl = DAT_0064b314;
  color = GetSysColor(0xf);
  SetBkColor(param_2,color);
  uVar7 = 0;
  param_2 = (HDC)0x0;
  if (param_4 == *(int *)(param_1 + 0x25c)) {
    uVar7 = *(uint *)(param_1 + 0x80) & 0xffff;
    param_2 = (HDC)((-(uint)((*(uint *)(param_1 + 0x280) & 0xffff) != uVar7) & 2) + 2);
  }
  if (*(int *)(iVar1 + 4) < *(int *)(iVar1 + 0xc)) {
    ImageList_Draw(himl,*(uint *)(param_4 + 0x10) >> 1 & 1,hdcDst,*(int *)(iVar1 + 4) + 2,
                   *(int *)(iVar1 + 8) + 2,0);
    if (uVar7 == 0x82) {
      DrawEdge(hdcDst,(LPRECT)(iVar1 + 4),(UINT)param_2,0xf);
    }
  }
  if (*(int *)(iVar1 + 0x14) < *(int *)(iVar1 + 0x1c)) {
    ImageList_Draw(himl,(*(uint *)(param_4 + 0x10) & 1) + 2,hdcDst,*(int *)(iVar1 + 0x14) + 2,
                   *(int *)(iVar1 + 0x18) + 2,0);
    if (uVar7 == 0x83) {
      DrawEdge(hdcDst,(LPRECT)(iVar1 + 0x14),(UINT)param_2,0xf);
    }
  }
  if (*(int *)(iVar1 + 0x24) < *(int *)(iVar1 + 0x2c)) {
    ImageList_Draw(himl,(*(uint *)(param_4 + 0x10) >> 7 & 1) + 4,hdcDst,*(int *)(iVar1 + 0x24) + 2,
                   *(int *)(iVar1 + 0x28) + 2,0);
    if (uVar7 == 0x84) {
      DrawEdge(hdcDst,(LPRECT)(iVar1 + 0x24),(UINT)param_2,0xf);
    }
  }
  lprect = (LPRECT)(iVar1 + 0x34);
  if (*(int *)(iVar1 + 0x34) < *(int *)(iVar1 + 0x3c)) {
    align = SetTextAlign(hdcDst,6);
    param_5._0_2_ = (ushort)(byte)(*(char *)(param_4 + 0x3c) + 0x41);
    ExtTextOutA(hdcDst,(*(int *)(iVar1 + 0x3c) - lprect->left) / 2 + lprect->left,
                ((*(int *)(iVar1 + 0x40) - *(int *)(iVar1 + 0x38)) - local_14) / 2 +
                *(int *)(iVar1 + 0x38),4,lprect,(LPCSTR)&param_5,1,(INT *)0x0);
    SetTextAlign(hdcDst,align);
    if (uVar7 == 0x85) {
      DrawEdge(hdcDst,lprect,(UINT)param_2,0xf);
    }
  }
  if (*(int *)(iVar1 + 0x58) < *(int *)(iVar1 + 0x60)) {
    local_18 = *(int *)(iVar1 + 0x54);
    local_14 = *(int *)(iVar1 + 0x58);
    local_10 = *(undefined4 *)(iVar1 + 0x5c);
    local_c = *(undefined4 *)(iVar1 + 0x60);
    FUN_004da220(hdcDst,&local_18,param_4,*(undefined4 *)(iVar1 + 0x84));
  }
  if (*(int *)(iVar1 + 0x68) < *(int *)(iVar1 + 0x70)) {
    _FaderInst_Draw_8(*(undefined4 *)(iVar1 + 0x88),hdcDst);
  }
  if ((*(int *)(iVar1 + 0x78) < *(int *)(iVar1 + 0x80)) &&
     (*(int *)(iVar1 + 0x74) < *(int *)(iVar1 + 0x7c))) {
    _MeterInst_Draw_16(*(undefined4 *)(iVar1 + 0x1b8),hdcDst,0,0);
  }
  return;
}


