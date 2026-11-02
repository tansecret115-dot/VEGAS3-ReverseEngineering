/* Module: sfpaplug.dll
   Function: FUN_00406470
   Address: 00406470
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_00406470(int param_1)

{
  short sVar1;
  uint uVar2;
  long lVar3;
  HGLOBAL pvVar4;
  LPVOID pvVar5;
  BOOL BVar6;
  DWORD DVar7;
  ulong local_28;
  DWORD local_24;
  int local_20;
  ulong local_1c;
  LONG local_18;
  ulong local_14;
  int local_10;
  ulong local_c [3];
  
  local_10 = 0;
  local_24 = 0;
  if (*(int *)(param_1 + 0x220) != 0) {
    return 0;
  }
  ((LPFILETIME)(param_1 + 0x218))->dwLowDateTime = 0;
  *(undefined4 *)(param_1 + 0x21c) = 0;
  GetFileTime(*(HANDLE *)(param_1 + 0x214),(LPFILETIME)0x0,(LPFILETIME)0x0,
              (LPFILETIME)(param_1 + 0x218));
  local_c[1] = 0;
  local_c[2] = 0;
  SetFilePointer(*(HANDLE *)(param_1 + 0x214),0,(PLONG)(local_c + 2),0);
  local_10 = FUN_004253f0(*(HANDLE *)(param_1 + 0x214),(int *)&local_28,&local_20);
  if (local_10 < 0) {
    return -0x7ffb1f80;
  }
  if (local_20 != 0x45564157) {
    return -0x7ffb1ff5;
  }
  lVar3 = riffzz_FindChunkHeader(*(void **)(param_1 + 0x214),0x20746d66,local_c,&local_28);
  if (lVar3 != 0) goto LAB_0040681a;
  pvVar4 = GlobalAlloc(0x42,0x12);
  pvVar5 = GlobalLock(pvVar4);
  *(LPVOID *)(param_1 + 0x220) = pvVar5;
  *(undefined2 *)((int)pvVar5 + 0x10) = 0;
  *(ulong *)(param_1 + 0x240) = local_28;
  *(undefined4 *)(param_1 + 0x244) = 0;
  if (*(LPVOID *)(param_1 + 0x220) != (LPVOID)0x0) {
    BVar6 = ReadFile(*(HANDLE *)(param_1 + 0x214),*(LPVOID *)(param_1 + 0x220),0x12,&local_24,
                     (LPOVERLAPPED)0x0);
    if (BVar6 == 0) {
      local_24 = 0;
    }
    BVar6 = ReadFile(*(HANDLE *)(param_1 + 0x214),(uint *)(param_1 + 0x250),0x20,&local_24,
                     (LPOVERLAPPED)0x0);
    if (BVar6 == 0) {
      local_24 = 0;
    }
    uVar2 = *(uint *)(param_1 + 0x250);
    *(undefined4 *)(param_1 + 0x240) = *(undefined4 *)(param_1 + 600);
    *(undefined4 *)(param_1 + 0x244) = *(undefined4 *)(param_1 + 0x25c);
    if (uVar2 < 4) {
      return -0x7ffb1ff5;
    }
    if (100 < uVar2) {
      return -0x7ffb1ff5;
    }
    if (*(ushort *)(param_1 + 0x264) < 10) {
      return -0x7ffb1ff5;
    }
    if (65000 < *(ushort *)(param_1 + 0x264)) {
      return -0x7ffb1ff5;
    }
    if (*(ushort *)(param_1 + 0x266) == 0) {
      return -0x7ffb1ff5;
    }
    if (5000 < *(ushort *)(param_1 + 0x266)) {
      return -0x7ffb1ff5;
    }
    **(undefined2 **)(param_1 + 0x220) = 1;
    sVar1 = **(short **)(param_1 + 0x220);
    if ((sVar1 == 1) || (sVar1 == 3)) {
      (*(short **)(param_1 + 0x220))[8] = 0;
    }
  }
  local_c[1] = 0;
  local_c[2] = 0;
  SetFilePointer(*(HANDLE *)(param_1 + 0x214),0,(PLONG)(local_c + 2),0);
  FUN_004253f0(*(HANDLE *)(param_1 + 0x214),(int *)&local_28,&local_20);
  lVar3 = riffzz_FindChunkHeader(*(void **)(param_1 + 0x214),0x61746164,&local_14,&local_28);
  if (lVar3 != 0) {
    if (*(LPCVOID *)(param_1 + 0x220) != (LPCVOID)0x0) {
      pvVar4 = GlobalHandle(*(LPCVOID *)(param_1 + 0x220));
      GlobalUnlock(pvVar4);
      pvVar4 = GlobalHandle(*(LPCVOID *)(param_1 + 0x220));
      GlobalFree(pvVar4);
    }
    *(undefined4 *)(param_1 + 0x220) = 0;
    return -0x7ffb1ff8;
  }
  local_1c = 0;
  local_18 = 0;
  DVar7 = SetFilePointer(*(HANDLE *)(param_1 + 0x214),0,&local_18,1);
  *(DWORD *)(param_1 + 0x228) = DVar7;
  *(ulong *)(param_1 + 0x238) = local_14;
  *(LONG *)(param_1 + 0x22c) = local_18;
  *(undefined4 *)(param_1 + 0x23c) = 0;
  if ((**(short **)(param_1 + 0x220) == 1) || (**(short **)(param_1 + 0x220) == 3)) {
    local_1c = 0;
    local_c[1] = 0;
    local_c[2] = 0;
    SetFilePointer(*(HANDLE *)(param_1 + 0x214),0,(PLONG)(local_c + 2),0);
    FUN_004253f0(*(HANDLE *)(param_1 + 0x214),(int *)&local_28,&local_20);
    lVar3 = riffzz_FindChunkHeader(*(void **)(param_1 + 0x214),0x616c6673,&local_1c,&local_28);
    if (lVar3 == 0) {
      local_c[1] = 0;
      local_c[2] = 0;
      DVar7 = SetFilePointer(*(HANDLE *)(param_1 + 0x214),0,(PLONG)(local_c + 2),1);
      *(DWORD *)(param_1 + 0x230) = DVar7;
      *(ulong *)(param_1 + 0x234) = local_c[2];
      goto LAB_0040681a;
    }
LAB_0040680a:
    *(ulong *)(param_1 + 0x240) = local_14;
  }
  else {
    local_1c = 0;
    local_c[1] = 0;
    local_c[2] = 0;
    SetFilePointer(*(HANDLE *)(param_1 + 0x214),0,(PLONG)(local_c + 2),0);
    FUN_004253f0(*(HANDLE *)(param_1 + 0x214),(int *)&local_28,&local_20);
    lVar3 = riffzz_FindChunkHeader(*(void **)(param_1 + 0x214),0x74636166,&local_1c,&local_28);
    if (lVar3 != 0) goto LAB_0040680a;
    ReadFile(*(HANDLE *)(param_1 + 0x214),&local_1c,4,&local_24,(LPOVERLAPPED)0x0);
    *(ulong *)(param_1 + 0x240) = local_1c;
  }
  *(undefined4 *)(param_1 + 0x244) = 0;
LAB_0040681a:
  if (local_24 == 0) {
    local_10 = -0x7ffb1ff8;
  }
  return local_10;
}


