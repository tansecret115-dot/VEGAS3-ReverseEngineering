/* Module: vegas30.exe
   Function: FUN_0055d970
   Address: 0055d970
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0055d970(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _SfMetric_Open_16(&param_1,"Vegas",0x300004c,param_1);
  if (-1 < iVar1) {
    uVar2 = _SfGetMetricEx_20(param_1,100,0,300,0xf);
    _SfMetric_Close_4(param_1);
    return uVar2;
  }
  return param_1;
}


