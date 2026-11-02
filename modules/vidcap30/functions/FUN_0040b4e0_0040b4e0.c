/* Module: vidcap30.exe
   Function: FUN_0040b4e0
   Address: 0040b4e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040b4e0(int param_1)

{
  int iVar1;
  uint uVar2;
  HDC hdc;
  DWORD color;
  HWND pHVar3;
  int iVar4;
  tagRECT local_20;
  RECT local_10;
  
  iVar4 = *(int *)(param_1 + 0x2c);
  iVar1 = *(int *)(param_1 + 0x30);
  hdc = GetWindowDC(*(HWND *)(param_1 + 8));
  color = GetSysColor(0xf);
  SetBkColor(hdc,color);
  local_20.left = 0;
  local_20.top = 0;
  local_20.right = iVar4;
  local_20.bottom = iVar1;
  if ((*(byte *)(param_1 + 0xc) & 0x10) == 0) {
    local_10.left = 0;
    local_10.top = 0;
    local_10.right = 0xf;
    local_10.bottom = iVar1;
    ExtTextOutA(hdc,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
    local_10.top = local_20.top;
    local_10.left = local_20.right + -4;
    local_10.right = local_20.right;
    local_10.bottom = local_20.bottom;
    ExtTextOutA(hdc,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
  }
  uVar2 = *(uint *)(param_1 + 0xc);
  if ((uVar2 & 0x10) == 0) {
    if (((uVar2 & 0x20) == 0) || ((uVar2 & 0x80) == 0)) {
      pHVar3 = GetCapture();
      if ((pHVar3 == *(HWND *)(param_1 + 8)) && (*(int *)(param_1 + 0x1c) == 0x14)) {
        iVar4 = 1;
      }
      else {
        iVar4 = 0;
      }
      local_10.left = local_20.left + 1;
      local_10.right = local_20.left + 0xd;
      local_10.top = local_20.top + 1;
      local_10.bottom = local_20.top + 0xc;
      DrawFrameControl(hdc,&local_10,1,(uint)((byte)(-(uint)(iVar4 != 0) >> 8) & 2 | 0x40) << 8);
      FUN_0040a810(hdc,&local_10,iVar4,0);
      local_20.top = local_10.bottom + 1;
      pHVar3 = GetCapture();
      if ((pHVar3 == *(HWND *)(param_1 + 8)) && (*(int *)(param_1 + 0x1c) == 0x14)) {
        iVar4 = 1;
      }
      else {
        iVar4 = 0;
      }
      local_10.left = local_20.left + 1;
      local_10.right = local_20.left + 0xd;
      local_10.top = local_20.top;
      local_10.bottom = local_20.top + 0xc;
      DrawFrameControl(hdc,&local_10,3,
                       *(uint *)(param_1 + 0xc) >> 0x12 & 1 | -(uint)(iVar4 != 0) & 0x200 | 0x4002);
      FUN_0040a810(hdc,&local_10,iVar4,0);
      local_20.top = local_10.bottom + 5;
    }
    else {
      DrawEdge(hdc,&local_20,4,0x200f);
      FUN_0040b710(hdc,&local_20);
    }
  }
  if ((*(byte *)(param_1 + 0xc) & 0x10) == 0) {
    local_20.right = local_20.left + 8;
    local_20.bottom = local_20.bottom + -4;
    if (local_20.bottom <= local_20.top) {
      local_20.bottom = local_20.top;
    }
    local_20.left = local_20.left + 5;
    DrawEdge(hdc,&local_20,4,0x80f);
  }
  ReleaseDC(*(HWND *)(param_1 + 8),hdc);
  return 0;
}


