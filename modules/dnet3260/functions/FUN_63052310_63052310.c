/* Module: dnet3260.dll
   Function: FUN_63052310
   Address: 63052310
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_63052310(int param_1)

{
  char cVar1;
  LSTATUS LVar2;
  HMODULE pHVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  DWORD dwIndex;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *lpSubKey;
  CHAR local_124 [256];
  char local_24 [20];
  uint local_10;
  HKEY local_c;
  char *local_8;
  
  if (param_1 != DAT_630550ec) {
    FUN_630522c0();
    local_8 = operator_new(0x100);
    dwIndex = 0;
    sprintf(local_24,&DAT_6305511c,param_1);
    lpSubKey = local_8;
    uVar4 = 0xffffffff;
    pcVar7 = s_Software_RealNetworks_Languages__630550f8;
    do {
      pcVar9 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar9 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar9;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar7 = pcVar9 + -uVar4;
    pcVar9 = local_8;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar9 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar9 = pcVar9 + 1;
    }
    local_10 = 0xffffffff;
    pcVar7 = &DAT_630550f0;
    do {
      pcVar9 = pcVar7;
      if (local_10 == 0) break;
      local_10 = local_10 - 1;
      pcVar9 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar9;
    } while (cVar1 != '\0');
    local_10 = ~local_10;
    iVar6 = -1;
    pcVar7 = local_8;
    do {
      pcVar8 = pcVar7;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    pcVar7 = pcVar9 + -local_10;
    pcVar9 = pcVar8 + -1;
    for (uVar4 = local_10 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar4 = local_10 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar9 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar9 = pcVar9 + 1;
    }
    uVar4 = 0xffffffff;
    pcVar7 = local_24;
    do {
      pcVar9 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar9 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar9;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar6 = -1;
    pcVar7 = local_8;
    do {
      pcVar8 = pcVar7;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    pcVar7 = pcVar9 + -uVar4;
    pcVar9 = pcVar8 + -1;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar9 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar9 = pcVar9 + 1;
    }
    FUN_630525e0(local_8);
    LVar2 = RegOpenKeyA((HKEY)0x80000000,lpSubKey,&local_c);
    if (LVar2 == 0) {
      iVar6 = RegEnumKeyA(local_c,0,local_124,0x100);
      while (iVar6 == 0) {
        pHVar3 = LoadLibraryA(local_124);
        iVar6 = DAT_63055520;
        (&DAT_630554f0)[DAT_63055520] = pHVar3;
        if ((HMODULE)0x20 < pHVar3) {
          DAT_63055520 = iVar6 + 1;
        }
        dwIndex = dwIndex + 1;
        iVar6 = RegEnumKeyA(local_c,dwIndex,local_124,0x100);
        lpSubKey = local_8;
      }
      RegCloseKey(local_c);
    }
    operator_delete(lpSubKey);
    DAT_630550ec = param_1;
    FUN_63052480(param_1);
  }
  return;
}


