/* Module: vegas30.exe
   Function: FUN_00413c90
   Address: 00413c90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00413c90(int param_1)

{
  uint uVar1;
  bool bVar2;
  LONG LVar3;
  HDC hdc;
  DWORD color;
  HWND pHVar4;
  int iVar5;
  int iVar6;
  LONG LVar7;
  tagRECT local_20;
  RECT local_10;
  
  iVar5 = *(int *)(param_1 + 0x2c);
  iVar6 = *(int *)(param_1 + 0x30);
  hdc = GetWindowDC(*(HWND *)(param_1 + 8));
  color = GetSysColor(0xf);
  SetBkColor(hdc,color);
  local_20.left = 0;
  local_20.top = 0;
  local_20.right = iVar5;
  local_20.bottom = iVar6;
  if ((*(byte *)(param_1 + 0xc) & 0x10) == 0) {
    local_10.left = 0;
    local_10.top = 0;
    local_10.right = 0xf;
    local_10.bottom = iVar6;
    ExtTextOutA(hdc,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
    local_10.left = local_20.right + -4;
    local_10.right = local_20.right;
    local_10.top = local_20.top;
    local_10.bottom = local_20.bottom;
    ExtTextOutA(hdc,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
  }
  uVar1 = *(uint *)(param_1 + 0xc);
  bVar2 = false;
  if ((uVar1 & 0x10) == 0) {
    if ((uVar1 & 0x20) == 0) {
      if (((uVar1 & 0x80) != 0) && (((byte)uVar1 & 3) != 3)) {
        DrawEdge(hdc,&local_20,4,0x200f);
        FUN_00413f30(hdc,&local_20);
      }
    }
    else if ((uVar1 & 0x80) != 0) {
      DrawEdge(hdc,&local_20,4,0x200f);
      FUN_00413f30(hdc,&local_20);
      goto LAB_00413eb1;
    }
    pHVar4 = GetCapture();
    if ((pHVar4 == *(HWND *)(param_1 + 8)) && (*(int *)(param_1 + 0x1c) == 0x14)) {
      iVar5 = 1;
    }
    else {
      iVar5 = 0;
    }
    local_10.left = local_20.left + 1;
    local_10.right = local_20.left + 0xd;
    local_10.top = local_20.top + 1;
    local_10.bottom = local_20.top + 0xc;
    DrawFrameControl(hdc,&local_10,1,(uint)((byte)(-(uint)(iVar5 != 0) >> 8) & 2 | 0x40) << 8);
    FUN_00412f60(hdc,&local_10,iVar5,0);
    local_20.top = local_10.bottom + 1;
    pHVar4 = GetCapture();
    if ((pHVar4 == *(HWND *)(param_1 + 8)) && (*(int *)(param_1 + 0x1c) == 0x14)) {
      iVar5 = 1;
    }
    else {
      iVar5 = 0;
    }
    local_10.left = local_20.left + 1;
    local_10.right = local_20.left + 0xd;
    local_10.top = local_20.top;
    local_10.bottom = local_20.top + 0xc;
    DrawFrameControl(hdc,&local_10,3,
                     *(uint *)(param_1 + 0xc) >> 0x12 & 1 | -(uint)(iVar5 != 0) & 0x200 | 0x4002);
    FUN_00412f60(hdc,&local_10,iVar5,0);
    bVar2 = true;
    local_20.top = local_10.bottom + 5;
  }
LAB_00413eb1:
  if ((*(byte *)(param_1 + 0xc) & 0x10) != 0) goto LAB_00413f17;
  iVar5 = local_20.left + 5;
  local_20.right = local_20.left + 8;
  if (bVar2) {
    LVar7 = local_20.bottom + -4;
    LVar3 = local_20.top;
    local_20.bottom = local_20.top;
    if (local_20.top < LVar7) {
LAB_00413f00:
      local_20.top = LVar3;
      LVar3 = local_20.top;
      local_20.bottom = LVar7;
    }
  }
  else {
    iVar6 = local_20.bottom + -4;
    LVar7 = local_20.bottom;
    if (local_20.top + 4 < local_20.bottom) {
      LVar7 = local_20.top + 4;
    }
    LVar3 = LVar7;
    local_20.bottom = iVar6;
    local_10.left = iVar5;
    local_10.top = local_20.top;
    local_10.right = local_20.right;
    if (iVar6 <= LVar7) goto LAB_00413f00;
  }
  local_20.top = LVar3;
  local_20.left = iVar5;
  DrawEdge(hdc,&local_20,4,0x80f);
LAB_00413f17:
  ReleaseDC(*(HWND *)(param_1 + 8),hdc);
  return 0;
}


