/* Module: mp3plug.dll
   Function: FUN_5f6820f0
   Address: 5f6820f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f6820f0(HANDLE param_1,char *param_2,LPCSTR param_3)

{
  char cVar1;
  byte bVar2;
  LPCSTR lpBuffer;
  BOOL BVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  char *pcVar10;
  byte *pbVar11;
  char *pcVar12;
  bool bVar13;
  char **lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  byte local_2c [12];
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  
  uVar6 = 0xffffffff;
  pcVar10 = param_2;
  do {
    pcVar12 = pcVar10;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar12 = pcVar10 + 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar12;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar10 = pcVar12 + -uVar6;
  pbVar8 = local_2c;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pbVar8 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pbVar8 = pbVar8 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pbVar8 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pbVar8 = pbVar8 + 1;
  }
  uVar6 = 0xffffffff;
  pbVar8 = local_2c;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    bVar2 = *pbVar8;
    pbVar8 = pbVar8 + 1;
  } while (bVar2 != 0);
  BVar3 = WriteFile(param_1,local_2c,~uVar6 - 1,(LPDWORD)&param_2,(LPOVERLAPPED)0x0);
  if (BVar3 == 0) {
    return 0x8004e009;
  }
  iVar4 = lstrlenA(param_3);
  iVar5 = iVar4 + 2;
  pbVar11 = &DAT_5f72c778;
  pbVar8 = local_2c;
  do {
    bVar2 = *pbVar8;
    bVar13 = bVar2 < *pbVar11;
    if (bVar2 != *pbVar11) {
LAB_5f68218c:
      iVar9 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
      goto LAB_5f682191;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar8[1];
    bVar13 = bVar2 < pbVar11[1];
    if (bVar2 != pbVar11[1]) goto LAB_5f68218c;
    pbVar8 = pbVar8 + 2;
    pbVar11 = pbVar11 + 2;
  } while (bVar2 != 0);
  iVar9 = 0;
LAB_5f682191:
  if (iVar9 == 0) {
    iVar5 = iVar4 + 5;
  }
  local_1f = (undefined1)((uint)iVar5 >> 0x10);
  local_20 = (undefined1)((uint)iVar5 >> 0x18);
  local_1d = (undefined1)iVar5;
  local_1e = (undefined1)((uint)iVar5 >> 8);
  BVar3 = WriteFile(param_1,&local_20,4,(LPDWORD)&param_2,(LPOVERLAPPED)0x0);
  if (BVar3 != 0) {
    local_20 = 0;
    local_1f = 0;
    local_1e = 0;
    BVar3 = WriteFile(param_1,&local_20,3,(LPDWORD)&param_2,(LPOVERLAPPED)0x0);
    if (BVar3 != 0) {
      pbVar11 = &DAT_5f72c778;
      pbVar8 = local_2c;
      do {
        bVar2 = *pbVar8;
        bVar13 = bVar2 < *pbVar11;
        if (bVar2 != *pbVar11) {
LAB_5f682222:
          iVar4 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
          goto LAB_5f682227;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar8[1];
        bVar13 = bVar2 < pbVar11[1];
        if (bVar2 != pbVar11[1]) goto LAB_5f682222;
        pbVar8 = pbVar8 + 2;
        pbVar11 = pbVar11 + 2;
      } while (bVar2 != 0);
      iVar4 = 0;
LAB_5f682227:
      if (iVar4 == 0) {
        local_20 = 0x65;
        local_1f = 0x6e;
        local_1e = 0xf2;
        BVar3 = WriteFile(param_1,&local_20,3,(LPDWORD)&param_2,(LPOVERLAPPED)0x0);
        if (BVar3 == 0) {
          return 0x8004e009;
        }
      }
      lpBuffer = param_3;
      lpNumberOfBytesWritten = &param_2;
      lpOverlapped = (LPOVERLAPPED)0x0;
      iVar4 = lstrlenA(param_3);
      BVar3 = WriteFile(param_1,lpBuffer,iVar4 + 1,(LPDWORD)lpNumberOfBytesWritten,lpOverlapped);
      if (BVar3 != 0) {
        return 0;
      }
    }
  }
  return 0x8004e009;
}


