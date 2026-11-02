/* Module: mcplugrw.dll
   Function: FUN_00415fd0
   Address: 00415fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00415fd0(LPSTR param_1,int param_2)

{
  LSTATUS LVar1;
  int iVar2;
  undefined4 uVar3;
  BYTE *pBVar4;
  uchar *puVar5;
  HKEY local_518;
  DWORD local_514 [3];
  BYTE local_508 [256];
  BYTE local_408 [256];
  uchar local_308 [516];
  CHAR local_104 [260];
  
  local_514[2] = 0x100;
  local_514[1] = 0x100;
  pBVar4 = local_508;
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    pBVar4[0] = '\0';
    pBVar4[1] = '\0';
    pBVar4[2] = '\0';
    pBVar4[3] = '\0';
    pBVar4 = pBVar4 + 4;
  }
  pBVar4 = local_408;
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    pBVar4[0] = '\0';
    pBVar4[1] = '\0';
    pBVar4[2] = '\0';
    pBVar4[3] = '\0';
    pBVar4 = pBVar4 + 4;
  }
  puVar5 = local_308;
  for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
    puVar5[0] = '\0';
    puVar5[1] = '\0';
    puVar5[2] = '\0';
    puVar5[3] = '\0';
    puVar5 = puVar5 + 4;
  }
  *puVar5 = '\0';
  uVar3 = 0x80004005;
  wsprintfA(local_104,"%s%s","Software\\Sonic Foundry\\","Shared Information\\User Information");
  LVar1 = RegCreateKeyExA((HKEY)0x80000002,local_104,0,(LPSTR)0x0,0,0x20019,
                          (LPSECURITY_ATTRIBUTES)0x0,&local_518,(LPDWORD)0x0);
  if (LVar1 == 0) {
    LVar1 = RegQueryValueExA(local_518,"First Name",(LPDWORD)0x0,local_514,local_508,local_514 + 2);
    if (LVar1 == 0) {
      uVar3 = 0;
    }
    LVar1 = RegQueryValueExA(local_518,"Last Name",(LPDWORD)0x0,local_514,local_408,local_514 + 1);
    if (LVar1 == 0) {
      uVar3 = 0;
    }
    _mbscpy(local_308,local_508);
    _mbscat(local_308," ");
    _mbscat(local_308,local_408);
    lstrcpynA(param_1,(LPCSTR)local_308,param_2);
    param_1[param_2 + -1] = '\0';
    RegCloseKey(local_518);
    return uVar3;
  }
  return 0x80004005;
}


