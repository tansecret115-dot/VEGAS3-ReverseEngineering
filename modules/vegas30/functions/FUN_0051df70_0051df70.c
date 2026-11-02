/* Module: vegas30.exe
   Function: FUN_0051df70
   Address: 0051df70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0051df70(uint param_1)

{
  int iVar1;
  HWND hWnd;
  SHORT SVar2;
  int iVar3;
  LPARAM lParam;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 local_4;
  
  iVar1 = *(int *)(param_1 + 0x98);
  hWnd = *(HWND *)(param_1 + 0x150);
  if ((*(byte *)(param_1 + 0xa8) & 1) == 0) {
    SendMessageA(hWnd,0x411,0x4c4,0x10);
    SendMessageA(hWnd,0x411,0x4c5,0x10);
    SendMessageA(hWnd,0x411,0x4c6,0x10);
    SendMessageA(hWnd,0x411,0x4c7,0x10);
    SendMessageA(hWnd,0x411,0x4c8,0x10);
    SendMessageA(hWnd,0x411,0x4c9,0x10);
    SendMessageA(hWnd,0x411,0x4ca,0x10);
    SendMessageA(hWnd,0x411,0x4cb,0x10);
    SendMessageA(hWnd,0x411,0x4cc,0x10);
    return;
  }
  iVar6 = *(int *)(iVar1 + 4) << 0x18;
  iVar3 = *(int *)(iVar1 + 4) << 0x17;
  local_4 = iVar6 >> 0x1f;
  param_1 = iVar3 >> 0x1f;
  iVar4 = *(int *)(iVar1 + 0x1c) << 0x1f;
  uVar5 = iVar4 >> 0x1f;
  SVar2 = GetKeyState(0x11);
  if (SVar2 < 0) {
    local_4 = (uint)(-1 < iVar6);
  }
  SVar2 = GetKeyState(0x10);
  if (SVar2 < 0) {
    uVar5 = (uint)(-1 < iVar4);
  }
  SVar2 = GetKeyState(0x12);
  if (SVar2 < 0) {
    param_1 = (uint)(-1 < iVar3);
  }
  SendMessageA(hWnd,0x411,0x4c4,5 - ((*(uint *)(iVar1 + 4) & 0x1e000) != 0) & 0xffff);
  SendMessageA(hWnd,0x411,0x4c5,5 - ((*(uint *)(iVar1 + 4) & 0x1e000) != 0x2000) & 0xffff);
  SendMessageA(hWnd,0x411,0x4c6,(local_4 != 0) + 4);
  SendMessageA(hWnd,0x411,0x4c7,(param_1 != 0) + 4);
  SendMessageA(hWnd,0x411,0x4c8,(uVar5 != 0) + 4);
  SendMessageA(hWnd,0x411,0x4c9,(uint)(~(byte)((uint)*(undefined4 *)(iVar1 + 4) >> 8) & 8 | 4));
  SendMessageA(hWnd,0x411,0x4ca,(uint)(~(byte)((uint)*(undefined4 *)(iVar1 + 4) >> 8) & 4 | 2) << 1)
  ;
  lParam = 4;
  if ((*(uint *)(iVar1 + 4) & 0xc00) != 0) {
    lParam = 0xc;
  }
  SendMessageA(hWnd,0x411,0x4cb,lParam);
  SendMessageA(hWnd,0x411,0x4cc,(uint)((byte)(*(uint *)(iVar1 + 4) >> 5) & 1 | 4));
  return;
}


