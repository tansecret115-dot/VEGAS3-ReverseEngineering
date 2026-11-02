/* Module: pncrt.dll
   Function: time
   Address: 7802e590
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

time_t __cdecl time(time_t *_Time)

{
  DWORD DVar1;
  int iVar2;
  undefined4 extraout_EDX;
  _SYSTEMTIME local_cc;
  _SYSTEMTIME local_bc;
  _TIME_ZONE_INFORMATION local_ac;
  
                    /* 0x2e590  730  time */
  GetLocalTime(&local_bc);
  GetSystemTime(&local_cc);
  if (local_cc.wMinute == DAT_78042712) {
    if (local_cc.wHour == DAT_78042710) {
      if (local_cc.wDay == DAT_7804270e) {
        if (local_cc.wMonth == DAT_7804270a) {
          if (local_cc.wYear == DAT_78042708) goto LAB_7802e65f;
        }
      }
    }
  }
  DVar1 = GetTimeZoneInformation(&local_ac);
  if (DVar1 == 0xffffffff) {
    DAT_78042700 = -1;
  }
  else if (((DVar1 == 2) && (local_ac.DaylightDate.wMonth != 0)) && (local_ac.DaylightBias != 0)) {
    DAT_78042700 = 1;
  }
  else {
    DAT_78042700 = 0;
  }
  DAT_78042708 = local_cc.wYear;
  DAT_7804270a = local_cc.wMonth;
  _DAT_7804270c = local_cc.wDayOfWeek;
  DAT_7804270e = local_cc.wDay;
  DAT_78042710 = local_cc.wHour;
  DAT_78042712 = local_cc.wMinute;
  _DAT_78042714 = local_cc.wSecond;
  DAT_78042714_2 = local_cc.wMilliseconds;
LAB_7802e65f:
  iVar2 = FUN_7802e770((uint)local_bc.wYear,(uint)local_bc.wMonth,(uint)local_bc.wDay,
                       (uint)local_bc.wHour,(uint)local_bc.wMinute,(uint)local_bc.wSecond,
                       DAT_78042700);
  if (_Time != (time_t *)0x0) {
    *(int *)_Time = iVar2;
  }
  return CONCAT44(extraout_EDX,iVar2);
}


