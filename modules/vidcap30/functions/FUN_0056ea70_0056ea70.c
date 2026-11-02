/* Module: vidcap30.exe
   Function: FUN_0056ea70
   Address: 0056ea70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0056ea70(void)

{
  int iVar1;
  uint local_8;
  uint local_4;
  
  iVar1 = FUN_005760d0(&local_4);
  if (iVar1 < 0) {
    return 0x8004e131;
  }
  iVar1 = FUN_0056f0a0(&local_8);
  if (iVar1 < 0) {
    return 0x8004e12f;
  }
  if (local_4 < local_8) {
    return 0x8004e130;
  }
  FUN_0056f2a0(local_4 - local_8);
  FUN_0056f040();
  return 0;
}


