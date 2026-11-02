/* Module: vegas30.exe
   Function: FUN_0043e260
   Address: 0043e260
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0043e260(void)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  uint *puVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  int local_14c;
  uint local_13c [8];
  uint local_11c;
  undefined1 local_104 [260];
  
  uVar5 = DAT_0064b138;
  uVar11 = FUN_005b8d80(DAT_0064b138);
  FUN_004e9f70(uVar5,0x251,0);
  FUN_004ead60(uVar5,0,9);
  puVar2 = (uint *)FUN_005b8970(uVar5);
  uVar1 = *puVar2;
  iVar3 = FUN_005b89b0(uVar5);
  FUN_005b89e0(iVar3);
  iVar8 = 0;
  uVar6 = 0;
  if (uVar1 != 0) {
    local_14c = 0;
    do {
      if (iVar8 < 0) break;
      uVar4 = puVar2[2];
      puVar7 = *(uint **)(uVar4 + uVar6 * 4);
      if ((puVar7[8] & 1) == 0) {
        puVar9 = local_13c;
        for (iVar8 = 0xe; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar9 = 0;
          puVar9 = puVar9 + 1;
        }
        if (uVar6 == 0) {
          local_13c[0] = 20000000;
          local_13c[1] = 0;
        }
        else {
          local_13c[0] = *puVar7;
          local_13c[1] = puVar7[1];
        }
        if (uVar6 < uVar1 - 1) {
          puVar9 = *(uint **)(uVar4 + 4 + uVar6 * 4);
          local_13c[2] = *puVar9;
          bVar10 = local_13c[2] < *puVar7;
          local_13c[2] = local_13c[2] - *puVar7;
          uVar4 = puVar9[1];
        }
        else {
          bVar10 = (uint)uVar11 < *puVar7;
          local_13c[2] = (uint)uVar11 - *puVar7;
          uVar4 = (uint)((ulonglong)uVar11 >> 0x20);
        }
        local_13c[3] = (uVar4 - puVar7[1]) - (uint)bVar10;
        local_11c = local_11c | 1;
        puVar7 = puVar7 + 0xc;
        iVar8 = lstrlenA((LPCSTR)puVar7);
        if (iVar8 == 0) {
          local_104[0] = 0;
          puVar7 = (uint *)local_104;
        }
        iVar8 = lstrlenA((LPCSTR)puVar7);
        iVar8 = _SfList_AllocAndInsertItem_20(iVar3,local_13c,iVar8 + 0x39,0xffffffff,0);
        if (-1 < iVar8) {
          _mbscpy((uchar *)(*(int *)(*(int *)(iVar3 + 8) + local_14c) + 0x30),(uchar *)puVar7);
          local_14c = local_14c + 4;
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar1);
  }
  FUN_004eb2b0(uVar5);
  FUN_004ea040(uVar5,0);
  FUN_0048f940(uVar5,0,7);
  if (DAT_00647630 != 0) {
    uVar12 = 2;
    uVar5 = FUN_005b89b0(uVar5);
    FUN_004c3470(DAT_00647630,uVar5,uVar12);
  }
  return;
}


