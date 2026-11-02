/* Module: mcplug.dll
   Function: FUN_00401890
   Address: 00401890
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_00401890(SIZE_T param_1)

{
  HGLOBAL hMem;
  
  hMem = GlobalAlloc(0x40,param_1);
  GlobalLock(hMem);
  return;
}


