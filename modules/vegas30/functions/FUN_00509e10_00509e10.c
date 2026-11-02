/* Module: vegas30.exe
   Function: FUN_00509e10
   Address: 00509e10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00509e10(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = _SfGetMetricBool_12(DAT_0064b520,1000,0);
  iVar2 = _SfGetMetric_8(DAT_0064b520,0x3e9);
  if (iVar2 != 10) {
    return 0;
  }
  return uVar1;
}


