/* Module: vegas30.exe
   Function: FUN_00581e80
   Address: 00581e80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00581e80(HDC param_1,int *param_2,int param_3,HANDLE param_4)

{
  int iVar1;
  HDC hdc;
  HGDIOBJ h;
  DWORD color;
  COLORREF color_00;
  int iVar2;
  int iVar3;
  int local_30;
  int local_2c;
  tagRECT local_28;
  undefined1 local_18 [4];
  int local_14;
  int local_10;
  
  if (param_4 == (HANDLE)0x0) {
    param_4 = (HANDLE)_SfLoadBitmap_8(0,0x7ff8);
  }
  GetObjectA(param_4,0x18,local_18);
  local_30 = 0;
  local_2c = 0;
  local_28.left = *param_2;
  iVar3 = param_2[2] - *param_2;
  local_28.top = param_2[1];
  local_28.right = param_2[2];
  local_28.bottom = param_2[3];
  iVar2 = (iVar3 - local_14) / 2;
  iVar1 = ((param_2[3] - param_2[1]) - local_10) / 2;
  if (local_14 < iVar3) {
    local_28.left = iVar2 + *param_2;
    local_28.top = iVar1 + param_2[1];
    local_28.right = local_28.left + local_14;
    local_28.bottom = local_28.top + local_10;
  }
  else {
    local_30 = -iVar2;
    local_2c = -iVar1;
  }
  hdc = CreateCompatibleDC(param_1);
  h = SelectObject(hdc,param_4);
  color = GetSysColor((-(uint)(param_3 != 0) & 0xffffffee) + 0x16);
  color_00 = SetBkColor(param_1,color);
  BitBlt(param_1,local_28.left,local_28.top,local_28.right - local_28.left,
         local_28.right - local_28.left,hdc,local_30,local_2c,0xcc0020);
  SetBkColor(param_1,color_00);
  SelectObject(hdc,h);
  if (local_14 < param_2[2] - *param_2) {
    InflateRect(&local_28,1,1);
  }
  DrawEdge(param_1,&local_28,2,0xf);
  return 1;
}


