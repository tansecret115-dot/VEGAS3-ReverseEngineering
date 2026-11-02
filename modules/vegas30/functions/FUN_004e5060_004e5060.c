/* Module: vegas30.exe
   Function: FUN_004e5060
   Address: 004e5060
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004e5060(int param_1,HDC param_2,HDC param_3,undefined4 *param_4,int param_5,int param_6,
                 int param_7,int *param_8,int param_9)

{
  int *piVar1;
  HDC hdc;
  int iVar2;
  int y;
  int cy;
  int cy_00;
  uint color;
  uint uVar3;
  COLORREF color_00;
  COLORREF color_01;
  COLORREF color_02;
  COLORREF CVar4;
  int iVar5;
  int y1;
  int y_00;
  int x;
  int cx;
  int cy_01;
  COLORREF color_03;
  uint local_2c;
  
  hdc = param_2;
  iVar2 = param_7 / (param_6 / 2);
  iVar5 = 1;
  if (0 < iVar2) {
    iVar5 = iVar2;
  }
  iVar2 = param_6 * param_9;
  y = (param_6 + 1) * param_9 + *(int *)(param_1 + 0xac4);
  cy = DAT_00613d3c / iVar5 + param_5;
  cy_00 = DAT_00613d38 / iVar5 + param_5;
  param_5 = DAT_00613d40 / iVar5 + param_5;
  color = _SfGetUIColorAbsolute_4(param_4[4]);
  uVar3 = _SfGetUIColorAbsolute_4(param_4[5]);
  color_00 = _SfGetUIColorAbsolute_4(param_4[6]);
  color_01 = _SfGetUIColorAbsolute_4(param_4[7]);
  color_02 = _SfGetUIColorAbsolute_4(*param_4);
  CVar4 = _SfGetUIColorAbsolute_4(param_4[1]);
  param_4 = (undefined4 *)uVar3;
  if (color == uVar3) {
    param_4 = (undefined4 *)(color ^ 0x808080);
  }
  SetTextColor(param_2,color_02);
  local_2c = 1;
  piVar1 = param_8;
  do {
    iVar5 = piVar1[1];
    cx = piVar1[2] - iVar5;
    x = *(int *)(param_1 + 0xac0) + iVar5;
    if (0 < cx) {
      if ((local_2c & 1) == 0) {
        SetBkColor(hdc,(COLORREF)param_4);
        color_03 = CVar4;
      }
      else {
        SetBkColor(hdc,color);
        color_03 = color_02;
      }
      SetTextColor(hdc,color_03);
      if (param_7 < 0x4000) {
        BitBlt(hdc,x,y,cx,cy_00,param_3,iVar5,iVar2,0xcc0020);
        y1 = iVar2 + cy_00 + 1;
        cy_01 = (param_6 - cy_00) + -1;
        y_00 = y + cy_00 + 1;
      }
      else {
        BitBlt(hdc,x,y,cx,cy,param_3,iVar5,iVar2,0xcc0020);
        BitBlt(hdc,x,y + cy + 1,cx,(cy_00 - cy) + -1,param_3,iVar5,cy + iVar2 + 1,0xcc0020);
        BitBlt(hdc,x,y + cy_00 + 1,cx,(param_5 - cy_00) + -1,param_3,iVar5,cy_00 + iVar2 + 1,
               0xcc0020);
        y1 = param_5 + iVar2;
        y_00 = y + param_5;
        BitBlt(hdc,x,y_00 + 1,cx,(param_6 - param_5) + -1,param_3,iVar5,y1 + 1,0xcc0020);
        SetBkColor(hdc,color_01);
        BitBlt(hdc,x,y + cy,cx,1,param_3,iVar5,cy + iVar2,0xcc0020);
        cy_01 = 1;
      }
      param_8 = (int *)(y + cy_00);
      param_2 = (HDC)(cy_00 + iVar2);
      BitBlt(hdc,x,y_00,cx,cy_01,param_3,iVar5,y1,0xcc0020);
      SetBkColor(hdc,color_00);
      BitBlt(hdc,x,(int)param_8,cx,1,param_3,iVar5,(int)param_2,0xcc0020);
    }
    local_2c = local_2c + 1;
    piVar1 = piVar1 + 1;
  } while ((int)local_2c < 4);
  return;
}


