/* Module: vegas30.exe
   Function: FUN_005d40e0
   Address: 005d40e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005d40e0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  bool bVar8;
  bool bVar9;
  
  puVar3 = *(undefined4 **)(param_1 + 0x230);
  puVar3[0x204] = 0;
  if (*(int *)(param_1 + 0xd38) != 0) {
    *(undefined4 *)(param_1 + 0xd38) = 0;
    iVar1 = FUN_005e2270((undefined4 *)(param_1 + 0x23c),puVar3);
    if (iVar1 != 0) {
      puVar4 = (undefined4 *)(param_1 + 0x23c);
      puVar6 = puVar3;
      for (iVar1 = 0x159; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar6 = puVar6 + 1;
      }
      *(undefined4 *)(param_1 + 0xd4c) = 0;
      *(undefined4 *)(param_1 + 0xd50) = 1;
    }
    if (*(int *)(param_1 + 0xd04) != puVar3[0x15b]) {
      puVar3[0x15b] = *(int *)(param_1 + 0xd04);
      *(undefined4 *)(param_1 + 0xd4c) = 0;
      *(undefined4 *)(param_1 + 0xd50) = 1;
    }
    iVar1 = lstrcmpA((LPCSTR)(param_1 + 0x24),(LPCSTR)(puVar3 + 0x166));
    if (iVar1 != 0) {
      _mbscpy((uchar *)(puVar3 + 0x166),(uchar *)(param_1 + 0x24));
      puVar3[0x1a7] = 1;
    }
    return 1;
  }
  if (*(int *)(param_1 + 0xd3c) != 0) {
    *(undefined4 *)(param_1 + 0xd3c) = 0;
    puVar3[0x1ea] = *(undefined4 *)(param_1 + 0xd60);
    puVar3[0x1eb] = *(undefined4 *)(param_1 + 0xd64);
    iVar1 = *(int *)(param_1 + 0xd68);
    puVar3[0x1e9] = iVar1;
    if (iVar1 != 0) {
      puVar3[0x15e] = *(undefined4 *)(param_1 + 0xd60);
      puVar3[0x15f] = *(undefined4 *)(param_1 + 0xd64);
    }
    puVar4 = (undefined4 *)(param_1 + 0xd70);
    puVar6 = puVar3 + 0x1ec;
    for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    iVar1 = lstrcmpA((LPCSTR)(param_1 + 0x128),(LPCSTR)(puVar3 + 0x1a8));
    if (iVar1 != 0) {
      _mbscpy((uchar *)(puVar3 + 0x1a8),(uchar *)(param_1 + 0x128));
    }
    *(undefined4 *)(param_1 + 0xd4c) = 0;
    *(undefined4 *)(param_1 + 0xd50) = 1;
    return 1;
  }
  if (*(int *)(param_1 + 0xd40) == 0) {
    if (*(int *)(param_1 + 0xd44) == 0) {
      return 0;
    }
    puVar3 = puVar3 + 0x159;
    *(undefined4 *)(param_1 + 0xd44) = 0;
    iVar1 = _SfSummary_Compare_8(puVar3,param_1 + 0x234);
    if (iVar1 == 0) {
      _SfSummary_Free_4(puVar3);
      _SfSummary_Copy_8(puVar3,param_1 + 0x234);
      *(undefined4 *)(param_1 + 0xd4c) = 0;
      *(undefined4 *)(param_1 + 0xd50) = 1;
    }
    return 1;
  }
  *(undefined4 *)(param_1 + 0xd40) = 0;
  iVar1 = 0x28;
  bVar8 = false;
  iVar2 = 0;
  bVar9 = true;
  pbVar5 = (byte *)(param_1 + 0xd08);
  pbVar7 = (byte *)(puVar3 + 0x15c);
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar8 = *pbVar5 < *pbVar7;
    bVar9 = *pbVar5 == *pbVar7;
    pbVar5 = pbVar5 + 1;
    pbVar7 = pbVar7 + 1;
  } while (bVar9);
  if (!bVar9) {
    iVar2 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
  }
  if (iVar2 != 0) {
    pbVar5 = (byte *)(param_1 + 0xd08);
    pbVar7 = (byte *)(puVar3 + 0x15c);
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)pbVar7 = *(undefined4 *)pbVar5;
      pbVar5 = pbVar5 + 4;
      pbVar7 = pbVar7 + 4;
    }
    *(undefined4 *)(param_1 + 0xd4c) = 0;
    *(undefined4 *)(param_1 + 0xd50) = 1;
  }
  return 1;
}


