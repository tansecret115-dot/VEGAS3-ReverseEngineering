/* Module: vegas30.exe
   Function: FUN_005d7640
   Address: 005d7640
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005d7640(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_130;
  undefined1 local_12c [40];
  undefined1 local_104 [260];
  
  local_130 = 0;
  iVar1 = FUN_005d74f0();
  iVar2 = _SfMetric_OpenSubKey_12(&local_130,DAT_00647200,s_VideoProProfiles_00646bf4);
  if (iVar2 < 0) {
    return 1;
  }
  if (param_1 < iVar1) {
    iVar2 = param_1;
    do {
      iVar2 = iVar2 + 1;
      _SfDeleteMetric_12(local_130,param_1,1);
      _SfDeleteMetric_12(local_130,param_1,3);
      if (param_1 < iVar1 + -1) {
        iVar3 = _SfGetMetricStringEx_24(local_130,iVar2,local_104,0x104,0,1);
        if (iVar3 == 0) break;
        _SfSetMetricString_12(local_130,param_1,local_104);
        uVar4 = _SfGetMetricBinary_16(local_130,iVar2,local_12c,0x28);
        _SfSetMetricBinary_16(local_130,param_1,local_12c,uVar4);
      }
      param_1 = param_1 + 1;
    } while (param_1 < iVar1);
  }
  _SfMetric_Close_4(local_130);
  return 1;
}


