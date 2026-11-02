/* Module: pncrt.dll
   Function: _getsystime
   Address: 7802d840
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl _getsystime(tm *_Tm)

{
  _SYSTEMTIME local_14;
  
                    /* 0x2d840  268  _getsystime */
  GetLocalTime(&local_14);
  _Tm->tm_sec = (uint)local_14.wSecond;
  _Tm->tm_min = (uint)local_14.wMinute;
  _Tm->tm_hour = (uint)local_14.wHour;
  _Tm->tm_mday = (uint)local_14.wDay;
  _Tm->tm_mon = local_14.wMonth - 1;
  _Tm->tm_isdst = -1;
  _Tm->tm_year = local_14.wYear - 0x76c;
  _Tm->tm_wday = (uint)local_14.wDayOfWeek;
  mktime(_Tm);
  return (uint)local_14.wMilliseconds;
}


