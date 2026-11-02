/* Module: gifplug.dll
   Function: FUN_5f6c49a0
   Address: 5f6c49a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f6c49a0(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; param_1 != 0; param_1 = param_1 >> 1) {
    if ((param_1 & 1) != 0) {
      iVar1 = iVar1 + 1;
    }
  }
  return iVar1;
}


