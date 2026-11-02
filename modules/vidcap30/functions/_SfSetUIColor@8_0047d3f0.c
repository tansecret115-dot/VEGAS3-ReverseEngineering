/* Module: vidcap30.exe
   Function: _SfSetUIColor@8
   Address: 0047d3f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfSetUIColor_8(int param_1,undefined4 param_2)

{
  uint uVar1;
  
                    /* 0x7d3f0  618  _SfSetUIColor@8 */
  uVar1 = param_1 - 100;
  if ((-1 < (int)uVar1) && (uVar1 < 0x3b)) {
    (&DAT_005b6720)[uVar1] = param_2;
    return 1;
  }
  return 0;
}


