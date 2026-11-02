/* Module: vegas30.exe
   Function: FUN_0040d4a0
   Address: 0040d4a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040d4a0(int param_1)

{
  if (((byte)*(undefined4 *)(param_1 + 0xc) & 3) == 3) {
    if (DAT_0064aa4c != 0) {
      FUN_00411410(DAT_0064762c,0);
    }
    FUN_00416020(*(undefined4 *)(DAT_0064762c + 0x34),*(undefined4 *)(param_1 + 0x14));
    return;
  }
  BringWindowToTop(*(HWND *)(param_1 + 8));
  return;
}


