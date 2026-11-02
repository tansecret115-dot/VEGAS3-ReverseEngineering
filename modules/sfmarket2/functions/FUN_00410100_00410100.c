/* Module: sfmarket2.dll
   Function: FUN_00410100
   Address: 00410100
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */

int * __fastcall FUN_00410100(void *param_1)

{
  int *piVar1;
  void *this;
  bool bVar2;
  LONG LVar3;
  undefined3 extraout_var;
  undefined *puVar4;
  int iVar5;
  LSTATUS LVar6;
  HGLOBAL hMem;
  undefined4 *puVar7;
  int *unaff_EBX;
  int *unaff_EBP;
  int *unaff_ESI;
  int *piVar8;
  time_t tVar9;
  uint uVar10;
  char *pcVar11;
  undefined4 uVar12;
  char *pcVar13;
  int *piStack_8a4;
  wchar_t *pwStack_8a0;
  int *piStack_89c;
  undefined4 *puStack_898;
  undefined4 *puStack_894;
  void *local_890;
  undefined4 uStack_88c;
  undefined4 *puStack_888;
  undefined4 local_884;
  undefined4 *puStack_880;
  uint uStack_87c;
  DWORD aDStack_878 [2];
  _SYSTEMTIME local_870;
  LPCRITICAL_SECTION local_85c;
  int aiStack_858 [2];
  LONG *local_850;
  int local_84c;
  tm local_848;
  BYTE aBStack_824 [2084];
  
  piVar8 = (int *)0x0;
  local_850 = (LONG *)((int)param_1 + 0x1c);
  local_890 = param_1;
  LVar3 = InterlockedExchange(local_850,1);
  if (LVar3 != 0) {
    return (int *)0x0;
  }
  local_85c = (LPCRITICAL_SECTION)((int)param_1 + 4);
  EnterCriticalSection(local_85c);
  local_870.wYear = 0;
  local_870.wMonth = 0;
  local_870.wDayOfWeek = 0;
  local_870.wDay = 0;
  local_870.wHour = 0;
  local_870.wMinute = 0;
  local_870.wSecond = 0;
  local_870.wMilliseconds = 0;
  GetLocalTime(&local_870);
  if (local_870.wYear < 0x76c) {
    local_884 = 0;
  }
  else {
    local_848.tm_sec = (int)local_870.wSecond;
    local_848.tm_min = (int)local_870.wMinute;
    local_848.tm_hour = (int)local_870.wHour;
    local_848.tm_year = local_870.wYear - 0x76c;
    local_848.tm_mday = (int)local_870.wDay;
    local_848.tm_mon = local_870.wMonth - 1;
    local_848.tm_isdst = -1;
    tVar9 = mktime(&local_848);
    local_884 = (undefined4)tVar9;
  }
  FUN_0040f5e0(&local_884,&local_84c,*(int *)((int)param_1 + 0x2c));
  bVar2 = FUN_0040f5d0(&local_84c,*(int *)((int)param_1 + 0x28));
  if (CONCAT31(extraout_var,bVar2) == 0) goto LAB_004106d1;
  aiStack_858[1] = 0;
  GetTickCount();
  pcVar13 = "About to call InternetGetConnectedState...";
  uVar12 = 0x3af;
  pcVar11 = "alertmanager.cpp";
  uVar10 = 4;
  puVar4 = FUN_004012e0();
  FUN_0041ff00((int)puVar4,uVar10,pcVar11,uVar12,pcVar13);
  iVar5 = InternetGetConnectedState(aiStack_858 + 1,0);
  GetTickCount();
  pcVar13 = "Back from InternetGetConnectedState...the call took %d seconds!";
  uVar12 = 0x3b4;
  pcVar11 = "alertmanager.cpp";
  uVar10 = 4;
  puVar4 = FUN_004012e0();
  FUN_0041ff00((int)puVar4,uVar10,pcVar11,uVar12,pcVar13);
  if (iVar5 == 0) goto LAB_004106d1;
  piStack_89c = (int *)0x0;
  piStack_8a4 = (int *)0x0;
  piVar8 = (int *)FUN_00428b40((int *)&piStack_89c,4,-1,-1,0x40000000);
  if ((int)piVar8 < 0) goto LAB_004106d1;
  piVar8 = (int *)FUN_00428b40((int *)&piStack_8a4,4,-1,-1,0x40000000);
  this = local_890;
  if (-1 < (int)piVar8) {
    aBStack_824[0] = '\0';
    puStack_880 = (undefined4 *)0x1;
    aDStack_878[0] = 0x823;
    LVar6 = RegQueryValueExA(*(HKEY *)((int)local_890 + 0x3c),"Alerts",(LPDWORD)0x0,
                             (LPDWORD)&puStack_880,aBStack_824,aDStack_878);
    if (((LVar6 == 0) && (puStack_880 == (undefined4 *)0x1)) &&
       (iVar5 = lstrlenA((LPCSTR)aBStack_824), iVar5 != 0)) {
      uStack_87c = 0;
      puStack_888 = (undefined4 *)0x0;
      piVar8 = (int *)FUN_0040ffd0(this,&puStack_888,&uStack_87c);
      if (-1 < (int)piVar8) {
        hMem = GlobalAlloc(0x40,0x98);
        puVar7 = GlobalLock(hMem);
        if ((puVar7 == (undefined4 *)0x0) ||
           (puVar7 = FUN_0042fa10(puVar7), puVar7 == (undefined4 *)0x0)) {
          piVar8 = (int *)0x8007000e;
        }
        else {
          piVar8 = (int *)FUN_0042fa90(puVar7,(uchar *)"SfMarket");
          if (-1 < (int)piVar8) {
            piVar8 = (int *)FUN_004304e0(puVar7,aBStack_824,"*/*",
                                         (uchar *)"Content-Type: text/xml\r\n",puStack_888,
                                         uStack_87c,(uchar *)0x0);
            if ((int)piVar8 < 0) {
              pcVar11 = "CSfInetHttp::Post failed hr=0x%x";
              uVar12 = 0x475;
            }
            else {
              piVar8 = (int *)FUN_0042e7c0(puVar7,15000);
              if ((int)piVar8 < 0) {
                if (piVar8 == (int *)0x8004e02c) {
                  pcVar11 = "Request timed out waiting for completion change hr=0x%x";
                  uVar12 = 0x469;
                  goto LAB_00410634;
                }
                pcVar11 = "Unknown error while waiting for request completion hr=0x%x";
                uVar12 = 0x470;
              }
              else {
                puStack_898 = (undefined4 *)0x0;
                piVar8 = (int *)FUN_0042fb80(puVar7,aiStack_858,&puStack_898);
                if (piVar8 == (int *)0x8004e0ac) {
                  pcVar11 = 
                  "GetRequestResult returning SF_E_INPROGRESS, but WaitForRequestComplete() was ok. hr=0x%x"
                  ;
                  uVar12 = 0x3f3;
LAB_00410634:
                  pcVar13 = "alertmanager.cpp";
                  uVar10 = 1;
                  puVar4 = FUN_004012e0();
                  FUN_0041ff00((int)puVar4,uVar10,pcVar13,uVar12,pcVar11);
                  FUN_0042e8c0((int)puVar7);
                  piVar8 = (int *)0x0;
                  FUN_0042e5f0(puVar7);
                  goto LAB_0041069e;
                }
                if (-1 < (int)piVar8) {
                  if (((aiStack_858[0] < 0) || ((int)puStack_898[2] < 200)) ||
                     (299 < (int)puStack_898[2])) {
                    if (puStack_898 == (undefined4 *)0x0) {
                      pcVar13 = 
                      "Could not post config data to alert server - hrResult=0x%x, no CSfHttpResponse object"
                      ;
                      uVar12 = 0x455;
                      pcVar11 = "alertmanager.cpp";
                      uVar10 = 1;
                      puVar4 = FUN_004012e0();
                      FUN_0041ff00((int)puVar4,uVar10,pcVar11,uVar12,pcVar13);
                    }
                    else {
                      pcVar13 = 
                      "Could not post config data to alert server - hrResult=0x%x, HTTP status code=%d"
                      ;
                      uVar12 = 0x451;
                      pcVar11 = "alertmanager.cpp";
                      uVar10 = 1;
                      puVar4 = FUN_004012e0();
                      FUN_0041ff00((int)puVar4,uVar10,pcVar11,uVar12,pcVar13);
                    }
                    piVar8 = (int *)0x8004e0ec;
                  }
                  else {
                    pcVar13 = "Successfully posted config data to alert server.";
                    uVar12 = 0x3ff;
                    pcVar11 = "alertmanager.cpp";
                    uVar10 = 4;
                    puVar4 = FUN_004012e0();
                    FUN_0041ff00((int)puVar4,uVar10,pcVar11,uVar12,pcVar13);
                    uStack_88c = 0;
                    uVar12 = FUN_0042f140(puStack_898,&uStack_88c);
                    puStack_894 = (undefined4 *)0x0;
                    piVar8 = (int *)CoCreateInstance((IID *)&DAT_00495f18,(LPUNKNOWN)0x0,1,
                                                     (IID *)&DAT_00495f28,&puStack_894);
                    if (-1 < (int)piVar8) {
                      pwStack_8a0 = (wchar_t *)0x0;
                      piVar8 = (int *)(**(code **)*puStack_894)
                                                (puStack_894,&DAT_004a4270,&pwStack_8a0);
                      if (-1 < (int)piVar8) {
                        puStack_880 = (undefined4 *)0x0;
                        piVar8 = (int *)(**(code **)(*unaff_EBP + 0x10))
                                                  (unaff_EBP,uVar12,puStack_898,&puStack_880);
                        if (-1 < (int)piVar8) {
                          if (puStack_880 == puStack_898) {
                            (**(code **)(*unaff_EBP + 8))(unaff_EBP);
                            unaff_EBP = (int *)0x0;
                            piVar8 = FUN_00410730(pwStack_8a0,unaff_EBX,unaff_ESI,
                                                  (int *)&local_870.wDayOfWeek);
                            piVar1 = piStack_89c;
                            if (-1 < (int)piVar8) {
                              piStack_89c[10] = CONCAT22(local_870.wDay,local_870.wDayOfWeek);
                              if ((int *)piStack_89c[8] != (int *)0x0) {
                                FUN_00410fc0((int *)piStack_89c[8],unaff_EBX);
                                FUN_00411010((int *)piVar1[8]);
                              }
                              piVar1[8] = (int)unaff_EBX;
                              if ((int *)piVar1[9] != (int *)0x0) {
                                FUN_00410fc0((int *)piVar1[9],unaff_ESI);
                                FUN_00411010((int *)piVar1[9]);
                              }
                              piVar1[9] = (int)unaff_ESI;
                              piVar1[0xb] = (int)local_890;
                            }
                          }
                          else {
                            piVar8 = (int *)0x8004e039;
                          }
                        }
                        if (unaff_EBP != (int *)0x0) {
                          (**(code **)(*unaff_EBP + 8))(unaff_EBP);
                        }
                      }
                      (**(code **)(*(int *)pwStack_8a0 + 8))(pwStack_8a0);
                    }
                  }
                  if (puStack_898 != (undefined4 *)0x0) {
                    FUN_0042f120(puStack_898);
                    FUN_0042e5f0(puVar7);
                    goto LAB_0041069e;
                  }
                  goto LAB_0041068c;
                }
                pcVar11 = "Could not get status of post hr=0x%x";
                uVar12 = 0x463;
              }
            }
            pcVar13 = "alertmanager.cpp";
            uVar10 = 1;
            puVar4 = FUN_004012e0();
            FUN_0041ff00((int)puVar4,uVar10,pcVar13,uVar12,pcVar11);
          }
LAB_0041068c:
          FUN_0042e5f0(puVar7);
        }
LAB_0041069e:
        CoTaskMemFree(puStack_888);
        if (-1 < (int)piVar8) goto LAB_004106d1;
      }
    }
    else {
      pcVar13 = "Could not read Alerts key from registry.  ev = %d  type = %d  cb = %d";
      uVar12 = 0x487;
      pcVar11 = "alertmanager.cpp";
      uVar10 = 1;
      puVar4 = FUN_004012e0();
      FUN_0041ff00((int)puVar4,uVar10,pcVar11,uVar12,pcVar13);
      piVar8 = (int *)0x80004005;
    }
    FUN_00411010(piStack_8a4);
    piStack_8a4 = (int *)0x0;
    if (-1 < (int)piVar8) goto LAB_004106d1;
  }
  FUN_00411010(piStack_89c);
LAB_004106d1:
  InterlockedExchange(local_850,0);
  LeaveCriticalSection(local_85c);
  return piVar8;
}


