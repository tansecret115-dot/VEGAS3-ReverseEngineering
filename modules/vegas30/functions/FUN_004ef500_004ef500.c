/* Module: vegas30.exe
   Function: FUN_004ef500
   Address: 004ef500
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004ef500(uint *param_1,undefined4 param_2)

{
  LPCSTR lpString2;
  LPSTR lpString1;
  char *pcVar1;
  int *piVar2;
  int iVar3;
  uint iMaxLength;
  undefined4 uVar4;
  uint *puVar5;
  uint *local_1c;
  LPCSTR local_18;
  undefined4 local_14;
  int local_10;
  char *local_c;
  LPSTR local_8;
  
  uVar4 = 0;
  local_14 = 0;
  pcVar1 = (char *)FUN_005ec620();
  puVar5 = param_1;
  local_c = pcVar1;
  if ((*param_1 & 0x10000) == 0) {
    local_1c = param_1 + 5;
    param_1 = (uint *)0x0;
    if (((*pcVar1 != '\0') && (iVar3 = FUN_00436ff0(&local_1c), (*(byte *)(iVar3 + 0x18) & 2) != 2))
       && (param_1 = *(uint **)(iVar3 + 4), 0 < *(int *)((int)param_1 + 0x140))) {
      _SfList_InsertList_16(param_2,0xffffffff,&param_1,1);
      return 1;
    }
  }
  else {
    piVar2 = (int *)FUN_00436fa0(&local_1c);
    local_10 = *piVar2;
    while( true ) {
      if (*pcVar1 == '\0') {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(pcVar1 + 0xc);
      }
      if (local_10 == iVar3) break;
      local_1c = *(uint **)(local_10 + 4);
      if (0 < (int)local_1c[0x50]) {
        iMaxLength = (uint)(ushort)puVar5[4];
        local_18 = (LPCSTR)FUN_005f2d10();
        FUN_0060ac30();
        FUN_0060ac30();
        local_8 = &stack0xffffffd8;
        lstrcpynA(&stack0xffffffd8,(LPCSTR)(param_1 + 5),iMaxLength);
        lpString1 = local_8;
        lpString2 = local_18;
        (&stack0xffffffd7)[iMaxLength] = 0;
        (&stack0xffffffd7)[iMaxLength] = 0;
        lstrcpynA(lpString1,lpString2,iMaxLength);
        local_8[iMaxLength - 1] = '\0';
        local_8[iMaxLength - 1] = '\0';
        iVar3 = lstrcmpiA(&stack0xffffffd8,local_8);
        pcVar1 = local_c;
        if (iVar3 == 0) {
          local_14 = 1;
          _SfList_InsertList_16(param_2,0xffffffff,&local_1c,1);
          pcVar1 = local_c;
        }
      }
      FUN_00436e20();
      uVar4 = local_14;
      puVar5 = param_1;
    }
  }
  return uVar4;
}


