/* Module: mp3plug.dll
   Function: FUN_5f6c69a0
   Address: 5f6c69a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f6c69a0(int *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_5f6c6950(param_1);
  if (*param_1 == 0xc) {
    return uVar1 * 3;
  }
  return uVar1 << 2;
}


