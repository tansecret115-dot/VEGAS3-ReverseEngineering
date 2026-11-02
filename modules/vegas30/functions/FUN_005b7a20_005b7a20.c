/* Module: vegas30.exe
   Function: FUN_005b7a20
   Address: 005b7a20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005b7a20(int param_1)

{
  HGLOBAL hMem;
  
  hMem = GlobalAlloc(0x42,param_1 << 5);
  GlobalLock(hMem);
  return;
}


