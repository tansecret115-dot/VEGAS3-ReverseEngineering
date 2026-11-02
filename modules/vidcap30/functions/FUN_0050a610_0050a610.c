/* Module: vidcap30.exe
   Function: FUN_0050a610
   Address: 0050a610
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0050a610(HWND param_1)

{
  HLOCAL hMem;
  
  hMem = (HLOCAL)GetWindowLongA(param_1,-0x15);
  if (hMem != (HLOCAL)0x0) {
    LocalFree(hMem);
  }
  return;
}


