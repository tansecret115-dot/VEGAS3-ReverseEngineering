/* Module: sfppack3.dll
   Function: FUN_5cc57c60
   Address: 5cc57c60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cc57c60(int param_1)

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
    pHVar2 = *(HWND *)(param_1 + 0x30);
    wParam = *(WPARAM *)(param_1 + 0x2c);
    if (pHVar2 == (HWND)0x0) {
      pHVar2 = GetParent(*(HWND *)(param_1 + 0x28));
    }
    local_c = *(undefined4 *)(param_1 + 0x28);
    local_4 = 0xfffffff8;
    local_8 = wParam;
    SendMessageA(pHVar2,0x4e,wParam,(LPARAM)&local_c);
    DestroyCaret();
    return;
  }
  if ((uVar1 & 0x80000) != 0) {
    pHVar2 = *(HWND *)(param_1 + 0x30);
    if (pHVar2 == (HWND)0x0) {
      pHVar2 = GetParent(*(HWND *)(param_1 + 0x28));
    }
    SendMessageA(pHVar2,0x111,*(ushort *)(param_1 + 0x2c) | 0x20000,*(LPARAM *)(param_1 + 0x28));
  }
  DestroyCaret();
  return;
}


