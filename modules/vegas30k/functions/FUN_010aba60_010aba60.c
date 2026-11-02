/* Module: vegas30k.dll
   Function: FUN_010aba60
   Address: 010aba60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010aba60(int param_1)

{
  uint uVar1;
  WPARAM wParam;
  HWND pHVar2;
  undefined4 local_c;
  WPARAM local_8;
  undefined4 local_4;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  *(uint *)(param_1 + 0xc) = uVar1 & 0xfffffffd;
  if ((uVar1 & 4) == 0) {
    pHVar2 = *(HWND *)(param_1 + 0x38);
    wParam = *(WPARAM *)(param_1 + 0x34);
    if (pHVar2 == (HWND)0x0) {
      pHVar2 = GetParent(*(HWND *)(param_1 + 0x30));
    }
    local_c = *(undefined4 *)(param_1 + 0x30);
    local_4 = 0xfffffff8;
    local_8 = wParam;
    SendMessageA(pHVar2,0x4e,wParam,(LPARAM)&local_c);
  }
  else if ((uVar1 & 0x40000) != 0) {
    pHVar2 = *(HWND *)(param_1 + 0x38);
    if (pHVar2 == (HWND)0x0) {
      pHVar2 = GetParent(*(HWND *)(param_1 + 0x30));
    }
    SendMessageA(pHVar2,0x111,*(ushort *)(param_1 + 0x34) | 0x20000,*(LPARAM *)(param_1 + 0x30));
  }
  DestroyCaret();
  if (*(HGDIOBJ *)(param_1 + 0x10c) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x10c));
  }
  *(undefined4 *)(param_1 + 0x10c) = 0;
  return;
}


