/* Module: vegas30.exe
   Function: FUN_00529d60
   Address: 00529d60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00529d60(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  SIZE_T SVar5;
  undefined4 *puVar6;
  HGLOBAL pvVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int local_10;
  undefined4 *local_4;
  
  iVar1 = *(int *)(param_1 + 0x88);
  iVar2 = *(int *)(param_1 + 0x84);
  if (iVar1 != 0) {
    iVar3 = *(int *)(iVar2 + 4);
    while (iVar3 = iVar3 + -1, -1 < iVar3) {
      iVar4 = *(int *)(*(int *)(*(int *)(iVar2 + 8) + 8) + iVar3 * 4);
      if (*(LPCVOID *)(iVar4 + 0x118) != (LPCVOID)0x0) {
        pvVar7 = GlobalHandle(*(LPCVOID *)(iVar4 + 0x118));
        GlobalUnlock(pvVar7);
        pvVar7 = GlobalHandle(*(LPCVOID *)(iVar4 + 0x118));
        GlobalFree(pvVar7);
        *(undefined4 *)(iVar4 + 0x114) = 0;
        *(undefined4 *)(iVar4 + 0x118) = 0;
      }
      if (*(LPCVOID *)(iVar4 + 0x120) != (LPCVOID)0x0) {
        pvVar7 = GlobalHandle(*(LPCVOID *)(iVar4 + 0x120));
        GlobalUnlock(pvVar7);
        pvVar7 = GlobalHandle(*(LPCVOID *)(iVar4 + 0x120));
        GlobalFree(pvVar7);
        *(undefined4 *)(iVar4 + 0x11c) = 0;
        *(undefined4 *)(iVar4 + 0x120) = 0;
      }
      _SfList_DeleteList_16(*(undefined4 *)(iVar2 + 8),iVar3,1,1);
    }
    iVar3 = *(int *)(iVar1 + 4);
    *(int *)(iVar2 + 4) = iVar3;
    local_10 = 0;
    if (0 < iVar3) {
      do {
        _SfList_AllocItem_12(*(undefined4 *)(iVar2 + 8),0x124,&local_4);
        puVar6 = local_4;
        puVar12 = *(undefined4 **)(*(int *)(*(int *)(iVar1 + 8) + 8) + local_10 * 4);
        *local_4 = *puVar12;
        local_4[1] = puVar12[1];
        local_4[2] = puVar12[2];
        local_4[3] = puVar12[3];
        _mbscpy((uchar *)(local_4 + 4),(uchar *)(puVar12 + 4));
        SVar5 = puVar12[0x45];
        puVar6[0x45] = SVar5;
        if (puVar12[0x46] != 0) {
          pvVar7 = GlobalAlloc(0x40,SVar5);
          puVar8 = GlobalLock(pvVar7);
          puVar6[0x46] = puVar8;
          if (puVar8 == (undefined4 *)0x0) {
            _SfList_DeleteList_16(*(undefined4 *)(iVar2 + 8),0xffffffff,0xffffffff,0);
            return 0x8007000e;
          }
          uVar10 = puVar6[0x45];
          puVar11 = (undefined4 *)puVar12[0x46];
          for (uVar9 = uVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *puVar8 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar8 = puVar8 + 1;
          }
          for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined1 *)puVar8 = *(undefined1 *)puVar11;
            puVar11 = (undefined4 *)((int)puVar11 + 1);
            puVar8 = (undefined4 *)((int)puVar8 + 1);
          }
        }
        SVar5 = puVar12[0x47];
        puVar6[0x47] = SVar5;
        if (puVar12[0x48] != 0) {
          pvVar7 = GlobalAlloc(0x40,SVar5);
          puVar8 = GlobalLock(pvVar7);
          puVar6[0x48] = puVar8;
          if (puVar8 == (undefined4 *)0x0) {
            _SfList_DeleteList_16(*(undefined4 *)(iVar2 + 8),0xffffffff,0xffffffff,0);
            return 0x8007000e;
          }
          uVar10 = puVar6[0x47];
          puVar12 = (undefined4 *)puVar12[0x48];
          for (uVar9 = uVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *puVar8 = *puVar12;
            puVar12 = puVar12 + 1;
            puVar8 = puVar8 + 1;
          }
          for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined1 *)puVar8 = *(undefined1 *)puVar12;
            puVar12 = (undefined4 *)((int)puVar12 + 1);
            puVar8 = (undefined4 *)((int)puVar8 + 1);
          }
        }
        _SfList_InsertList_16(*(undefined4 *)(iVar2 + 8),local_10,0,0xffffffff);
        local_10 = local_10 + 1;
      } while (local_10 < *(int *)(iVar2 + 4));
    }
    *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar1 + 4);
    FUN_00526cc0(param_1);
  }
  return 0;
}


