/* Module: sftrkfx1.dll
   Function: FUN_5cba1a90
   Address: 5cba1a90
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5cba1a90(SIZE_T param_1)

{
  HGLOBAL hMem;
  
  hMem = GlobalAlloc(0x40,param_1);
  GlobalLock(hMem);
  return;
}


