/* Module: vidcap30.exe
   Function: FUN_00404b00
   Address: 00404b00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00404b00(SIZE_T param_1)

{
  HGLOBAL hMem;
  
  hMem = GlobalAlloc(0x40,param_1);
  GlobalLock(hMem);
  return;
}


