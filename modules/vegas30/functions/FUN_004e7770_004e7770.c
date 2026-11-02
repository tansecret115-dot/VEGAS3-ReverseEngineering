/* Module: vegas30.exe
   Function: FUN_004e7770
   Address: 004e7770
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004e7770(void)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((*(int *)(DAT_0064b108 + 0x80) < 0) &&
     (uVar1 = 2, *(int *)(DAT_0064b108 + 0x80) == -0x7ffb1ff4)) {
    uVar1 = 1;
  }
  return uVar1;
}


