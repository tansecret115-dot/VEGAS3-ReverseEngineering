/* Module: wavplug.dll
   Function: FUN_5f387470
   Address: 5f387470
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_5f387470(int param_1)

{
  short sVar1;
  uint uVar2;
  HGLOBAL pvVar3;
  LPVOID pvVar4;
  BOOL BVar5;
  DWORD DVar6;
  int local_20;
  DWORD local_1c;
  int local_18;
  undefined4 local_14;
  LONG local_10;
  int local_c;
  uint local_8;
  uint local_4;
  
  local_c = 0;
  local_1c = 0;
  if (*(int *)(param_1 + 0x230) == 0) {
    ((LPFILETIME)(param_1 + 0x224))->dwLowDateTime = 0;
    *(undefined4 *)(param_1 + 0x228) = 0;
    GetFileTime(*(HANDLE *)(param_1 + 0x214),(LPFILETIME)0x0,(LPFILETIME)0x0,
                (LPFILETIME)(param_1 + 0x224));
    SetFilePointer(*(HANDLE *)(param_1 + 0x214),0,(PLONG)0x0,0);
    local_c = FUN_5f3a5ae0(*(HANDLE *)(param_1 + 0x214),&local_20,&local_18);
    if (local_c < 0) {
      return -0x7ffb1f80;
    }
    if (local_18 != 0x45564157) {
      return -0x7ffb1ff5;
    }
    uVar2 = FUN_5f3a5b90(*(HANDLE *)(param_1 + 0x214),0x20746d66,&local_8,&local_20);
    if (uVar2 == 0) {
      uVar2 = local_8;
      if (local_8 < 0x13) {
        uVar2 = 0x12;
      }
      pvVar3 = GlobalAlloc(0x42,uVar2);
      pvVar4 = GlobalLock(pvVar3);
      *(LPVOID *)(param_1 + 0x230) = pvVar4;
      *(undefined2 *)((int)pvVar4 + 0x10) = 0;
      if (*(LPVOID *)(param_1 + 0x230) != (LPVOID)0x0) {
        BVar5 = ReadFile(*(HANDLE *)(param_1 + 0x214),*(LPVOID *)(param_1 + 0x230),local_8,&local_1c
                         ,(LPOVERLAPPED)0x0);
        if (BVar5 == 0) {
          local_1c = 0;
        }
        FUN_5f3a8230(*(short **)(param_1 + 0x230));
        sVar1 = **(short **)(param_1 + 0x230);
        if ((sVar1 == 1) || (sVar1 == 3)) {
          (*(short **)(param_1 + 0x230))[8] = 0;
        }
      }
      SetFilePointer(*(HANDLE *)(param_1 + 0x214),0,(PLONG)0x0,0);
      FUN_5f3a5ae0(*(HANDLE *)(param_1 + 0x214),&local_20,&local_18);
      uVar2 = FUN_5f3a5b90(*(HANDLE *)(param_1 + 0x214),0x61746164,&local_4,&local_20);
      if (uVar2 != 0) {
        pvVar3 = GlobalHandle(*(LPCVOID *)(param_1 + 0x230));
        GlobalUnlock(pvVar3);
        pvVar3 = GlobalHandle(*(LPCVOID *)(param_1 + 0x230));
        GlobalFree(pvVar3);
        *(undefined4 *)(param_1 + 0x230) = 0;
        return -0x7ffb1ff8;
      }
      local_14 = 0;
      local_10 = 0;
      DVar6 = SetFilePointer(*(HANDLE *)(param_1 + 0x214),0,&local_10,1);
      *(DWORD *)(param_1 + 0x238) = DVar6;
      *(uint *)(param_1 + 0x240) = local_4;
      *(LONG *)(param_1 + 0x23c) = local_10;
      *(undefined4 *)(param_1 + 0x244) = 0;
      sVar1 = **(short **)(param_1 + 0x230);
      if ((sVar1 == 1) || (sVar1 == 3)) {
        *(uint *)(param_1 + 0x248) = local_4 / (ushort)(*(short **)(param_1 + 0x230))[6];
      }
      else {
        local_14 = 0;
        SetFilePointer(*(HANDLE *)(param_1 + 0x214),0,(PLONG)0x0,0);
        FUN_5f3a5ae0(*(HANDLE *)(param_1 + 0x214),&local_20,&local_18);
        uVar2 = FUN_5f3a5b90(*(HANDLE *)(param_1 + 0x214),0x74636166,&local_14,&local_20);
        if (uVar2 == 0) {
          ReadFile(*(HANDLE *)(param_1 + 0x214),&local_14,4,&local_1c,(LPOVERLAPPED)0x0);
          *(undefined4 *)(param_1 + 0x248) = local_14;
        }
        else {
          *(uint *)(param_1 + 0x248) = local_4;
        }
      }
      *(undefined4 *)(param_1 + 0x24c) = 0;
    }
    if (local_1c == 0) {
      local_c = -0x7ffb1ff8;
    }
  }
  return local_c;
}


