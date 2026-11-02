/* Module: vegas30.exe
   Function: FUN_0050e4b0
   Address: 0050e4b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0050e4b0(HDC param_1,int *param_2,int param_3,int *param_4)

{
  int iVar1;
  HGDIOBJ pvVar2;
  HGDIOBJ pvVar3;
  HGDIOBJ h;
  POINT *pPVar4;
  undefined4 local_38;
  undefined4 local_34;
  POINT local_30 [2];
  POINT local_20 [2];
  LONG local_10;
  LONG local_c;
  LONG local_8;
  LONG local_4;
  
  iVar1 = *param_4;
  local_38 = 0x15;
  local_34 = 0x15;
  param_4 = (int *)0x4;
  pPVar4 = local_30;
  do {
    FUN_0050d7f0(pPVar4,param_3,*(undefined4 *)(iVar1 + 0x98),&local_38);
    param_3 = param_3 + 0x10;
    pPVar4->x = pPVar4->x + *param_2;
    pPVar4->y = pPVar4->y + param_2[1];
    param_4 = (int *)((int)param_4 + -1);
    pPVar4 = pPVar4 + 1;
  } while (param_4 != (int *)0x0);
  local_10 = local_30[0].x;
  local_c = local_30[0].y;
  if ((*(uint *)(*(int *)(iVar1 + 0x98) + 4) & 0x1000) != 0) {
    pvVar2 = (HGDIOBJ)_SfGetUIBrush_4(3);
    pvVar2 = SelectObject(param_1,pvVar2);
    pvVar3 = GetStockObject(8);
    pvVar3 = SelectObject(param_1,pvVar3);
    Polygon(param_1,local_30,5);
    h = (HGDIOBJ)_SfGetUIBrush_4(2);
    SelectObject(param_1,h);
    local_8 = local_20[0].x;
    local_4 = local_20[0].y;
    Polygon(param_1,local_20,4);
    SelectObject(param_1,pvVar3);
    SelectObject(param_1,pvVar2);
  }
  return;
}


