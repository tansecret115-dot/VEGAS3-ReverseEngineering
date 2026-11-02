/* Module: rmme3260.dll
   Function: FUN_662451b0
   Address: 662451b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_662451b0(int param_1,float param_2)

{
  if ((float)_DAT_6626c818 < param_2) {
    *(undefined4 *)(param_1 + 0x10) = 0x3f800000;
    return 0;
  }
  if (param_2 < (float)_DAT_6626c800) {
    *(undefined4 *)(param_1 + 0x10) = 0xbf800000;
    return 0;
  }
  *(float *)(param_1 + 0x10) = param_2;
  return 0;
}


