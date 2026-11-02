/* Module: sctplug.dll
   Function: FUN_00415330
   Address: 00415330
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00415330(int *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_004152e0(param_1);
  if (*param_1 == 0xc) {
    return uVar1 * 3;
  }
  return uVar1 << 2;
}


