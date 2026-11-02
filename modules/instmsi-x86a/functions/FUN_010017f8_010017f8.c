/* Module: InstMsi-x86a.exe
   Function: FUN_010017f8
   Address: 010017f8
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_010017f8(LPSTR param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  short *psVar2;
  uint uVar3;
  char *pcVar4;
  DWORD DVar5;
  int iVar6;
  UINT UVar7;
  CHAR *pCVar8;
  short *psVar9;
  BYTE local_614 [1024];
  undefined1 local_214 [260];
  CHAR local_110 [260];
  BYTE *local_c;
  short *local_8;
  
  lstrcpyA(local_214,param_1);
  if (local_214[0] == '\"') {
    local_8 = (short *)(local_214 + 1);
    psVar9 = (short *)&DAT_010012e4;
  }
  else {
    local_8 = (short *)local_214;
    psVar9 = (short *)&DAT_010012e0;
  }
  psVar9 = (short *)FUN_01001799(&local_8,psVar9);
  iVar1 = FUN_010020bc((LPCSTR)local_8);
  if (iVar1 == 0) {
    lstrcpyA(local_110,&DAT_0100ae84);
    FUN_01005a4d(local_110,(LPCSTR)local_8);
  }
  else {
    lstrcpyA(local_110,(LPCSTR)local_8);
  }
  psVar2 = FUN_01005a1b(local_8,0x2e);
  if ((psVar2 == (short *)0x0) || (iVar1 = lstrcmpiA((LPCSTR)psVar2,".INF"), iVar1 != 0)) {
    psVar2 = FUN_01005a1b(local_8,0x2e);
    if ((psVar2 == (short *)0x0) || (iVar1 = lstrcmpiA((LPCSTR)psVar2,".BAT"), iVar1 != 0)) {
      local_c = LocalAlloc(0x40,0x400);
      if (local_c != (BYTE *)0x0) {
        DVar5 = GetFileAttributesA(local_110);
        if ((DVar5 == 0xffffffff) || ((DVar5 & 0x10) != 0)) {
          lstrcpyA((LPSTR)local_614,param_1);
        }
        else {
          lstrcpyA((LPSTR)local_614,local_110);
          if ((psVar9 != (short *)0x0) && ((char)*psVar9 != '\0')) {
            lstrcatA((LPSTR)local_614," ");
            lstrcatA((LPSTR)local_614,(LPCSTR)psVar9);
          }
        }
        FUN_0100263b(local_614,local_c);
LAB_01001b15:
        *param_2 = local_c;
        return 1;
      }
      pCVar8 = (LPCSTR)0x0;
      UVar7 = 0x4b5;
      local_c = (BYTE *)0x0;
    }
    else {
      iVar1 = lstrlenA(local_110);
      iVar6 = lstrlenA(s_Command_com__c__s_0100a208);
      local_c = LocalAlloc(0x40,iVar1 + 8 + iVar6);
      if (local_c != (BYTE *)0x0) {
        wsprintfA((LPSTR)local_c,s_Command_com__c__s_0100a208,local_110);
        goto LAB_01001b15;
      }
      pCVar8 = (LPCSTR)0x0;
      UVar7 = 0x4b5;
      local_c = (BYTE *)0x0;
    }
  }
  else {
    uVar3 = FUN_010059fd(local_110);
    if (uVar3 == 0) {
      pCVar8 = local_110;
      UVar7 = 0x525;
    }
    else {
      local_8 = psVar9;
      psVar9 = (short *)FUN_01001799(&local_8,(short *)&DAT_010012d4);
      lstrlenA(s_DefaultInstall_0100a0b8);
      if (psVar9 != (short *)0x0) {
        if ((char)*psVar9 != '\0') {
          local_8 = psVar9;
        }
        FUN_01001799(&local_8,(short *)&DAT_010012d0);
        if ((char)*local_8 != '\0') {
          lstrlenA((LPCSTR)local_8);
        }
      }
      local_c = LocalAlloc(0x40,0x200);
      if (local_c != (BYTE *)0x0) {
        pcVar4 = (char *)local_8;
        if ((char)*local_8 == '\0') {
          pcVar4 = s_DefaultInstall_0100a0b8;
        }
        DAT_0100b824 = GetPrivateProfileIntA(pcVar4,"Reboot",0,local_110);
        *param_3 = 1;
        DVar5 = GetPrivateProfileStringA("Version","AdvancedINF","",(LPSTR)local_c,8,local_110);
        if (DVar5 == 0) {
          _DAT_0100b6d4 = _DAT_0100b6d4 & 0xfffffffb;
          if (DAT_0100bc04 == 0) {
            pcVar4 = "setupx.dll";
            GetShortPathNameA(local_110,local_110,0x104);
          }
          else {
            pcVar4 = "setupapi.dll";
          }
          psVar9 = (short *)s_DefaultInstall_0100a0b8;
          if ((char)*local_8 != '\0') {
            psVar9 = local_8;
          }
          wsprintfA((LPSTR)local_c,s_rundll32_exe__s_InstallHinfSecti_0100a018,pcVar4,psVar9,
                    local_110);
        }
        else {
          _DAT_0100b6d4 = _DAT_0100b6d4 | 4;
          psVar9 = (short *)s_DefaultInstall_0100a0b8;
          if ((char)*local_8 != '\0') {
            psVar9 = local_8;
          }
          lstrcpyA(param_1,(LPCSTR)psVar9);
          lstrcpyA((LPSTR)local_c,local_110);
        }
        goto LAB_01001b15;
      }
      pCVar8 = (LPCSTR)0x0;
      UVar7 = 0x4b5;
      local_c = (BYTE *)0x0;
    }
  }
  FUN_01003cb8((HWND)0x0,UVar7,pCVar8,(LPCSTR)0x0,0x10,0);
  return 0;
}


