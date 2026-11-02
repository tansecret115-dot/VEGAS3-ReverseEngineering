/* Module: vegas30k.dll
   Function: _SfMatrix2DScale@20
   Address: 010fe1b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfMatrix2DScale_20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                        ,undefined4 param_5)

{
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_28;
  undefined4 local_24;
  
                    /* 0xfe1b0  1108  _SfMatrix2DScale@20 */
  _SfMatrix2DMakeIdentity_4(&local_48);
  local_44 = param_2;
  local_28 = param_3;
  local_48 = param_1;
  local_24 = param_4;
  _SfMatrix2DConcatenate_8(&local_48,param_5);
  return;
}


