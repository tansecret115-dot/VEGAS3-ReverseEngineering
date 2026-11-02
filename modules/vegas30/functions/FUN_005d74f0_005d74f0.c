/* Module: vegas30.exe
   Function: FUN_005d74f0
   Address: 005d74f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005d74f0(void)

{
  int iVar1;
  int iVar2;
  undefined4 local_4;
  
  iVar2 = 0;
  local_4 = 0;
  iVar1 = _SfMetric_OpenSubKey_12(&local_4,DAT_00647200,s_VideoProProfiles_00646bf4);
  if (-1 < iVar1) {
    iVar1 = _SfDoesMetricExist_12(local_4,0,3);
    while (iVar1 == 0) {
      iVar2 = iVar2 + 1;
      iVar1 = _SfDoesMetricExist_12(local_4,iVar2,3);
    }
    _SfMetric_Close_4(local_4);
  }
  return iVar2;
}


