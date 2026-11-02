/* Module: aviplug.dll
   Function: FUN_5f979aa0
   Address: 5f979aa0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f979aa0(uint param_1)

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


