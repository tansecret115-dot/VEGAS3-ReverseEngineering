/* Module: vidpcore.dll
   Function: FUN_5de9d9f0
   Address: 5de9d9f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5de9d9f0(char param_1)

{
  int iVar1;
  char local_14 [10];
  char acStack_a [2];
  undefined4 local_8;
  
  if (('/' < param_1) && (param_1 < ':')) {
    return param_1 + -0x30;
  }
  local_8 = DAT_5df2fd04;
  iVar1 = 10;
  do {
    if (local_14[iVar1] == param_1) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x10);
  return 0xf;
}


