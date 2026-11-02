/* Module: vegas30k.dll
   Function: _SfMatrix2DTranslateV@8
   Address: 010fe0c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfMatrix2DTranslateV_8(undefined4 *param_1,undefined4 param_2)

{
  undefined1 local_48 [16];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_20;
  undefined4 local_1c;
  
                    /* 0xfe0c0  1111  _SfMatrix2DTranslateV@8 */
  _SfMatrix2DMakeIdentity_4(local_48);
  local_38 = *param_1;
  local_34 = param_1[1];
  local_20 = param_1[2];
  local_1c = param_1[3];
  _SfMatrix2DConcatenate_8(local_48,param_2);
  return;
}


