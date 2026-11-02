/* Module: pncrt.dll
   Function: _setsystime
   Address: 7802d8d0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl _setsystime(tm *_Tm,uint _MilliSec)

{
  BOOL BVar1;
  DWORD DVar2;
  SYSTEMTIME local_10;
  
                    /* 0x2d8d0  438  _setsystime */
  mktime(_Tm);
  local_10.wDay = (WORD)_Tm->tm_mday;
  local_10.wYear = (short)_Tm->tm_year + 0x76c;
  local_10.wMonth = (short)_Tm->tm_mon + 1;
  local_10.wMinute = (WORD)_Tm->tm_min;
  local_10.wHour = (WORD)_Tm->tm_hour;
  local_10.wSecond = (WORD)_Tm->tm_sec;
  local_10.wMilliseconds = (WORD)_MilliSec;
  BVar1 = SetLocalTime(&local_10);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    return DVar2;
  }
  return 0;
}


