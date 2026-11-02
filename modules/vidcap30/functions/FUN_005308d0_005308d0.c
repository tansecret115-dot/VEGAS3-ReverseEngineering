/* Module: vidcap30.exe
   Function: FUN_005308d0
   Address: 005308d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005308d0(LPCSTR param_1,LPCSTR param_2,undefined4 param_3)

{
  LPCSTR pCVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  code *pcVar6;
  uchar local_110 [260];
  LPCSTR local_c;
  undefined4 local_8;
  
  local_8 = 0;
  pCVar1 = (LPCSTR)_SfGetFileNamePtrA_4();
  pcVar6 = lstrlenA_exref;
  local_c = pCVar1;
  switch(param_3) {
  case 0:
    iVar5 = lstrcmpiA(param_1,param_2);
    if (iVar5 != 0) {
      iVar5 = lstrcmpiA(pCVar1,param_2);
      goto joined_r0x00530ad5;
    }
    break;
  case 1:
    uVar3 = lstrlenA(param_1);
    uVar4 = lstrlenA(param_2);
    if (uVar4 < uVar3) {
      iVar5 = lstrlenA(param_2);
      iVar2 = lstrlenA(param_1);
      _mbscpy(local_110,(uchar *)(param_1 + (iVar2 - iVar5)));
      iVar5 = lstrcmpiA((LPCSTR)local_110,param_2);
      if (iVar5 == 0) break;
    }
    if (local_c == (LPCSTR)0x0) {
      return local_8;
    }
    if (*local_c == '\0') {
      return local_8;
    }
    uVar3 = lstrlenA(local_c);
    uVar4 = lstrlenA(param_2);
    if (uVar3 <= uVar4) {
      return local_8;
    }
    iVar5 = lstrlenA(param_2);
    pCVar1 = local_c;
    iVar2 = lstrlenA(local_c);
    _mbscpy(local_110,(uchar *)(pCVar1 + (iVar2 - iVar5)));
    iVar5 = lstrcmpiA((LPCSTR)local_110,param_2);
    goto joined_r0x00530ad5;
  case 2:
    break;
  case 3:
    uVar3 = lstrlenA(param_1);
    uVar4 = lstrlenA(param_2);
    if (uVar4 <= uVar3) {
      iVar5 = lstrlenA(param_2);
      FUN_00579db0();
      FUN_00579db0();
      lstrcpynA(&stack0xfffffee4,param_1,iVar5 + 1);
      local_110[iVar5 + -0xc] = '\0';
      local_110[iVar5 + -0xc] = '\0';
      lstrcpynA(&stack0xfffffee4,param_2,iVar5 + 1);
      local_110[iVar5 + -0xc] = '\0';
      local_110[iVar5 + -0xc] = '\0';
      iVar5 = lstrcmpiA(&stack0xfffffee4,&stack0xfffffee4);
      pcVar6 = lstrlenA_exref;
      if (iVar5 == 0) {
        local_8 = 1;
      }
    }
    if (local_c == (char *)0x0) {
      return local_8;
    }
    if (*local_c == '\0') {
      return local_8;
    }
    uVar3 = (*pcVar6)();
    uVar4 = (*pcVar6)();
    if (uVar3 < uVar4) {
      return local_8;
    }
    iVar5 = (*pcVar6)();
    FUN_00579db0();
    FUN_00579db0();
    lstrcpynA(&stack0xfffffed8,local_c,iVar5 + 1);
    local_110[iVar5 + -0x18] = '\0';
    local_110[iVar5 + -0x18] = '\0';
    lstrcpynA(&stack0xfffffed8,param_2,iVar5 + 1);
    local_110[iVar5 + -0x18] = '\0';
    local_110[iVar5 + -0x18] = '\0';
    iVar5 = lstrcmpiA(&stack0xfffffed8,&stack0xfffffed8);
joined_r0x00530ad5:
    if (iVar5 != 0) {
      return local_8;
    }
    break;
  default:
    goto switchD_005308fd_default;
  }
  local_8 = 1;
switchD_005308fd_default:
  return local_8;
}


