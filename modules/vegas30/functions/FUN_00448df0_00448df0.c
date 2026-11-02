/* Module: vegas30.exe
   Function: FUN_00448df0
   Address: 00448df0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00448df0(HDC param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,
                 int param_7,int param_8,HGDIOBJ param_9)

{
  int iVar1;
  HDC hdc;
  DWORD DVar2;
  HPEN pHVar3;
  HGDIOBJ pvVar4;
  COLORREF color;
  int x;
  int iVar5;
  int x_00;
  HBRUSH local_24;
  POINT local_20;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  hdc = param_1;
  local_24 = (HBRUSH)0x0;
  if (param_9 == (HGDIOBJ)0x0) {
    DVar2 = GetSysColor(0x15);
    pHVar3 = CreatePen(0,1,DVar2);
    param_9 = SelectObject(param_1,pHVar3);
    color = GetSysColor(0xf);
    switch(param_6) {
    case 0:
      color = DAT_00647868;
      break;
    case 1:
      color = DAT_00647864;
      break;
    case 2:
      color = DAT_00647870;
      break;
    case 3:
      color = DAT_0064786c;
      break;
    case 4:
      color = DAT_00647874;
    }
    local_24 = CreateSolidBrush(color);
    pvVar4 = SelectObject(param_1,local_24);
  }
  else {
    DVar2 = GetSysColor(0xf);
    pHVar3 = CreatePen(0,1,DVar2);
    param_9 = SelectObject(param_1,pHVar3);
    pvVar4 = GetStockObject(5);
    pvVar4 = SelectObject(param_1,pvVar4);
  }
  x = param_2 - param_4 / 2;
  x_00 = param_4 / 2 + param_2;
  iVar5 = param_3 - param_5 / 2;
  iVar1 = param_3 + param_5 / 2;
  local_20.y = param_3;
  local_18 = param_2;
  local_c = param_3;
  local_8 = param_2;
  local_20.x = x;
  local_14 = iVar5;
  local_10 = x_00;
  local_4 = iVar1;
  Polygon(param_1,&local_20,4);
  if (param_8 != 0) {
    MoveToEx(param_1,x,param_3 + 2,(LPPOINT)0x0);
    LineTo(param_1,param_2,iVar1 + 2);
    MoveToEx(param_1,x_00,param_3 + 2,(LPPOINT)0x0);
    LineTo(param_1,param_2 + -1,iVar1 + 3);
  }
  if (param_7 != 0) {
    SelectObject(param_1,pvVar4);
    pvVar4 = GetStockObject(0);
    pvVar4 = SelectObject(param_1,pvVar4);
    local_20.y = param_3;
    local_14 = iVar5 + 3;
    local_20.x = x + 3;
    local_10 = x_00 + -3;
    local_4 = iVar1 + -3;
    local_18 = param_2;
    local_c = param_3;
    local_8 = param_2;
    Polygon(param_1,&local_20,4);
  }
  param_1 = pvVar4;
  if (param_8 != 0) {
    MoveToEx(hdc,x_00 + -1,param_3 + 2,(LPPOINT)0x0);
    LineTo(hdc,param_2 + -1,iVar1 + 2);
  }
  SelectObject(hdc,param_1);
  pvVar4 = SelectObject(hdc,param_9);
  DeleteObject(pvVar4);
  if (local_24 != (HBRUSH)0x0) {
    DeleteObject(local_24);
  }
  pvVar4 = SelectObject(hdc,param_9);
  DeleteObject(pvVar4);
  return;
}


