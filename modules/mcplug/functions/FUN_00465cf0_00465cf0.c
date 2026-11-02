/* Module: mcplug.dll
   Function: FUN_00465cf0
   Address: 00465cf0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00465cf0(int *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00465ca0(param_1);
  if (*param_1 == 0xc) {
    return uVar1 * 3;
  }
  return uVar1 << 2;
}


