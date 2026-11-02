/* Module: vidcap30.exe
   Function: FUN_004b2c90
   Address: 004b2c90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004b2c90(HWND param_1)

{
  HLOCAL hMem;
  
  hMem = (HLOCAL)GetWindowLongA(param_1,0);
  if (hMem != (HLOCAL)0x0) {
    LocalFree(hMem);
    SetWindowLongA(param_1,0,0);
  }
  return;
}


