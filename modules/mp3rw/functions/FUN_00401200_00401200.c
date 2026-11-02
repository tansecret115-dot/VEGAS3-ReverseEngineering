/* Module: mp3rw.dll
   Function: FUN_00401200
   Address: 00401200
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_00401200(SIZE_T param_1)

{
  HGLOBAL hMem;
  
  hMem = GlobalAlloc(0x40,param_1);
  GlobalLock(hMem);
  return;
}


