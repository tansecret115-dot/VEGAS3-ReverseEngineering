/* Module: vegas30.exe
   Function: FUN_004527f0
   Address: 004527f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004527f0(HWND param_1)

{
  HLOCAL hMem;
  
  if (param_1 != (HWND)0x0) {
    hMem = (HLOCAL)GetWindowLongA(param_1,8);
    EndDialog(param_1,1);
    if (hMem != (HLOCAL)0x0) {
      LocalFree(hMem);
    }
  }
  return;
}


