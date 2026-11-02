/* Module: encn3260.dll
   Function: FUN_664a10d0
   Address: 664a10d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664a10d0(int param_1,int *param_2)

{
  HWND hWnd;
  tagRECT local_14;
  
  *param_2 = *(int *)(param_1 + 0xd1);
  param_2[1] = *(int *)(param_1 + 0xd5);
  if ((*(byte *)(param_1 + 0x5c) & 0x20) == 0) {
    hWnd = *(HWND *)(param_1 + 0x10d);
  }
  else {
    hWnd = *(HWND *)(param_1 + 0xed);
  }
  if (hWnd != (HWND)0x0) {
    GetClientRect(hWnd,&local_14);
    *param_2 = local_14.right - local_14.left;
    param_2[1] = local_14.bottom - local_14.top;
  }
  *(int *)(param_1 + 0xd1) = *param_2;
  *(int *)(param_1 + 0xd5) = param_2[1];
  return 0;
}


