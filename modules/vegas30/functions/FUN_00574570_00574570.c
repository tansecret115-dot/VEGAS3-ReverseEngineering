/* Module: vegas30.exe
   Function: FUN_00574570
   Address: 00574570
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00574570(int param_1)

{
  undefined4 *puVar1;
  LPCVOID pMem;
  int iVar2;
  HGLOBAL pvVar3;
  int iVar4;
  int *local_10;
  int local_c;
  undefined4 *local_8;
  undefined4 *local_4;
  
  local_c = param_1;
  iVar2 = FUN_00569ef0();
  if ((iVar2 != 0) &&
     (puVar1 = (undefined4 *)**(int **)(param_1 + 0x2b0), puVar1 != (undefined4 *)0x0)) {
    local_4 = puVar1;
    _SfList_CreateExZ_32(&local_10,4,0xffffffff,0xffffffff,0,0,0,0);
    iVar2 = FUN_00569960();
    if ((iVar2 == 0) || ((*(byte *)(iVar2 + 0x1c) & 1) != 0)) {
      iVar2 = 0;
      if (0 < (int)puVar1) {
        do {
          iVar4 = *(int *)(*(int *)(*(int *)(local_c + 0x2b0) + 8) + iVar2 * 4);
          if ((*(byte *)(iVar4 + 0x1c) & 1) != 0) {
            pvVar3 = GlobalAlloc(0x40,8);
            local_8 = GlobalLock(pvVar3);
            *local_8 = *(undefined4 *)(iVar4 + 8);
            local_8[1] = *(undefined4 *)(iVar4 + 0x224);
            _SfList_InsertList_16(local_10,0xffffffff,&local_8,1);
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < (int)local_4);
      }
    }
    else {
      pvVar3 = GlobalAlloc(0x40,8);
      local_4 = GlobalLock(pvVar3);
      *local_4 = *(undefined4 *)(iVar2 + 8);
      local_4[1] = *(undefined4 *)(iVar2 + 0x224);
      _SfList_InsertList_16(local_10,0xffffffff,&local_4,1);
    }
    FUN_005746d0(local_10);
    iVar4 = 0;
    iVar2 = *local_10;
    if (0 < iVar2) {
      do {
        pMem = *(LPCVOID *)(local_10[2] + iVar4 * 4);
        pvVar3 = GlobalHandle(pMem);
        GlobalUnlock(pvVar3);
        pvVar3 = GlobalHandle(pMem);
        GlobalFree(pvVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar2);
    }
    _SfList_Destroy_4(local_10);
    return 1;
  }
  return 1;
}


