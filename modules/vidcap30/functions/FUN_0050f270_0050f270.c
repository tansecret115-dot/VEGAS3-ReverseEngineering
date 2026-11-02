/* Module: vidcap30.exe
   Function: FUN_0050f270
   Address: 0050f270
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0050f270(HWND param_1)

{
  HLOCAL hMem;
  
  hMem = (HLOCAL)GetWindowLongA(param_1,-0x15);
  if (hMem != (HLOCAL)0x0) {
    FUN_0050f220(hMem);
    LocalFree(hMem);
  }
  return;
}


