/* Module: vegas30.exe
   Function: FUN_0055a060
   Address: 0055a060
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0055a060(int param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_005c7ff0(*(undefined4 *)(param_1 + 4));
  if (fVar1 != (float10)_DAT_00610fd8) {
    *(float *)(param_1 + 0x128) = (float)fVar1;
    return 1;
  }
  return 0;
}


