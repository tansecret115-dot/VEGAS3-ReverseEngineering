/* Module: sfpaplug.dll
   Function: FUN_004262d0
   Address: 004262d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004262d0(int *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00426280(param_1);
  if (*param_1 == 0xc) {
    return uVar1 * 3;
  }
  return uVar1 << 2;
}


