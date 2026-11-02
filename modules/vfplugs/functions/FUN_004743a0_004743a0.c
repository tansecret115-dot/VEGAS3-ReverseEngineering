/* Module: vfplugs.dll
   Function: FUN_004743a0
   Address: 004743a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004743a0(HWND param_1)

{
  HLOCAL hMem;
  
  hMem = (HLOCAL)GetWindowLongA(param_1,0);
  if (hMem != (HLOCAL)0x0) {
    FUN_0044c300(*(int **)((int)hMem + 0x308));
    *(undefined4 *)((int)hMem + 0x308) = 0;
    LocalFree(hMem);
  }
  return;
}


