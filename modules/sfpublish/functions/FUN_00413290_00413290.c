/* Module: sfpublish.dll
   Function: FUN_00413290
   Address: 00413290
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00413290(int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  time_t tVar2;
  undefined4 local_38;
  _SYSTEMTIME local_34;
  tm local_24;
  
  if (*(int *)(param_1 + 0x3c) == 0) {
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
      local_38 = 0;
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
      local_38 = (undefined4)tVar2;
    }
    bVar1 = FUN_00413500(&local_38,*(int *)(param_1 + 0x38));
    if (CONCAT31(extraout_var,bVar1) != 0) {
      return 1;
    }
  }
  return 0;
}


