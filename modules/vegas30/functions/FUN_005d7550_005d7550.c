/* Module: vegas30.exe
   Function: FUN_005d7550
   Address: 005d7550
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_005d7550(undefined4 param_1,undefined1 *param_2,undefined4 param_3)

{
  int iVar1;
  bool bVar2;
  undefined4 local_4;
  
  bVar2 = true;
  *param_2 = 0;
  local_4 = 0;
  iVar1 = _SfMetric_OpenSubKey_12(&local_4,DAT_00647200,s_VideoProProfiles_00646bf4);
  if (-1 < iVar1) {
    iVar1 = _SfGetMetricStringEx_24(local_4,param_1,param_2,param_3,0,0);
    bVar2 = iVar1 != 0;
    _SfMetric_Close_4(local_4);
  }
  return bVar2;
}


