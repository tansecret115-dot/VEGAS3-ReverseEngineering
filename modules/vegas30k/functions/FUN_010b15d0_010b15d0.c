/* Module: vegas30k.dll
   Function: FUN_010b15d0
   Address: 010b15d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010b15d0(int param_1)

{
  uint uVar1;
  WPARAM wParam;
  HWND hWnd;
  undefined4 local_c;
  WPARAM local_8;
  undefined4 local_4;
  
  uVar1 = *(uint *)(param_1 + 4);
  *(uint *)(param_1 + 4) = uVar1 & 0xfffffffd;
  if ((uVar1 & 4) == 0) {
    hWnd = *(HWND *)(param_1 + 0x44);
    wParam = *(WPARAM *)(param_1 + 0x40);
    if (hWnd == (HWND)0x0) {
      hWnd = GetParent(*(HWND *)(param_1 + 0x3c));
    }
    local_c = *(undefined4 *)(param_1 + 0x3c);
    local_4 = 0xfffffff8;
    local_8 = wParam;
    SendMessageA(hWnd,0x4e,wParam,(LPARAM)&local_c);
  }
  DestroyCaret();
  if (*(HGDIOBJ *)(param_1 + 0x294) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x294));
  }
  *(undefined4 *)(param_1 + 0x294) = 0;
  return;
}


