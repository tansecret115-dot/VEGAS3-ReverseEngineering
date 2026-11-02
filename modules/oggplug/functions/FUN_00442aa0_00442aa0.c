/* Module: oggplug.dll
   Function: FUN_00442aa0
   Address: 00442aa0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_00442aa0(int *param_1)

{
  uint uVar1;
  
  if (param_1[0x16] < 2) {
    param_1[0x16] = 2;
  }
  if (param_1[1] != 0) {
    uVar1 = FUN_00442af0(param_1);
    if (uVar1 != 0) {
      *param_1 = 0;
      FUN_004425f0(param_1);
    }
    return uVar1;
  }
  return 0;
}


