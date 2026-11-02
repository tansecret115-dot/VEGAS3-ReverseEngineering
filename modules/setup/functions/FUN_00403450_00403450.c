/* Module: Setup.exe
   Function: FUN_00403450
   Address: 00403450
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_00403450(SIZE_T param_1)

{
  HGLOBAL hMem;
  
  hMem = GlobalAlloc(0x40,param_1);
  GlobalLock(hMem);
  return;
}


