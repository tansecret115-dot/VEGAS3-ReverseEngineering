/* Module: wavplug.dll
   Function: FUN_5f38cc80
   Address: 5f38cc80
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_5f38cc80(int param_1)

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
  if (*(int *)(param_1 + 0x230) != 0) {
    return 0;
  }
  ((LPFILETIME)(param_1 + 0x224))->dwLowDateTime = 0;
  *(undefined4 *)(param_1 + 0x228) = 0;
  GetFileTime(*(HANDLE *)(param_1 + 0x214),(LPFILETIME)0x0,(LPFILETIME)0x0,
              (LPFILETIME)(param_1 + 0x224));
  SetFilePointer(*(HANDLE *)(param_1 + 0x214),0,(PLONG)0x0,0);
  local_34 = FUN_5f3aa8a0(*(HANDLE *)(param_1 + 0x214),(int *)local_30,local_10);
  if (local_34 < 0) {
    return -0x7ffb1f80;
  }
  iVar8 = 4;
  bVar11 = true;
  piVar9 = local_10;
  piVar10 = &DAT_5f3cad10;
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
  iVar8 = FUN_5f3aa980(*(HANDLE *)(param_1 + 0x214),DAT_5f3cad20,DAT_5f3cad24,DAT_5f3cad28,
                       DAT_5f3cad2c,local_20 + 2,local_30);
  if (iVar8 == 0) {
    uVar4 = local_20[2];
    if (local_20[2] < 0x13) {
      uVar4 = 0x12;
    }
    pvVar5 = GlobalAlloc(0x42,uVar4);
    lpBuffer = GlobalLock(pvVar5);
    *(LPVOID *)(param_1 + 0x230) = lpBuffer;
    if (lpBuffer != (LPVOID)0x0) {
      BVar6 = ReadFile(*(HANDLE *)(param_1 + 0x214),lpBuffer,local_20[2],&local_40,(LPOVERLAPPED)0x0
                      );
      if (BVar6 == 0) {
        local_40 = 0;
      }
      FUN_5f3a8230(*(short **)(param_1 + 0x230));
      sVar1 = **(short **)(param_1 + 0x230);
      if ((sVar1 == 1) || (sVar1 == 3)) {
        (*(short **)(param_1 + 0x230))[8] = 0;
      }
    }
    SetFilePointer(*(HANDLE *)(param_1 + 0x214),0,(PLONG)0x0,0);
    FUN_5f3aa8a0(*(HANDLE *)(param_1 + 0x214),(int *)local_30,local_10);
    iVar8 = FUN_5f3aa980(*(HANDLE *)(param_1 + 0x214),DAT_5f3cad40,DAT_5f3cad44,DAT_5f3cad48,
                         DAT_5f3cad4c,&local_28,local_30);
    if (iVar8 != 0) {
      pvVar5 = GlobalHandle(*(LPCVOID *)(param_1 + 0x230));
      GlobalUnlock(pvVar5);
      pvVar5 = GlobalHandle(*(LPCVOID *)(param_1 + 0x230));
      GlobalFree(pvVar5);
      *(undefined4 *)(param_1 + 0x230) = 0;
      return -0x7ffb1ff8;
    }
    local_3c = 0;
    local_38 = 0;
    DVar7 = SetFilePointer(*(HANDLE *)(param_1 + 0x214),0,&local_38,1);
    uVar3 = local_24;
    uVar4 = local_28;
    psVar2 = *(short **)(param_1 + 0x230);
    *(DWORD *)(param_1 + 0x238) = DVar7;
    *(uint *)(param_1 + 0x240) = local_28;
    *(LONG *)(param_1 + 0x23c) = local_38;
    *(uint *)(param_1 + 0x244) = local_24;
    uVar12 = __alldiv(local_28,local_24,(uint)(ushort)psVar2[6],0);
    *(undefined8 *)(param_1 + 0x248) = uVar12;
    if ((*psVar2 == 1) || (*psVar2 == 3)) {
      uVar12 = __alldiv(uVar4,uVar3,(uint)(ushort)psVar2[6],0);
      local_24 = (uint)((ulonglong)uVar12 >> 0x20);
      *(int *)(param_1 + 0x248) = (int)uVar12;
    }
    else {
      local_20[0] = 0;
      local_20[1] = 0;
      local_3c = 0;
      SetFilePointer(*(HANDLE *)(param_1 + 0x214),0,(PLONG)0x0,0);
      FUN_5f3aa8a0(*(HANDLE *)(param_1 + 0x214),(int *)local_30,local_10);
      iVar8 = FUN_5f3aa980(*(HANDLE *)(param_1 + 0x214),DAT_5f3cad30,DAT_5f3cad34,DAT_5f3cad38,
                           DAT_5f3cad3c,local_20,local_30);
      if (iVar8 == 0) {
        local_3c = local_20[0];
        ReadFile(*(HANDLE *)(param_1 + 0x214),&local_3c,4,&local_40,(LPOVERLAPPED)0x0);
        *(uint *)(param_1 + 0x248) = local_3c;
        *(undefined4 *)(param_1 + 0x24c) = 0;
        goto LAB_5f38cfbb;
      }
      *(uint *)(param_1 + 0x248) = local_28;
    }
    *(uint *)(param_1 + 0x24c) = local_24;
  }
LAB_5f38cfbb:
  if (local_40 == 0) {
    local_34 = -0x7ffb1ff8;
  }
  return local_34;
}


