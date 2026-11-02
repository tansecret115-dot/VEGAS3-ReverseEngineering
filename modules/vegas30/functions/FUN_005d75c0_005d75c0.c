/* Module: vegas30.exe
   Function: FUN_005d75c0
   Address: 005d75c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005d75c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_4;
  
  uVar2 = 1;
  local_4 = 0;
  iVar1 = _SfMetric_OpenSubKey_12(&local_4,DAT_00647200,s_VideoProProfiles_00646bf4);
  if (iVar1 < 0) {
    return 1;
  }
  iVar1 = _SfSetMetricString_12(local_4,param_1,param_2);
  if (-1 < iVar1) {
    iVar1 = _SfSetMetricBinary_16(local_4,param_1,param_3,0x28);
    if (-1 < iVar1) goto LAB_005d7619;
  }
  uVar2 = 0;
LAB_005d7619:
  _SfMetric_Close_4(local_4);
  return uVar2;
}


