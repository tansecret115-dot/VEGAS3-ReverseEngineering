/* Module: oggplug.dll
   Function: FUN_004238e0
   Address: 004238e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004238e0(int *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00423890(param_1);
  if (*param_1 == 0xc) {
    return uVar1 * 3;
  }
  return uVar1 << 2;
}


