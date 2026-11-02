/* Module: vidcap30.exe
   Function: FUN_00406010
   Address: 00406010
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00406010(int param_1)

{
  if (((byte)*(undefined4 *)(param_1 + 0xc) & 3) == 3) {
    if (DAT_005bb7d0 != 0) {
      FUN_00408cb0(DAT_005ba4c0,0);
    }
    FUN_0040d730(*(undefined4 *)(DAT_005ba4c0 + 0x38),*(undefined4 *)(param_1 + 0x14));
    return;
  }
  BringWindowToTop(*(HWND *)(param_1 + 8));
  return;
}


