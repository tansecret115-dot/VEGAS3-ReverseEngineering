/* Module: aviplug.dll
   Function: FUN_5f98f740
   Address: 5f98f740
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f98f740(int *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_5f98f6f0(param_1);
  if (*param_1 == 0xc) {
    return uVar1 * 3;
  }
  return uVar1 << 2;
}


