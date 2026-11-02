/* Module: sfppack1.dll
   Function: FUN_5cdb2130
   Address: 5cdb2130
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5cdb2130(SIZE_T param_1)

{
  HGLOBAL hMem;
  
  hMem = GlobalAlloc(0x40,param_1);
  GlobalLock(hMem);
  return;
}


