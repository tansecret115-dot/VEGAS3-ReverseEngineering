/* Module: vegas30.exe
   Function: FUN_0050d160
   Address: 0050d160
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0050d160(int param_1)

{
  int iVar1;
  
  FUN_0051e1d0(param_1);
  FUN_0050c0d0(param_1);
  iVar1 = *(int *)(param_1 + 0x98);
  if (iVar1 != 0) {
    FUN_00538410(*(undefined4 *)(param_1 + 0x90),*(undefined4 *)(iVar1 + 0x88),
                 *(undefined4 *)(iVar1 + 0x8c));
  }
  InvalidateRect(*(HWND *)(param_1 + 8),(RECT *)0x0,0);
  iVar1 = FUN_0050c1a0(param_1);
  if (iVar1 != 0) {
    InvalidateRect(*(HWND *)(param_1 + 0x180),(RECT *)0x0,0);
  }
  return;
}


