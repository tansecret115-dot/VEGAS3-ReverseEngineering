/* Module: wavplug.dll
   Function: FUN_5f3a69c0
   Address: 5f3a69c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f3a69c0(int *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_5f3a6970(param_1);
  if (*param_1 == 0xc) {
    return uVar1 * 3;
  }
  return uVar1 << 2;
}


