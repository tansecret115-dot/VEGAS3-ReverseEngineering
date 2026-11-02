/* Module: vegas30.exe
   Function: FUN_004f0490
   Address: 004f0490
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004f0490(void)

{
  HWND hWnd;
  BOOL BVar1;
  
  if (((DAT_0064762c != 0) && (*(int *)(DAT_0064762c + 0x6c) != 0)) &&
     (hWnd = *(HWND *)(*(int *)(DAT_0064762c + 0x6c) + 0x184), hWnd != (HWND)0x0)) {
    BVar1 = IsWindowEnabled(hWnd);
    if (BVar1 == 0) {
      return 0;
    }
  }
  return 1;
}


