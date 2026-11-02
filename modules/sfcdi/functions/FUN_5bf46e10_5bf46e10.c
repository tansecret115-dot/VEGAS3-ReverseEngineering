/* Module: sfcdi.dll
   Function: FUN_5bf46e10
   Address: 5bf46e10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf46e10(DWORD param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  DWORD DVar2;
  uint uVar3;
  DWORD DVar4;
  BOOL BVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  DVar2 = param_1;
  if (param_1 == 0xffffffff) {
    return 0x80070057;
  }
  do {
    iVar1 = *(int *)(DVar2 + 0xb0);
    uVar6 = *(uint *)(DVar2 + 0x44 + iVar1 * 4);
    uVar3 = param_3;
    if (uVar6 < param_3) {
      uVar3 = uVar6;
    }
    *(uint *)(DVar2 + 0x44 + iVar1 * 4) = uVar6 - uVar3;
    puVar8 = *(undefined4 **)(DVar2 + 0xac);
    puVar9 = param_2;
    for (uVar6 = uVar3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    param_3 = param_3 - uVar3;
    for (uVar6 = uVar3 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    param_2 = (undefined4 *)((int)param_2 + uVar3);
    *(uint *)(DVar2 + 0xac) = *(int *)(DVar2 + 0xac) + uVar3;
    if (*(int *)(DVar2 + 0x44 + iVar1 * 4) == 0) {
      iVar7 = *(int *)(DVar2 + 0xb0) + 1;
      *(int *)(DVar2 + 0xb0) = iVar7;
      if (*(int *)(DVar2 + 8) == iVar7) {
        *(undefined4 *)(DVar2 + 0xb0) = 0;
      }
      DVar4 = WaitForSingleObject(*(HANDLE *)(DVar2 + (*(int *)(DVar2 + 0xb0) + 5) * 0x14),
                                  0xffffffff);
      if (DVar4 == 0xffffffff) {
        GetLastError();
        return 0x8004e008;
      }
      BVar5 = GetOverlappedResult(*(HANDLE *)(DVar2 + 4),
                                  (LPOVERLAPPED)(DVar2 + 0x54 + *(int *)(DVar2 + 0xb0) * 0x14),
                                  &param_1,0);
      if (BVar5 == 0) {
        return 0x8004e008;
      }
      *(DWORD *)(DVar2 + 0x44 + *(int *)(DVar2 + 0xb0) * 4) = param_1;
      *(undefined4 *)(DVar2 + 0xac) = *(undefined4 *)(DVar2 + 0x34 + *(int *)(DVar2 + 0xb0) * 4);
      if (*(uint *)(DVar2 + 0xa4) < *(uint *)(DVar2 + 0xa8)) {
        iVar7 = DVar2 + iVar1 * 0x14;
        ((LPOVERLAPPED)(iVar7 + 0x54))->Internal = 0;
        *(undefined4 *)(iVar7 + 0x58) = 0;
        *(undefined4 *)(iVar7 + 0x5c) = 0;
        *(undefined4 *)(iVar7 + 0x60) = 0;
        *(undefined4 *)(iVar7 + 100) = 0;
        *(undefined4 *)(iVar7 + 0x5c) = *(undefined4 *)(DVar2 + 0xa4);
        *(undefined4 *)(DVar2 + (iVar1 * 5 + 0x19) * 4) = *(undefined4 *)(DVar2 + 0x14 + iVar1 * 4);
        ResetEvent(*(HANDLE *)(DVar2 + 0x14 + iVar1 * 4));
        BVar5 = ReadFile(*(HANDLE *)(DVar2 + 4),*(LPVOID *)(DVar2 + 0x34 + iVar1 * 4),
                         *(DWORD *)(DVar2 + 0x10),(LPDWORD)0x0,(LPOVERLAPPED)(iVar7 + 0x54));
        if (((BVar5 == 0) && (DVar4 = GetLastError(), DVar4 != 0x26)) && (DVar4 != 0x3e5)) {
          return 0x8004e008;
        }
        *(int *)(DVar2 + 0xa4) = *(int *)(DVar2 + 0xa4) + *(int *)(DVar2 + 0x10);
      }
    }
    if (param_3 == 0) {
      return 0;
    }
  } while( true );
}


