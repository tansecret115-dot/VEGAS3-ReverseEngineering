/* Module: wavplug.dll
   Function: FUN_5f382110
   Address: 5f382110
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f382110(SIZE_T param_1)

{
  HGLOBAL hMem;
  
  hMem = GlobalAlloc(0x40,param_1);
  GlobalLock(hMem);
  return;
}


