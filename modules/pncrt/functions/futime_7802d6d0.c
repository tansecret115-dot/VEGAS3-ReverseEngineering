/* Module: pncrt.dll
   Function: futime
   Address: 7802d6d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* futime */

undefined4 __cdecl futime(int param_1,time_t *param_2)

{
  tm *ptVar1;
  BOOL BVar2;
  HANDLE hFile;
  int *piVar3;
  FILETIME *lpCreationTime;
  _FILETIME *lpLastAccessTime;
  _FILETIME *lpLastWriteTime;
  undefined4 local_30;
  undefined4 local_2c;
  _FILETIME local_28;
  _FILETIME local_20;
  _FILETIME local_18;
  SYSTEMTIME local_10;
  
                    /* 0x2d6d0  253  _futime */
  if (param_2 == (time_t *)0x0) {
    time((time_t *)&local_2c);
    local_30 = local_2c;
    param_2 = (time_t *)&local_30;
  }
  ptVar1 = localtime((time_t *)((int)param_2 + 4));
  if (ptVar1 != (tm *)0x0) {
    local_10.wYear = (short)ptVar1->tm_year + 0x76c;
    local_10.wMonth = (short)ptVar1->tm_mon + 1;
    local_10.wDay = (WORD)ptVar1->tm_mday;
    local_10.wHour = (WORD)ptVar1->tm_hour;
    local_10.wMinute = (WORD)ptVar1->tm_min;
    local_10.wSecond = (WORD)ptVar1->tm_sec;
    local_10.wMilliseconds = 0;
    BVar2 = SystemTimeToFileTime(&local_10,&local_28);
    if (BVar2 != 0) {
      BVar2 = LocalFileTimeToFileTime(&local_28,&local_20);
      if (BVar2 != 0) {
        ptVar1 = localtime(param_2);
        if (ptVar1 != (tm *)0x0) {
          local_10.wYear = (short)ptVar1->tm_year + 0x76c;
          local_10.wMonth = (short)ptVar1->tm_mon + 1;
          local_10.wDay = (WORD)ptVar1->tm_mday;
          local_10.wHour = (WORD)ptVar1->tm_hour;
          local_10.wMinute = (WORD)ptVar1->tm_min;
          local_10.wSecond = (WORD)ptVar1->tm_sec;
          local_10.wMilliseconds = 0;
          BVar2 = SystemTimeToFileTime(&local_10,&local_28);
          if (BVar2 != 0) {
            BVar2 = LocalFileTimeToFileTime(&local_28,&local_18);
            if (BVar2 != 0) {
              lpLastWriteTime = &local_20;
              lpLastAccessTime = &local_18;
              lpCreationTime = (FILETIME *)0x0;
              hFile = (HANDLE)_get_osfhandle(param_1);
              BVar2 = SetFileTime(hFile,lpCreationTime,lpLastAccessTime,lpLastWriteTime);
              if (BVar2 != 0) {
                return 0;
              }
            }
          }
        }
      }
    }
  }
  piVar3 = _errno();
  *piVar3 = 0x16;
  return 0xffffffff;
}


