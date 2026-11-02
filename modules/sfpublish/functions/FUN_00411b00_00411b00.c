/* Module: sfpublish.dll
   Function: FUN_00411b00
   Address: 00411b00
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_00411b00(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  LPCSTR pCVar3;
  HANDLE hHandle;
  HCURSOR hCursor;
  DWORD DVar4;
  HGLOBAL pvVar5;
  uchar *puVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  void *local_224;
  LPBYTE local_220;
  uint local_21c;
  int local_218;
  uchar *local_214;
  HCURSOR local_210;
  HANDLE local_20c;
  uchar local_208 [260];
  uchar local_104 [260];
  
  iVar8 = 0;
  iVar2 = FUN_00411650((int)param_1);
  iVar2 = iVar2 + -1;
  if (-1 < iVar2) {
    do {
      pCVar3 = (LPCSTR)FUN_004116d0(param_1,iVar2);
      iVar8 = FUN_00411590(param_1,pCVar3);
      if (iVar8 < 0) {
        return iVar8;
      }
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
    if (iVar8 < 0) {
      return iVar8;
    }
  }
  local_224 = (void *)0x0;
  hHandle = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,"Sonic Foundry Publishing Provider Guard");
  if (hHandle != (HANDLE)0x0) {
    local_20c = hHandle;
    hCursor = (HCURSOR)FUN_00423b10(0x7f02);
    local_210 = SetCursor(hCursor);
    DVar4 = WaitForSingleObject(hHandle,3000);
    if (DVar4 != 0x102) {
      pcVar9 = "sfpublish\\providers";
      iVar2 = FUN_00401310();
      iVar8 = FUN_0041fd60(&local_224,iVar2,(int)pcVar9);
      if (-1 < iVar8) {
        if (DAT_004419e4 != 0) {
          local_21c = 2;
          do {
            iVar2 = FUN_0041f830((int)local_224,local_21c,(LPBYTE)0x0,0,(LPCSTR)0x0,1);
            if (iVar2 != 0) {
              pvVar5 = GlobalAlloc(0x42,iVar2 + 1U);
              local_220 = GlobalLock(pvVar5);
              if (local_220 == (LPBYTE)0x0) {
                iVar8 = -0x7ff8fff2;
              }
              else {
                FUN_0041f830((int)local_224,local_21c,local_220,iVar2 + 1U,(LPCSTR)0x0,1);
                _mbscpy(local_104,(uchar *)*param_1);
                puVar6 = _mbstok(local_220,"|");
                if (puVar6 != (uchar *)0x0) {
                  iVar2 = lstrcmpiA((LPCSTR)puVar6,(LPCSTR)local_104);
                  if (((iVar2 == 0) && (puVar6 = _mbstok((uchar *)0x0,"|"), puVar6 != (uchar *)0x0))
                     && (iVar2 = FUN_00426fe0((LPCSTR)puVar6,(undefined4 *)0x0), 0 < iVar2)) {
                    local_214 = _mbstok((uchar *)0x0,"|");
                    if (0 < iVar2) {
                      do {
                        local_218 = iVar2;
                        puVar6 = _mbstok((uchar *)0x0,"|");
                        iVar8 = FUN_004114e0(param_1,puVar6);
                        if (-1 < iVar8) {
                          _mbscpy(local_208,puVar6);
                          puVar6 = _mbstok((uchar *)0x0,"|");
                          iVar8 = FUN_00411700(param_1,(LPCSTR)local_208,puVar6);
                          if (-1 < iVar8) {
                            puVar6 = _mbstok((uchar *)0x0,"|");
                            iVar8 = FUN_00411a40(param_1,(LPCSTR)local_208,puVar6);
                            if (-1 < iVar8) {
                              puVar6 = _mbstok((uchar *)0x0,"|");
                              iVar8 = FUN_00411980(param_1,(LPCSTR)local_208,puVar6);
                            }
                          }
                        }
                        local_218 = local_218 + -1;
                        iVar2 = local_218;
                      } while (local_218 != 0);
                    }
                    if (-1 < iVar8) {
                      iVar8 = FUN_00411660(param_1,(LPCSTR)local_214);
                    }
                  }
                  pvVar5 = GlobalHandle(local_220);
                  GlobalUnlock(pvVar5);
                  pvVar5 = GlobalHandle(local_220);
                  GlobalFree(pvVar5);
                }
              }
            }
            uVar7 = local_21c + 1;
            uVar1 = local_21c - 1;
            hHandle = local_20c;
            local_21c = uVar7;
          } while (uVar1 < DAT_004419e4);
        }
        FUN_00420100(local_224);
        local_224 = (void *)0x0;
      }
      ReleaseMutex(hHandle);
    }
    SetCursor(local_210);
    CloseHandle(hHandle);
  }
  return iVar8;
}


