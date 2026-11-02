/* Module: vegas30k.dll
   Function: _SfNanoTimeToTextEx@20
   Address: 01095340
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfNanoTimeToTextEx_20
               (undefined4 param_1,uint *param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  uint uVar1;
  char *pcVar2;
  
                    /* 0x95340  1148  _SfNanoTimeToTextEx@20 */
  pcVar2 = s__I64d_012061b0;
  uVar1 = *param_2;
  if ((-1 < (int)uVar1) && (uVar1 < 0x12)) {
    if ((param_5 & 1) == 0) {
      pcVar2 = (&PTR_s__I64d_011e2748)[uVar1];
    }
    else {
      pcVar2 = (&PTR_s__I64d_011e2790)[uVar1];
    }
  }
  _SfNanoTimeToTextFormat_24(param_1,param_2,param_3,param_4,pcVar2,param_5);
  return;
}


