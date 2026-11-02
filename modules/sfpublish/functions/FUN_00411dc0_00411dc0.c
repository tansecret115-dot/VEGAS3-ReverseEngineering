/* Module: sfpublish.dll
   Function: FUN_00411dc0
   Address: 00411dc0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_00411dc0(void *param_1,uint param_2,HCURSOR param_3,HANDLE param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uchar *puVar4;
  uchar *puVar5;
  int iVar6;
  HANDLE hHandle;
  HCURSOR hCursor;
  DWORD DVar7;
  HGLOBAL pvVar8;
  int *this;
  int iVar9;
  char *pcVar10;
  
  FUN_004328f0();
  param_2 = 0;
  if (*this != 0) {
    iVar2 = FUN_00411650((int)this);
    if (iVar2 != 0) {
      FUN_00418d60(&stack0x00000320,"%s|");
      puVar4 = &stack0x0000021c;
      iVar2 = 0;
      uVar3 = FUN_00411650((int)this);
      FUN_00426870(uVar3,puVar4,iVar2);
      _mbscat(&stack0x00000320,&stack0x0000021c);
      _mbscat(&stack0x00000320,"|");
      puVar4 = (uchar *)FUN_004116b0((int)this);
      _mbscat(&stack0x00000320,puVar4);
      _mbscat(&stack0x00000320,"|");
      iVar2 = lstrlenA(&stack0x00000320);
      puVar4 = &stack0x00000320 + iVar2;
      iVar9 = 0;
      iVar2 = FUN_00411650((int)this);
      if (0 < iVar2) {
        do {
          if (&stack0x0000fcbc < puVar4) {
            puVar4 = (uchar *)FUN_0041b9f0(DAT_0044164c,0x87);
            FUN_00419230((HWND)0x0,0x10,puVar4);
            return 0x8007000e;
          }
          puVar5 = (uchar *)FUN_004116d0(this,iVar9);
          _mbscpy(&stack0x00000118,puVar5);
          _mbscpy(puVar4,&stack0x00000118);
          iVar2 = lstrlenA(&stack0x00000118);
          puVar4 = puVar4 + iVar2;
          _mbscpy(puVar4,"|");
          iVar2 = lstrlenA("|");
          puVar4 = puVar4 + iVar2;
          puVar5 = FUN_00411760(this,&stack0x00000118);
          _mbscpy(&stack0x00000014,puVar5);
          _mbscpy(puVar4,&stack0x00000014);
          iVar2 = lstrlenA(&stack0x00000014);
          puVar4 = puVar4 + iVar2;
          _mbscpy(puVar4,"|");
          iVar2 = lstrlenA("|");
          puVar4 = puVar4 + iVar2;
          puVar5 = (uchar *)FUN_00411aa0(this,&stack0x00000118);
          _mbscpy(&stack0x00000014,puVar5);
          _mbscpy(puVar4,&stack0x00000014);
          iVar2 = lstrlenA(&stack0x00000014);
          puVar4 = puVar4 + iVar2;
          _mbscpy(puVar4,"|");
          iVar2 = lstrlenA("|");
          puVar4 = puVar4 + iVar2;
          puVar5 = (uchar *)FUN_004119e0(this,&stack0x00000118);
          _mbscpy(&stack0x00000014,puVar5);
          _mbscpy(puVar4,&stack0x00000014);
          iVar2 = lstrlenA(&stack0x00000014);
          _mbscpy(puVar4 + iVar2,"|");
          iVar6 = lstrlenA("|");
          puVar4 = puVar4 + iVar2 + iVar6;
          iVar9 = iVar9 + 1;
          iVar2 = FUN_00411650((int)this);
        } while (iVar9 < iVar2);
      }
    }
    param_1 = (void *)0x0;
    hHandle = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,"Sonic Foundry Publishing Provider Guard");
    if (hHandle != (HANDLE)0x0) {
      param_4 = hHandle;
      hCursor = (HCURSOR)FUN_00423b10(0x7f02);
      param_3 = SetCursor(hCursor);
      DVar7 = WaitForSingleObject(hHandle,3000);
      if (DVar7 != 0x102) {
        pcVar10 = "sfpublish\\providers";
        iVar2 = FUN_00401310();
        param_2 = FUN_0041fd60(&param_1,iVar2,(int)pcVar10);
        if (-1 < (int)param_2) {
          if (DAT_004419e4 != 0) {
            uVar3 = 2;
            do {
              iVar2 = FUN_0041f830((int)param_1,uVar3,(LPBYTE)0x0,0,(LPCSTR)0x0,1);
              if (iVar2 != 0) {
                pvVar8 = GlobalAlloc(0x42,iVar2 + 1U);
                puVar4 = GlobalLock(pvVar8);
                if (puVar4 == (uchar *)0x0) {
                  param_2 = 0x8007000e;
                }
                else {
                  FUN_0041f830((int)param_1,uVar3,puVar4,iVar2 + 1U,(LPCSTR)0x0,1);
                  puVar5 = _mbstok(puVar4,"|");
                  iVar2 = lstrcmpiA((LPCSTR)puVar5,(LPCSTR)*this);
                  if (iVar2 == 0) {
                    iVar2 = FUN_00411650((int)this);
                    if (iVar2 == 0) {
                      _mbscpy(&stack0x00000320,(uchar *)*this);
                      _mbscat(&stack0x00000320,"|");
                    }
                    param_2 = FUN_0041f940((int)param_1,uVar3,&stack0x00000320);
                  }
                  pvVar8 = GlobalHandle(puVar4);
                  GlobalUnlock(pvVar8);
                  pvVar8 = GlobalHandle(puVar4);
                  GlobalFree(pvVar8);
                }
              }
              uVar1 = uVar3 - 1;
              hHandle = param_4;
              uVar3 = uVar3 + 1;
            } while (uVar1 < DAT_004419e4);
          }
          FUN_00420100(param_1);
          param_1 = (void *)0x0;
        }
        ReleaseMutex(hHandle);
      }
      SetCursor(param_3);
      CloseHandle(hHandle);
    }
  }
  return param_2;
}


