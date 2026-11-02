/* Module: vegas30.exe
   Function: FUN_0057ae90
   Address: 0057ae90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0057ae90(int param_1,void *param_2)

{
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  time_t tVar5;
  int local_54;
  undefined4 local_50;
  uint local_4c;
  undefined1 local_48 [4];
  _SYSTEMTIME local_44;
  ushort local_34;
  ushort uStack_32;
  undefined2 local_30;
  ushort uStack_2e;
  ushort local_2c;
  ushort uStack_2a;
  ushort local_28;
  undefined2 uStack_26;
  tm local_24;
  
  local_44.wYear = 0;
  local_44.wMonth = 0;
  local_34 = 0;
  uStack_32 = 0;
  local_44.wDayOfWeek = 0;
  local_44.wDay = 0;
  local_30 = 0;
  uStack_2e = 0;
  local_44.wHour = 0;
  local_44.wMinute = 0;
  local_2c = 0;
  uStack_2a = 0;
  local_44.wSecond = 0;
  local_44.wMilliseconds = 0;
  local_28 = 0;
  uStack_26 = 0;
  GetLocalTime(&local_44);
  pvVar1 = param_2;
  local_54 = 0;
  iVar2 = _SfGetMetricBinaryEx_20(DAT_00647200,param_2,&local_34,0x10,&local_54);
  if ((iVar2 < 0) || (local_54 != 0x10)) {
    _SfSetMetricBinary_16(DAT_00647200,pvVar1,&local_44,0x10);
    return 1;
  }
  if (local_44.wYear < 0x76c) {
    local_50 = 0;
  }
  else {
    local_24.tm_sec = (int)local_44.wSecond;
    local_24.tm_min = (int)local_44.wMinute;
    local_24.tm_hour = (int)local_44.wHour;
    local_24.tm_mday = (int)local_44.wDay;
    local_24.tm_mon = local_44.wMonth - 1;
    local_24.tm_year = local_44.wYear - 0x76c;
    local_24.tm_isdst = -1;
    tVar5 = mktime(&local_24);
    local_50 = (undefined4)tVar5;
  }
  if (local_34 < 0x76c) {
    uVar3 = 0;
  }
  else {
    local_24.tm_sec = (int)local_28;
    local_24.tm_min = (int)uStack_2a;
    local_24.tm_hour = (int)local_2c;
    local_24.tm_mday = (int)uStack_2e;
    local_24.tm_mon = uStack_32 - 1;
    local_24.tm_year = local_34 - 0x76c;
    local_24.tm_isdst = -1;
    tVar5 = mktime(&local_24);
    uVar3 = (undefined4)tVar5;
  }
  FUN_0057b230(local_48,uVar3);
  if (pvVar1 == (void *)0xed9) {
    local_4c = 5;
    if (*(int *)(param_1 + 0x1ec) != 0) {
      param_2 = (void *)0x0;
      lVar4 = SfOem_Init(&param_2,(char *)0x0,(char *)0x0);
      if ((-1 < lVar4) && (param_2 != (void *)0x0)) {
        SfOem_GetExitPageTimer(param_2,&local_4c,5);
      }
      SfOem_Done(param_2);
    }
    iVar2 = FUN_0057b220(local_4c * 0x15180);
    if (iVar2 != 0) {
      _SfSetMetricBinary_16(DAT_00647200,0xed9,&local_44,0x10);
      return 1;
    }
  }
  return 0;
}


