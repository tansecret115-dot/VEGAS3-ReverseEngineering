/* Module: vidcap30.exe
   Function: _SfMarker_Create@24
   Address: 0047ef60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
_SfMarker_Create_24(HDC param_1,int *param_2,int param_3,uint param_4,uint param_5,uint param_6)

{
  int iVar1;
  int iVar2;
  HBRUSH h;
  HPEN h_00;
  HPEN h_01;
  HGDIOBJ h_02;
  HGDIOBJ h_03;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  POINT local_28;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
                    /* 0x7ef60  538  _SfMarker_Create@24 */
  iVar1 = param_2[1];
  iVar2 = *param_2;
  iVar6 = param_2[2] - iVar2;
  uVar3 = param_4 >> 8 & 0xff;
  iVar5 = param_2[3] - iVar1;
  uVar4 = param_4 >> 0x10 & 0xff;
  h = CreateSolidBrush(param_4);
  local_10 = iVar6;
  if (iVar5 <= iVar6) {
    local_10 = iVar5 + -1;
  }
  if (param_6 == 0xffffffff) {
    param_6 = (uint)CONCAT11((char)((ulonglong)((longlong)(int)(uVar4 * 2) * 0x55555556) >> 0x20),
                             (char)((ulonglong)((longlong)(int)(uVar3 * 2) * 0x55555556) >> 0x20))
              << 8 | ((param_4 & 0xff) * 2) / 3;
  }
  if (param_5 == 0xffffffff) {
    param_5 = (uint)CONCAT11((char)((ulonglong)((longlong)(int)(uVar4 * 2 + 0xff) * 0x55555556) >>
                                   0x20),
                             (char)((ulonglong)((longlong)(int)(uVar3 * 2 + 0xff) * 0x55555556) >>
                                   0x20)) << 8 | ((param_4 & 0xff) * 2 + 0xff) / 3 & 0xff;
  }
  h_00 = CreatePen(0,1,param_6);
  h_01 = CreatePen(0,1,param_5);
  local_1c = iVar1;
  local_14 = iVar1;
  if (param_3 == 1) {
    local_28.y = (iVar5 - iVar6) + iVar1;
    local_c = iVar5 + -1 + iVar1;
  }
  else {
    if (param_3 == 2) {
      local_10 = iVar2 + -1 + local_10;
      local_28.y = iVar5 + -1 + iVar1;
      local_14 = iVar6 + -1 + iVar1;
      local_c = local_28.y;
      goto LAB_0047f19a;
    }
    local_28.y = iVar5 + -1 + iVar1;
    if (param_3 == 3) {
      local_10 = iVar2 + -1 + local_10;
      local_1c = iVar6 + -1 + iVar1;
      local_c = local_28.y;
      goto LAB_0047f19a;
    }
    local_c = (local_28.y - iVar6) + 1;
  }
  local_10 = iVar2 + -1 + local_10;
LAB_0047f19a:
  local_28.x = iVar2;
  local_20 = iVar2;
  local_18 = local_10;
  local_8 = iVar2;
  local_4 = local_28.y;
  h_02 = SelectObject(param_1,h);
  h_03 = SelectObject(param_1,h_00);
  Polygon(param_1,&local_28,5);
  SelectObject(param_1,h_01);
  MoveToEx(param_1,local_18,local_14,(LPPOINT)0x0);
  LineTo(param_1,local_20,local_1c);
  LineTo(param_1,local_28.x,local_28.y);
  SelectObject(param_1,h_02);
  SelectObject(param_1,h_03);
  DeleteObject(h);
  DeleteObject(h_00);
  DeleteObject(h_01);
  return 0;
}


