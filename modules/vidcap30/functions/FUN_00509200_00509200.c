/* Module: vidcap30.exe
   Function: FUN_00509200
   Address: 00509200
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00509200(HWND param_1)

{
  HLOCAL hMem;
  
  hMem = (HLOCAL)GetWindowLongA(param_1,0);
  if (hMem != (HLOCAL)0x0) {
    LocalFree(hMem);
  }
  return;
}


