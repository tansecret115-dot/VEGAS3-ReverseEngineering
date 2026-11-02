/* Module: encn3260.dll
   Function: FUN_664b7460
   Address: 664b7460
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_664b7460(int param_1,float param_2)

{
  if ((float)_DAT_664df4a0 < param_2) {
    *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
    return 0;
  }
  if (param_2 < (float)_DAT_664df4a8) {
    *(undefined4 *)(param_1 + 0x20) = 0xbf800000;
    return 0;
  }
  *(float *)(param_1 + 0x20) = param_2;
  return 0;
}


