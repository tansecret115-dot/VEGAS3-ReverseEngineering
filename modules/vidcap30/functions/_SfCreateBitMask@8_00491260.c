/* Module: vidcap30.exe
   Function: _SfCreateBitMask@8
   Address: 00491260
   Source: Ghidra pseudocode (Stage 10 batch) */


uint _SfCreateBitMask_8(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
                    /* 0x91260  270  _SfCreateBitMask@8 */
  uVar1 = 0;
  uVar2 = 1 << ((byte)param_1 & 0x1f);
  if (param_1 < param_2 + param_1) {
    param_1 = (param_2 + param_1) - param_1;
    do {
      uVar1 = uVar1 | uVar2;
      uVar2 = uVar2 << 1;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return uVar1;
}


