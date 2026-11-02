/* Module: vegas30.exe
   Function: FUN_005935d0
   Address: 005935d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005935d0(int param_1)

{
  HGLOBAL hMem;
  
  hMem = GlobalAlloc(0x42,*(int *)(param_1 + 4) << 6);
  DAT_0065ab80 = GlobalLock(hMem);
  return 0;
}


