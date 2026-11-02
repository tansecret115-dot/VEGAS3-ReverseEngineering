/* Module: vidpcore.dll
   Function: FUN_5dead730
   Address: 5dead730
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5dead730(int param_1)

{
  WPARAM wParam;
  HWND pHVar1;
  undefined4 local_c;
  WPARAM local_8;
  undefined4 local_4;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    if (*(int *)(param_1 + 0x18) == 0) {
      pHVar1 = *(HWND *)(param_1 + 4);
      wParam = *(WPARAM *)(param_1 + 0x3c);
      if (pHVar1 == (HWND)0x0) {
        pHVar1 = GetParent(*(HWND *)(param_1 + 0x38));
      }
      local_c = *(undefined4 *)(param_1 + 0x38);
      local_4 = 0xfffffff8;
      local_8 = wParam;
      SendMessageA(pHVar1,0x4e,wParam,(LPARAM)&local_c);
      DestroyCaret();
      return;
    }
    if (*(int *)(param_1 + 0x2c) != 0) {
      pHVar1 = *(HWND *)(param_1 + 4);
      if (pHVar1 == (HWND)0x0) {
        pHVar1 = GetParent(*(HWND *)(param_1 + 0x38));
      }
      SendMessageA(pHVar1,0x111,*(ushort *)(param_1 + 0x3c) | 0x20000,*(LPARAM *)(param_1 + 0x38));
    }
    DestroyCaret();
  }
  return;
}


