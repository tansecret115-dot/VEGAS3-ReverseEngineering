/* Module: sfmarket2.dll
   Function: FUN_0040ef70
   Address: 0040ef70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_0040ef70(wchar_t *param_1,wchar_t *param_2,int *param_3,undefined4 param_4,undefined4 param_5,
            undefined4 *param_6)

{
  undefined4 uVar1;
  HGLOBAL pvVar2;
  LPVOID this;
  undefined4 *puVar3;
  size_t sVar4;
  wchar_t *pwVar5;
  time_t tVar6;
  _SYSTEMTIME local_34;
  tm local_24;
  
  uVar1 = 0x80070057;
  if ((((param_1 != (wchar_t *)0x0) && (param_2 != (wchar_t *)0x0)) &&
      ((param_3 == (int *)0x0 || (0 < *param_3)))) && (param_6 != (undefined4 *)0x0)) {
    pvVar2 = GlobalAlloc(0x40,0x128);
    this = GlobalLock(pvVar2);
    if (this != (LPVOID)0x0) {
      puVar3 = (undefined4 *)FUN_0040e9c0(this,param_5);
      if (puVar3 != (undefined4 *)0x0) {
        sVar4 = wcslen(param_1);
        pvVar2 = GlobalAlloc(0x40,(sVar4 + 1) * 2);
        pwVar5 = GlobalLock(pvVar2);
        puVar3[1] = pwVar5;
        if (pwVar5 != (wchar_t *)0x0) {
          wcscpy(pwVar5,param_1);
          sVar4 = wcslen(param_2);
          pvVar2 = GlobalAlloc(0x40,(sVar4 + 1) * 2);
          pwVar5 = GlobalLock(pvVar2);
          puVar3[2] = pwVar5;
          if (pwVar5 != (wchar_t *)0x0) {
            wcscpy(pwVar5,param_2);
            if (param_3 == (int *)0x0) {
              puVar3[3] = 0;
              puVar3[6] = 0;
              puVar3[7] = param_4;
              *param_6 = puVar3;
              return 0;
            }
            puVar3[3] = 1;
            local_34.wYear = 0;
            local_34.wMonth = 0;
            local_34.wDayOfWeek = 0;
            local_34.wDay = 0;
            puVar3[5] = *param_3;
            local_34.wHour = 0;
            local_34.wMinute = 0;
            local_34.wSecond = 0;
            local_34.wMilliseconds = 0;
            GetLocalTime(&local_34);
            if (local_34.wYear < 0x76c) {
              puVar3[4] = 0;
              puVar3[7] = param_4;
              *param_6 = puVar3;
              return 0;
            }
            local_24.tm_sec = (int)local_34.wSecond;
            local_24.tm_min = (int)local_34.wMinute;
            local_24.tm_hour = (int)local_34.wHour;
            local_24.tm_year = local_34.wYear - 0x76c;
            local_24.tm_mday = (int)local_34.wDay;
            local_24.tm_mon = local_34.wMonth - 1;
            local_24.tm_isdst = -1;
            tVar6 = mktime(&local_24);
            puVar3[4] = (int)tVar6;
            puVar3[7] = param_4;
            *param_6 = puVar3;
            return 0;
          }
        }
        FUN_0040f560(puVar3);
        return 0x8007000e;
      }
    }
    uVar1 = 0x8007000e;
  }
  return uVar1;
}


