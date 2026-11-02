/* Module: hhupd.exe
   Function: FUN_010051a5
   Address: 010051a5
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_010051a5(char *param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  char *pcVar4;
  LPSTR pCVar5;
  short *psVar6;
  DWORD DVar7;
  short *psVar8;
  int iVar9;
  char *lpString1;
  char local_110 [3];
  undefined2 local_10d;
  char *local_c;
  int local_8;
  
  local_8 = 1;
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    return 1;
  }
  cVar3 = *param_1;
  pcVar4 = param_1;
  do {
    if ((cVar3 == '\0') || (local_8 == 0)) goto LAB_010055e2;
    for (; (cVar3 = *pcVar4, cVar3 == ' ' ||
           ((((cVar3 == '\t' || (cVar3 == '\r')) || (cVar3 == '\n')) ||
            ((cVar3 == '\v' || (cVar3 == '\f')))))); pcVar4 = CharNextA(pcVar4)) {
    }
    if (*pcVar4 == '\0') goto LAB_010055e2;
    iVar9 = 0;
    bVar1 = false;
    bVar2 = false;
    do {
      local_c = pcVar4;
      if (bVar1) {
        if (bVar2) break;
      }
      else {
        cVar3 = *pcVar4;
        if (((cVar3 == ' ') || (cVar3 == '\t')) ||
           ((cVar3 == '\r' || (((cVar3 == '\n' || (cVar3 == '\v')) || (cVar3 == '\f')))))) break;
      }
      if (*pcVar4 == '\"') {
        local_c = pcVar4 + 1;
        if (pcVar4[1] == '\"') {
          local_110[iVar9] = '\"';
          iVar9 = iVar9 + 1;
          local_c = pcVar4 + 2;
        }
        else if (bVar1) {
          bVar2 = true;
        }
        else {
          bVar1 = true;
        }
      }
      else {
        local_110[iVar9] = *pcVar4;
        iVar9 = iVar9 + 1;
        local_c = pcVar4 + 1;
      }
      pcVar4 = local_c;
    } while (*local_c != '\0');
    local_110[iVar9] = '\0';
    if (bVar1) {
      if (!bVar2) {
        if (!bVar1) goto LAB_01005294;
        goto LAB_010055df;
      }
    }
    else {
LAB_01005294:
      if (bVar2) {
LAB_010055df:
        local_8 = 0;
LAB_010055e2:
        if (DAT_0100aaac == 0) {
          return local_8;
        }
        if (DAT_0100abbe == '\0') {
          DVar7 = GetModuleFileNameA(DAT_0100b6dc,&DAT_0100abbe,0x104);
          if (DVar7 == 0) {
            return 0;
          }
          psVar8 = FUN_010059b8((short *)&DAT_0100abbe,0x5c);
          *(undefined1 *)((int)psVar8 + 1) = 0;
          return local_8;
        }
        return local_8;
      }
    }
    if ((local_110[0] != '/') && (local_110[0] != '-')) {
      return 0;
    }
    pCVar5 = CharUpperA((LPSTR)(int)local_110[1]);
    cVar3 = (char)pCVar5;
    if (cVar3 == '?') {
      FUN_01001b01();
      if (DAT_0100aa80 != (HANDLE)0x0) {
        CloseHandle(DAT_0100aa80);
      }
                    /* WARNING: Subroutine does not return */
      ExitProcess(0);
    }
    if (cVar3 == 'C') {
      if (local_110[2] == '\0') {
        DAT_0100aaa4 = 1;
      }
      else {
        if (local_110[2] == ':') {
          pcVar4 = (char *)(((char)local_10d == '\"') + 3);
          psVar8 = (short *)(local_110 + (int)pcVar4);
          iVar9 = lstrlenA((LPCSTR)psVar8);
          if ((((iVar9 != 0) &&
               ((psVar6 = FUN_01005988(psVar8,0x5b), psVar6 == (short *)0x0 ||
                (psVar6 = FUN_01005988(psVar8,0x5d), psVar6 != (short *)0x0)))) &&
              ((psVar6 = FUN_01005988(psVar8,0x5d), psVar6 == (short *)0x0 ||
               (psVar6 = FUN_01005988(psVar8,0x5b), psVar6 != (short *)0x0)))) &&
             (param_1 = pcVar4, iVar9 = FUN_01005129((char *)psVar8,(int *)&param_1), iVar9 != 0)) {
            lstrcpyA(&DAT_0100acc2,local_110 + (int)(param_1 + (int)pcVar4));
            goto LAB_010055ce;
          }
        }
LAB_010055cb:
        local_8 = 0;
      }
    }
    else {
      if (cVar3 == 'D') {
LAB_01005468:
        if (local_110[2] == ':') {
          pcVar4 = (char *)(((char)local_10d == '\"') + 3);
          iVar9 = lstrlenA(local_110 + (int)pcVar4);
          if ((iVar9 != 0) &&
             (param_1 = pcVar4, iVar9 = FUN_01005129(local_110 + (int)pcVar4,(int *)&param_1),
             iVar9 != 0)) {
            pCVar5 = CharUpperA((LPSTR)(int)local_110[1]);
            if ((char)pCVar5 == 'T') {
              lpString1 = &DAT_0100abbe;
              pcVar4 = local_110 + (int)(param_1 + (int)pcVar4);
            }
            else {
              lpString1 = &DAT_0100aaba;
              pcVar4 = local_110 + (int)(param_1 + (int)pcVar4);
            }
            lstrcpyA(lpString1,pcVar4);
            FUN_010059ea(lpString1,"");
            iVar9 = FUN_01002c42(lpString1);
            if (iVar9 == 0) {
              return 0;
            }
            goto LAB_010055ce;
          }
        }
        goto LAB_010055cb;
      }
      if (cVar3 == 'N') {
        if (local_110[2] == '\0') {
          DAT_0100aaac = 1;
        }
        else {
          if (local_110[2] != ':') goto LAB_010055cb;
          if ((char)local_10d != '\0') {
            pcVar4 = local_110 + 3;
            do {
              cVar3 = *pcVar4;
              pcVar4 = pcVar4 + 1;
              pCVar5 = CharUpperA((LPSTR)(int)cVar3);
              cVar3 = (char)pCVar5;
              if (cVar3 == 'E') {
                DAT_0100aaac = 1;
              }
              else if (cVar3 == 'G') {
                DAT_0100aab0 = 1;
              }
              else if (cVar3 == 'V') {
                DAT_0100aab4 = 1;
              }
              else {
                local_8 = 0;
              }
            } while (*pcVar4 != '\0');
          }
        }
      }
      else if (cVar3 == 'Q') {
        if (local_110[2] != '\0') {
          if (local_110[2] != ':') goto LAB_010055cb;
          pCVar5 = CharUpperA((LPSTR)(int)(char)local_10d);
          cVar3 = (char)pCVar5;
          if (cVar3 != '1') {
            if (cVar3 == 'A') {
              DAT_0100aab8 = 1;
              goto LAB_010055ce;
            }
            if (cVar3 != 'U') goto LAB_010055cb;
          }
        }
        DAT_0100aab8 = 2;
      }
      else {
        if (cVar3 != 'R') {
          if (cVar3 == 'T') goto LAB_01005468;
          goto LAB_010055cb;
        }
        if (local_110[2] == '\0') {
          _DAT_0100b6cc = 3;
        }
        else {
          if (local_110[2] != ':') {
            iVar9 = lstrcmpiA("RegServer",local_110 + 1);
            if (iVar9 == 0) goto LAB_010055ce;
            goto LAB_010055cb;
          }
          _DAT_0100b6cc = 1;
          if ((char)local_10d != '\0') {
            pcVar4 = local_110 + 3;
            do {
              cVar3 = *pcVar4;
              pcVar4 = pcVar4 + 1;
              pCVar5 = CharUpperA((LPSTR)(int)cVar3);
              cVar3 = (char)pCVar5;
              if (cVar3 == 'A') {
                _DAT_0100b6cc = _DAT_0100b6cc | 2;
              }
              else if (cVar3 == 'I') {
                _DAT_0100b6cc = _DAT_0100b6cc & 0xfffffffd;
              }
              else if (cVar3 == 'N') {
                _DAT_0100b6cc = _DAT_0100b6cc & 0xfffffffe;
              }
              else if (cVar3 == 'S') {
                _DAT_0100b6cc = _DAT_0100b6cc | 4;
              }
            } while (*pcVar4 != '\0');
          }
        }
        DAT_0100aaa8 = 1;
      }
    }
LAB_010055ce:
    cVar3 = *local_c;
    pcVar4 = local_c;
  } while( true );
}


