/* Module: sftrans1.dll
   Function: FUN_004035d0
   Address: 004035d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004035d0(SIZE_T param_1)

{
  HGLOBAL hMem;
  
  hMem = GlobalAlloc(0x40,param_1);
  GlobalLock(hMem);
  return;
}


