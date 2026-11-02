/* Module: vidcap30.exe
   Function: FUN_00416df0
   Address: 00416df0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00416df0(void)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((*(int *)(DAT_005bb808 + 0x7c) < 0) &&
     (uVar1 = 2, *(int *)(DAT_005bb808 + 0x7c) == -0x7ffb1ff4)) {
    uVar1 = 1;
  }
  return uVar1;
}


