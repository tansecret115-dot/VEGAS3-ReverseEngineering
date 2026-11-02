/* Module: sfmarket2.dll
   Function: FUN_004028b0
   Address: 004028b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_004028b0(SIZE_T param_1)

{
  HGLOBAL hMem;
  
  hMem = GlobalAlloc(0x40,param_1);
  GlobalLock(hMem);
  return;
}


