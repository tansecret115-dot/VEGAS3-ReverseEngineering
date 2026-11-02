/* Module: sftrans1.dll
   Function: FUN_005286e0
   Address: 005286e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_005286e0(int param_1)

{
  int iVar1;
  tagRECT local_10;
  
  local_10.top = 0;
  local_10.right = 0;
  local_10.left = 0;
  local_10.bottom = 0;
  GetClientRect(*(HWND *)(param_1 + 0x10),&local_10);
  *(int *)(param_1 + 0x34) = local_10.left;
  *(LONG *)(param_1 + 0x38) = local_10.top;
  *(LONG *)(param_1 + 0x3c) = local_10.right;
  *(LONG *)(param_1 + 0x40) = local_10.bottom;
  iVar1 = local_10.right + -10;
  if (local_10.right + -10 < local_10.left) {
    iVar1 = local_10.left;
  }
  *(int *)(param_1 + 0x34) = iVar1;
  *(LONG *)(param_1 + 0x24) = local_10.left;
  *(LONG *)(param_1 + 0x28) = local_10.top;
  *(LONG *)(param_1 + 0x2c) = local_10.right;
  *(LONG *)(param_1 + 0x30) = local_10.bottom;
  *(int *)(param_1 + 0x2c) = iVar1;
  return;
}


