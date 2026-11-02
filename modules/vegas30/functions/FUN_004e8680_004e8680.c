/* Module: vegas30.exe
   Function: FUN_004e8680
   Address: 004e8680
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004e8680(void)

{
  _MEMORYSTATUS local_20;
  
  if (DAT_0064db08 == 0) {
    local_20.dwLength = 0x20;
    GlobalMemoryStatus(&local_20);
    DAT_0064db08 = local_20.dwTotalPhys + 0xa0000;
    DAT_0064db0c = ftol();
    return DAT_0064db0c;
  }
  return DAT_0064db0c;
}


