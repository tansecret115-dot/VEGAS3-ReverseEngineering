/* Module: sfmarket2.dll
   Function: FUN_0040eb90
   Address: 0040eb90
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0040eb90(int param_1)

{
  time_t tVar1;
  _SYSTEMTIME local_34;
  tm local_24;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    *(undefined4 *)(param_1 + 0x18) = 1;
    return;
  }
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
    *(undefined4 *)(param_1 + 0x10) = 0;
    return;
  }
  local_24.tm_sec = (int)local_34.wSecond;
  local_24.tm_min = (int)local_34.wMinute;
  local_24.tm_hour = (int)local_34.wHour;
  local_24.tm_year = local_34.wYear - 0x76c;
  local_24.tm_mday = (int)local_34.wDay;
  local_24.tm_mon = local_34.wMonth - 1;
  local_24.tm_isdst = -1;
  tVar1 = mktime(&local_24);
  *(int *)(param_1 + 0x10) = (int)tVar1;
  return;
}


