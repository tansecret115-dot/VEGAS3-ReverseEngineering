/* Module: vidpcore.dll
   Function: FUN_5deb1360
   Address: 5deb1360
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5deb1360(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if ((param_2 < *(int *)(param_1 + 0x10)) ||
     (iVar1 = *(int *)(param_1 + 0x14), *(int *)(param_1 + 0x14) < param_2)) {
    param_2 = iVar1;
  }
  *(int *)(param_1 + 0x1c) = param_2;
  iVar1 = FUN_5deaf2c0(param_1,param_2);
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


