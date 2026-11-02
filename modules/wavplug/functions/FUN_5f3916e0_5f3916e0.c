/* Module: wavplug.dll
   Function: FUN_5f3916e0
   Address: 5f3916e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_5f3916e0(int param_1)

{
  uint uVar1;
  HGLOBAL pvVar2;
  LPVOID pvVar3;
  BOOL BVar4;
  DWORD DVar5;
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
    if (local_18 != 0x20414653) {
      return -0x7ffb1ff5;
    }
    uVar1 = FUN_5f3a5b90(*(HANDLE *)(param_1 + 0x214),0x20746d66,&local_8,&local_20);
    if (uVar1 == 0) {
      uVar1 = local_8;
      if (local_8 < 0x13) {
        uVar1 = 0x12;
      }
      pvVar2 = GlobalAlloc(0x42,uVar1);
      pvVar3 = GlobalLock(pvVar2);
      *(LPVOID *)(param_1 + 0x230) = pvVar3;
      *(undefined2 *)((int)pvVar3 + 0x10) = 0;
      if (*(LPVOID *)(param_1 + 0x230) != (LPVOID)0x0) {
        BVar4 = ReadFile(*(HANDLE *)(param_1 + 0x214),*(LPVOID *)(param_1 + 0x230),local_8,&local_1c
                         ,(LPOVERLAPPED)0x0);
        if (BVar4 == 0) {
          local_1c = 0;
        }
        FUN_5f3a8230(*(short **)(param_1 + 0x230));
        if (**(short **)(param_1 + 0x230) == 1) {
          (*(short **)(param_1 + 0x230))[8] = 0;
        }
      }
      SetFilePointer(*(HANDLE *)(param_1 + 0x214),0,(PLONG)0x0,0);
      FUN_5f3a5ae0(*(HANDLE *)(param_1 + 0x214),&local_20,&local_18);
      uVar1 = FUN_5f3a5b90(*(HANDLE *)(param_1 + 0x214),0x61746164,&local_4,&local_20);
      if (uVar1 != 0) {
        pvVar2 = GlobalHandle(*(LPCVOID *)(param_1 + 0x230));
        GlobalUnlock(pvVar2);
        pvVar2 = GlobalHandle(*(LPCVOID *)(param_1 + 0x230));
        GlobalFree(pvVar2);
        *(undefined4 *)(param_1 + 0x230) = 0;
        return -0x7ffb1ff8;
      }
      local_14 = 0;
      local_10 = 0;
      DVar5 = SetFilePointer(*(HANDLE *)(param_1 + 0x214),0,&local_10,1);
      *(DWORD *)(param_1 + 0x238) = DVar5;
      *(uint *)(param_1 + 0x240) = local_4;
      *(LONG *)(param_1 + 0x23c) = local_10;
      *(undefined4 *)(param_1 + 0x244) = 0;
      if (**(short **)(param_1 + 0x230) == 1) {
        *(uint *)(param_1 + 0x248) = local_4 / (ushort)(*(short **)(param_1 + 0x230))[6];
      }
      else {
        local_14 = 0;
        SetFilePointer(*(HANDLE *)(param_1 + 0x214),0,(PLONG)0x0,0);
        FUN_5f3a5ae0(*(HANDLE *)(param_1 + 0x214),&local_20,&local_18);
        uVar1 = FUN_5f3a5b90(*(HANDLE *)(param_1 + 0x214),0x74636166,&local_14,&local_20);
        if (uVar1 == 0) {
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


