/* Module: vidcap30.exe
   Function: FUN_0041f6d0
   Address: 0041f6d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041f6d0(undefined4 *param_1,undefined4 param_2)

{
  if (param_1[1] != 0) {
    _SfSetMetricBinary_16(DAT_005ba29c,param_2,param_1,*param_1);
    return;
  }
  _SfDeleteMetric_12(DAT_005ba29c,param_2,3);
  return;
}


