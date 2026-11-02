/* Module: vegas30k.dll
   Function: _SfMatrix2DScaleV@8
   Address: 010fe160
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfMatrix2DScaleV_8(undefined4 *param_1,undefined4 param_2)

{
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_28;
  undefined4 local_24;
  
                    /* 0xfe160  1109  _SfMatrix2DScaleV@8 */
  _SfMatrix2DMakeIdentity_4(&local_48);
  local_48 = *param_1;
  local_44 = param_1[1];
  local_28 = param_1[2];
  local_24 = param_1[3];
  _SfMatrix2DConcatenate_8(&local_48,param_2);
  return;
}


