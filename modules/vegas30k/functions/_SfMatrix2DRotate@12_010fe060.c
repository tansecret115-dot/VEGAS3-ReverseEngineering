/* Module: vegas30k.dll
   Function: _SfMatrix2DRotate@12
   Address: 010fe060
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfMatrix2DRotate_12(double param_1,undefined4 param_2)

{
  float10 fVar1;
  float10 fVar2;
  double local_48;
  double local_40;
  double local_30;
  double local_28;
  
                    /* 0xfe060  1107  _SfMatrix2DRotate@12 */
  fVar1 = (float10)fcos((float10)param_1);
  fVar2 = (float10)fsin((float10)param_1);
  _SfMatrix2DMakeIdentity_4(&local_48);
  local_40 = -(double)fVar2;
  local_48 = (double)fVar1;
  local_30 = (double)fVar2;
  local_28 = (double)fVar1;
  _SfMatrix2DConcatenate_8(&local_48,param_2);
  return;
}


