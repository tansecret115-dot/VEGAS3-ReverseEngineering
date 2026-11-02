/* Module: oggplug.dll
   Function: FUN_0043c6c0
   Address: 0043c6c0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0043c6c0(void)

{
  uint uVar1;
  
  uVar1 = ftol();
  if (0x3ff < (int)uVar1) {
    return 0x3ff;
  }
  return uVar1 & ((int)uVar1 < 0) - 1;
}


