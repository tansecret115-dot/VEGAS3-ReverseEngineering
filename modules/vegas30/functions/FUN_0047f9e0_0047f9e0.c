/* Module: vegas30.exe
   Function: FUN_0047f9e0
   Address: 0047f9e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0047f9e0(HDC param_1,int *param_2,int param_3,int param_4,int param_5,int param_6)

{
  DWORD DVar1;
  HBRUSH h;
  HGDIOBJ pvVar2;
  HGDIOBJ pvVar3;
  int iVar4;
  uint uVar5;
  COLORREF color;
  POINT local_20;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  local_18 = *param_2;
  local_10 = local_18 + 6;
  local_20.y = param_2[1] + -1;
  local_14 = param_2[1] + -7;
  local_8 = 0;
  local_4 = 0;
  param_2 = (int *)0x3;
  local_c = local_20.y;
  if (param_5 == 0) {
    if (param_6 != 6) {
      local_10 = local_18 + param_6;
      param_2 = (int *)0x4;
      local_c = ((local_20.y - local_14) * param_6) / 6 + local_14;
      local_8 = local_10;
      local_4 = local_20.y;
    }
  }
  else {
    if (param_6 == 6) {
      iVar4 = (local_20.y - local_14) * param_5;
      iVar4 = iVar4 / 6 + (iVar4 >> 0x1f);
    }
    else {
      local_10 = param_6 + local_18;
      iVar4 = (local_20.y - local_14) * param_5;
      param_2 = (int *)0x4;
      local_c = ((local_20.y - local_14) * param_6) / 6 + local_14;
      iVar4 = iVar4 / 6 + (iVar4 >> 0x1f);
      local_8 = local_10;
      local_4 = local_20.y;
    }
    local_18 = local_18 + param_5;
    local_14 = local_14 + (iVar4 - (iVar4 >> 0x1f));
  }
  color = 0xffffff;
  local_20.x = local_18;
  if (param_3 != 0) {
    color = FUN_00460550(0xffffff,7);
  }
  if (param_4 != 0) {
    uVar5 = (uint)DAT_0064aed4;
    DVar1 = GetSysColor(0xd);
    color = FUN_004645e0(color,DVar1,uVar5);
  }
  h = CreateSolidBrush(color);
  pvVar2 = GetStockObject(7);
  pvVar3 = SelectObject(param_1,h);
  pvVar2 = SelectObject(param_1,pvVar2);
  Polygon(param_1,&local_20,(int)param_2);
  pvVar3 = SelectObject(param_1,pvVar3);
  SelectObject(param_1,pvVar2);
  DeleteObject(pvVar3);
  return;
}


