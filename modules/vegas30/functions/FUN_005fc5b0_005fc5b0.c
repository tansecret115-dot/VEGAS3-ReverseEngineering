/* Module: vegas30.exe
   Function: FUN_005fc5b0
   Address: 005fc5b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005fc5b0(void)

{
  int iVar1;
  
  iVar1 = FUN_005fc2b0();
  if (iVar1 != 0) {
    return (DAT_00646ea0 << 0x1e) >> 0x1f;
  }
  return 0;
}


