/* Module: vegas30.exe
   Function: FUN_005ff850
   Address: 005ff850
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005ff850(void)

{
  int iVar1;
  uint local_8;
  uint local_4;
  
  iVar1 = FUN_00606b80(&local_4);
  if (iVar1 < 0) {
    return 0x8004e131;
  }
  iVar1 = FUN_005ffe80(&local_8);
  if (iVar1 < 0) {
    return 0x8004e12f;
  }
  if (local_4 < local_8) {
    return 0x8004e130;
  }
  FUN_00600080(local_4 - local_8);
  FUN_005ffe20();
  return 0;
}


