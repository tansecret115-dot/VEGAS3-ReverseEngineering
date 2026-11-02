/* Module: mp3plug.dll
   Function: FUN_5f681b80
   Address: 5f681b80
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f681b80(SIZE_T param_1)

{
  HGLOBAL hMem;
  
  hMem = GlobalAlloc(0x40,param_1);
  GlobalLock(hMem);
  return;
}


