/* Module: vidcap30.exe
   Function: FUN_00506820
   Address: 00506820
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00506820(HWND param_1)

{
  HLOCAL hMem;
  
  hMem = (HLOCAL)GetWindowLongA(param_1,0);
  LocalFree(hMem);
  SetWindowLongA(param_1,0,0);
  return;
}


