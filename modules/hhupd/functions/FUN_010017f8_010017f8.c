/* Module: hhupd.exe
   Function: FUN_010017f8
   Address: 010017f8
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_010017f8(LPSTR param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  short *psVar2;
  char *pcVar3;
  DWORD DVar4;
  int iVar5;
  short *psVar6;
  CHAR local_614 [1024];
  undefined1 local_214 [260];
  CHAR local_110 [260];
  LPSTR local_c;
  short *local_8;
  
  lstrcpyA(local_214,param_1);
  if (local_214[0] == '\"') {
    local_8 = (short *)(local_214 + 1);
    psVar6 = (short *)&DAT_010012e4;
  }
  else {
    local_8 = (short *)local_214;
    psVar6 = (short *)&DAT_010012e0;
  }
  psVar6 = (short *)FUN_01001799(&local_8,psVar6);
  iVar1 = FUN_01002096((LPCSTR)local_8);
  if (iVar1 == 0) {
    lstrcpyA(local_110,&DAT_0100ae84);
    FUN_010059ea(local_110,(LPCSTR)local_8);
  }
  else {
    lstrcpyA(local_110,(LPCSTR)local_8);
  }
  psVar2 = FUN_010059b8(local_8,0x2e);
  if ((psVar2 == (short *)0x0) || (iVar1 = lstrcmpiA((LPCSTR)psVar2,".INF"), iVar1 != 0)) {
    psVar2 = FUN_010059b8(local_8,0x2e);
    if ((psVar2 == (short *)0x0) || (iVar1 = lstrcmpiA((LPCSTR)psVar2,".BAT"), iVar1 != 0)) {
      local_c = LocalAlloc(0x40,0x400);
      if (local_c != (LPSTR)0x0) {
        DVar4 = GetFileAttributesA(local_110);
        if ((DVar4 == 0xffffffff) || ((DVar4 & 0x10) != 0)) {
          lstrcpyA(local_614,param_1);
        }
        else {
          lstrcpyA(local_614,local_110);
          if ((psVar6 != (short *)0x0) && ((char)*psVar6 != '\0')) {
            lstrcatA(local_614," ");
            lstrcatA(local_614,(LPCSTR)psVar6);
          }
        }
        FUN_01002631(local_614,local_c);
        goto LAB_01001aef;
      }
    }
    else {
      iVar1 = lstrlenA(local_110);
      iVar5 = lstrlenA(s_Command_com__c__s_0100a208);
      local_c = LocalAlloc(0x40,iVar1 + 8 + iVar5);
      if (local_c != (LPSTR)0x0) {
        wsprintfA(local_c,s_Command_com__c__s_0100a208,local_110);
LAB_01001aef:
        *param_2 = local_c;
        return 1;
      }
    }
  }
  else {
    local_8 = psVar6;
    psVar6 = (short *)FUN_01001799(&local_8,(short *)&DAT_010012d4);
    lstrlenA(s_DefaultInstall_0100a0b8);
    if (psVar6 != (short *)0x0) {
      if ((char)*psVar6 != '\0') {
        local_8 = psVar6;
      }
      FUN_01001799(&local_8,(short *)&DAT_010012d0);
      if ((char)*local_8 != '\0') {
        lstrlenA((LPCSTR)local_8);
      }
    }
    local_c = LocalAlloc(0x40,0x200);
    if (local_c != (LPSTR)0x0) {
      pcVar3 = (char *)local_8;
      if ((char)*local_8 == '\0') {
        pcVar3 = s_DefaultInstall_0100a0b8;
      }
      DAT_0100b824 = GetPrivateProfileIntA(pcVar3,"Reboot",0,local_110);
      *param_3 = 1;
      DVar4 = GetPrivateProfileStringA("Version","AdvancedINF","",local_c,8,local_110);
      if (DVar4 == 0) {
        _DAT_0100b6d4 = _DAT_0100b6d4 & 0xfffffffb;
        if (DAT_0100bc04 == 0) {
          pcVar3 = "setupx.dll";
          GetShortPathNameA(local_110,local_110,0x104);
        }
        else {
          pcVar3 = "setupapi.dll";
        }
        psVar6 = (short *)s_DefaultInstall_0100a0b8;
        if ((char)*local_8 != '\0') {
          psVar6 = local_8;
        }
        wsprintfA(local_c,s_rundll32_exe__s_InstallHinfSecti_0100a018,pcVar3,psVar6,local_110);
      }
      else {
        _DAT_0100b6d4 = _DAT_0100b6d4 | 4;
        psVar6 = (short *)s_DefaultInstall_0100a0b8;
        if ((char)*local_8 != '\0') {
          psVar6 = local_8;
        }
        lstrcpyA(param_1,(LPCSTR)psVar6);
        lstrcpyA(local_c,local_110);
      }
      goto LAB_01001aef;
    }
  }
  local_c = (LPSTR)0x0;
  FUN_01003c23((HWND)0x0,0x4b5,(LPCSTR)0x0,(LPCSTR)0x0,0x10,0);
  return 0;
}


