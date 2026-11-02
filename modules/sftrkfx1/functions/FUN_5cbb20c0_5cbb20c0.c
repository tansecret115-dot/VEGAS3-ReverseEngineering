/* Module: sftrkfx1.dll
   Function: FUN_5cbb20c0
   Address: 5cbb20c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5cbb20c0(int param_1)

{
  bool bVar1;
  HWND hWnd;
  undefined3 extraout_var;
  tagRECT local_10;
  
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x14),0xfaa);
  GetClientRect(hWnd,&local_10);
  *(LONG *)(param_1 + 0x164) = local_10.left;
  *(undefined4 *)(param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 0x15c) = 0;
  *(LONG *)(param_1 + 0x168) = local_10.top;
  *(HWND *)(param_1 + 0x160) = hWnd;
  *(LONG *)(param_1 + 0x16c) = local_10.right;
  *(LONG *)(param_1 + 0x174) = local_10.right - local_10.left;
  *(LONG *)(param_1 + 0x170) = local_10.bottom;
  *(LONG *)(param_1 + 0x178) = local_10.bottom - local_10.top;
  bVar1 = FUN_5cbb2150();
  *(uint *)(param_1 + 0x18c) = CONCAT31(extraout_var,bVar1);
  return;
}


