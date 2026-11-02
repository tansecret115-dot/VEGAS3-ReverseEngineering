/* Module: sfcdi.dll
   Function: FUN_5bf351b0
   Address: 5bf351b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf351b0(int *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_5bf35160(param_1);
  if (*param_1 == 0xc) {
    return uVar1 * 3;
  }
  return uVar1 << 2;
}


