/* Module: sfppack2.dll
   Function: FUN_5ccd1fe0
   Address: 5ccd1fe0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5ccd1fe0(SIZE_T param_1)

{
  HGLOBAL hMem;
  
  hMem = GlobalAlloc(0x40,param_1);
  GlobalLock(hMem);
  return;
}


