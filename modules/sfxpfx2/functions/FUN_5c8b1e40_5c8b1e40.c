/* Module: sfxpfx2.dll
   Function: FUN_5c8b1e40
   Address: 5c8b1e40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5c8b1e40(byte *param_1,int param_2)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + 0xc) & 0x10) == 0) {
    iVar1 = FUN_5c8b1440(param_1,*(int *)(param_1 + 0x1c));
    if ((param_1[0xc] & 8) == 0) {
      iVar1 = iVar1 - (*(uint *)(param_1 + 0x80) >> 1);
      *(int *)(param_1 + 0xb8) = iVar1;
      *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0x80) + iVar1;
    }
    else {
      iVar1 = iVar1 - (*(uint *)(param_1 + 0x80) >> 1);
      *(int *)(param_1 + 0xbc) = iVar1;
      *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0x80) + iVar1;
    }
  }
  else if ((*(uint *)(param_1 + 0xc) & 8) == 0) {
    iVar1 = FUN_5c8b1440(param_1,*(int *)(param_1 + 0x1c));
    iVar1 = iVar1 - (*(uint *)(param_1 + 0x80) >> 1);
    *(int *)(param_1 + 0xb8) = iVar1;
    *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0x80) + iVar1;
    iVar1 = FUN_5c8b1440(param_1,*(int *)(param_1 + 0x20));
    iVar1 = iVar1 - (*(uint *)(param_1 + 0x80) >> 1);
    *(int *)(param_1 + 0xdc) = iVar1;
    *(int *)(param_1 + 0xe4) = *(int *)(param_1 + 0x80) + iVar1;
  }
  else {
    iVar1 = FUN_5c8b1440(param_1,*(int *)(param_1 + 0x1c));
    iVar1 = iVar1 - (*(uint *)(param_1 + 0x80) >> 1);
    *(int *)(param_1 + 0xbc) = iVar1;
    *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0x80) + iVar1;
    iVar1 = FUN_5c8b1440(param_1,*(int *)(param_1 + 0x20));
    iVar1 = iVar1 - (*(uint *)(param_1 + 0x80) >> 1);
    *(int *)(param_1 + 0xe0) = iVar1;
    *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0x80) + iVar1;
  }
  if (param_2 != 0) {
    InvalidateRect(*(HWND *)(param_1 + 0x30),(RECT *)(param_1 + 0x3c),0);
    if ((param_1[0xc] & 4) == 0) {
      UpdateWindow(*(HWND *)(param_1 + 0x30));
    }
  }
  return;
}


