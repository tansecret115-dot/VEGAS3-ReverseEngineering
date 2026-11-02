/* Module: vidpcore.dll
   Function: FUN_5de03af0
   Address: 5de03af0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5de03af0(SIZE_T param_1)

{
  HGLOBAL hMem;
  
  hMem = GlobalAlloc(0x40,param_1);
  GlobalLock(hMem);
  return;
}


