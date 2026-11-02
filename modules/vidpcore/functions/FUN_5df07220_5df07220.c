/* Module: vidpcore.dll
   Function: FUN_5df07220
   Address: 5df07220
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5df07220(HWND param_1)

{
  HLOCAL hMem;
  
  hMem = (HLOCAL)GetWindowLongA(param_1,0);
  if (hMem != (HLOCAL)0x0) {
    FUN_5ded6070(*(undefined4 *)((int)hMem + 0x308));
    *(undefined4 *)((int)hMem + 0x308) = 0;
    LocalFree(hMem);
  }
  return;
}


