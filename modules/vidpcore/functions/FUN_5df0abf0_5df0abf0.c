/* Module: vidpcore.dll
   Function: FUN_5df0abf0
   Address: 5df0abf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5df0abf0(void)

{
  int iVar1;
  uint local_8;
  uint local_4;
  
  iVar1 = FUN_5df11990(&local_4);
  if (iVar1 < 0) {
    return 0x8004e131;
  }
  iVar1 = FUN_5df0b220(&local_8);
  if (iVar1 < 0) {
    return 0x8004e12f;
  }
  if (local_4 < local_8) {
    return 0x8004e130;
  }
  FUN_5df0b420(local_4 - local_8);
  FUN_5df0b1c0();
  return 0;
}


