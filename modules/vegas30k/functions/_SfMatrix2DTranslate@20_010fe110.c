/* Module: vegas30k.dll
   Function: _SfMatrix2DTranslate@20
   Address: 010fe110
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfMatrix2DTranslate_20
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  undefined1 local_48 [16];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_20;
  undefined4 local_1c;
  
                    /* 0xfe110  1110  _SfMatrix2DTranslate@20 */
  _SfMatrix2DMakeIdentity_4(local_48);
  local_34 = param_2;
  local_20 = param_3;
  local_38 = param_1;
  local_1c = param_4;
  _SfMatrix2DConcatenate_8(local_48,param_5);
  return;
}


