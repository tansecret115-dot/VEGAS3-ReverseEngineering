/* Module: InstMsi-x86a.exe
   Function: FUN_010051f9
   Address: 010051f9
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_010051f9(char *param_1)

{
  char cVar1;
  char *pcVar2;
  LPSTR pCVar3;
  int iVar4;
  short *psVar5;
  DWORD DVar6;
  short *psVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  char *lpString1;
  uint uVar12;
  bool bVar13;
  char local_110 [3];
  undefined2 local_10d;
  int local_c;
  int local_8;
  
  local_8 = 1;
  if ((param_1 == (char *)0x0) || (uVar9 = DAT_0100aaa4, uVar10 = DAT_0100aaac, *param_1 == '\0')) {
    return 1;
  }
LAB_01005223:
  DAT_0100aaac = uVar10;
  DAT_0100aaa4 = uVar9;
  uVar12 = 1;
  if ((*param_1 == '\0') || (local_8 == 0)) goto LAB_01005666;
  for (; ((cVar1 = *param_1, cVar1 == ' ' ||
          (((cVar1 == '\t' || (cVar1 == '\r')) || (cVar1 == '\n')))) ||
         ((cVar1 == '\v' || (cVar1 == '\f')))); param_1 = CharNextA(param_1)) {
  }
  if (*param_1 == '\0') goto LAB_01005666;
  iVar8 = 0;
  uVar9 = 0;
  uVar10 = 0;
  do {
    if (uVar9 == 0) {
      cVar1 = *param_1;
      if (((cVar1 == ' ') || (cVar1 == '\t')) ||
         ((cVar1 == '\r' || (((cVar1 == '\n' || (cVar1 == '\v')) || (cVar1 == '\f')))))) break;
    }
    else if (uVar10 != 0) break;
    uVar11 = uVar10;
    if (*param_1 == '\"') {
      pcVar2 = param_1 + 1;
      if (*pcVar2 == '\"') {
        local_110[iVar8] = '\"';
        iVar8 = iVar8 + 1;
        param_1 = param_1 + 2;
      }
      else {
        uVar11 = uVar12;
        param_1 = pcVar2;
        if (uVar9 == 0) {
          uVar9 = uVar12;
          uVar11 = uVar10;
        }
      }
    }
    else {
      local_110[iVar8] = *param_1;
      iVar8 = iVar8 + 1;
      param_1 = param_1 + 1;
    }
    uVar10 = uVar11;
  } while (*param_1 != '\0');
  local_110[iVar8] = '\0';
  if (uVar9 == 0) {
LAB_010052f3:
    if (uVar10 != 0) {
LAB_01005663:
      local_8 = 0;
LAB_01005666:
      if (DAT_0100aaac == 0) {
        return local_8;
      }
      if (DAT_0100abbe == '\0') {
        DVar6 = GetModuleFileNameA(DAT_0100b6dc,&DAT_0100abbe,0x104);
        if (DVar6 == 0) {
          return 0;
        }
        psVar7 = FUN_01005a1b((short *)&DAT_0100abbe,0x5c);
        *(undefined1 *)((int)psVar7 + 1) = 0;
        return local_8;
      }
      return local_8;
    }
  }
  else if (uVar10 == 0) {
    if (uVar9 == 0) goto LAB_010052f3;
    goto LAB_01005663;
  }
  if ((local_110[0] != '/') && (local_110[0] != '-')) {
    return 0;
  }
  pCVar3 = CharUpperA((LPSTR)(int)local_110[1]);
  cVar1 = (char)pCVar3;
  if (cVar1 == '?') {
    FUN_01001b27();
    if (DAT_0100aa80 != (HANDLE)0x0) {
      CloseHandle(DAT_0100aa80);
    }
                    /* WARNING: Subroutine does not return */
    ExitProcess(0);
  }
  uVar10 = DAT_0100aaac;
  if (cVar1 == 'C') {
    uVar9 = uVar12;
    if (local_110[2] == '\0') goto LAB_01005223;
    if (local_110[2] == ':') {
      iVar8 = ((char)local_10d == '\"') + 3;
      psVar7 = (short *)(local_110 + ((char)local_10d == '\"') + 3);
      iVar4 = lstrlenA((LPCSTR)psVar7);
      if ((((iVar4 == 0) ||
           ((psVar5 = FUN_010059cd(psVar7,0x5b), psVar5 != (short *)0x0 &&
            (psVar5 = FUN_010059cd(psVar7,0x5d), psVar5 == (short *)0x0)))) ||
          ((psVar5 = FUN_010059cd(psVar7,0x5d), psVar5 != (short *)0x0 &&
           (psVar5 = FUN_010059cd(psVar7,0x5b), psVar5 == (short *)0x0)))) ||
         (local_c = iVar8, iVar4 = FUN_0100517d((char *)psVar7,&local_c), iVar4 == 0)) {
LAB_01005616:
        local_8 = 0;
        uVar9 = DAT_0100aaa4;
        uVar10 = DAT_0100aaac;
      }
      else {
        lstrcpyA(&DAT_0100acc2,local_110 + local_c + iVar8);
        uVar9 = DAT_0100aaa4;
        uVar10 = DAT_0100aaac;
      }
      goto LAB_01005223;
    }
  }
  else {
    if (cVar1 == 'D') {
LAB_010054ed:
      if (local_110[2] != ':') goto LAB_01005654;
      bVar13 = (char)local_10d == '\"';
      iVar8 = bVar13 + 3;
      iVar4 = lstrlenA(local_110 + bVar13 + 3);
      if ((iVar4 == 0) ||
         (local_c = iVar8, iVar4 = FUN_0100517d(local_110 + bVar13 + 3,&local_c), iVar4 == 0))
      goto LAB_01005616;
      pCVar3 = CharUpperA((LPSTR)(int)local_110[1]);
      if ((char)pCVar3 == 'T') {
        lpString1 = &DAT_0100abbe;
        pcVar2 = local_110 + local_c + iVar8;
      }
      else {
        lpString1 = &DAT_0100aaba;
        pcVar2 = local_110 + local_c + iVar8;
      }
      lstrcpyA(lpString1,pcVar2);
      FUN_01005a4d(lpString1,"");
      iVar8 = FUN_01002c71(lpString1);
      uVar9 = DAT_0100aaa4;
      uVar10 = DAT_0100aaac;
      if (iVar8 == 0) {
        return 0;
      }
      goto LAB_01005223;
    }
    uVar9 = DAT_0100aaa4;
    if (cVar1 == 'N') {
      uVar10 = uVar12;
      if (local_110[2] == '\0') goto LAB_01005223;
      if (local_110[2] == ':') {
        uVar10 = DAT_0100aaac;
        if ((char)local_10d != '\0') {
          pcVar2 = local_110 + 3;
          do {
            cVar1 = *pcVar2;
            pcVar2 = pcVar2 + 1;
            pCVar3 = CharUpperA((LPSTR)(int)cVar1);
            cVar1 = (char)pCVar3;
            uVar9 = uVar12;
            uVar10 = DAT_0100aab0;
            uVar11 = DAT_0100aab4;
            if (((cVar1 != 'E') && (uVar9 = DAT_0100aaac, uVar10 = uVar12, cVar1 != 'G')) &&
               (uVar10 = DAT_0100aab0, uVar11 = uVar12, cVar1 != 'V')) {
              local_8 = 0;
              uVar11 = DAT_0100aab4;
            }
            DAT_0100aab4 = uVar11;
            DAT_0100aab0 = uVar10;
            DAT_0100aaac = uVar9;
            uVar9 = DAT_0100aaa4;
            uVar10 = DAT_0100aaac;
          } while (*pcVar2 != '\0');
        }
        goto LAB_01005223;
      }
    }
    else {
      if (cVar1 == 'Q') {
        if (local_110[2] != '\0') {
          if (local_110[2] != ':') goto LAB_01005654;
          pCVar3 = CharUpperA((LPSTR)(int)(char)local_10d);
          cVar1 = (char)pCVar3;
          if (cVar1 != '1') {
            if (cVar1 == 'A') {
              DAT_0100aab8 = 1;
              uVar9 = DAT_0100aaa4;
              uVar10 = DAT_0100aaac;
              goto LAB_01005223;
            }
            if (cVar1 != 'U') goto LAB_01005654;
          }
        }
        DAT_0100aab8 = 2;
        uVar9 = DAT_0100aaa4;
        uVar10 = DAT_0100aaac;
        goto LAB_01005223;
      }
      if (cVar1 != 'R') {
        if (cVar1 == 'T') goto LAB_010054ed;
        goto LAB_01005654;
      }
      if (local_110[2] == '\0') {
        _DAT_0100b6cc = 3;
        DAT_0100aaa8 = uVar12;
        goto LAB_01005223;
      }
      if (local_110[2] == ':') {
        _DAT_0100b6cc = uVar12;
        if ((char)local_10d != '\0') {
          pcVar2 = local_110 + 3;
          do {
            cVar1 = *pcVar2;
            pcVar2 = pcVar2 + 1;
            pCVar3 = CharUpperA((LPSTR)(int)cVar1);
            cVar1 = (char)pCVar3;
            if (cVar1 == 'A') {
              _DAT_0100b6cc = _DAT_0100b6cc | 2;
              DAT_0100aaa8 = uVar12;
            }
            else if (cVar1 == 'D') {
              _DAT_0100adc8 = _DAT_0100adc8 | 0x40;
            }
            else if (cVar1 == 'I') {
              _DAT_0100b6cc = _DAT_0100b6cc & 0xfffffffd;
              DAT_0100aaa8 = uVar12;
            }
            else if (cVar1 == 'N') {
              _DAT_0100b6cc = _DAT_0100b6cc & 0xfffffffe;
              DAT_0100aaa8 = uVar12;
            }
            else if (cVar1 == 'P') {
              _DAT_0100adc8 = _DAT_0100adc8 | 0x80;
            }
            else if (cVar1 == 'S') {
              _DAT_0100b6cc = _DAT_0100b6cc | 4;
              DAT_0100aaa8 = uVar12;
            }
            else {
              local_8 = 0;
            }
            uVar9 = DAT_0100aaa4;
            uVar10 = DAT_0100aaac;
          } while (*pcVar2 != '\0');
        }
        goto LAB_01005223;
      }
      iVar8 = lstrcmpiA("RegServer",local_110 + 1);
      uVar9 = DAT_0100aaa4;
      uVar10 = DAT_0100aaac;
      if (iVar8 == 0) goto LAB_01005223;
    }
  }
LAB_01005654:
  local_8 = 0;
  uVar9 = DAT_0100aaa4;
  uVar10 = DAT_0100aaac;
  goto LAB_01005223;
}


