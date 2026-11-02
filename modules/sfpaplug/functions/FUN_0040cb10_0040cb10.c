/* Module: sfpaplug.dll
   Function: FUN_0040cb10
   Address: 0040cb10
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_0040cb10(int param_1)

{
  short sVar1;
  short *psVar2;
  uint uVar3;
  uint uVar4;
  HGLOBAL pvVar5;
  LPVOID lpBuffer;
  BOOL BVar6;
  DWORD DVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  bool bVar11;
  undefined8 uVar12;
  DWORD local_40;
  uint local_3c;
  LONG local_38;
  int local_34;
  uint local_30 [2];
  uint local_28;
  uint local_24;
  uint local_20 [4];
  int local_10 [4];
  
  local_34 = 0;
  local_40 = 0;
  if (*(int *)(param_1 + 0x220) != 0) {
    return 0;
  }
  ((LPFILETIME)(param_1 + 0x218))->dwLowDateTime = 0;
  *(undefined4 *)(param_1 + 0x21c) = 0;
  GetFileTime(*(HANDLE *)(param_1 + 0x214),(LPFILETIME)0x0,(LPFILETIME)0x0,
              (LPFILETIME)(param_1 + 0x218));
  SetFilePointer(*(HANDLE *)(param_1 + 0x214),0,(PLONG)0x0,0);
  local_34 = FUN_0041bac0(*(HANDLE *)(param_1 + 0x214),(int *)local_30,local_10);
  if (local_34 < 0) {
    return -0x7ffb1f80;
  }
  iVar8 = 4;
  bVar11 = true;
  piVar9 = local_10;
  piVar10 = &DAT_0044eab8;
  do {
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    bVar11 = *piVar9 == *piVar10;
    piVar9 = piVar9 + 1;
    piVar10 = piVar10 + 1;
  } while (bVar11);
  if (!bVar11) {
    return -0x7ffb1ff5;
  }
  iVar8 = FUN_0041bba0(*(HANDLE *)(param_1 + 0x214),DAT_0044eac8,DAT_0044eacc,DAT_0044ead0,
                       DAT_0044ead4,local_20 + 2,local_30);
  if (iVar8 == 0) {
    uVar4 = local_20[2];
    if (local_20[2] < 0x13) {
      uVar4 = 0x12;
    }
    pvVar5 = GlobalAlloc(0x42,uVar4);
    lpBuffer = GlobalLock(pvVar5);
    *(LPVOID *)(param_1 + 0x220) = lpBuffer;
    if (lpBuffer != (LPVOID)0x0) {
      BVar6 = ReadFile(*(HANDLE *)(param_1 + 0x214),lpBuffer,local_20[2],&local_40,(LPOVERLAPPED)0x0
                      );
      if (BVar6 == 0) {
        local_40 = 0;
      }
      FUN_0041c520(*(short **)(param_1 + 0x220));
      sVar1 = **(short **)(param_1 + 0x220);
      if ((sVar1 == 1) || (sVar1 == 3)) {
        (*(short **)(param_1 + 0x220))[8] = 0;
      }
    }
    SetFilePointer(*(HANDLE *)(param_1 + 0x214),0,(PLONG)0x0,0);
    FUN_0041bac0(*(HANDLE *)(param_1 + 0x214),(int *)local_30,local_10);
    iVar8 = FUN_0041bba0(*(HANDLE *)(param_1 + 0x214),DAT_0044eae8,DAT_0044eaec,DAT_0044eaf0,
                         DAT_0044eaf4,&local_28,local_30);
    if (iVar8 != 0) {
      pvVar5 = GlobalHandle(*(LPCVOID *)(param_1 + 0x220));
      GlobalUnlock(pvVar5);
      pvVar5 = GlobalHandle(*(LPCVOID *)(param_1 + 0x220));
      GlobalFree(pvVar5);
      *(undefined4 *)(param_1 + 0x220) = 0;
      return -0x7ffb1ff8;
    }
    local_3c = 0;
    local_38 = 0;
    DVar7 = SetFilePointer(*(HANDLE *)(param_1 + 0x214),0,&local_38,1);
    uVar3 = local_24;
    uVar4 = local_28;
    psVar2 = *(short **)(param_1 + 0x220);
    *(DWORD *)(param_1 + 0x228) = DVar7;
    *(uint *)(param_1 + 0x250) = local_28;
    *(LONG *)(param_1 + 0x22c) = local_38;
    *(uint *)(param_1 + 0x254) = local_24;
    uVar12 = __alldiv(local_28,local_24,(uint)(ushort)psVar2[6],0);
    *(undefined8 *)(param_1 + 600) = uVar12;
    if ((*psVar2 == 1) || (*psVar2 == 3)) {
      uVar12 = __alldiv(uVar4,uVar3,(uint)(ushort)psVar2[6],0);
      local_24 = (uint)((ulonglong)uVar12 >> 0x20);
      *(int *)(param_1 + 600) = (int)uVar12;
    }
    else {
      local_20[0] = 0;
      local_20[1] = 0;
      local_3c = 0;
      SetFilePointer(*(HANDLE *)(param_1 + 0x214),0,(PLONG)0x0,0);
      FUN_0041bac0(*(HANDLE *)(param_1 + 0x214),(int *)local_30,local_10);
      iVar8 = FUN_0041bba0(*(HANDLE *)(param_1 + 0x214),DAT_0044ead8,DAT_0044eadc,DAT_0044eae0,
                           DAT_0044eae4,local_20,local_30);
      if (iVar8 == 0) {
        local_3c = local_20[0];
        ReadFile(*(HANDLE *)(param_1 + 0x214),&local_3c,4,&local_40,(LPOVERLAPPED)0x0);
        *(uint *)(param_1 + 600) = local_3c;
        *(undefined4 *)(param_1 + 0x25c) = 0;
        goto LAB_0040ce4b;
      }
      *(uint *)(param_1 + 600) = local_28;
    }
    *(uint *)(param_1 + 0x25c) = local_24;
  }
LAB_0040ce4b:
  if (local_40 == 0) {
    local_34 = -0x7ffb1ff8;
  }
  return local_34;
}


