/* Module: rmbe3260.dll
   Function: FUN_66025020
   Address: 66025020
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_66025020(int param_1,float param_2)

{
  if (param_2 < _DAT_66066fc8) {
    param_2 = _DAT_66066fc8;
  }
  *(float *)(param_1 + 0x62) = param_2;
  if (param_2 < *(float *)(param_1 + 0x1c)) {
    *(undefined4 *)(param_1 + 0x62) = *(undefined4 *)(param_1 + 0x1c);
  }
  return 0;
}


