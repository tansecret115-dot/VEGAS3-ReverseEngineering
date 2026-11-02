/* Module: encn3260.dll
   Function: FUN_664af600
   Address: 664af600
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_664af600(void)

{
  char cVar1;
  LSTATUS LVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  CHAR *pCVar7;
  char *pcVar8;
  char *pcVar9;
  CHAR local_110 [260];
  LONG local_c;
  HKEY local_8;
  
  local_c = 0x103;
  LVar2 = RegOpenKeyExA((HKEY)0x80000000,s_Software_RealNetworks_Preference_664e3708,0,0x20019,
                        &local_8);
  if (LVar2 == 0) {
    pCVar7 = local_110;
    for (iVar3 = 0x41; iVar3 != 0; iVar3 = iVar3 + -1) {
      pCVar7[0] = '\0';
      pCVar7[1] = '\0';
      pCVar7[2] = '\0';
      pCVar7[3] = '\0';
      pCVar7 = pCVar7 + 4;
    }
    LVar2 = RegQueryValueA(local_8,&DAT_664f05c4,local_110,&local_c);
    if (LVar2 == 0) {
      uVar4 = 0xffffffff;
      pcVar6 = &DAT_664e36f8;
      do {
        pcVar9 = pcVar6;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar9 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar9;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      iVar3 = -1;
      pcVar6 = local_110;
      do {
        pcVar8 = pcVar6;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar8 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar8;
      } while (cVar1 != '\0');
      pcVar6 = pcVar9 + -uVar4;
      pcVar9 = pcVar8 + -1;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar9 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar9 = pcVar9 + 1;
      }
      FUN_664b93d0(local_110);
    }
    RegCloseKey(local_8);
  }
  return;
}


