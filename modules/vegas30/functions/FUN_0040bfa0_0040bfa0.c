/* Module: vegas30.exe
   Function: FUN_0040bfa0
   Address: 0040bfa0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040bfa0(SIZE_T param_1)

{
  HGLOBAL hMem;
  
  hMem = GlobalAlloc(0x40,param_1);
  GlobalLock(hMem);
  return;
}


