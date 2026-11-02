/* Module: sfppack1.dll
   Function: FUN_5cdb3db0
   Address: 5cdb3db0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5cdb3db0(LPCSTR param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  CHAR *pCVar8;
  int local_6c;
  double local_60;
  CHAR local_58;
  char local_57 [78];
  undefined1 local_9;
  
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 0x10) = 0;
  lstrcpynA(&local_58,param_1,0x50);
  local_9 = 0;
  pCVar8 = &local_58;
  iVar3 = lstrlenA(&local_58);
  iVar6 = 0;
  iVar7 = 0;
  local_6c = 0;
  if (0 < iVar3) {
    do {
      if ((((&local_58)[iVar6] == ':') && ((local_6c = local_6c + 1, iVar7 != 0 || (2 < local_6c))))
         || (((&local_58)[iVar6] == '.' && (iVar7 = iVar7 + 1, 1 < iVar7)))) {
        return (int)(&local_58)[iVar6];
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar3);
  }
  local_6c = 0;
  while( true ) {
    iVar3 = FUN_5cdb3bf0(pCVar8,&local_60);
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_2 + 0xc);
    uVar4 = ftol();
    *(uint *)(param_2 + 0xc) = uVar4;
    local_60 = local_60 - (double)uVar4;
    uVar5 = ftol();
    *(undefined4 *)(param_2 + 0x10) = uVar5;
    if (iVar3 == 0) {
      return 0;
    }
    if (iVar3 != 0x3a) break;
    cVar2 = *pCVar8;
    while ((cVar2 != ':' && (cVar2 != '\0'))) {
      pcVar1 = pCVar8 + 1;
      pCVar8 = pCVar8 + 1;
      cVar2 = *pcVar1;
    }
    pCVar8 = pCVar8 + 1;
    local_6c = local_6c + 1;
    if (2 < local_6c) {
      return 0x3a;
    }
  }
  return iVar3;
}


