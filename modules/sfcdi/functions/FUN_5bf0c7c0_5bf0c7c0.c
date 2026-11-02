/* Module: sfcdi.dll
   Function: FUN_5bf0c7c0
   Address: 5bf0c7c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf0c7c0(byte *param_1,byte *param_2,uint param_3)

{
  byte *pbVar1;
  byte bVar2;
  DWORD DVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined4 *puVar10;
  
  pbVar1 = param_2;
  if (param_2[0x50] == 0) {
    bVar2 = 0;
  }
  else {
    if (param_2[0x50] != 1) {
      return 0x80070057;
    }
    bVar2 = 1;
  }
  param_1[0x28] = 0x2c;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = *param_2;
  param_1[0x2d] = 0;
  param_1[0x2e] = (byte)param_3;
  param_1[0x2f] = 0x34;
  param_1[0x30] = bVar2;
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x4c);
  iVar6 = *(int *)(param_2 + 0x54);
  puVar10 = *(undefined4 **)(param_1 + 0x14);
  param_1[0x40] = 0x30;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(uint *)(param_1 + 0x38) = (iVar6 + 999U) / 1000;
  *(undefined4 **)(param_1 + 0x3c) = puVar10;
  if (puVar10 != *(undefined4 **)(param_2 + 0x48)) {
    uVar5 = *(uint *)(param_2 + 0x4c);
    puVar7 = *(undefined4 **)(param_2 + 0x48);
    for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar10 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar10 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
  }
  pbVar9 = param_1 + 0x44;
  pbVar9[0] = 0;
  pbVar9[1] = 0;
  pbVar9[2] = 0;
  pbVar9[3] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  pbVar8 = param_2 + 8;
  for (uVar5 = param_3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pbVar9 = *(undefined4 *)pbVar8;
    pbVar8 = pbVar8 + 4;
    pbVar9 = pbVar9 + 4;
  }
  for (uVar5 = param_3 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pbVar9 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    pbVar9 = pbVar9 + 1;
  }
  if ((*param_1 & 2) == 0) {
    puVar10 = *(undefined4 **)(param_1 + 0x18);
    param_1[0x3c] = 100;
    param_1[0x3d] = 0;
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    pbVar9 = param_1 + 0x28;
    for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar10 = *(undefined4 *)pbVar9;
      pbVar9 = pbVar9 + 4;
      puVar10 = puVar10 + 1;
    }
    param_3 = DeviceIoControl(*(HANDLE *)(param_1 + 0x1c),0x4d004,*(LPVOID *)(param_1 + 0x18),
                              *(int *)(param_1 + 0x34) + 100U,*(LPVOID *)(param_1 + 0x18),
                              *(int *)(param_1 + 0x34) + 100U,(LPDWORD)&param_2,(LPOVERLAPPED)0x0);
    puVar10 = *(undefined4 **)(param_1 + 0x18);
    pbVar9 = param_1 + 0x28;
    for (iVar6 = 0x19; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined4 *)pbVar9 = *puVar10;
      puVar10 = puVar10 + 1;
      pbVar9 = pbVar9 + 4;
    }
  }
  else {
    param_3 = DeviceIoControl(*(HANDLE *)(param_1 + 0x1c),0x4d014,param_1 + 0x28,100,param_1 + 0x28,
                              100,(LPDWORD)&param_2,(LPOVERLAPPED)0x0);
  }
  if (param_3 == 0) {
    DVar3 = GetLastError();
    *(DWORD *)(param_1 + 4) = DVar3;
    if (DVar3 == 0x15) {
      param_1[0x5a] = param_1[0x5a] & 0xf2 | 2;
      pbVar1[0x58] = 2;
      pbVar1[0x59] = 2;
      pbVar1[0x5a] = 2;
      pbVar1[0x5b] = 0xff;
    }
    else {
      *(uint *)(pbVar1 + 0x58) = (param_1[0x2a] | 0xffffff00) << 0x10;
    }
  }
  else {
    bVar2 = param_1[0x2a];
    *(uint *)(pbVar1 + 0x58) = (uint)CONCAT21(CONCAT11(bVar2,bVar2),bVar2);
  }
  *(undefined4 *)(pbVar1 + 0x14) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(pbVar1 + 0x18) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(pbVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(pbVar1 + 0x20) = *(undefined4 *)(param_1 + 100);
  *(undefined2 *)(pbVar1 + 0x24) = *(undefined2 *)(param_1 + 0x68);
  pbVar9 = param_1 + 0x6a;
  pbVar8 = pbVar1 + 0x26;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)pbVar8 = *(undefined4 *)pbVar9;
    pbVar9 = pbVar9 + 4;
    pbVar8 = pbVar8 + 4;
  }
  if (param_3 != 0) {
    if (*(undefined4 **)(param_1 + 0x14) != *(undefined4 **)(pbVar1 + 0x48)) {
      uVar5 = *(uint *)(pbVar1 + 0x4c);
      puVar10 = *(undefined4 **)(param_1 + 0x14);
      puVar7 = *(undefined4 **)(pbVar1 + 0x48);
      for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar7 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar10;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
    }
  }
  if (((*(int *)(pbVar1 + 0x58) == 0) || (*(int *)(pbVar1 + 0x58) == 0x121212)) && (param_3 != 0)) {
    return 0;
  }
  return 0x80004005;
}


