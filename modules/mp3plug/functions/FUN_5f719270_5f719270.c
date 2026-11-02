/* Module: mp3plug.dll
   Function: FUN_5f719270
   Address: 5f719270
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f719270(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if ((uVar1 & 0x80000000) != 0) {
    *param_1 = (uVar1 ^ 9) * 2 | 1;
    return 1;
  }
  *param_1 = uVar1 * 2;
  return 0;
}


