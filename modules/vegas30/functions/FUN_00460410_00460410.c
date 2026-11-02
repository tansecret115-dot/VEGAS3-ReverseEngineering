/* Module: vegas30.exe
   Function: FUN_00460410
   Address: 00460410
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00460410(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x3cc) = DAT_0064b320;
  *(undefined4 *)(param_1 + 0x3d0) = DAT_0064b324;
  *(undefined4 *)(param_1 + 0x3bc) = DAT_0064b328;
  *(undefined4 *)(param_1 + 0x3c0) = DAT_0064b32c;
  *(undefined4 *)(param_1 + 0x3c4) = DAT_0064b330;
  *(undefined4 *)(param_1 + 0x3c8) = DAT_0064b31c;
  if ((param_2 != 0) && (*(HWND *)(param_1 + 4) != (HWND)0x0)) {
    InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)(param_2 + 8),0);
  }
  return;
}


