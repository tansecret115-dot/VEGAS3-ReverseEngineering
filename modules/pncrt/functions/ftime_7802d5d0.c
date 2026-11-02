/* Module: pncrt.dll
   Function: ftime
   Address: 7802d5d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* ftime */

void __cdecl ftime(undefined4 *param_1)

{
  time_t tVar1;
  _SYSTEMTIME local_34;
  tm local_24;
  
                    /* 0x2d5d0  250  _ftime */
  FUN_78015b30();
  *(short *)((int)param_1 + 6) =
       ((short)(_timezone / 0x3c) + (short)(_timezone >> 0x1f)) -
       (short)((longlong)_timezone * 0x88888889 >> 0x3f);
  GetLocalTime(&local_34);
  *(WORD *)(param_1 + 1) = local_34.wMilliseconds;
  local_24.tm_year = local_34.wYear - 0x76c;
  local_24.tm_mday = (int)local_34.wDay;
  local_24.tm_mon = local_34.wMonth - 1;
  local_24.tm_hour = (int)local_34.wHour;
  local_24.tm_min = (int)local_34.wMinute;
  local_24.tm_sec = (int)local_34.wSecond;
  local_24.tm_isdst = -1;
  tVar1 = mktime(&local_24);
  *param_1 = (int)tVar1;
  *(undefined2 *)(param_1 + 2) = (undefined2)local_24.tm_isdst;
  return;
}


