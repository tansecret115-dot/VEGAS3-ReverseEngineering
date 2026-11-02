/* Module: vegas30k.dll
   Function: FUN_0111e080
   Address: 0111e080
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0111e080(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if ((param_2 < *(int *)(param_1 + 0x10)) ||
     (iVar1 = *(int *)(param_1 + 0x14), *(int *)(param_1 + 0x14) < param_2)) {
    param_2 = iVar1;
  }
  *(int *)(param_1 + 0x1c) = param_2;
  iVar1 = FUN_0111bfe0(param_1,param_2);
  if ((*(byte *)(param_1 + 0xc) & 8) == 0) {
    iVar1 = iVar1 - (*(int *)(param_1 + 0x78) + 1U >> 1);
    *(int *)(param_1 + 0x68) = iVar1;
    *(int *)(param_1 + 0x70) = iVar1 + *(int *)(param_1 + 0x78);
  }
  else {
    iVar1 = iVar1 - (*(int *)(param_1 + 0x78) + 1U >> 1);
    *(int *)(param_1 + 0x6c) = iVar1;
    *(int *)(param_1 + 0x74) = iVar1 + *(int *)(param_1 + 0x78);
  }
  if ((param_3 != 0) && ((*(uint *)(param_1 + 0xc) & 0x100000) == 0)) {
    InvalidateRect(*(HWND *)(param_1 + 0x28),(RECT *)(param_1 + 0x34),0);
    UpdateWindow(*(HWND *)(param_1 + 0x28));
  }
  return;
}


