/* Module: vegas30k.dll
   Function: _SfSetUIColor@8
   Address: 010fb240
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfSetUIColor_8(int param_1,undefined4 param_2)

{
  uint uVar1;
  
                    /* 0xfb240  1200  _SfSetUIColor@8 */
  uVar1 = param_1 - 100;
  if ((-1 < (int)uVar1) && (uVar1 < 0x3b)) {
    (&DAT_01206898)[uVar1] = param_2;
    return 1;
  }
  return 0;
}


