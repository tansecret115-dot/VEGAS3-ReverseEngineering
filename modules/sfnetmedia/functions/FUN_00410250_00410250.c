/* Module: sfnetmedia.dll
   Function: FUN_00410250
   Address: 00410250
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00410250(int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  time_t tVar2;
  int local_3c;
  int local_38;
  _SYSTEMTIME local_34;
  tm local_24;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    local_34.wYear = 0;
    local_34.wMonth = 0;
    local_34.wDayOfWeek = 0;
    local_34.wDay = 0;
    local_34.wHour = 0;
    local_34.wMinute = 0;
    local_34.wSecond = 0;
    local_34.wMilliseconds = 0;
    GetLocalTime(&local_34);
    if (local_34.wYear < 0x76c) {
      local_3c = 0;
    }
    else {
      local_24.tm_sec = (int)local_34.wSecond;
      local_24.tm_min = (int)local_34.wMinute;
      local_24.tm_hour = (int)local_34.wHour;
      local_24.tm_year = local_34.wYear - 0x76c;
      local_24.tm_mday = (int)local_34.wDay;
      local_24.tm_mon = local_34.wMonth - 1;
      local_24.tm_isdst = -1;
      tVar2 = mktime(&local_24);
      local_3c = (int)tVar2;
    }
    FUN_00410de0((int *)(param_1 + 0x18),&local_38,*(int *)(param_1 + 0x14) * 0x15180);
    bVar1 = FUN_00410e00(&local_38,local_3c);
    if (CONCAT31(extraout_var,bVar1) != 0) {
      bVar1 = FUN_00410e00(&local_3c,*(int *)(param_1 + 0x18));
      if (CONCAT31(extraout_var_00,bVar1) != 0) {
        return 1;
      }
    }
  }
  return 0;
}


