/* Module: rmto3260.dll
   Function: FUN_662fe5e0
   Address: 662fe5e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_662fe5e0(int param_1)

{
  char cVar1;
  byte bVar2;
  DWORD dwBytes;
  HGLOBAL pvVar3;
  BOOL BVar4;
  char *pcVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  LPVOID lpData;
  char *pcVar10;
  char *pcVar11;
  bool bVar12;
  CHAR local_128 [260];
  DWORD local_24;
  CHAR local_20 [4];
  char local_1c [8];
  byte *local_14;
  undefined4 local_10;
  uint local_c;
  byte *local_8;
  
  lpData = (LPCVOID)0x0;
  local_14 = (byte *)0x0;
  local_10 = 0;
  dwBytes = GetFileVersionInfoSizeA((LPCSTR)(param_1 + 0x104),&local_24);
  if (dwBytes != 0) {
    pvVar3 = GlobalAlloc(2,dwBytes);
    lpData = GlobalLock(pvVar3);
    if (lpData == (LPVOID)0x0) goto LAB_662fe7c2;
    BVar4 = GetFileVersionInfoA((LPCSTR)(param_1 + 0x104),local_24,dwBytes,lpData);
    if (BVar4 == 0) {
      lpData = (LPCVOID)0x0;
    }
  }
  if (lpData != (LPCVOID)0x0) {
    lstrcpyA(local_128,s__VarFileInfo_Translation_663118c8);
    VerQueryValueA(lpData,local_128,&local_8,&local_c);
    wsprintfA(local_20,&DAT_663118c0,*(undefined4 *)local_8);
    pcVar5 = strchr(local_20,0x20);
    while (pcVar5 != (char *)0x0) {
      *pcVar5 = '0';
      pcVar5 = strchr(local_20,0x20);
    }
    uVar7 = 0xffffffff;
    pcVar5 = s__StringFileInfo__663118ac;
    do {
      pcVar11 = pcVar5;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar11 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar11;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    pcVar5 = pcVar11 + -uVar7;
    pcVar11 = local_128;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar11 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar11 = pcVar11 + 1;
    }
    uVar7 = 0xffffffff;
    pcVar5 = local_1c;
    do {
      pcVar11 = pcVar5;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar11 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar11;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    iVar9 = -1;
    pcVar5 = local_128;
    do {
      pcVar10 = pcVar5;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar10 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar10;
    } while (cVar1 != '\0');
    pcVar5 = pcVar11 + -uVar7;
    pcVar11 = pcVar10 + -1;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar11 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar11 = pcVar11 + 1;
    }
    uVar7 = 0xffffffff;
    local_1c[0] = '\0';
    pcVar5 = local_20;
    do {
      pcVar11 = pcVar5;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar11 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar11;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    iVar9 = -1;
    pcVar5 = local_128;
    do {
      pcVar10 = pcVar5;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar10 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar10;
    } while (cVar1 != '\0');
    pcVar5 = pcVar11 + -uVar7;
    pcVar11 = pcVar10 + -1;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar11 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar11 = pcVar11 + 1;
    }
    uVar7 = 0xffffffff;
    pcVar5 = s__LibraryType_6631189c;
    do {
      pcVar11 = pcVar5;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar11 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar11;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    iVar9 = -1;
    pcVar5 = local_128;
    do {
      pcVar10 = pcVar5;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar10 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar10;
    } while (cVar1 != '\0');
    pcVar5 = pcVar11 + -uVar7;
    pcVar11 = pcVar10 + -1;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar11 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar11 = pcVar11 + 1;
    }
    BVar4 = VerQueryValueA(lpData,local_128,&local_8,&local_c);
    if (((BVar4 != 0) && (local_c != 0)) && (local_8 != (byte *)0x0)) {
      local_14 = operator_new(local_c + 1);
      pbVar6 = local_14;
      for (uVar7 = local_c >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pbVar6 = *(undefined4 *)local_8;
        local_8 = local_8 + 4;
        pbVar6 = pbVar6 + 4;
      }
      for (uVar7 = local_c & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pbVar6 = *local_8;
        local_8 = local_8 + 1;
        pbVar6 = pbVar6 + 1;
      }
      local_14[local_c] = 0;
    }
    pvVar3 = GlobalHandle(lpData);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(lpData);
    GlobalFree(pvVar3);
  }
LAB_662fe7c2:
  if (local_14 != (byte *)0x0) {
    pcVar5 = s_RACodecHelper_6631188c;
    pbVar6 = local_14;
    do {
      bVar2 = *pbVar6;
      bVar12 = bVar2 < (byte)*pcVar5;
      if (bVar2 != *pcVar5) {
LAB_662fe7f8:
        iVar9 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
        goto LAB_662fe7fd;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar6[1];
      bVar12 = bVar2 < (byte)pcVar5[1];
      if (bVar2 != pcVar5[1]) goto LAB_662fe7f8;
      pbVar6 = pbVar6 + 2;
      pcVar5 = pcVar5 + 2;
    } while (bVar2 != 0);
    iVar9 = 0;
LAB_662fe7fd:
    if (iVar9 == 0) {
      local_10 = 1;
    }
    operator_delete(local_14);
  }
  return local_10;
}


