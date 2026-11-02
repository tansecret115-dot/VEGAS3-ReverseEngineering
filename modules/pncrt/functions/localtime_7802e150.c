/* Module: pncrt.dll
   Function: localtime
   Address: 7802e150
   Source: Ghidra pseudocode (Stage 10 batch) */


tm * __cdecl localtime(time_t *_Time)

{
  time_t *_Time_00;
  tm *ptVar1;
  int iVar2;
  int iVar3;
  
                    /* 0x2e150  663  localtime */
  _Time_00 = _Time;
  if ((int)*_Time < 0) {
    return (tm *)0x0;
  }
  FUN_78015b30();
  iVar2 = (int)*_Time_00;
  if ((iVar2 < 0x3f481) || (0x7ffc0b7e < iVar2)) {
    ptVar1 = gmtime(_Time_00);
    iVar3 = __isindst(ptVar1);
    iVar2 = ptVar1->tm_sec;
    if (iVar3 != 0) {
      iVar2 = iVar2 - _dstbias;
    }
    _Time = (time_t *)(iVar2 - _timezone);
    iVar2 = (int)_Time % 0x3c;
    ptVar1->tm_sec = iVar2;
    if (iVar2 < 0) {
      ptVar1->tm_sec = iVar2 + 0x3c;
      _Time = (time_t *)((int)_Time + -0x3c);
    }
    _Time = (time_t *)((int)_Time / 0x3c + ptVar1->tm_min);
    iVar2 = (int)_Time % 0x3c;
    ptVar1->tm_min = iVar2;
    if (iVar2 < 0) {
      ptVar1->tm_min = iVar2 + 0x3c;
      _Time = (time_t *)((int)_Time + -0x3c);
    }
    _Time = (time_t *)((int)_Time / 0x3c + ptVar1->tm_hour);
    iVar2 = (int)_Time % 0x18;
    ptVar1->tm_hour = iVar2;
    if (iVar2 < 0) {
      ptVar1->tm_hour = iVar2 + 0x18;
      _Time = _Time + -3;
    }
    iVar2 = (int)_Time / 0x18;
    if (0 < iVar2) {
      ptVar1->tm_wday = (iVar2 + ptVar1->tm_wday) % 7;
      ptVar1->tm_mday = ptVar1->tm_mday + iVar2;
      ptVar1->tm_yday = ptVar1->tm_yday + iVar2;
      return ptVar1;
    }
    if (iVar2 < 0) {
      ptVar1->tm_wday = (iVar2 + 7 + ptVar1->tm_wday) % 7;
      iVar3 = ptVar1->tm_mday + iVar2;
      ptVar1->tm_mday = iVar3;
      if (iVar3 < 1) {
        ptVar1->tm_yday = 0x16c;
        ptVar1->tm_mday = iVar3 + 0x1f;
        ptVar1->tm_mon = 0xb;
        ptVar1->tm_year = ptVar1->tm_year + -1;
        return ptVar1;
      }
      ptVar1->tm_yday = ptVar1->tm_yday + iVar2;
    }
  }
  else {
    _Time = (time_t *)(iVar2 - _timezone);
    ptVar1 = gmtime((time_t *)&_Time);
    if (_daylight != 0) {
      iVar2 = __isindst(ptVar1);
      if (iVar2 != 0) {
        _Time = (time_t *)((int)_Time - _dstbias);
        ptVar1 = gmtime((time_t *)&_Time);
        ptVar1->tm_isdst = 1;
        return ptVar1;
      }
    }
  }
  return ptVar1;
}


